// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeMaterialFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMaterialFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERefractionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucencyLightingMode();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeBaseMaterialFactoryNode Function GetCustomIsMaterialImportEnabled
struct Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics
{
	struct InterchangeBaseMaterialFactoryNode_eventGetCustomIsMaterialImportEnabled_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeBaseMaterialFactoryNode_eventGetCustomIsMaterialImportEnabled_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseMaterialFactoryNode_eventGetCustomIsMaterialImportEnabled_Parms), &Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseMaterialFactoryNode_eventGetCustomIsMaterialImportEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseMaterialFactoryNode_eventGetCustomIsMaterialImportEnabled_Parms), &Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode, nullptr, "GetCustomIsMaterialImportEnabled", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::InterchangeBaseMaterialFactoryNode_eventGetCustomIsMaterialImportEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::InterchangeBaseMaterialFactoryNode_eventGetCustomIsMaterialImportEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseMaterialFactoryNode::execGetCustomIsMaterialImportEnabled)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomIsMaterialImportEnabled(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseMaterialFactoryNode Function GetCustomIsMaterialImportEnabled

// Begin Class UInterchangeBaseMaterialFactoryNode Function SetCustomIsMaterialImportEnabled
struct Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics
{
	struct InterchangeBaseMaterialFactoryNode_eventSetCustomIsMaterialImportEnabled_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/** Sets if this shader graph should be rendered two sided or not. Defaults to off. */" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
		{ "ToolTip", "Sets if this shader graph should be rendered two sided or not. Defaults to off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeBaseMaterialFactoryNode_eventSetCustomIsMaterialImportEnabled_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseMaterialFactoryNode_eventSetCustomIsMaterialImportEnabled_Parms), &Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseMaterialFactoryNode_eventSetCustomIsMaterialImportEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseMaterialFactoryNode_eventSetCustomIsMaterialImportEnabled_Parms), &Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode, nullptr, "SetCustomIsMaterialImportEnabled", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::InterchangeBaseMaterialFactoryNode_eventSetCustomIsMaterialImportEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::InterchangeBaseMaterialFactoryNode_eventSetCustomIsMaterialImportEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseMaterialFactoryNode::execSetCustomIsMaterialImportEnabled)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomIsMaterialImportEnabled(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseMaterialFactoryNode Function SetCustomIsMaterialImportEnabled

// Begin Class UInterchangeBaseMaterialFactoryNode
void UInterchangeBaseMaterialFactoryNode::StaticRegisterNativesUInterchangeBaseMaterialFactoryNode()
{
	UClass* Class = UInterchangeBaseMaterialFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomIsMaterialImportEnabled", &UInterchangeBaseMaterialFactoryNode::execGetCustomIsMaterialImportEnabled },
		{ "SetCustomIsMaterialImportEnabled", &UInterchangeBaseMaterialFactoryNode::execSetCustomIsMaterialImportEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeBaseMaterialFactoryNode);
UClass* Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister()
{
	return UInterchangeBaseMaterialFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InterchangeMaterialFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_GetCustomIsMaterialImportEnabled, "GetCustomIsMaterialImportEnabled" }, // 2653398783
		{ &Z_Construct_UFunction_UInterchangeBaseMaterialFactoryNode_SetCustomIsMaterialImportEnabled, "SetCustomIsMaterialImportEnabled" }, // 2733244521
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeBaseMaterialFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics::ClassParams = {
	&UInterchangeBaseMaterialFactoryNode::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeBaseMaterialFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeBaseMaterialFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeBaseMaterialFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeBaseMaterialFactoryNode>()
{
	return UInterchangeBaseMaterialFactoryNode::StaticClass();
}
UInterchangeBaseMaterialFactoryNode::UInterchangeBaseMaterialFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeBaseMaterialFactoryNode);
UInterchangeBaseMaterialFactoryNode::~UInterchangeBaseMaterialFactoryNode() {}
// End Class UInterchangeBaseMaterialFactoryNode

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToAnisotropy
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToAnisotropy_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToAnisotropy_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToAnisotropy_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToAnisotropy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToAnisotropy_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToAnisotropy", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToAnisotropy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToAnisotropy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToAnisotropy)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToAnisotropy(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToAnisotropy

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToBaseColor
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToBaseColor_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToBaseColor_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToBaseColor_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToBaseColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToBaseColor_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToBaseColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToBaseColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToBaseColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToBaseColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToBaseColor(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToBaseColor

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToClearCoat
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToClearCoat_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToClearCoat_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToClearCoat_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToClearCoat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToClearCoat_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToClearCoat", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToClearCoat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToClearCoat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToClearCoat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToClearCoat(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToClearCoat

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToClearCoatNormal
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatNormal_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatNormal_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatNormal_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatNormal_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToClearCoatNormal", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToClearCoatNormal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToClearCoatNormal(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToClearCoatNormal

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToClearCoatRoughness
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatRoughness_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatRoughness_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatRoughness_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatRoughness_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatRoughness_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToClearCoatRoughness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatRoughness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToClearCoatRoughness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToClearCoatRoughness)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToClearCoatRoughness(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToClearCoatRoughness

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToCloth
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToCloth_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToCloth_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToCloth_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToCloth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToCloth_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToCloth", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToCloth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToCloth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToCloth)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToCloth(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToCloth

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToEmissiveColor
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToEmissiveColor_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToEmissiveColor_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToEmissiveColor_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToEmissiveColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToEmissiveColor_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToEmissiveColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToEmissiveColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToEmissiveColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToEmissiveColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToEmissiveColor(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToEmissiveColor

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToFuzzColor
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToFuzzColor_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToFuzzColor_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToFuzzColor_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToFuzzColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToFuzzColor_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToFuzzColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToFuzzColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToFuzzColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToFuzzColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToFuzzColor(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToFuzzColor

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToMetallic
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToMetallic_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToMetallic_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToMetallic_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToMetallic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToMetallic_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToMetallic", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToMetallic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToMetallic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToMetallic)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToMetallic(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToMetallic

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToNormal
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToNormal_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToNormal_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToNormal_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToNormal_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToNormal", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToNormal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToNormal(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToNormal

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToOcclusion
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToOcclusion_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToOcclusion_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToOcclusion_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToOcclusion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToOcclusion_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToOcclusion", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToOcclusion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToOcclusion(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToOcclusion

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToOpacity
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToOpacity_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToOpacity_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToOpacity_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToOpacity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToOpacity_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToOpacity", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToOpacity)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToOpacity(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToOpacity

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToRefraction
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToRefraction_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToRefraction_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToRefraction_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToRefraction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToRefraction_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToRefraction", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToRefraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToRefraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToRefraction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToRefraction(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToRefraction

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToRoughness
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToRoughness_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToRoughness_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToRoughness_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToRoughness_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToRoughness_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToRoughness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToRoughness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToRoughness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToRoughness)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToRoughness(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToRoughness

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToSpecular
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToSpecular_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToSpecular_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToSpecular_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToSpecular_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToSpecular_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToSpecular", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToSpecular_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToSpecular_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToSpecular)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToSpecular(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToSpecular

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToSubsurface
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToSubsurface_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToSubsurface_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToSubsurface_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToSubsurface_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToSubsurface_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToSubsurface", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToSubsurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToSubsurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToSubsurface)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToSubsurface(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToSubsurface

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToTangent
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToTangent_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToTangent_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToTangent_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToTangent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToTangent_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToTangent", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToTangent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToTangent(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToTangent

// Begin Class UInterchangeMaterialFactoryNode Function ConnectOutputToTransmissionColor
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectOutputToTransmissionColor_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToTransmissionColor_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectOutputToTransmissionColor_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectOutputToTransmissionColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectOutputToTransmissionColor_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectOutputToTransmissionColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToTransmissionColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::InterchangeMaterialFactoryNode_eventConnectOutputToTransmissionColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectOutputToTransmissionColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectOutputToTransmissionColor(Z_Param_ExpressionNodeUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectOutputToTransmissionColor

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToAnisotropy
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToAnisotropy_Parms
	{
		FString ExpressionNodeUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToAnisotropy_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToAnisotropy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToAnisotropy_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToAnisotropy", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::InterchangeMaterialFactoryNode_eventConnectToAnisotropy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::InterchangeMaterialFactoryNode_eventConnectToAnisotropy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToAnisotropy)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToAnisotropy(Z_Param_ExpressionNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToAnisotropy

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToBaseColor
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToBaseColor_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToBaseColor_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToBaseColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToBaseColor_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToBaseColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::InterchangeMaterialFactoryNode_eventConnectToBaseColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::InterchangeMaterialFactoryNode_eventConnectToBaseColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToBaseColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToBaseColor(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToBaseColor

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToClearCoat
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToClearCoat_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToClearCoat_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToClearCoat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToClearCoat_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToClearCoat", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::InterchangeMaterialFactoryNode_eventConnectToClearCoat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::InterchangeMaterialFactoryNode_eventConnectToClearCoat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToClearCoat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToClearCoat(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToClearCoat

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToClearCoatNormal
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToClearCoatNormal_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToClearCoatNormal_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToClearCoatNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToClearCoatNormal_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToClearCoatNormal", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::InterchangeMaterialFactoryNode_eventConnectToClearCoatNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::InterchangeMaterialFactoryNode_eventConnectToClearCoatNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToClearCoatNormal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToClearCoatNormal(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToClearCoatNormal

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToClearCoatRoughness
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToClearCoatRoughness_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToClearCoatRoughness_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToClearCoatRoughness_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToClearCoatRoughness_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToClearCoatRoughness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::InterchangeMaterialFactoryNode_eventConnectToClearCoatRoughness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::InterchangeMaterialFactoryNode_eventConnectToClearCoatRoughness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToClearCoatRoughness)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToClearCoatRoughness(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToClearCoatRoughness

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToCloth
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToCloth_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToCloth_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToCloth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToCloth_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToCloth", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::InterchangeMaterialFactoryNode_eventConnectToCloth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::InterchangeMaterialFactoryNode_eventConnectToCloth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToCloth)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToCloth(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToCloth

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToEmissiveColor
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToEmissiveColor_Parms
	{
		FString ExpressionNodeUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToEmissiveColor_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToEmissiveColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToEmissiveColor_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToEmissiveColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::InterchangeMaterialFactoryNode_eventConnectToEmissiveColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::InterchangeMaterialFactoryNode_eventConnectToEmissiveColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToEmissiveColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToEmissiveColor(Z_Param_ExpressionNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToEmissiveColor

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToFuzzColor
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToFuzzColor_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToFuzzColor_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToFuzzColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToFuzzColor_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToFuzzColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::InterchangeMaterialFactoryNode_eventConnectToFuzzColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::InterchangeMaterialFactoryNode_eventConnectToFuzzColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToFuzzColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToFuzzColor(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToFuzzColor

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToMetallic
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToMetallic_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToMetallic_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToMetallic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToMetallic_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToMetallic", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::InterchangeMaterialFactoryNode_eventConnectToMetallic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::InterchangeMaterialFactoryNode_eventConnectToMetallic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToMetallic)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToMetallic(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToMetallic

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToNormal
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToNormal_Parms
	{
		FString ExpressionNodeUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToNormal_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToNormal_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToNormal", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::InterchangeMaterialFactoryNode_eventConnectToNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::InterchangeMaterialFactoryNode_eventConnectToNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToNormal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToNormal(Z_Param_ExpressionNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToNormal

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToOcclusion
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToOcclusion_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToOcclusion_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToOcclusion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToOcclusion_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToOcclusion", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::InterchangeMaterialFactoryNode_eventConnectToOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::InterchangeMaterialFactoryNode_eventConnectToOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToOcclusion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToOcclusion(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToOcclusion

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToOpacity
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToOpacity_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToOpacity_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToOpacity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToOpacity_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToOpacity", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::InterchangeMaterialFactoryNode_eventConnectToOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::InterchangeMaterialFactoryNode_eventConnectToOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToOpacity)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToOpacity(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToOpacity

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToRefraction
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToRefraction_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToRefraction_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToRefraction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToRefraction_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToRefraction", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::InterchangeMaterialFactoryNode_eventConnectToRefraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::InterchangeMaterialFactoryNode_eventConnectToRefraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToRefraction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToRefraction(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToRefraction

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToRoughness
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToRoughness_Parms
	{
		FString ExpressionNodeUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToRoughness_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToRoughness_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToRoughness_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToRoughness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::InterchangeMaterialFactoryNode_eventConnectToRoughness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::InterchangeMaterialFactoryNode_eventConnectToRoughness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToRoughness)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToRoughness(Z_Param_ExpressionNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToRoughness

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToSpecular
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToSpecular_Parms
	{
		FString ExpressionNodeUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToSpecular_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToSpecular_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToSpecular_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToSpecular", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::InterchangeMaterialFactoryNode_eventConnectToSpecular_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::InterchangeMaterialFactoryNode_eventConnectToSpecular_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToSpecular)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToSpecular(Z_Param_ExpressionNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToSpecular

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToSubsurface
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToSubsurface_Parms
	{
		FString ExpressionNodeUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToSubsurface_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToSubsurface_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToSubsurface_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToSubsurface", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::InterchangeMaterialFactoryNode_eventConnectToSubsurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::InterchangeMaterialFactoryNode_eventConnectToSubsurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToSubsurface)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToSubsurface(Z_Param_ExpressionNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToSubsurface

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToTangent
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToTangent_Parms
	{
		FString ExpressionNodeUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToTangent_Parms, ExpressionNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionNodeUid_MetaData), NewProp_ExpressionNodeUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToTangent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToTangent_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToTangent", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::InterchangeMaterialFactoryNode_eventConnectToTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::InterchangeMaterialFactoryNode_eventConnectToTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToTangent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToTangent(Z_Param_ExpressionNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToTangent

// Begin Class UInterchangeMaterialFactoryNode Function ConnectToTransmissionColor
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics
{
	struct InterchangeMaterialFactoryNode_eventConnectToTransmissionColor_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventConnectToTransmissionColor_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventConnectToTransmissionColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventConnectToTransmissionColor_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "ConnectToTransmissionColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::InterchangeMaterialFactoryNode_eventConnectToTransmissionColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::InterchangeMaterialFactoryNode_eventConnectToTransmissionColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execConnectToTransmissionColor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToTransmissionColor(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function ConnectToTransmissionColor

// Begin Class UInterchangeMaterialFactoryNode Function GetAnisotropyConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetAnisotropyConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetAnisotropyConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetAnisotropyConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetAnisotropyConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetAnisotropyConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetAnisotropyConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::InterchangeMaterialFactoryNode_eventGetAnisotropyConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::InterchangeMaterialFactoryNode_eventGetAnisotropyConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetAnisotropyConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAnisotropyConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetAnisotropyConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetBaseColorConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetBaseColorConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetBaseColorConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetBaseColorConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetBaseColorConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetBaseColorConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetBaseColorConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::InterchangeMaterialFactoryNode_eventGetBaseColorConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::InterchangeMaterialFactoryNode_eventGetBaseColorConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetBaseColorConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBaseColorConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetBaseColorConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetClearCoatConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetClearCoatConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetClearCoatConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetClearCoatConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetClearCoatConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetClearCoatConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetClearCoatConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::InterchangeMaterialFactoryNode_eventGetClearCoatConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::InterchangeMaterialFactoryNode_eventGetClearCoatConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetClearCoatConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetClearCoatConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetClearCoatConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetClearCoatNormalConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetClearCoatNormalConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetClearCoatNormalConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetClearCoatNormalConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetClearCoatNormalConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetClearCoatNormalConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetClearCoatNormalConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::InterchangeMaterialFactoryNode_eventGetClearCoatNormalConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::InterchangeMaterialFactoryNode_eventGetClearCoatNormalConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetClearCoatNormalConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetClearCoatNormalConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetClearCoatNormalConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetClearCoatRoughnessConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetClearCoatRoughnessConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetClearCoatRoughnessConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetClearCoatRoughnessConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetClearCoatRoughnessConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetClearCoatRoughnessConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetClearCoatRoughnessConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::InterchangeMaterialFactoryNode_eventGetClearCoatRoughnessConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::InterchangeMaterialFactoryNode_eventGetClearCoatRoughnessConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetClearCoatRoughnessConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetClearCoatRoughnessConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetClearCoatRoughnessConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetClothConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetClothConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetClothConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetClothConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetClothConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetClothConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetClothConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::InterchangeMaterialFactoryNode_eventGetClothConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::InterchangeMaterialFactoryNode_eventGetClothConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetClothConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetClothConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetClothConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetCustomBlendMode
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetCustomBlendMode_Parms
	{
		TEnumAsByte<EBlendMode> AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetCustomBlendMode_Parms, AttributeValue), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(0, nullptr) }; // 1831819339
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetCustomBlendMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetCustomBlendMode_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetCustomBlendMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::InterchangeMaterialFactoryNode_eventGetCustomBlendMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::InterchangeMaterialFactoryNode_eventGetCustomBlendMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetCustomBlendMode)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomBlendMode((TEnumAsByte<EBlendMode>&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetCustomBlendMode

// Begin Class UInterchangeMaterialFactoryNode Function GetCustomOpacityMaskClipValue
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetCustomOpacityMaskClipValue_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetCustomOpacityMaskClipValue_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetCustomOpacityMaskClipValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetCustomOpacityMaskClipValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetCustomOpacityMaskClipValue", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::InterchangeMaterialFactoryNode_eventGetCustomOpacityMaskClipValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::InterchangeMaterialFactoryNode_eventGetCustomOpacityMaskClipValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetCustomOpacityMaskClipValue)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomOpacityMaskClipValue(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetCustomOpacityMaskClipValue

// Begin Class UInterchangeMaterialFactoryNode Function GetCustomRefractionMethod
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetCustomRefractionMethod_Parms
	{
		TEnumAsByte<ERefractionMode> AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetCustomRefractionMethod_Parms, AttributeValue), Z_Construct_UEnum_Engine_ERefractionMode, METADATA_PARAMS(0, nullptr) }; // 2908799328
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetCustomRefractionMethod_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetCustomRefractionMethod_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetCustomRefractionMethod", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::InterchangeMaterialFactoryNode_eventGetCustomRefractionMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::InterchangeMaterialFactoryNode_eventGetCustomRefractionMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetCustomRefractionMethod)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRefractionMethod((TEnumAsByte<ERefractionMode>&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetCustomRefractionMethod

// Begin Class UInterchangeMaterialFactoryNode Function GetCustomScreenSpaceReflections
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetCustomScreenSpaceReflections_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetCustomScreenSpaceReflections_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetCustomScreenSpaceReflections_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetCustomScreenSpaceReflections_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetCustomScreenSpaceReflections_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetCustomScreenSpaceReflections", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::InterchangeMaterialFactoryNode_eventGetCustomScreenSpaceReflections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::InterchangeMaterialFactoryNode_eventGetCustomScreenSpaceReflections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetCustomScreenSpaceReflections)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomScreenSpaceReflections(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetCustomScreenSpaceReflections

// Begin Class UInterchangeMaterialFactoryNode Function GetCustomShadingModel
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetCustomShadingModel_Parms
	{
		TEnumAsByte<EMaterialShadingModel> AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetCustomShadingModel_Parms, AttributeValue), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(0, nullptr) }; // 1797132865
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetCustomShadingModel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetCustomShadingModel_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetCustomShadingModel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::InterchangeMaterialFactoryNode_eventGetCustomShadingModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::InterchangeMaterialFactoryNode_eventGetCustomShadingModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetCustomShadingModel)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomShadingModel((TEnumAsByte<EMaterialShadingModel>&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetCustomShadingModel

// Begin Class UInterchangeMaterialFactoryNode Function GetCustomTranslucencyLightingMode
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetCustomTranslucencyLightingMode_Parms
	{
		TEnumAsByte<ETranslucencyLightingMode> AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetCustomTranslucencyLightingMode_Parms, AttributeValue), Z_Construct_UEnum_Engine_ETranslucencyLightingMode, METADATA_PARAMS(0, nullptr) }; // 317201720
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetCustomTranslucencyLightingMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetCustomTranslucencyLightingMode_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetCustomTranslucencyLightingMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::InterchangeMaterialFactoryNode_eventGetCustomTranslucencyLightingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::InterchangeMaterialFactoryNode_eventGetCustomTranslucencyLightingMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetCustomTranslucencyLightingMode)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomTranslucencyLightingMode((TEnumAsByte<ETranslucencyLightingMode>&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetCustomTranslucencyLightingMode

// Begin Class UInterchangeMaterialFactoryNode Function GetCustomTwoSided
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetCustomTwoSided_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetCustomTwoSided_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetCustomTwoSided_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetCustomTwoSided", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::InterchangeMaterialFactoryNode_eventGetCustomTwoSided_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::InterchangeMaterialFactoryNode_eventGetCustomTwoSided_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetCustomTwoSided)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomTwoSided(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetCustomTwoSided

// Begin Class UInterchangeMaterialFactoryNode Function GetEmissiveColorConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetEmissiveColorConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetEmissiveColorConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetEmissiveColorConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetEmissiveColorConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetEmissiveColorConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetEmissiveColorConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::InterchangeMaterialFactoryNode_eventGetEmissiveColorConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::InterchangeMaterialFactoryNode_eventGetEmissiveColorConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetEmissiveColorConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEmissiveColorConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetEmissiveColorConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetFuzzColorConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetFuzzColorConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetFuzzColorConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetFuzzColorConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetFuzzColorConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetFuzzColorConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetFuzzColorConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::InterchangeMaterialFactoryNode_eventGetFuzzColorConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::InterchangeMaterialFactoryNode_eventGetFuzzColorConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetFuzzColorConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFuzzColorConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetFuzzColorConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetMetallicConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetMetallicConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetMetallicConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetMetallicConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetMetallicConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetMetallicConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetMetallicConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::InterchangeMaterialFactoryNode_eventGetMetallicConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::InterchangeMaterialFactoryNode_eventGetMetallicConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetMetallicConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMetallicConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetMetallicConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetNormalConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetNormalConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetNormalConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetNormalConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetNormalConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetNormalConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetNormalConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::InterchangeMaterialFactoryNode_eventGetNormalConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::InterchangeMaterialFactoryNode_eventGetNormalConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetNormalConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNormalConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetNormalConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetObjectClass
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetObjectClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::InterchangeMaterialFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::InterchangeMaterialFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetObjectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetObjectClass

// Begin Class UInterchangeMaterialFactoryNode Function GetOcclusionConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetOcclusionConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetOcclusionConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetOcclusionConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetOcclusionConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetOcclusionConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetOcclusionConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::InterchangeMaterialFactoryNode_eventGetOcclusionConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::InterchangeMaterialFactoryNode_eventGetOcclusionConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetOcclusionConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetOcclusionConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetOcclusionConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetOpacityConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetOpacityConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetOpacityConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetOpacityConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetOpacityConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetOpacityConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetOpacityConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::InterchangeMaterialFactoryNode_eventGetOpacityConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::InterchangeMaterialFactoryNode_eventGetOpacityConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetOpacityConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetOpacityConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetOpacityConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetRefractionConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetRefractionConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetRefractionConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetRefractionConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetRefractionConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetRefractionConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetRefractionConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::InterchangeMaterialFactoryNode_eventGetRefractionConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::InterchangeMaterialFactoryNode_eventGetRefractionConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetRefractionConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRefractionConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetRefractionConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetRoughnessConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetRoughnessConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetRoughnessConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetRoughnessConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetRoughnessConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetRoughnessConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetRoughnessConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::InterchangeMaterialFactoryNode_eventGetRoughnessConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::InterchangeMaterialFactoryNode_eventGetRoughnessConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetRoughnessConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRoughnessConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetRoughnessConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetSpecularConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetSpecularConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetSpecularConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetSpecularConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetSpecularConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetSpecularConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetSpecularConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::InterchangeMaterialFactoryNode_eventGetSpecularConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::InterchangeMaterialFactoryNode_eventGetSpecularConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetSpecularConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSpecularConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetSpecularConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetSubsurfaceConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetSubsurfaceConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetSubsurfaceConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetSubsurfaceConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetSubsurfaceConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetSubsurfaceConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetSubsurfaceConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::InterchangeMaterialFactoryNode_eventGetSubsurfaceConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::InterchangeMaterialFactoryNode_eventGetSubsurfaceConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetSubsurfaceConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSubsurfaceConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetSubsurfaceConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetTangentConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetTangentConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetTangentConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetTangentConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetTangentConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetTangentConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetTangentConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::InterchangeMaterialFactoryNode_eventGetTangentConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::InterchangeMaterialFactoryNode_eventGetTangentConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetTangentConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTangentConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetTangentConnection

// Begin Class UInterchangeMaterialFactoryNode Function GetTransmissionColorConnection
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics
{
	struct InterchangeMaterialFactoryNode_eventGetTransmissionColorConnection_Parms
	{
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetTransmissionColorConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventGetTransmissionColorConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventGetTransmissionColorConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventGetTransmissionColorConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "GetTransmissionColorConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::InterchangeMaterialFactoryNode_eventGetTransmissionColorConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::InterchangeMaterialFactoryNode_eventGetTransmissionColorConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execGetTransmissionColorConnection)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTransmissionColorConnection(Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function GetTransmissionColorConnection

// Begin Class UInterchangeMaterialFactoryNode Function SetCustomBlendMode
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics
{
	struct InterchangeMaterialFactoryNode_eventSetCustomBlendMode_Parms
	{
		TEnumAsByte<EBlendMode> AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventSetCustomBlendMode_Parms, AttributeValue), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 1831819339
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomBlendMode_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomBlendMode_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomBlendMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomBlendMode_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "SetCustomBlendMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::InterchangeMaterialFactoryNode_eventSetCustomBlendMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::InterchangeMaterialFactoryNode_eventSetCustomBlendMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execSetCustomBlendMode)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomBlendMode((TEnumAsByte<EBlendMode>&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function SetCustomBlendMode

// Begin Class UInterchangeMaterialFactoryNode Function SetCustomOpacityMaskClipValue
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics
{
	struct InterchangeMaterialFactoryNode_eventSetCustomOpacityMaskClipValue_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventSetCustomOpacityMaskClipValue_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomOpacityMaskClipValue_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomOpacityMaskClipValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomOpacityMaskClipValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomOpacityMaskClipValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "SetCustomOpacityMaskClipValue", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::InterchangeMaterialFactoryNode_eventSetCustomOpacityMaskClipValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::InterchangeMaterialFactoryNode_eventSetCustomOpacityMaskClipValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execSetCustomOpacityMaskClipValue)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomOpacityMaskClipValue(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function SetCustomOpacityMaskClipValue

// Begin Class UInterchangeMaterialFactoryNode Function SetCustomRefractionMethod
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics
{
	struct InterchangeMaterialFactoryNode_eventSetCustomRefractionMethod_Parms
	{
		TEnumAsByte<ERefractionMode> AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventSetCustomRefractionMethod_Parms, AttributeValue), Z_Construct_UEnum_Engine_ERefractionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 2908799328
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomRefractionMethod_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomRefractionMethod_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomRefractionMethod_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomRefractionMethod_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "SetCustomRefractionMethod", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::InterchangeMaterialFactoryNode_eventSetCustomRefractionMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::InterchangeMaterialFactoryNode_eventSetCustomRefractionMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execSetCustomRefractionMethod)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRefractionMethod((TEnumAsByte<ERefractionMode>&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function SetCustomRefractionMethod

// Begin Class UInterchangeMaterialFactoryNode Function SetCustomScreenSpaceReflections
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics
{
	struct InterchangeMaterialFactoryNode_eventSetCustomScreenSpaceReflections_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomScreenSpaceReflections_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomScreenSpaceReflections_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomScreenSpaceReflections_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomScreenSpaceReflections_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "SetCustomScreenSpaceReflections", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::InterchangeMaterialFactoryNode_eventSetCustomScreenSpaceReflections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::InterchangeMaterialFactoryNode_eventSetCustomScreenSpaceReflections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execSetCustomScreenSpaceReflections)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomScreenSpaceReflections(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function SetCustomScreenSpaceReflections

// Begin Class UInterchangeMaterialFactoryNode Function SetCustomShadingModel
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics
{
	struct InterchangeMaterialFactoryNode_eventSetCustomShadingModel_Parms
	{
		TEnumAsByte<EMaterialShadingModel> AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventSetCustomShadingModel_Parms, AttributeValue), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 1797132865
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomShadingModel_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomShadingModel_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomShadingModel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomShadingModel_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "SetCustomShadingModel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::InterchangeMaterialFactoryNode_eventSetCustomShadingModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::InterchangeMaterialFactoryNode_eventSetCustomShadingModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execSetCustomShadingModel)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomShadingModel((TEnumAsByte<EMaterialShadingModel>&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function SetCustomShadingModel

// Begin Class UInterchangeMaterialFactoryNode Function SetCustomTranslucencyLightingMode
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics
{
	struct InterchangeMaterialFactoryNode_eventSetCustomTranslucencyLightingMode_Parms
	{
		TEnumAsByte<ETranslucencyLightingMode> AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFactoryNode_eventSetCustomTranslucencyLightingMode_Parms, AttributeValue), Z_Construct_UEnum_Engine_ETranslucencyLightingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 317201720
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomTranslucencyLightingMode_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomTranslucencyLightingMode_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomTranslucencyLightingMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomTranslucencyLightingMode_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "SetCustomTranslucencyLightingMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::InterchangeMaterialFactoryNode_eventSetCustomTranslucencyLightingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::InterchangeMaterialFactoryNode_eventSetCustomTranslucencyLightingMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execSetCustomTranslucencyLightingMode)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomTranslucencyLightingMode((TEnumAsByte<ETranslucencyLightingMode>&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function SetCustomTranslucencyLightingMode

// Begin Class UInterchangeMaterialFactoryNode Function SetCustomTwoSided
struct Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics
{
	struct InterchangeMaterialFactoryNode_eventSetCustomTwoSided_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/** Sets if this shader graph should be rendered two sided or not. Defaults to off. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
		{ "ToolTip", "Sets if this shader graph should be rendered two sided or not. Defaults to off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomTwoSided_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomTwoSided_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFactoryNode_eventSetCustomTwoSided_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFactoryNode_eventSetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFactoryNode, nullptr, "SetCustomTwoSided", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::InterchangeMaterialFactoryNode_eventSetCustomTwoSided_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::InterchangeMaterialFactoryNode_eventSetCustomTwoSided_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFactoryNode::execSetCustomTwoSided)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomTwoSided(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFactoryNode Function SetCustomTwoSided

// Begin Class UInterchangeMaterialFactoryNode
void UInterchangeMaterialFactoryNode::StaticRegisterNativesUInterchangeMaterialFactoryNode()
{
	UClass* Class = UInterchangeMaterialFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectOutputToAnisotropy", &UInterchangeMaterialFactoryNode::execConnectOutputToAnisotropy },
		{ "ConnectOutputToBaseColor", &UInterchangeMaterialFactoryNode::execConnectOutputToBaseColor },
		{ "ConnectOutputToClearCoat", &UInterchangeMaterialFactoryNode::execConnectOutputToClearCoat },
		{ "ConnectOutputToClearCoatNormal", &UInterchangeMaterialFactoryNode::execConnectOutputToClearCoatNormal },
		{ "ConnectOutputToClearCoatRoughness", &UInterchangeMaterialFactoryNode::execConnectOutputToClearCoatRoughness },
		{ "ConnectOutputToCloth", &UInterchangeMaterialFactoryNode::execConnectOutputToCloth },
		{ "ConnectOutputToEmissiveColor", &UInterchangeMaterialFactoryNode::execConnectOutputToEmissiveColor },
		{ "ConnectOutputToFuzzColor", &UInterchangeMaterialFactoryNode::execConnectOutputToFuzzColor },
		{ "ConnectOutputToMetallic", &UInterchangeMaterialFactoryNode::execConnectOutputToMetallic },
		{ "ConnectOutputToNormal", &UInterchangeMaterialFactoryNode::execConnectOutputToNormal },
		{ "ConnectOutputToOcclusion", &UInterchangeMaterialFactoryNode::execConnectOutputToOcclusion },
		{ "ConnectOutputToOpacity", &UInterchangeMaterialFactoryNode::execConnectOutputToOpacity },
		{ "ConnectOutputToRefraction", &UInterchangeMaterialFactoryNode::execConnectOutputToRefraction },
		{ "ConnectOutputToRoughness", &UInterchangeMaterialFactoryNode::execConnectOutputToRoughness },
		{ "ConnectOutputToSpecular", &UInterchangeMaterialFactoryNode::execConnectOutputToSpecular },
		{ "ConnectOutputToSubsurface", &UInterchangeMaterialFactoryNode::execConnectOutputToSubsurface },
		{ "ConnectOutputToTangent", &UInterchangeMaterialFactoryNode::execConnectOutputToTangent },
		{ "ConnectOutputToTransmissionColor", &UInterchangeMaterialFactoryNode::execConnectOutputToTransmissionColor },
		{ "ConnectToAnisotropy", &UInterchangeMaterialFactoryNode::execConnectToAnisotropy },
		{ "ConnectToBaseColor", &UInterchangeMaterialFactoryNode::execConnectToBaseColor },
		{ "ConnectToClearCoat", &UInterchangeMaterialFactoryNode::execConnectToClearCoat },
		{ "ConnectToClearCoatNormal", &UInterchangeMaterialFactoryNode::execConnectToClearCoatNormal },
		{ "ConnectToClearCoatRoughness", &UInterchangeMaterialFactoryNode::execConnectToClearCoatRoughness },
		{ "ConnectToCloth", &UInterchangeMaterialFactoryNode::execConnectToCloth },
		{ "ConnectToEmissiveColor", &UInterchangeMaterialFactoryNode::execConnectToEmissiveColor },
		{ "ConnectToFuzzColor", &UInterchangeMaterialFactoryNode::execConnectToFuzzColor },
		{ "ConnectToMetallic", &UInterchangeMaterialFactoryNode::execConnectToMetallic },
		{ "ConnectToNormal", &UInterchangeMaterialFactoryNode::execConnectToNormal },
		{ "ConnectToOcclusion", &UInterchangeMaterialFactoryNode::execConnectToOcclusion },
		{ "ConnectToOpacity", &UInterchangeMaterialFactoryNode::execConnectToOpacity },
		{ "ConnectToRefraction", &UInterchangeMaterialFactoryNode::execConnectToRefraction },
		{ "ConnectToRoughness", &UInterchangeMaterialFactoryNode::execConnectToRoughness },
		{ "ConnectToSpecular", &UInterchangeMaterialFactoryNode::execConnectToSpecular },
		{ "ConnectToSubsurface", &UInterchangeMaterialFactoryNode::execConnectToSubsurface },
		{ "ConnectToTangent", &UInterchangeMaterialFactoryNode::execConnectToTangent },
		{ "ConnectToTransmissionColor", &UInterchangeMaterialFactoryNode::execConnectToTransmissionColor },
		{ "GetAnisotropyConnection", &UInterchangeMaterialFactoryNode::execGetAnisotropyConnection },
		{ "GetBaseColorConnection", &UInterchangeMaterialFactoryNode::execGetBaseColorConnection },
		{ "GetClearCoatConnection", &UInterchangeMaterialFactoryNode::execGetClearCoatConnection },
		{ "GetClearCoatNormalConnection", &UInterchangeMaterialFactoryNode::execGetClearCoatNormalConnection },
		{ "GetClearCoatRoughnessConnection", &UInterchangeMaterialFactoryNode::execGetClearCoatRoughnessConnection },
		{ "GetClothConnection", &UInterchangeMaterialFactoryNode::execGetClothConnection },
		{ "GetCustomBlendMode", &UInterchangeMaterialFactoryNode::execGetCustomBlendMode },
		{ "GetCustomOpacityMaskClipValue", &UInterchangeMaterialFactoryNode::execGetCustomOpacityMaskClipValue },
		{ "GetCustomRefractionMethod", &UInterchangeMaterialFactoryNode::execGetCustomRefractionMethod },
		{ "GetCustomScreenSpaceReflections", &UInterchangeMaterialFactoryNode::execGetCustomScreenSpaceReflections },
		{ "GetCustomShadingModel", &UInterchangeMaterialFactoryNode::execGetCustomShadingModel },
		{ "GetCustomTranslucencyLightingMode", &UInterchangeMaterialFactoryNode::execGetCustomTranslucencyLightingMode },
		{ "GetCustomTwoSided", &UInterchangeMaterialFactoryNode::execGetCustomTwoSided },
		{ "GetEmissiveColorConnection", &UInterchangeMaterialFactoryNode::execGetEmissiveColorConnection },
		{ "GetFuzzColorConnection", &UInterchangeMaterialFactoryNode::execGetFuzzColorConnection },
		{ "GetMetallicConnection", &UInterchangeMaterialFactoryNode::execGetMetallicConnection },
		{ "GetNormalConnection", &UInterchangeMaterialFactoryNode::execGetNormalConnection },
		{ "GetObjectClass", &UInterchangeMaterialFactoryNode::execGetObjectClass },
		{ "GetOcclusionConnection", &UInterchangeMaterialFactoryNode::execGetOcclusionConnection },
		{ "GetOpacityConnection", &UInterchangeMaterialFactoryNode::execGetOpacityConnection },
		{ "GetRefractionConnection", &UInterchangeMaterialFactoryNode::execGetRefractionConnection },
		{ "GetRoughnessConnection", &UInterchangeMaterialFactoryNode::execGetRoughnessConnection },
		{ "GetSpecularConnection", &UInterchangeMaterialFactoryNode::execGetSpecularConnection },
		{ "GetSubsurfaceConnection", &UInterchangeMaterialFactoryNode::execGetSubsurfaceConnection },
		{ "GetTangentConnection", &UInterchangeMaterialFactoryNode::execGetTangentConnection },
		{ "GetTransmissionColorConnection", &UInterchangeMaterialFactoryNode::execGetTransmissionColorConnection },
		{ "SetCustomBlendMode", &UInterchangeMaterialFactoryNode::execSetCustomBlendMode },
		{ "SetCustomOpacityMaskClipValue", &UInterchangeMaterialFactoryNode::execSetCustomOpacityMaskClipValue },
		{ "SetCustomRefractionMethod", &UInterchangeMaterialFactoryNode::execSetCustomRefractionMethod },
		{ "SetCustomScreenSpaceReflections", &UInterchangeMaterialFactoryNode::execSetCustomScreenSpaceReflections },
		{ "SetCustomShadingModel", &UInterchangeMaterialFactoryNode::execSetCustomShadingModel },
		{ "SetCustomTranslucencyLightingMode", &UInterchangeMaterialFactoryNode::execSetCustomTranslucencyLightingMode },
		{ "SetCustomTwoSided", &UInterchangeMaterialFactoryNode::execSetCustomTwoSided },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialFactoryNode);
UClass* Z_Construct_UClass_UInterchangeMaterialFactoryNode_NoRegister()
{
	return UInterchangeMaterialFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMaterialFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeMaterialFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy, "ConnectOutputToAnisotropy" }, // 3894121028
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor, "ConnectOutputToBaseColor" }, // 1973557107
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat, "ConnectOutputToClearCoat" }, // 2744317640
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal, "ConnectOutputToClearCoatNormal" }, // 961798978
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness, "ConnectOutputToClearCoatRoughness" }, // 537879449
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToCloth, "ConnectOutputToCloth" }, // 367358007
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor, "ConnectOutputToEmissiveColor" }, // 3036433278
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor, "ConnectOutputToFuzzColor" }, // 3308365916
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToMetallic, "ConnectOutputToMetallic" }, // 1479744514
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToNormal, "ConnectOutputToNormal" }, // 2202737695
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion, "ConnectOutputToOcclusion" }, // 3798798462
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToOpacity, "ConnectOutputToOpacity" }, // 4213175805
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRefraction, "ConnectOutputToRefraction" }, // 2437166314
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToRoughness, "ConnectOutputToRoughness" }, // 1223547149
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSpecular, "ConnectOutputToSpecular" }, // 4185292707
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface, "ConnectOutputToSubsurface" }, // 516511092
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTangent, "ConnectOutputToTangent" }, // 2396664978
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor, "ConnectOutputToTransmissionColor" }, // 1857275282
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToAnisotropy, "ConnectToAnisotropy" }, // 841891770
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToBaseColor, "ConnectToBaseColor" }, // 1232977735
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoat, "ConnectToClearCoat" }, // 1628603107
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal, "ConnectToClearCoatNormal" }, // 4174448691
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness, "ConnectToClearCoatRoughness" }, // 1680281492
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToCloth, "ConnectToCloth" }, // 1951569202
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToEmissiveColor, "ConnectToEmissiveColor" }, // 1987508020
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToFuzzColor, "ConnectToFuzzColor" }, // 3906112770
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToMetallic, "ConnectToMetallic" }, // 2535770759
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToNormal, "ConnectToNormal" }, // 2497465881
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOcclusion, "ConnectToOcclusion" }, // 604915763
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToOpacity, "ConnectToOpacity" }, // 3281887340
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRefraction, "ConnectToRefraction" }, // 2384551669
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToRoughness, "ConnectToRoughness" }, // 3362323079
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSpecular, "ConnectToSpecular" }, // 2689670096
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToSubsurface, "ConnectToSubsurface" }, // 264794277
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTangent, "ConnectToTangent" }, // 573852918
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_ConnectToTransmissionColor, "ConnectToTransmissionColor" }, // 467705526
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetAnisotropyConnection, "GetAnisotropyConnection" }, // 40180752
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetBaseColorConnection, "GetBaseColorConnection" }, // 3937455317
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatConnection, "GetClearCoatConnection" }, // 1732122191
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection, "GetClearCoatNormalConnection" }, // 1345809641
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection, "GetClearCoatRoughnessConnection" }, // 3610938165
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetClothConnection, "GetClothConnection" }, // 1517364028
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomBlendMode, "GetCustomBlendMode" }, // 1925522259
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue, "GetCustomOpacityMaskClipValue" }, // 802321155
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomRefractionMethod, "GetCustomRefractionMethod" }, // 2026374730
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections, "GetCustomScreenSpaceReflections" }, // 1335634557
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomShadingModel, "GetCustomShadingModel" }, // 3573750274
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode, "GetCustomTranslucencyLightingMode" }, // 4143901601
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetCustomTwoSided, "GetCustomTwoSided" }, // 3170895852
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetEmissiveColorConnection, "GetEmissiveColorConnection" }, // 832217307
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetFuzzColorConnection, "GetFuzzColorConnection" }, // 4136348935
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetMetallicConnection, "GetMetallicConnection" }, // 2369988308
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetNormalConnection, "GetNormalConnection" }, // 4103003711
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetObjectClass, "GetObjectClass" }, // 1074969047
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOcclusionConnection, "GetOcclusionConnection" }, // 2988022507
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetOpacityConnection, "GetOpacityConnection" }, // 2284492886
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRefractionConnection, "GetRefractionConnection" }, // 1455544457
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetRoughnessConnection, "GetRoughnessConnection" }, // 4139964996
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSpecularConnection, "GetSpecularConnection" }, // 1681526676
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetSubsurfaceConnection, "GetSubsurfaceConnection" }, // 825551229
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTangentConnection, "GetTangentConnection" }, // 4186123970
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_GetTransmissionColorConnection, "GetTransmissionColorConnection" }, // 2619834972
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomBlendMode, "SetCustomBlendMode" }, // 3346504765
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue, "SetCustomOpacityMaskClipValue" }, // 816144251
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomRefractionMethod, "SetCustomRefractionMethod" }, // 2875295409
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections, "SetCustomScreenSpaceReflections" }, // 2919493355
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomShadingModel, "SetCustomShadingModel" }, // 676543481
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode, "SetCustomTranslucencyLightingMode" }, // 2569137905
		{ &Z_Construct_UFunction_UInterchangeMaterialFactoryNode_SetCustomTwoSided, "SetCustomTwoSided" }, // 1517899452
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMaterialFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialFactoryNode_Statics::ClassParams = {
	&UInterchangeMaterialFactoryNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMaterialFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMaterialFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeMaterialFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMaterialFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeMaterialFactoryNode>()
{
	return UInterchangeMaterialFactoryNode::StaticClass();
}
UInterchangeMaterialFactoryNode::UInterchangeMaterialFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialFactoryNode);
UInterchangeMaterialFactoryNode::~UInterchangeMaterialFactoryNode() {}
// End Class UInterchangeMaterialFactoryNode

// Begin Class UInterchangeMaterialExpressionFactoryNode Function GetCustomExpressionClassName
struct Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics
{
	struct InterchangeMaterialExpressionFactoryNode_eventGetCustomExpressionClassName_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialExpressionFactoryNode_eventGetCustomExpressionClassName_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialExpressionFactoryNode_eventGetCustomExpressionClassName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialExpressionFactoryNode_eventGetCustomExpressionClassName_Parms), &Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode, nullptr, "GetCustomExpressionClassName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::InterchangeMaterialExpressionFactoryNode_eventGetCustomExpressionClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::InterchangeMaterialExpressionFactoryNode_eventGetCustomExpressionClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialExpressionFactoryNode::execGetCustomExpressionClassName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomExpressionClassName(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialExpressionFactoryNode Function GetCustomExpressionClassName

// Begin Class UInterchangeMaterialExpressionFactoryNode Function SetCustomExpressionClassName
struct Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics
{
	struct InterchangeMaterialExpressionFactoryNode_eventSetCustomExpressionClassName_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialExpressionFactoryNode_eventSetCustomExpressionClassName_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialExpressionFactoryNode_eventSetCustomExpressionClassName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialExpressionFactoryNode_eventSetCustomExpressionClassName_Parms), &Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode, nullptr, "SetCustomExpressionClassName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::InterchangeMaterialExpressionFactoryNode_eventSetCustomExpressionClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::InterchangeMaterialExpressionFactoryNode_eventSetCustomExpressionClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialExpressionFactoryNode::execSetCustomExpressionClassName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomExpressionClassName(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialExpressionFactoryNode Function SetCustomExpressionClassName

// Begin Class UInterchangeMaterialExpressionFactoryNode
void UInterchangeMaterialExpressionFactoryNode::StaticRegisterNativesUInterchangeMaterialExpressionFactoryNode()
{
	UClass* Class = UInterchangeMaterialExpressionFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomExpressionClassName", &UInterchangeMaterialExpressionFactoryNode::execGetCustomExpressionClassName },
		{ "SetCustomExpressionClassName", &UInterchangeMaterialExpressionFactoryNode::execSetCustomExpressionClassName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialExpressionFactoryNode);
UClass* Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_NoRegister()
{
	return UInterchangeMaterialExpressionFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeMaterialFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName, "GetCustomExpressionClassName" }, // 1359529177
		{ &Z_Construct_UFunction_UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName, "SetCustomExpressionClassName" }, // 2908146483
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialExpressionFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_Statics::ClassParams = {
	&UInterchangeMaterialExpressionFactoryNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeMaterialExpressionFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialExpressionFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMaterialExpressionFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeMaterialExpressionFactoryNode>()
{
	return UInterchangeMaterialExpressionFactoryNode::StaticClass();
}
UInterchangeMaterialExpressionFactoryNode::UInterchangeMaterialExpressionFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialExpressionFactoryNode);
UInterchangeMaterialExpressionFactoryNode::~UInterchangeMaterialExpressionFactoryNode() {}
// End Class UInterchangeMaterialExpressionFactoryNode

// Begin Class UInterchangeMaterialInstanceFactoryNode Function GetCustomInstanceClassName
struct Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics
{
	struct InterchangeMaterialInstanceFactoryNode_eventGetCustomInstanceClassName_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialInstanceFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialInstanceFactoryNode_eventGetCustomInstanceClassName_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialInstanceFactoryNode_eventGetCustomInstanceClassName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialInstanceFactoryNode_eventGetCustomInstanceClassName_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode, nullptr, "GetCustomInstanceClassName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::InterchangeMaterialInstanceFactoryNode_eventGetCustomInstanceClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::InterchangeMaterialInstanceFactoryNode_eventGetCustomInstanceClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialInstanceFactoryNode::execGetCustomInstanceClassName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomInstanceClassName(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialInstanceFactoryNode Function GetCustomInstanceClassName

// Begin Class UInterchangeMaterialInstanceFactoryNode Function GetCustomParent
struct Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics
{
	struct InterchangeMaterialInstanceFactoryNode_eventGetCustomParent_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialInstanceFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialInstanceFactoryNode_eventGetCustomParent_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialInstanceFactoryNode_eventGetCustomParent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialInstanceFactoryNode_eventGetCustomParent_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode, nullptr, "GetCustomParent", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::InterchangeMaterialInstanceFactoryNode_eventGetCustomParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::InterchangeMaterialInstanceFactoryNode_eventGetCustomParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialInstanceFactoryNode::execGetCustomParent)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomParent(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialInstanceFactoryNode Function GetCustomParent

// Begin Class UInterchangeMaterialInstanceFactoryNode Function SetCustomInstanceClassName
struct Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics
{
	struct InterchangeMaterialInstanceFactoryNode_eventSetCustomInstanceClassName_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialInstanceFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialInstanceFactoryNode_eventSetCustomInstanceClassName_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialInstanceFactoryNode_eventSetCustomInstanceClassName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialInstanceFactoryNode_eventSetCustomInstanceClassName_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode, nullptr, "SetCustomInstanceClassName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::InterchangeMaterialInstanceFactoryNode_eventSetCustomInstanceClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::InterchangeMaterialInstanceFactoryNode_eventSetCustomInstanceClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialInstanceFactoryNode::execSetCustomInstanceClassName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomInstanceClassName(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialInstanceFactoryNode Function SetCustomInstanceClassName

// Begin Class UInterchangeMaterialInstanceFactoryNode Function SetCustomParent
struct Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics
{
	struct InterchangeMaterialInstanceFactoryNode_eventSetCustomParent_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialInstanceFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialInstanceFactoryNode_eventSetCustomParent_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialInstanceFactoryNode_eventSetCustomParent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialInstanceFactoryNode_eventSetCustomParent_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode, nullptr, "SetCustomParent", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::InterchangeMaterialInstanceFactoryNode_eventSetCustomParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::InterchangeMaterialInstanceFactoryNode_eventSetCustomParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialInstanceFactoryNode::execSetCustomParent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomParent(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialInstanceFactoryNode Function SetCustomParent

// Begin Class UInterchangeMaterialInstanceFactoryNode
void UInterchangeMaterialInstanceFactoryNode::StaticRegisterNativesUInterchangeMaterialInstanceFactoryNode()
{
	UClass* Class = UInterchangeMaterialInstanceFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomInstanceClassName", &UInterchangeMaterialInstanceFactoryNode::execGetCustomInstanceClassName },
		{ "GetCustomParent", &UInterchangeMaterialInstanceFactoryNode::execGetCustomParent },
		{ "SetCustomInstanceClassName", &UInterchangeMaterialInstanceFactoryNode::execSetCustomInstanceClassName },
		{ "SetCustomParent", &UInterchangeMaterialInstanceFactoryNode::execSetCustomParent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialInstanceFactoryNode);
UClass* Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister()
{
	return UInterchangeMaterialInstanceFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeMaterialFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName, "GetCustomInstanceClassName" }, // 1319940990
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_GetCustomParent, "GetCustomParent" }, // 555506132
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName, "SetCustomInstanceClassName" }, // 3098473869
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceFactoryNode_SetCustomParent, "SetCustomParent" }, // 3407611369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialInstanceFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics::ClassParams = {
	&UInterchangeMaterialInstanceFactoryNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeMaterialInstanceFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialInstanceFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMaterialInstanceFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeMaterialInstanceFactoryNode>()
{
	return UInterchangeMaterialInstanceFactoryNode::StaticClass();
}
UInterchangeMaterialInstanceFactoryNode::UInterchangeMaterialInstanceFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialInstanceFactoryNode);
UInterchangeMaterialInstanceFactoryNode::~UInterchangeMaterialInstanceFactoryNode() {}
// End Class UInterchangeMaterialInstanceFactoryNode

// Begin Class UInterchangeMaterialFunctionCallExpressionFactoryNode Function GetCustomMaterialFunctionDependency
struct Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics
{
	struct InterchangeMaterialFunctionCallExpressionFactoryNode_eventGetCustomMaterialFunctionDependency_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFunctionCallExpressionFactoryNode_eventGetCustomMaterialFunctionDependency_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFunctionCallExpressionFactoryNode_eventGetCustomMaterialFunctionDependency_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFunctionCallExpressionFactoryNode_eventGetCustomMaterialFunctionDependency_Parms), &Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode, nullptr, "GetCustomMaterialFunctionDependency", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::InterchangeMaterialFunctionCallExpressionFactoryNode_eventGetCustomMaterialFunctionDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::InterchangeMaterialFunctionCallExpressionFactoryNode_eventGetCustomMaterialFunctionDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFunctionCallExpressionFactoryNode::execGetCustomMaterialFunctionDependency)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomMaterialFunctionDependency(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFunctionCallExpressionFactoryNode Function GetCustomMaterialFunctionDependency

// Begin Class UInterchangeMaterialFunctionCallExpressionFactoryNode Function SetCustomMaterialFunctionDependency
struct Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics
{
	struct InterchangeMaterialFunctionCallExpressionFactoryNode_eventSetCustomMaterialFunctionDependency_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Set the unique ID of the material function that the function call expression\n\x09 * is referring to.\n\x09 * Note that a call to AddFactoryDependencyUid is made to guarantee that\n\x09 * the material function is created before the function call expression\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
		{ "ToolTip", "Set the unique ID of the material function that the function call expression\nis referring to.\nNote that a call to AddFactoryDependencyUid is made to guarantee that\nthe material function is created before the function call expression" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFunctionCallExpressionFactoryNode_eventSetCustomMaterialFunctionDependency_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFunctionCallExpressionFactoryNode_eventSetCustomMaterialFunctionDependency_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFunctionCallExpressionFactoryNode_eventSetCustomMaterialFunctionDependency_Parms), &Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode, nullptr, "SetCustomMaterialFunctionDependency", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::InterchangeMaterialFunctionCallExpressionFactoryNode_eventSetCustomMaterialFunctionDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::InterchangeMaterialFunctionCallExpressionFactoryNode_eventSetCustomMaterialFunctionDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFunctionCallExpressionFactoryNode::execSetCustomMaterialFunctionDependency)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomMaterialFunctionDependency(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFunctionCallExpressionFactoryNode Function SetCustomMaterialFunctionDependency

// Begin Class UInterchangeMaterialFunctionCallExpressionFactoryNode
void UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticRegisterNativesUInterchangeMaterialFunctionCallExpressionFactoryNode()
{
	UClass* Class = UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomMaterialFunctionDependency", &UInterchangeMaterialFunctionCallExpressionFactoryNode::execGetCustomMaterialFunctionDependency },
		{ "SetCustomMaterialFunctionDependency", &UInterchangeMaterialFunctionCallExpressionFactoryNode::execSetCustomMaterialFunctionDependency },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialFunctionCallExpressionFactoryNode);
UClass* Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_NoRegister()
{
	return UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeMaterialFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency, "GetCustomMaterialFunctionDependency" }, // 3112036466
		{ &Z_Construct_UFunction_UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency, "SetCustomMaterialFunctionDependency" }, // 4282220736
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialFunctionCallExpressionFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics::ClassParams = {
	&UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeMaterialFunctionCallExpressionFactoryNode>()
{
	return UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass();
}
UInterchangeMaterialFunctionCallExpressionFactoryNode::UInterchangeMaterialFunctionCallExpressionFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialFunctionCallExpressionFactoryNode);
UInterchangeMaterialFunctionCallExpressionFactoryNode::~UInterchangeMaterialFunctionCallExpressionFactoryNode() {}
// End Class UInterchangeMaterialFunctionCallExpressionFactoryNode

// Begin Class UInterchangeMaterialFunctionFactoryNode Function GetInputConnection
struct Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics
{
	struct InterchangeMaterialFunctionFactoryNode_eventGetInputConnection_Parms
	{
		FString InputName;
		FString ExpressionNodeUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionNodeUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFunctionFactoryNode_eventGetInputConnection_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::NewProp_ExpressionNodeUid = { "ExpressionNodeUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFunctionFactoryNode_eventGetInputConnection_Parms, ExpressionNodeUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFunctionFactoryNode_eventGetInputConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMaterialFunctionFactoryNode_eventGetInputConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMaterialFunctionFactoryNode_eventGetInputConnection_Parms), &Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::NewProp_ExpressionNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode, nullptr, "GetInputConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::InterchangeMaterialFunctionFactoryNode_eventGetInputConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::InterchangeMaterialFunctionFactoryNode_eventGetInputConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFunctionFactoryNode::execGetInputConnection)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ExpressionNodeUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInputConnection(Z_Param_InputName,Z_Param_Out_ExpressionNodeUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFunctionFactoryNode Function GetInputConnection

// Begin Class UInterchangeMaterialFunctionFactoryNode Function GetObjectClass
struct Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics
{
	struct InterchangeMaterialFunctionFactoryNode_eventGetObjectClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | MaterialFactory" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMaterialFunctionFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::InterchangeMaterialFunctionFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::InterchangeMaterialFunctionFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMaterialFunctionFactoryNode::execGetObjectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
	P_NATIVE_END;
}
// End Class UInterchangeMaterialFunctionFactoryNode Function GetObjectClass

// Begin Class UInterchangeMaterialFunctionFactoryNode
void UInterchangeMaterialFunctionFactoryNode::StaticRegisterNativesUInterchangeMaterialFunctionFactoryNode()
{
	UClass* Class = UInterchangeMaterialFunctionFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInputConnection", &UInterchangeMaterialFunctionFactoryNode::execGetInputConnection },
		{ "GetObjectClass", &UInterchangeMaterialFunctionFactoryNode::execGetObjectClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialFunctionFactoryNode);
UClass* Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister()
{
	return UInterchangeMaterialFunctionFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeMaterialFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetInputConnection, "GetInputConnection" }, // 762441862
		{ &Z_Construct_UFunction_UInterchangeMaterialFunctionFactoryNode_GetObjectClass, "GetObjectClass" }, // 2951013021
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialFunctionFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics::ClassParams = {
	&UInterchangeMaterialFunctionFactoryNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeMaterialFunctionFactoryNode>()
{
	return UInterchangeMaterialFunctionFactoryNode::StaticClass();
}
UInterchangeMaterialFunctionFactoryNode::UInterchangeMaterialFunctionFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialFunctionFactoryNode);
UInterchangeMaterialFunctionFactoryNode::~UInterchangeMaterialFunctionFactoryNode() {}
// End Class UInterchangeMaterialFunctionFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode, UInterchangeBaseMaterialFactoryNode::StaticClass, TEXT("UInterchangeBaseMaterialFactoryNode"), &Z_Registration_Info_UClass_UInterchangeBaseMaterialFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeBaseMaterialFactoryNode), 814141183U) },
		{ Z_Construct_UClass_UInterchangeMaterialFactoryNode, UInterchangeMaterialFactoryNode::StaticClass, TEXT("UInterchangeMaterialFactoryNode"), &Z_Registration_Info_UClass_UInterchangeMaterialFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialFactoryNode), 3085751986U) },
		{ Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode, UInterchangeMaterialExpressionFactoryNode::StaticClass, TEXT("UInterchangeMaterialExpressionFactoryNode"), &Z_Registration_Info_UClass_UInterchangeMaterialExpressionFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialExpressionFactoryNode), 2832194689U) },
		{ Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode, UInterchangeMaterialInstanceFactoryNode::StaticClass, TEXT("UInterchangeMaterialInstanceFactoryNode"), &Z_Registration_Info_UClass_UInterchangeMaterialInstanceFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialInstanceFactoryNode), 3451676165U) },
		{ Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode, UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass, TEXT("UInterchangeMaterialFunctionCallExpressionFactoryNode"), &Z_Registration_Info_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialFunctionCallExpressionFactoryNode), 3106716823U) },
		{ Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode, UInterchangeMaterialFunctionFactoryNode::StaticClass, TEXT("UInterchangeMaterialFunctionFactoryNode"), &Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialFunctionFactoryNode), 1039067519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_2219818495(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
