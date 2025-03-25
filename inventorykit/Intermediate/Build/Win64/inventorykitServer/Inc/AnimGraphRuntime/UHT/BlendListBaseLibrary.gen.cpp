// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BlendListBaseLibrary.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendListBaseLibrary() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UBlendListBaseLibrary();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UBlendListBaseLibrary_NoRegister();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBlendListBaseReference();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FBlendListBaseReference
static_assert(std::is_polymorphic<FBlendListBaseReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FBlendListBaseReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendListBaseReference;
class UScriptStruct* FBlendListBaseReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendListBaseReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendListBaseReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendListBaseReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("BlendListBaseReference"));
	}
	return Z_Registration_Info_UScriptStruct_BlendListBaseReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FBlendListBaseReference>()
{
	return FBlendListBaseReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlendListBaseReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BlendListBaseLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendListBaseReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendListBaseReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"BlendListBaseReference",
	nullptr,
	0,
	sizeof(FBlendListBaseReference),
	alignof(FBlendListBaseReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendListBaseReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlendListBaseReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlendListBaseReference()
{
	if (!Z_Registration_Info_UScriptStruct_BlendListBaseReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendListBaseReference.InnerSingleton, Z_Construct_UScriptStruct_FBlendListBaseReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlendListBaseReference.InnerSingleton;
}
// End ScriptStruct FBlendListBaseReference

// Begin Class UBlendListBaseLibrary Function ConvertToBlendListBase
struct Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics
{
	struct BlendListBaseLibrary_eventConvertToBlendListBase_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FBlendListBaseReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend List Base" },
		{ "Comment", "/** Get a blend list base context from an anim node context. */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/BlendListBaseLibrary.h" },
		{ "ToolTip", "Get a blend list base context from an anim node context." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendListBaseLibrary_eventConvertToBlendListBase_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendListBaseLibrary_eventConvertToBlendListBase_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendListBaseLibrary_eventConvertToBlendListBase_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlendListBaseReference, METADATA_PARAMS(0, nullptr) }; // 1836370756
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendListBaseLibrary, nullptr, "ConvertToBlendListBase", nullptr, nullptr, Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::BlendListBaseLibrary_eventConvertToBlendListBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::BlendListBaseLibrary_eventConvertToBlendListBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendListBaseLibrary::execConvertToBlendListBase)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBlendListBaseReference*)Z_Param__Result=UBlendListBaseLibrary::ConvertToBlendListBase(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UBlendListBaseLibrary Function ConvertToBlendListBase

// Begin Class UBlendListBaseLibrary Function ResetNode
struct Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics
{
	struct BlendListBaseLibrary_eventResetNode_Parms
	{
		FBlendListBaseReference BlendListBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend List Base" },
		{ "Comment", "/** Reset target blend list node to that the next blend is executed from a blank state */" },
		{ "ModuleRelativePath", "Public/BlendListBaseLibrary.h" },
		{ "ToolTip", "Reset target blend list node to that the next blend is executed from a blank state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendListBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendListBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::NewProp_BlendListBase = { "BlendListBase", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlendListBaseLibrary_eventResetNode_Parms, BlendListBase), Z_Construct_UScriptStruct_FBlendListBaseReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendListBase_MetaData), NewProp_BlendListBase_MetaData) }; // 1836370756
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::NewProp_BlendListBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendListBaseLibrary, nullptr, "ResetNode", nullptr, nullptr, Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::BlendListBaseLibrary_eventResetNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::BlendListBaseLibrary_eventResetNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlendListBaseLibrary::execResetNode)
{
	P_GET_STRUCT_REF(FBlendListBaseReference,Z_Param_Out_BlendListBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlendListBaseLibrary::ResetNode(Z_Param_Out_BlendListBase);
	P_NATIVE_END;
}
// End Class UBlendListBaseLibrary Function ResetNode

// Begin Class UBlendListBaseLibrary
void UBlendListBaseLibrary::StaticRegisterNativesUBlendListBaseLibrary()
{
	UClass* Class = UBlendListBaseLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertToBlendListBase", &UBlendListBaseLibrary::execConvertToBlendListBase },
		{ "ResetNode", &UBlendListBaseLibrary::execResetNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendListBaseLibrary);
UClass* Z_Construct_UClass_UBlendListBaseLibrary_NoRegister()
{
	return UBlendListBaseLibrary::StaticClass();
}
struct Z_Construct_UClass_UBlendListBaseLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Exposes operations to be performed on anim state machine node contexts\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "BlendListBaseLibrary.h" },
		{ "ModuleRelativePath", "Public/BlendListBaseLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on anim state machine node contexts" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlendListBaseLibrary_ConvertToBlendListBase, "ConvertToBlendListBase" }, // 2255353310
		{ &Z_Construct_UFunction_UBlendListBaseLibrary_ResetNode, "ResetNode" }, // 2428794758
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendListBaseLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlendListBaseLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendListBaseLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendListBaseLibrary_Statics::ClassParams = {
	&UBlendListBaseLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendListBaseLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlendListBaseLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlendListBaseLibrary()
{
	if (!Z_Registration_Info_UClass_UBlendListBaseLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendListBaseLibrary.OuterSingleton, Z_Construct_UClass_UBlendListBaseLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlendListBaseLibrary.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UBlendListBaseLibrary>()
{
	return UBlendListBaseLibrary::StaticClass();
}
UBlendListBaseLibrary::UBlendListBaseLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendListBaseLibrary);
UBlendListBaseLibrary::~UBlendListBaseLibrary() {}
// End Class UBlendListBaseLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlendListBaseReference::StaticStruct, Z_Construct_UScriptStruct_FBlendListBaseReference_Statics::NewStructOps, TEXT("BlendListBaseReference"), &Z_Registration_Info_UScriptStruct_BlendListBaseReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendListBaseReference), 1836370756U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlendListBaseLibrary, UBlendListBaseLibrary::StaticClass, TEXT("UBlendListBaseLibrary"), &Z_Registration_Info_UClass_UBlendListBaseLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendListBaseLibrary), 3484817100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_2012276684(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
