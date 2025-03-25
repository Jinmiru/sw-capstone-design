// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BlendSpacePlayerLibrary.h"
#include "Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpacePlayerLibrary() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UBlendSpacePlayerLibrary();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UBlendSpacePlayerLibrary_NoRegister();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSpacePlayerReference();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FBlendSpacePlayerReference
static_assert(std::is_polymorphic<FBlendSpacePlayerReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FBlendSpacePlayerReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendSpacePlayerReference;
class UScriptStruct* FBlendSpacePlayerReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSpacePlayerReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendSpacePlayerReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSpacePlayerReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("BlendSpacePlayerReference"));
	}
	return Z_Registration_Info_UScriptStruct_BlendSpacePlayerReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FBlendSpacePlayerReference>()
{
	return FBlendSpacePlayerReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlendSpacePlayerReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSpacePlayerReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSpacePlayerReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"BlendSpacePlayerReference",
	nullptr,
	0,
	sizeof(FBlendSpacePlayerReference),
	alignof(FBlendSpacePlayerReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpacePlayerReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlendSpacePlayerReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlendSpacePlayerReference()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSpacePlayerReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendSpacePlayerReference.InnerSingleton, Z_Construct_UScriptStruct_FBlendSpacePlayerReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlendSpacePlayerReference.InnerSingleton;
}
// End ScriptStruct FBlendSpacePlayerReference

// Begin Class UBlendSpacePlayerLibrary Function ConvertToBlendSpacePlayer
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics
{
	struct BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayer_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FBlendSpacePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Get a blend space player context from an anim node context. */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Get a blend space player context from an anim node context." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayer_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayer_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(0, nullptr) }; // 3905465451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "ConvertToBlendSpacePlayer", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execConvertToBlendSpacePlayer)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlendSpacePlayerReference*)Z_Param__Result=UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayer(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function ConvertToBlendSpacePlayer

// Begin Class UBlendSpacePlayerLibrary Function ConvertToBlendSpacePlayerPure
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics
{
	struct BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayerPure_Parms
	{
		FAnimNodeReference Node;
		FBlendSpacePlayerReference BlendSpacePlayer;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Get a blend space player context from an anim node context (pure). */" },
		{ "DisplayName", "Convert to Blend Space Player" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Get a blend space player context from an anim node context (pure)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayerPure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayerPure_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(0, nullptr) }; // 3905465451
void Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::NewProp_Result_SetBit(void* Obj)
{
	((BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayerPure_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayerPure_Parms), &Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "ConvertToBlendSpacePlayerPure", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayerPure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::BlendSpacePlayerLibrary_eventConvertToBlendSpacePlayerPure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execConvertToBlendSpacePlayerPure)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_GET_UBOOL_REF(Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayerPure(Z_Param_Out_Node,Z_Param_Out_BlendSpacePlayer,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function ConvertToBlendSpacePlayerPure

// Begin Class UBlendSpacePlayerLibrary Function GetBlendSpace
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics
{
	struct BlendSpacePlayerLibrary_eventGetBlendSpace_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		UBlendSpace* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Get the current BlendSpace of the blend space player. */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Get the current BlendSpace of the blend space player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventGetBlendSpace_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventGetBlendSpace_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "GetBlendSpace", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::BlendSpacePlayerLibrary_eventGetBlendSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::BlendSpacePlayerLibrary_eventGetBlendSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execGetBlendSpace)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBlendSpace**)Z_Param__Result=UBlendSpacePlayerLibrary::GetBlendSpace(Z_Param_Out_BlendSpacePlayer);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function GetBlendSpace

// Begin Class UBlendSpacePlayerLibrary Function GetLoop
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics
{
	struct BlendSpacePlayerLibrary_eventGetLoop_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Get the current loop of the blend space player.  */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Get the current loop of the blend space player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventGetLoop_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
void Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlendSpacePlayerLibrary_eventGetLoop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlendSpacePlayerLibrary_eventGetLoop_Parms), &Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "GetLoop", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::BlendSpacePlayerLibrary_eventGetLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::BlendSpacePlayerLibrary_eventGetLoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execGetLoop)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlendSpacePlayerLibrary::GetLoop(Z_Param_Out_BlendSpacePlayer);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function GetLoop

// Begin Class UBlendSpacePlayerLibrary Function GetPlayRate
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics
{
	struct BlendSpacePlayerLibrary_eventGetPlayRate_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Get the current play rate of the blend space player. */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Get the current play rate of the blend space player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventGetPlayRate_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "GetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::BlendSpacePlayerLibrary_eventGetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::BlendSpacePlayerLibrary_eventGetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execGetPlayRate)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UBlendSpacePlayerLibrary::GetPlayRate(Z_Param_Out_BlendSpacePlayer);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function GetPlayRate

// Begin Class UBlendSpacePlayerLibrary Function GetPosition
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics
{
	struct BlendSpacePlayerLibrary_eventGetPosition_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Get the current position of the blend space player. */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Get the current position of the blend space player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventGetPosition_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::BlendSpacePlayerLibrary_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::BlendSpacePlayerLibrary_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execGetPosition)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UBlendSpacePlayerLibrary::GetPosition(Z_Param_Out_BlendSpacePlayer);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function GetPosition

// Begin Class UBlendSpacePlayerLibrary Function GetStartPosition
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics
{
	struct BlendSpacePlayerLibrary_eventGetStartPosition_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Get the current start position of the blend space player. */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Get the current start position of the blend space player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventGetStartPosition_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventGetStartPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "GetStartPosition", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::BlendSpacePlayerLibrary_eventGetStartPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::BlendSpacePlayerLibrary_eventGetStartPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execGetStartPosition)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UBlendSpacePlayerLibrary::GetStartPosition(Z_Param_Out_BlendSpacePlayer);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function GetStartPosition

// Begin Class UBlendSpacePlayerLibrary Function SetBlendSpace
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics
{
	struct BlendSpacePlayerLibrary_eventSetBlendSpace_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		UBlendSpace* BlendSpace;
		FBlendSpacePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Set the current BlendSpace of the blend space player. */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Set the current BlendSpace of the blend space player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetBlendSpace_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetBlendSpace_Parms, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetBlendSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(0, nullptr) }; // 3905465451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::NewProp_BlendSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "SetBlendSpace", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::BlendSpacePlayerLibrary_eventSetBlendSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::BlendSpacePlayerLibrary_eventSetBlendSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execSetBlendSpace)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_GET_OBJECT(UBlendSpace,Z_Param_BlendSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlendSpacePlayerReference*)Z_Param__Result=UBlendSpacePlayerLibrary::SetBlendSpace(Z_Param_Out_BlendSpacePlayer,Z_Param_BlendSpace);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function SetBlendSpace

// Begin Class UBlendSpacePlayerLibrary Function SetBlendSpaceWithInertialBlending
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics
{
	struct BlendSpacePlayerLibrary_eventSetBlendSpaceWithInertialBlending_Parms
	{
		FAnimUpdateContext UpdateContext;
		FBlendSpacePlayerReference BlendSpacePlayer;
		UBlendSpace* BlendSpace;
		float BlendTime;
		FBlendSpacePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Set the current BlendSpace of the blend space player with an interial blend time. */" },
		{ "CPP_Default_BlendTime", "0.200000" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Set the current BlendSpace of the blend space player with an interial blend time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetBlendSpaceWithInertialBlending_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 3943655895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetBlendSpaceWithInertialBlending_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetBlendSpaceWithInertialBlending_Parms, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetBlendSpaceWithInertialBlending_Parms, BlendTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetBlendSpaceWithInertialBlending_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(0, nullptr) }; // 3905465451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::NewProp_BlendSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "SetBlendSpaceWithInertialBlending", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::BlendSpacePlayerLibrary_eventSetBlendSpaceWithInertialBlending_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::BlendSpacePlayerLibrary_eventSetBlendSpaceWithInertialBlending_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execSetBlendSpaceWithInertialBlending)
{
	P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_GET_OBJECT(UBlendSpace,Z_Param_BlendSpace);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlendSpacePlayerReference*)Z_Param__Result=UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending(Z_Param_Out_UpdateContext,Z_Param_Out_BlendSpacePlayer,Z_Param_BlendSpace,Z_Param_BlendTime);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function SetBlendSpaceWithInertialBlending

// Begin Class UBlendSpacePlayerLibrary Function SetLoop
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics
{
	struct BlendSpacePlayerLibrary_eventSetLoop_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		bool bLoop;
		FBlendSpacePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Set the loop of the blend space player. */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Set the loop of the blend space player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetLoop_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
void Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((BlendSpacePlayerLibrary_eventSetLoop_Parms*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlendSpacePlayerLibrary_eventSetLoop_Parms), &Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetLoop_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(0, nullptr) }; // 3905465451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "SetLoop", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::BlendSpacePlayerLibrary_eventSetLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::BlendSpacePlayerLibrary_eventSetLoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execSetLoop)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_GET_UBOOL(Z_Param_bLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlendSpacePlayerReference*)Z_Param__Result=UBlendSpacePlayerLibrary::SetLoop(Z_Param_Out_BlendSpacePlayer,Z_Param_bLoop);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function SetLoop

// Begin Class UBlendSpacePlayerLibrary Function SetPlayRate
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics
{
	struct BlendSpacePlayerLibrary_eventSetPlayRate_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		float PlayRate;
		FBlendSpacePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Set the play rate of the blend space player. */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Set the play rate of the blend space player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetPlayRate_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetPlayRate_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetPlayRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(0, nullptr) }; // 3905465451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "SetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::BlendSpacePlayerLibrary_eventSetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::BlendSpacePlayerLibrary_eventSetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execSetPlayRate)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlendSpacePlayerReference*)Z_Param__Result=UBlendSpacePlayerLibrary::SetPlayRate(Z_Param_Out_BlendSpacePlayer,Z_Param_PlayRate);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function SetPlayRate

// Begin Class UBlendSpacePlayerLibrary Function SetResetPlayTimeWhenBlendSpaceChanges
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics
{
	struct BlendSpacePlayerLibrary_eventSetResetPlayTimeWhenBlendSpaceChanges_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		bool bReset;
		FBlendSpacePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Set whether the current play time should reset when BlendSpace changes of the blend space player. */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Set whether the current play time should reset when BlendSpace changes of the blend space player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static void NewProp_bReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetResetPlayTimeWhenBlendSpaceChanges_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
void Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_bReset_SetBit(void* Obj)
{
	((BlendSpacePlayerLibrary_eventSetResetPlayTimeWhenBlendSpaceChanges_Parms*)Obj)->bReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlendSpacePlayerLibrary_eventSetResetPlayTimeWhenBlendSpaceChanges_Parms), &Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSetResetPlayTimeWhenBlendSpaceChanges_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(0, nullptr) }; // 3905465451
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_bReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "SetResetPlayTimeWhenBlendSpaceChanges", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::BlendSpacePlayerLibrary_eventSetResetPlayTimeWhenBlendSpaceChanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::BlendSpacePlayerLibrary_eventSetResetPlayTimeWhenBlendSpaceChanges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execSetResetPlayTimeWhenBlendSpaceChanges)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_GET_UBOOL(Z_Param_bReset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlendSpacePlayerReference*)Z_Param__Result=UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges(Z_Param_Out_BlendSpacePlayer,Z_Param_bReset);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function SetResetPlayTimeWhenBlendSpaceChanges

// Begin Class UBlendSpacePlayerLibrary Function ShouldResetPlayTimeWhenBlendSpaceChanges
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics
{
	struct BlendSpacePlayerLibrary_eventShouldResetPlayTimeWhenBlendSpaceChanges_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Get the current value of whether the current play time should reset when BlendSpace changes of the blend space player. */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Get the current value of whether the current play time should reset when BlendSpace changes of the blend space player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventShouldResetPlayTimeWhenBlendSpaceChanges_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
void Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlendSpacePlayerLibrary_eventShouldResetPlayTimeWhenBlendSpaceChanges_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlendSpacePlayerLibrary_eventShouldResetPlayTimeWhenBlendSpaceChanges_Parms), &Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "ShouldResetPlayTimeWhenBlendSpaceChanges", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::BlendSpacePlayerLibrary_eventShouldResetPlayTimeWhenBlendSpaceChanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::BlendSpacePlayerLibrary_eventShouldResetPlayTimeWhenBlendSpaceChanges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execShouldResetPlayTimeWhenBlendSpaceChanges)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges(Z_Param_Out_BlendSpacePlayer);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function ShouldResetPlayTimeWhenBlendSpaceChanges

// Begin Class UBlendSpacePlayerLibrary Function SnapToPosition
struct Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics
{
	struct BlendSpacePlayerLibrary_eventSnapToPosition_Parms
	{
		FBlendSpacePlayerReference BlendSpacePlayer;
		FVector NewPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space Player" },
		{ "Comment", "/** Forces the Position to the specified value */" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Forces the Position to the specified value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpacePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpacePlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::NewProp_BlendSpacePlayer = { "BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSnapToPosition_Parms, BlendSpacePlayer), Z_Construct_UScriptStruct_FBlendSpacePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpacePlayer_MetaData), NewProp_BlendSpacePlayer_MetaData) }; // 3905465451
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendSpacePlayerLibrary_eventSnapToPosition_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::NewProp_BlendSpacePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::NewProp_NewPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpacePlayerLibrary, nullptr, "SnapToPosition", nullptr, nullptr, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::BlendSpacePlayerLibrary_eventSnapToPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::BlendSpacePlayerLibrary_eventSnapToPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendSpacePlayerLibrary::execSnapToPosition)
{
	P_GET_STRUCT_REF(FBlendSpacePlayerReference,Z_Param_Out_BlendSpacePlayer);
	P_GET_STRUCT(FVector,Z_Param_NewPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlendSpacePlayerLibrary::SnapToPosition(Z_Param_Out_BlendSpacePlayer,Z_Param_NewPosition);
	P_NATIVE_END;
}
// End Class UBlendSpacePlayerLibrary Function SnapToPosition

// Begin Class UBlendSpacePlayerLibrary
void UBlendSpacePlayerLibrary::StaticRegisterNativesUBlendSpacePlayerLibrary()
{
	UClass* Class = UBlendSpacePlayerLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToBlendSpacePlayer", &UBlendSpacePlayerLibrary::execConvertToBlendSpacePlayer },
		{ "ConvertToBlendSpacePlayerPure", &UBlendSpacePlayerLibrary::execConvertToBlendSpacePlayerPure },
		{ "GetBlendSpace", &UBlendSpacePlayerLibrary::execGetBlendSpace },
		{ "GetLoop", &UBlendSpacePlayerLibrary::execGetLoop },
		{ "GetPlayRate", &UBlendSpacePlayerLibrary::execGetPlayRate },
		{ "GetPosition", &UBlendSpacePlayerLibrary::execGetPosition },
		{ "GetStartPosition", &UBlendSpacePlayerLibrary::execGetStartPosition },
		{ "SetBlendSpace", &UBlendSpacePlayerLibrary::execSetBlendSpace },
		{ "SetBlendSpaceWithInertialBlending", &UBlendSpacePlayerLibrary::execSetBlendSpaceWithInertialBlending },
		{ "SetLoop", &UBlendSpacePlayerLibrary::execSetLoop },
		{ "SetPlayRate", &UBlendSpacePlayerLibrary::execSetPlayRate },
		{ "SetResetPlayTimeWhenBlendSpaceChanges", &UBlendSpacePlayerLibrary::execSetResetPlayTimeWhenBlendSpaceChanges },
		{ "ShouldResetPlayTimeWhenBlendSpaceChanges", &UBlendSpacePlayerLibrary::execShouldResetPlayTimeWhenBlendSpaceChanges },
		{ "SnapToPosition", &UBlendSpacePlayerLibrary::execSnapToPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendSpacePlayerLibrary);
UClass* Z_Construct_UClass_UBlendSpacePlayerLibrary_NoRegister()
{
	return UBlendSpacePlayerLibrary::StaticClass();
}
struct Z_Construct_UClass_UBlendSpacePlayerLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes operations to be performed on a blend space player anim node.\n */" },
		{ "IncludePath", "BlendSpacePlayerLibrary.h" },
		{ "ModuleRelativePath", "Public/BlendSpacePlayerLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on a blend space player anim node." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer, "ConvertToBlendSpacePlayer" }, // 3958318494
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure, "ConvertToBlendSpacePlayerPure" }, // 1127094172
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetBlendSpace, "GetBlendSpace" }, // 1622257469
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetLoop, "GetLoop" }, // 3504729715
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPlayRate, "GetPlayRate" }, // 2017761254
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetPosition, "GetPosition" }, // 2786641467
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_GetStartPosition, "GetStartPosition" }, // 3588824290
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpace, "SetBlendSpace" }, // 2296769634
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending, "SetBlendSpaceWithInertialBlending" }, // 2895741876
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetLoop, "SetLoop" }, // 842127851
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetPlayRate, "SetPlayRate" }, // 697097610
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges, "SetResetPlayTimeWhenBlendSpaceChanges" }, // 608007385
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges, "ShouldResetPlayTimeWhenBlendSpaceChanges" }, // 1561944514
		{ &Z_Construct_UFunction_UBlendSpacePlayerLibrary_SnapToPosition, "SnapToPosition" }, // 2073060177
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpacePlayerLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlendSpacePlayerLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpacePlayerLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpacePlayerLibrary_Statics::ClassParams = {
	&UBlendSpacePlayerLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpacePlayerLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlendSpacePlayerLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlendSpacePlayerLibrary()
{
	if (!Z_Registration_Info_UClass_UBlendSpacePlayerLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendSpacePlayerLibrary.OuterSingleton, Z_Construct_UClass_UBlendSpacePlayerLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlendSpacePlayerLibrary.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UBlendSpacePlayerLibrary>()
{
	return UBlendSpacePlayerLibrary::StaticClass();
}
UBlendSpacePlayerLibrary::UBlendSpacePlayerLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpacePlayerLibrary);
UBlendSpacePlayerLibrary::~UBlendSpacePlayerLibrary() {}
// End Class UBlendSpacePlayerLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlendSpacePlayerReference::StaticStruct, Z_Construct_UScriptStruct_FBlendSpacePlayerReference_Statics::NewStructOps, TEXT("BlendSpacePlayerReference"), &Z_Registration_Info_UScriptStruct_BlendSpacePlayerReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSpacePlayerReference), 3905465451U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlendSpacePlayerLibrary, UBlendSpacePlayerLibrary::StaticClass, TEXT("UBlendSpacePlayerLibrary"), &Z_Registration_Info_UClass_UBlendSpacePlayerLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendSpacePlayerLibrary), 3409601420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_2975289064(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
