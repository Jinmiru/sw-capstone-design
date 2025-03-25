// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeTexture2DArrayFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTexture2DArrayFactoryNode() {}

// Begin Cross Module References
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeTexture2DArrayFactoryNode Function GetCustomAddressX
struct Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics
{
	struct InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms
	{
		uint8 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms), &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode, nullptr, "GetCustomAddressX", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressX)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAddressX(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTexture2DArrayFactoryNode Function GetCustomAddressX

// Begin Class UInterchangeTexture2DArrayFactoryNode Function GetCustomAddressY
struct Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics
{
	struct InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms
	{
		uint8 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms), &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode, nullptr, "GetCustomAddressY", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressY)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAddressY(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTexture2DArrayFactoryNode Function GetCustomAddressY

// Begin Class UInterchangeTexture2DArrayFactoryNode Function GetCustomAddressZ
struct Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics
{
	struct InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms
	{
		uint8 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms), &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode, nullptr, "GetCustomAddressZ", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressZ)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAddressZ(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeTexture2DArrayFactoryNode Function GetCustomAddressZ

// Begin Class UInterchangeTexture2DArrayFactoryNode Function SetCustomAddressZ
struct Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics
{
	struct InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms
	{
		uint8 AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayFactoryNode.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms), &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms), &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode, nullptr, "SetCustomAddressZ", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeTexture2DArrayFactoryNode::execSetCustomAddressZ)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAddressZ(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeTexture2DArrayFactoryNode Function SetCustomAddressZ

// Begin Class UInterchangeTexture2DArrayFactoryNode
void UInterchangeTexture2DArrayFactoryNode::StaticRegisterNativesUInterchangeTexture2DArrayFactoryNode()
{
	UClass* Class = UInterchangeTexture2DArrayFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomAddressX", &UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressX },
		{ "GetCustomAddressY", &UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressY },
		{ "GetCustomAddressZ", &UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressZ },
		{ "SetCustomAddressZ", &UInterchangeTexture2DArrayFactoryNode::execSetCustomAddressZ },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTexture2DArrayFactoryNode);
UClass* Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_NoRegister()
{
	return UInterchangeTexture2DArrayFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTexture2DArrayFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX, "GetCustomAddressX" }, // 4078475924
		{ &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY, "GetCustomAddressY" }, // 2598131578
		{ &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ, "GetCustomAddressZ" }, // 896093717
		{ &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ, "SetCustomAddressZ" }, // 1608357089
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTexture2DArrayFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTextureFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::ClassParams = {
	&UInterchangeTexture2DArrayFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeTexture2DArrayFactoryNode>()
{
	return UInterchangeTexture2DArrayFactoryNode::StaticClass();
}
UInterchangeTexture2DArrayFactoryNode::UInterchangeTexture2DArrayFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTexture2DArrayFactoryNode);
UInterchangeTexture2DArrayFactoryNode::~UInterchangeTexture2DArrayFactoryNode() {}
// End Class UInterchangeTexture2DArrayFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode, UInterchangeTexture2DArrayFactoryNode::StaticClass, TEXT("UInterchangeTexture2DArrayFactoryNode"), &Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTexture2DArrayFactoryNode), 1526206043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_1430517581(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
