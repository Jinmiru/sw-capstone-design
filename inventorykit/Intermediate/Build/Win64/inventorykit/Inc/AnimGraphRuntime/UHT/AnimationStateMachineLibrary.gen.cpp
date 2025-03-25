// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimationStateMachineLibrary.h"
#include "Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationStateMachineLibrary() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimationStateMachineLibrary();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimationStateMachineLibrary_NoRegister();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateMachineReference();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateResultReference();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionLogicType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimationStateResultReference
static_assert(std::is_polymorphic<FAnimationStateResultReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FAnimationStateResultReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationStateResultReference;
class UScriptStruct* FAnimationStateResultReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationStateResultReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationStateResultReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationStateResultReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimationStateResultReference"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationStateResultReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimationStateResultReference>()
{
	return FAnimationStateResultReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Animation State Reference" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationStateResultReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"AnimationStateResultReference",
	nullptr,
	0,
	sizeof(FAnimationStateResultReference),
	alignof(FAnimationStateResultReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateResultReference()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationStateResultReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationStateResultReference.InnerSingleton, Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationStateResultReference.InnerSingleton;
}
// End ScriptStruct FAnimationStateResultReference

// Begin ScriptStruct FAnimationStateMachineReference
static_assert(std::is_polymorphic<FAnimationStateMachineReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FAnimationStateMachineReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationStateMachineReference;
class UScriptStruct* FAnimationStateMachineReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationStateMachineReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationStateMachineReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationStateMachineReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimationStateMachineReference"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationStateMachineReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimationStateMachineReference>()
{
	return FAnimationStateMachineReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationStateMachineReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Animation State Machine" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationStateMachineReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationStateMachineReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"AnimationStateMachineReference",
	nullptr,
	0,
	sizeof(FAnimationStateMachineReference),
	alignof(FAnimationStateMachineReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateMachineReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationStateMachineReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateMachineReference()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationStateMachineReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationStateMachineReference.InnerSingleton, Z_Construct_UScriptStruct_FAnimationStateMachineReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationStateMachineReference.InnerSingleton;
}
// End ScriptStruct FAnimationStateMachineReference

// Begin Class UAnimationStateMachineLibrary Function ConvertToAnimationStateMachine
struct Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics
{
	struct AnimationStateMachineLibrary_eventConvertToAnimationStateMachine_Parms
	{
		FAnimNodeReference Node;
		FAnimationStateMachineReference AnimationState;
		EAnimNodeReferenceConversionResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Get an anim state machine from an anim node reference */" },
		{ "DisplayName", "Convert to Animation State Machine" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Get an anim state machine from an anim node reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateMachine_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::NewProp_AnimationState = { "AnimationState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateMachine_Parms, AnimationState), Z_Construct_UScriptStruct_FAnimationStateMachineReference, METADATA_PARAMS(0, nullptr) }; // 2734721633
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateMachine_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::NewProp_AnimationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "ConvertToAnimationStateMachine", nullptr, nullptr, Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::AnimationStateMachineLibrary_eventConvertToAnimationStateMachine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::AnimationStateMachineLibrary_eventConvertToAnimationStateMachine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationStateMachineLibrary::execConvertToAnimationStateMachine)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FAnimationStateMachineReference,Z_Param_Out_AnimationState);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAnimationStateMachineLibrary::ConvertToAnimationStateMachine(Z_Param_Out_Node,Z_Param_Out_AnimationState,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UAnimationStateMachineLibrary Function ConvertToAnimationStateMachine

// Begin Class UAnimationStateMachineLibrary Function ConvertToAnimationStateMachinePure
struct Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics
{
	struct AnimationStateMachineLibrary_eventConvertToAnimationStateMachinePure_Parms
	{
		FAnimNodeReference Node;
		FAnimationStateMachineReference AnimationState;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Get an anim state machine from an anim node reference (pure) */" },
		{ "DisplayName", "Convert to Animation State Machine" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Get an anim state machine from an anim node reference (pure)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationState;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateMachinePure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::NewProp_AnimationState = { "AnimationState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateMachinePure_Parms, AnimationState), Z_Construct_UScriptStruct_FAnimationStateMachineReference, METADATA_PARAMS(0, nullptr) }; // 2734721633
void Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::NewProp_Result_SetBit(void* Obj)
{
	((AnimationStateMachineLibrary_eventConvertToAnimationStateMachinePure_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationStateMachineLibrary_eventConvertToAnimationStateMachinePure_Parms), &Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::NewProp_AnimationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "ConvertToAnimationStateMachinePure", nullptr, nullptr, Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::AnimationStateMachineLibrary_eventConvertToAnimationStateMachinePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::AnimationStateMachineLibrary_eventConvertToAnimationStateMachinePure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationStateMachineLibrary::execConvertToAnimationStateMachinePure)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FAnimationStateMachineReference,Z_Param_Out_AnimationState);
	P_GET_UBOOL_REF(Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAnimationStateMachineLibrary::ConvertToAnimationStateMachinePure(Z_Param_Out_Node,Z_Param_Out_AnimationState,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UAnimationStateMachineLibrary Function ConvertToAnimationStateMachinePure

// Begin Class UAnimationStateMachineLibrary Function ConvertToAnimationStateResult
struct Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics
{
	struct AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms
	{
		FAnimNodeReference Node;
		FAnimationStateResultReference AnimationState;
		EAnimNodeReferenceConversionResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Get an anim state reference from an anim node reference */" },
		{ "DisplayName", "Convert to Animation State" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Get an anim state reference from an anim node reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_AnimationState = { "AnimationState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms, AnimationState), Z_Construct_UScriptStruct_FAnimationStateResultReference, METADATA_PARAMS(0, nullptr) }; // 2230463503
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_AnimationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "ConvertToAnimationStateResult", nullptr, nullptr, Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::AnimationStateMachineLibrary_eventConvertToAnimationStateResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationStateMachineLibrary::execConvertToAnimationStateResult)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FAnimationStateResultReference,Z_Param_Out_AnimationState);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAnimationStateMachineLibrary::ConvertToAnimationStateResult(Z_Param_Out_Node,Z_Param_Out_AnimationState,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UAnimationStateMachineLibrary Function ConvertToAnimationStateResult

// Begin Class UAnimationStateMachineLibrary Function ConvertToAnimationStateResultPure
struct Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics
{
	struct AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms
	{
		FAnimNodeReference Node;
		FAnimationStateResultReference AnimationState;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Get an anim state reference from an anim node reference (pure) */" },
		{ "DisplayName", "Convert to Animation State" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Get an anim state reference from an anim node reference (pure)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationState;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_AnimationState = { "AnimationState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms, AnimationState), Z_Construct_UScriptStruct_FAnimationStateResultReference, METADATA_PARAMS(0, nullptr) }; // 2230463503
void Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Result_SetBit(void* Obj)
{
	((AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms), &Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_AnimationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "ConvertToAnimationStateResultPure", nullptr, nullptr, Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::AnimationStateMachineLibrary_eventConvertToAnimationStateResultPure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationStateMachineLibrary::execConvertToAnimationStateResultPure)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FAnimationStateResultReference,Z_Param_Out_AnimationState);
	P_GET_UBOOL_REF(Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAnimationStateMachineLibrary::ConvertToAnimationStateResultPure(Z_Param_Out_Node,Z_Param_Out_AnimationState,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UAnimationStateMachineLibrary Function ConvertToAnimationStateResultPure

// Begin Class UAnimationStateMachineLibrary Function GetRelevantAnimTimeRemaining
struct Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics
{
	struct AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemaining_Parms
	{
		FAnimUpdateContext UpdateContext;
		FAnimationStateResultReference Node;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Returns the remaining animation time of the state's most relevant asset player */" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Returns the remaining animation time of the state's most relevant asset player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemaining_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 3943655895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemaining_Parms, Node), Z_Construct_UScriptStruct_FAnimationStateResultReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2230463503
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "GetRelevantAnimTimeRemaining", nullptr, nullptr, Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationStateMachineLibrary::execGetRelevantAnimTimeRemaining)
{
	P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
	P_GET_STRUCT_REF(FAnimationStateResultReference,Z_Param_Out_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining(Z_Param_Out_UpdateContext,Z_Param_Out_Node);
	P_NATIVE_END;
}
// End Class UAnimationStateMachineLibrary Function GetRelevantAnimTimeRemaining

// Begin Class UAnimationStateMachineLibrary Function GetRelevantAnimTimeRemainingFraction
struct Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics
{
	struct AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemainingFraction_Parms
	{
		FAnimUpdateContext UpdateContext;
		FAnimationStateResultReference Node;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Returns the remaining animation time as a fraction of the duration for the state's most relevant asset player */" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Returns the remaining animation time as a fraction of the duration for the state's most relevant asset player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemainingFraction_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 3943655895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemainingFraction_Parms, Node), Z_Construct_UScriptStruct_FAnimationStateResultReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2230463503
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemainingFraction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "GetRelevantAnimTimeRemainingFraction", nullptr, nullptr, Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemainingFraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::AnimationStateMachineLibrary_eventGetRelevantAnimTimeRemainingFraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationStateMachineLibrary::execGetRelevantAnimTimeRemainingFraction)
{
	P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
	P_GET_STRUCT_REF(FAnimationStateResultReference,Z_Param_Out_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction(Z_Param_Out_UpdateContext,Z_Param_Out_Node);
	P_NATIVE_END;
}
// End Class UAnimationStateMachineLibrary Function GetRelevantAnimTimeRemainingFraction

// Begin Class UAnimationStateMachineLibrary Function GetState
struct Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics
{
	struct AnimationStateMachineLibrary_eventGetState_Parms
	{
		FAnimUpdateContext UpdateContext;
		FAnimationStateMachineReference Node;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Returns the name of the current state of this state machine */" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Returns the name of the current state of this state machine" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventGetState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 3943655895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventGetState_Parms, Node), Z_Construct_UScriptStruct_FAnimationStateMachineReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2734721633
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventGetState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::AnimationStateMachineLibrary_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::AnimationStateMachineLibrary_eventGetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationStateMachineLibrary::execGetState)
{
	P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
	P_GET_STRUCT_REF(FAnimationStateMachineReference,Z_Param_Out_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UAnimationStateMachineLibrary::GetState(Z_Param_Out_UpdateContext,Z_Param_Out_Node);
	P_NATIVE_END;
}
// End Class UAnimationStateMachineLibrary Function GetState

// Begin Class UAnimationStateMachineLibrary Function IsStateBlendingIn
struct Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics
{
	struct AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms
	{
		FAnimUpdateContext UpdateContext;
		FAnimationStateResultReference Node;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Returns whether the state the node belongs to is blending in */" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Returns whether the state the node belongs to is blending in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 3943655895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms, Node), Z_Construct_UScriptStruct_FAnimationStateResultReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2230463503
void Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms), &Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "IsStateBlendingIn", nullptr, nullptr, Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::AnimationStateMachineLibrary_eventIsStateBlendingIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationStateMachineLibrary::execIsStateBlendingIn)
{
	P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
	P_GET_STRUCT_REF(FAnimationStateResultReference,Z_Param_Out_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAnimationStateMachineLibrary::IsStateBlendingIn(Z_Param_Out_UpdateContext,Z_Param_Out_Node);
	P_NATIVE_END;
}
// End Class UAnimationStateMachineLibrary Function IsStateBlendingIn

// Begin Class UAnimationStateMachineLibrary Function IsStateBlendingOut
struct Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics
{
	struct AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms
	{
		FAnimUpdateContext UpdateContext;
		FAnimationStateResultReference Node;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Returns whether the state the node belongs to is blending out */" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Returns whether the state the node belongs to is blending out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 3943655895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms, Node), Z_Construct_UScriptStruct_FAnimationStateResultReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2230463503
void Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms), &Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "IsStateBlendingOut", nullptr, nullptr, Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::AnimationStateMachineLibrary_eventIsStateBlendingOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationStateMachineLibrary::execIsStateBlendingOut)
{
	P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
	P_GET_STRUCT_REF(FAnimationStateResultReference,Z_Param_Out_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAnimationStateMachineLibrary::IsStateBlendingOut(Z_Param_Out_UpdateContext,Z_Param_Out_Node);
	P_NATIVE_END;
}
// End Class UAnimationStateMachineLibrary Function IsStateBlendingOut

// Begin Class UAnimationStateMachineLibrary Function SetState
struct Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics
{
	struct AnimationStateMachineLibrary_eventSetState_Parms
	{
		FAnimUpdateContext UpdateContext;
		FAnimationStateMachineReference Node;
		FName TargetState;
		float Duration;
		TEnumAsByte<ETransitionLogicType::Type> BlendType;
		UBlendProfile* BlendProfile;
		EAlphaBlendOption AlphaBlendOption;
		UCurveFloat* CustomBlendCurve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "State Machine" },
		{ "Comment", "/** Manually set the current state of the state machine\n\x09\x09NOTE: Custom blend type is not supported */" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Manually set the current state of the state machine\n              NOTE: Custom blend type is not supported" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaBlendOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaBlendOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomBlendCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventSetState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 3943655895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventSetState_Parms, Node), Z_Construct_UScriptStruct_FAnimationStateMachineReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2734721633
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventSetState_Parms, TargetState), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventSetState_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventSetState_Parms, BlendType), Z_Construct_UEnum_Engine_ETransitionLogicType, METADATA_PARAMS(0, nullptr) }; // 317396345
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventSetState_Parms, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_AlphaBlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_AlphaBlendOption = { "AlphaBlendOption", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventSetState_Parms, AlphaBlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(0, nullptr) }; // 2114278366
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_CustomBlendCurve = { "CustomBlendCurve", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationStateMachineLibrary_eventSetState_Parms, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_TargetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_BlendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_BlendProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_AlphaBlendOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_AlphaBlendOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::NewProp_CustomBlendCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationStateMachineLibrary, nullptr, "SetState", nullptr, nullptr, Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::AnimationStateMachineLibrary_eventSetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::AnimationStateMachineLibrary_eventSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationStateMachineLibrary::execSetState)
{
	P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
	P_GET_STRUCT_REF(FAnimationStateMachineReference,Z_Param_Out_Node);
	P_GET_PROPERTY(FNameProperty,Z_Param_TargetState);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FByteProperty,Z_Param_BlendType);
	P_GET_OBJECT(UBlendProfile,Z_Param_BlendProfile);
	P_GET_ENUM(EAlphaBlendOption,Z_Param_AlphaBlendOption);
	P_GET_OBJECT(UCurveFloat,Z_Param_CustomBlendCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAnimationStateMachineLibrary::SetState(Z_Param_Out_UpdateContext,Z_Param_Out_Node,Z_Param_TargetState,Z_Param_Duration,ETransitionLogicType::Type(Z_Param_BlendType),Z_Param_BlendProfile,EAlphaBlendOption(Z_Param_AlphaBlendOption),Z_Param_CustomBlendCurve);
	P_NATIVE_END;
}
// End Class UAnimationStateMachineLibrary Function SetState

// Begin Class UAnimationStateMachineLibrary
void UAnimationStateMachineLibrary::StaticRegisterNativesUAnimationStateMachineLibrary()
{
	UClass* Class = UAnimationStateMachineLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToAnimationStateMachine", &UAnimationStateMachineLibrary::execConvertToAnimationStateMachine },
		{ "ConvertToAnimationStateMachinePure", &UAnimationStateMachineLibrary::execConvertToAnimationStateMachinePure },
		{ "ConvertToAnimationStateResult", &UAnimationStateMachineLibrary::execConvertToAnimationStateResult },
		{ "ConvertToAnimationStateResultPure", &UAnimationStateMachineLibrary::execConvertToAnimationStateResultPure },
		{ "GetRelevantAnimTimeRemaining", &UAnimationStateMachineLibrary::execGetRelevantAnimTimeRemaining },
		{ "GetRelevantAnimTimeRemainingFraction", &UAnimationStateMachineLibrary::execGetRelevantAnimTimeRemainingFraction },
		{ "GetState", &UAnimationStateMachineLibrary::execGetState },
		{ "IsStateBlendingIn", &UAnimationStateMachineLibrary::execIsStateBlendingIn },
		{ "IsStateBlendingOut", &UAnimationStateMachineLibrary::execIsStateBlendingOut },
		{ "SetState", &UAnimationStateMachineLibrary::execSetState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationStateMachineLibrary);
UClass* Z_Construct_UClass_UAnimationStateMachineLibrary_NoRegister()
{
	return UAnimationStateMachineLibrary::StaticClass();
}
struct Z_Construct_UClass_UAnimationStateMachineLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Exposes operations to be performed on anim state machine node contexts\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimationStateMachineLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on anim state machine node contexts" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachine, "ConvertToAnimationStateMachine" }, // 3090592131
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure, "ConvertToAnimationStateMachinePure" }, // 1718294152
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResult, "ConvertToAnimationStateResult" }, // 3532199927
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure, "ConvertToAnimationStateResultPure" }, // 4119616577
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining, "GetRelevantAnimTimeRemaining" }, // 260979957
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction, "GetRelevantAnimTimeRemainingFraction" }, // 3574323785
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_GetState, "GetState" }, // 2010416287
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingIn, "IsStateBlendingIn" }, // 3230046524
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_IsStateBlendingOut, "IsStateBlendingOut" }, // 2024056853
		{ &Z_Construct_UFunction_UAnimationStateMachineLibrary_SetState, "SetState" }, // 2355415489
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationStateMachineLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::ClassParams = {
	&UAnimationStateMachineLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationStateMachineLibrary()
{
	if (!Z_Registration_Info_UClass_UAnimationStateMachineLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationStateMachineLibrary.OuterSingleton, Z_Construct_UClass_UAnimationStateMachineLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationStateMachineLibrary.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimationStateMachineLibrary>()
{
	return UAnimationStateMachineLibrary::StaticClass();
}
UAnimationStateMachineLibrary::UAnimationStateMachineLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationStateMachineLibrary);
UAnimationStateMachineLibrary::~UAnimationStateMachineLibrary() {}
// End Class UAnimationStateMachineLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimationStateResultReference::StaticStruct, Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics::NewStructOps, TEXT("AnimationStateResultReference"), &Z_Registration_Info_UScriptStruct_AnimationStateResultReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationStateResultReference), 2230463503U) },
		{ FAnimationStateMachineReference::StaticStruct, Z_Construct_UScriptStruct_FAnimationStateMachineReference_Statics::NewStructOps, TEXT("AnimationStateMachineReference"), &Z_Registration_Info_UScriptStruct_AnimationStateMachineReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationStateMachineReference), 2734721633U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationStateMachineLibrary, UAnimationStateMachineLibrary::StaticClass, TEXT("UAnimationStateMachineLibrary"), &Z_Registration_Info_UClass_UAnimationStateMachineLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationStateMachineLibrary), 1792680361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_3652675283(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
