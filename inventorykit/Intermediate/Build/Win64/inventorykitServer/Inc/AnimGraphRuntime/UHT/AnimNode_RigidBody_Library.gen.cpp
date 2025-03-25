// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_RigidBody_Library.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RigidBody_Library() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNodeRigidBodyLibrary();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNodeRigidBodyLibrary_NoRegister();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FRigidBodyAnimNodeReference
static_assert(std::is_polymorphic<FRigidBodyAnimNodeReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FRigidBodyAnimNodeReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigidBodyAnimNodeReference;
class UScriptStruct* FRigidBodyAnimNodeReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigidBodyAnimNodeReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigidBodyAnimNodeReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RigidBodyAnimNodeReference"));
	}
	return Z_Registration_Info_UScriptStruct_RigidBodyAnimNodeReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRigidBodyAnimNodeReference>()
{
	return FRigidBodyAnimNodeReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Library.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigidBodyAnimNodeReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"RigidBodyAnimNodeReference",
	nullptr,
	0,
	sizeof(FRigidBodyAnimNodeReference),
	alignof(FRigidBodyAnimNodeReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference()
{
	if (!Z_Registration_Info_UScriptStruct_RigidBodyAnimNodeReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigidBodyAnimNodeReference.InnerSingleton, Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigidBodyAnimNodeReference.InnerSingleton;
}
// End ScriptStruct FRigidBodyAnimNodeReference

// Begin Class UAnimNodeRigidBodyLibrary Function ConvertToRigidBodyAnimNode
struct Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics
{
	struct AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNode_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FRigidBodyAnimNodeReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Dynamics" },
		{ "Comment", "/** Get a rigid body anim node context from an anim node context */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Library.h" },
		{ "ToolTip", "Get a rigid body anim node context from an anim node context" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNode_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNode_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 1380019152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNodeRigidBodyLibrary, nullptr, "ConvertToRigidBodyAnimNode", nullptr, nullptr, Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNodeRigidBodyLibrary::execConvertToRigidBodyAnimNode)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigidBodyAnimNodeReference*)Z_Param__Result=UAnimNodeRigidBodyLibrary::ConvertToRigidBodyAnimNode(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UAnimNodeRigidBodyLibrary Function ConvertToRigidBodyAnimNode

// Begin Class UAnimNodeRigidBodyLibrary Function ConvertToRigidBodyAnimNodePure
struct Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics
{
	struct AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNodePure_Parms
	{
		FAnimNodeReference Node;
		FRigidBodyAnimNodeReference RigidBodyAnimNode;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Dynamics" },
		{ "Comment", "/** Get a rigid body anim node context from an anim node context (pure) */" },
		{ "DisplayName", "Convert to rigid body" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Library.h" },
		{ "ToolTip", "Get a rigid body anim node context from an anim node context (pure)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyAnimNode;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNodePure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::NewProp_RigidBodyAnimNode = { "RigidBodyAnimNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNodePure_Parms, RigidBodyAnimNode), Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 1380019152
void Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::NewProp_Result_SetBit(void* Obj)
{
	((AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNodePure_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNodePure_Parms), &Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::NewProp_RigidBodyAnimNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNodeRigidBodyLibrary, nullptr, "ConvertToRigidBodyAnimNodePure", nullptr, nullptr, Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNodePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::AnimNodeRigidBodyLibrary_eventConvertToRigidBodyAnimNodePure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNodeRigidBodyLibrary::execConvertToRigidBodyAnimNodePure)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FRigidBodyAnimNodeReference,Z_Param_Out_RigidBodyAnimNode);
	P_GET_UBOOL_REF(Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAnimNodeRigidBodyLibrary::ConvertToRigidBodyAnimNodePure(Z_Param_Out_Node,Z_Param_Out_RigidBodyAnimNode,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UAnimNodeRigidBodyLibrary Function ConvertToRigidBodyAnimNodePure

// Begin Class UAnimNodeRigidBodyLibrary Function SetOverridePhysicsAsset
struct Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics
{
	struct AnimNodeRigidBodyLibrary_eventSetOverridePhysicsAsset_Parms
	{
		FRigidBodyAnimNodeReference Node;
		UPhysicsAsset* PhysicsAsset;
		FRigidBodyAnimNodeReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Dynamics" },
		{ "Comment", "/** Set the physics asset on the rigid body anim graph node (RBAN). */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Library.h" },
		{ "ToolTip", "Set the physics asset on the rigid body anim graph node (RBAN)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeRigidBodyLibrary_eventSetOverridePhysicsAsset_Parms, Node), Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 1380019152
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeRigidBodyLibrary_eventSetOverridePhysicsAsset_Parms, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeRigidBodyLibrary_eventSetOverridePhysicsAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference, METADATA_PARAMS(0, nullptr) }; // 1380019152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::NewProp_PhysicsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNodeRigidBodyLibrary, nullptr, "SetOverridePhysicsAsset", nullptr, nullptr, Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::AnimNodeRigidBodyLibrary_eventSetOverridePhysicsAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::AnimNodeRigidBodyLibrary_eventSetOverridePhysicsAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNodeRigidBodyLibrary::execSetOverridePhysicsAsset)
{
	P_GET_STRUCT_REF(FRigidBodyAnimNodeReference,Z_Param_Out_Node);
	P_GET_OBJECT(UPhysicsAsset,Z_Param_PhysicsAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigidBodyAnimNodeReference*)Z_Param__Result=UAnimNodeRigidBodyLibrary::SetOverridePhysicsAsset(Z_Param_Out_Node,Z_Param_PhysicsAsset);
	P_NATIVE_END;
}
// End Class UAnimNodeRigidBodyLibrary Function SetOverridePhysicsAsset

// Begin Class UAnimNodeRigidBodyLibrary
void UAnimNodeRigidBodyLibrary::StaticRegisterNativesUAnimNodeRigidBodyLibrary()
{
	UClass* Class = UAnimNodeRigidBodyLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToRigidBodyAnimNode", &UAnimNodeRigidBodyLibrary::execConvertToRigidBodyAnimNode },
		{ "ConvertToRigidBodyAnimNodePure", &UAnimNodeRigidBodyLibrary::execConvertToRigidBodyAnimNodePure },
		{ "SetOverridePhysicsAsset", &UAnimNodeRigidBodyLibrary::execSetOverridePhysicsAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNodeRigidBodyLibrary);
UClass* Z_Construct_UClass_UAnimNodeRigidBodyLibrary_NoRegister()
{
	return UAnimNodeRigidBodyLibrary::StaticClass();
}
struct Z_Construct_UClass_UAnimNodeRigidBodyLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Exposes operations to be performed on a rigid body anim node\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "BoneControllers/AnimNode_RigidBody_Library.h" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Library.h" },
		{ "ToolTip", "Exposes operations to be performed on a rigid body anim node" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNode, "ConvertToRigidBodyAnimNode" }, // 870271603
		{ &Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_ConvertToRigidBodyAnimNodePure, "ConvertToRigidBodyAnimNodePure" }, // 2915255045
		{ &Z_Construct_UFunction_UAnimNodeRigidBodyLibrary_SetOverridePhysicsAsset, "SetOverridePhysicsAsset" }, // 805073527
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNodeRigidBodyLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNodeRigidBodyLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNodeRigidBodyLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNodeRigidBodyLibrary_Statics::ClassParams = {
	&UAnimNodeRigidBodyLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNodeRigidBodyLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNodeRigidBodyLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNodeRigidBodyLibrary()
{
	if (!Z_Registration_Info_UClass_UAnimNodeRigidBodyLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNodeRigidBodyLibrary.OuterSingleton, Z_Construct_UClass_UAnimNodeRigidBodyLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNodeRigidBodyLibrary.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimNodeRigidBodyLibrary>()
{
	return UAnimNodeRigidBodyLibrary::StaticClass();
}
UAnimNodeRigidBodyLibrary::UAnimNodeRigidBodyLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNodeRigidBodyLibrary);
UAnimNodeRigidBodyLibrary::~UAnimNodeRigidBodyLibrary() {}
// End Class UAnimNodeRigidBodyLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigidBodyAnimNodeReference::StaticStruct, Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference_Statics::NewStructOps, TEXT("RigidBodyAnimNodeReference"), &Z_Registration_Info_UScriptStruct_RigidBodyAnimNodeReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigidBodyAnimNodeReference), 1380019152U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNodeRigidBodyLibrary, UAnimNodeRigidBodyLibrary::StaticClass, TEXT("UAnimNodeRigidBodyLibrary"), &Z_Registration_Info_UClass_UAnimNodeRigidBodyLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNodeRigidBodyLibrary), 2934776710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_2096213572(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
