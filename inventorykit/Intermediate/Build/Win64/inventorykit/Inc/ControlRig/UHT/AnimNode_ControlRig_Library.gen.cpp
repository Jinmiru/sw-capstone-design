// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/AnimNode_ControlRig_Library.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRig_Library() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UAnimNodeControlRigLibrary();
CONTROLRIG_API UClass* Z_Construct_UClass_UAnimNodeControlRigLibrary_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigReference();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FControlRigReference
static_assert(std::is_polymorphic<FControlRigReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FControlRigReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigReference;
class UScriptStruct* FControlRigReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigReference, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigReference"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigReference.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigReference>()
{
	return FControlRigReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig_Library.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"ControlRigReference",
	nullptr,
	0,
	sizeof(FControlRigReference),
	alignof(FControlRigReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigReference()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigReference.InnerSingleton, Z_Construct_UScriptStruct_FControlRigReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigReference.InnerSingleton;
}
// End ScriptStruct FControlRigReference

// Begin Class UAnimNodeControlRigLibrary Function ConvertToControlRig
struct Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics
{
	struct AnimNodeControlRigLibrary_eventConvertToControlRig_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FControlRigReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|ControlRig" },
		{ "Comment", "/** Get a control rig context from an anim node context */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig_Library.h" },
		{ "ToolTip", "Get a control rig context from an anim node context" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeControlRigLibrary_eventConvertToControlRig_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeControlRigLibrary_eventConvertToControlRig_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeControlRigLibrary_eventConvertToControlRig_Parms, ReturnValue), Z_Construct_UScriptStruct_FControlRigReference, METADATA_PARAMS(0, nullptr) }; // 2471790023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNodeControlRigLibrary, nullptr, "ConvertToControlRig", nullptr, nullptr, Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::AnimNodeControlRigLibrary_eventConvertToControlRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::AnimNodeControlRigLibrary_eventConvertToControlRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNodeControlRigLibrary::execConvertToControlRig)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FControlRigReference*)Z_Param__Result=UAnimNodeControlRigLibrary::ConvertToControlRig(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UAnimNodeControlRigLibrary Function ConvertToControlRig

// Begin Class UAnimNodeControlRigLibrary Function ConvertToControlRigPure
struct Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics
{
	struct AnimNodeControlRigLibrary_eventConvertToControlRigPure_Parms
	{
		FAnimNodeReference Node;
		FControlRigReference ControlRig;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|ControlRig" },
		{ "Comment", "/** Get a control rig context from an anim node context (pure) */" },
		{ "DisplayName", "Convert to Sequence Player" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig_Library.h" },
		{ "ToolTip", "Get a control rig context from an anim node context (pure)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRig;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeControlRigLibrary_eventConvertToControlRigPure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeControlRigLibrary_eventConvertToControlRigPure_Parms, ControlRig), Z_Construct_UScriptStruct_FControlRigReference, METADATA_PARAMS(0, nullptr) }; // 2471790023
void Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::NewProp_Result_SetBit(void* Obj)
{
	((AnimNodeControlRigLibrary_eventConvertToControlRigPure_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNodeControlRigLibrary_eventConvertToControlRigPure_Parms), &Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::NewProp_ControlRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNodeControlRigLibrary, nullptr, "ConvertToControlRigPure", nullptr, nullptr, Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::AnimNodeControlRigLibrary_eventConvertToControlRigPure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::AnimNodeControlRigLibrary_eventConvertToControlRigPure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNodeControlRigLibrary::execConvertToControlRigPure)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FControlRigReference,Z_Param_Out_ControlRig);
	P_GET_UBOOL_REF(Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAnimNodeControlRigLibrary::ConvertToControlRigPure(Z_Param_Out_Node,Z_Param_Out_ControlRig,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UAnimNodeControlRigLibrary Function ConvertToControlRigPure

// Begin Class UAnimNodeControlRigLibrary Function SetControlRigClass
struct Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics
{
	struct AnimNodeControlRigLibrary_eventSetControlRigClass_Parms
	{
		FControlRigReference Node;
		TSubclassOf<UControlRig> ControlRigClass;
		FControlRigReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|ControlRig" },
		{ "Comment", "/** Set the control rig class on the node */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig_Library.h" },
		{ "ToolTip", "Set the control rig class on the node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControlRigClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeControlRigLibrary_eventSetControlRigClass_Parms, Node), Z_Construct_UScriptStruct_FControlRigReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2471790023
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::NewProp_ControlRigClass = { "ControlRigClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeControlRigLibrary_eventSetControlRigClass_Parms, ControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNodeControlRigLibrary_eventSetControlRigClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FControlRigReference, METADATA_PARAMS(0, nullptr) }; // 2471790023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::NewProp_ControlRigClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNodeControlRigLibrary, nullptr, "SetControlRigClass", nullptr, nullptr, Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::AnimNodeControlRigLibrary_eventSetControlRigClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::AnimNodeControlRigLibrary_eventSetControlRigClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNodeControlRigLibrary::execSetControlRigClass)
{
	P_GET_STRUCT_REF(FControlRigReference,Z_Param_Out_Node);
	P_GET_OBJECT(UClass,Z_Param_ControlRigClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FControlRigReference*)Z_Param__Result=UAnimNodeControlRigLibrary::SetControlRigClass(Z_Param_Out_Node,Z_Param_ControlRigClass);
	P_NATIVE_END;
}
// End Class UAnimNodeControlRigLibrary Function SetControlRigClass

// Begin Class UAnimNodeControlRigLibrary
void UAnimNodeControlRigLibrary::StaticRegisterNativesUAnimNodeControlRigLibrary()
{
	UClass* Class = UAnimNodeControlRigLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToControlRig", &UAnimNodeControlRigLibrary::execConvertToControlRig },
		{ "ConvertToControlRigPure", &UAnimNodeControlRigLibrary::execConvertToControlRigPure },
		{ "SetControlRigClass", &UAnimNodeControlRigLibrary::execSetControlRigClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNodeControlRigLibrary);
UClass* Z_Construct_UClass_UAnimNodeControlRigLibrary_NoRegister()
{
	return UAnimNodeControlRigLibrary::StaticClass();
}
struct Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Exposes operations to be performed on a control rig anim node\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimNode_ControlRig_Library.h" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig_Library.h" },
		{ "ToolTip", "Exposes operations to be performed on a control rig anim node" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRig, "ConvertToControlRig" }, // 918661226
		{ &Z_Construct_UFunction_UAnimNodeControlRigLibrary_ConvertToControlRigPure, "ConvertToControlRigPure" }, // 4453391
		{ &Z_Construct_UFunction_UAnimNodeControlRigLibrary_SetControlRigClass, "SetControlRigClass" }, // 2489497782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNodeControlRigLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics::ClassParams = {
	&UAnimNodeControlRigLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNodeControlRigLibrary()
{
	if (!Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.OuterSingleton, Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNodeControlRigLibrary.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UAnimNodeControlRigLibrary>()
{
	return UAnimNodeControlRigLibrary::StaticClass();
}
UAnimNodeControlRigLibrary::UAnimNodeControlRigLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNodeControlRigLibrary);
UAnimNodeControlRigLibrary::~UAnimNodeControlRigLibrary() {}
// End Class UAnimNodeControlRigLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlRigReference::StaticStruct, Z_Construct_UScriptStruct_FControlRigReference_Statics::NewStructOps, TEXT("ControlRigReference"), &Z_Registration_Info_UScriptStruct_ControlRigReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigReference), 2471790023U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNodeControlRigLibrary, UAnimNodeControlRigLibrary::StaticClass, TEXT("UAnimNodeControlRigLibrary"), &Z_Registration_Info_UClass_UAnimNodeControlRigLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNodeControlRigLibrary), 2942771184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_2437356455(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
