// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/Nodes/InterchangeUserDefinedAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeUserDefinedAttribute() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_NoRegister();
INTERCHANGECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin ScriptStruct FInterchangeUserDefinedAttributeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo;
class UScriptStruct* FInterchangeUserDefinedAttributeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("InterchangeUserDefinedAttributeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.OuterSingleton;
}
template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<FInterchangeUserDefinedAttributeInfo>()
{
	return FInterchangeUserDefinedAttributeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Interchange | Node | UserDefinedAttributeInfo" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeUserDefinedAttributeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeUserDefinedAttributeInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	&NewStructOps,
	"InterchangeUserDefinedAttributeInfo",
	Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::PropPointers),
	sizeof(FInterchangeUserDefinedAttributeInfo),
	alignof(FInterchangeUserDefinedAttributeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.InnerSingleton;
}
// End ScriptStruct FInterchangeUserDefinedAttributeInfo

// Begin Class UInterchangeUserDefinedAttributesAPI Function CreateUserDefinedAttribute_Boolean
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms
	{
		UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		bool Value;
		FString PayloadKey;
		bool RequiresDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "CPP_Default_RequiresDelegate", "false" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
	static void NewProp_RequiresDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RequiresDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms, PayloadKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadKey_MetaData), NewProp_PayloadKey_MetaData) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_RequiresDelegate_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms*)Obj)->RequiresDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_RequiresDelegate = { "RequiresDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_RequiresDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_PayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_RequiresDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "CreateUserDefinedAttribute_Boolean", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Boolean)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_GET_UBOOL_REF(Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
	P_GET_UBOOL(Z_Param_RequiresDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Boolean(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_Value,Z_Param_PayloadKey,Z_Param_RequiresDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function CreateUserDefinedAttribute_Boolean

// Begin Class UInterchangeUserDefinedAttributesAPI Function CreateUserDefinedAttribute_Double
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms
	{
		UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		double Value;
		FString PayloadKey;
		bool RequiresDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "CPP_Default_RequiresDelegate", "false" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
	static void NewProp_RequiresDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RequiresDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms, PayloadKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadKey_MetaData), NewProp_PayloadKey_MetaData) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_RequiresDelegate_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms*)Obj)->RequiresDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_RequiresDelegate = { "RequiresDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_RequiresDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_PayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_RequiresDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "CreateUserDefinedAttribute_Double", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Double)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
	P_GET_UBOOL(Z_Param_RequiresDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Double(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_Value,Z_Param_PayloadKey,Z_Param_RequiresDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function CreateUserDefinedAttribute_Double

// Begin Class UInterchangeUserDefinedAttributesAPI Function CreateUserDefinedAttribute_Float
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms
	{
		UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		float Value;
		FString PayloadKey;
		bool RequiresDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "CPP_Default_RequiresDelegate", "false" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
	static void NewProp_RequiresDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RequiresDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms, PayloadKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadKey_MetaData), NewProp_PayloadKey_MetaData) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_RequiresDelegate_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms*)Obj)->RequiresDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_RequiresDelegate = { "RequiresDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_RequiresDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_PayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_RequiresDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "CreateUserDefinedAttribute_Float", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Float)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
	P_GET_UBOOL(Z_Param_RequiresDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Float(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_Value,Z_Param_PayloadKey,Z_Param_RequiresDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function CreateUserDefinedAttribute_Float

// Begin Class UInterchangeUserDefinedAttributesAPI Function CreateUserDefinedAttribute_FString
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms
	{
		UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		FString Value;
		FString PayloadKey;
		bool RequiresDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "CPP_Default_RequiresDelegate", "false" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
	static void NewProp_RequiresDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RequiresDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms, PayloadKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadKey_MetaData), NewProp_PayloadKey_MetaData) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_RequiresDelegate_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms*)Obj)->RequiresDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_RequiresDelegate = { "RequiresDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_RequiresDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_PayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_RequiresDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "CreateUserDefinedAttribute_FString", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_FString)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
	P_GET_UBOOL(Z_Param_RequiresDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_FString(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Value,Z_Param_PayloadKey,Z_Param_RequiresDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function CreateUserDefinedAttribute_FString

// Begin Class UInterchangeUserDefinedAttributesAPI Function CreateUserDefinedAttribute_Int32
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms
	{
		UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		int32 Value;
		FString PayloadKey;
		bool RequiresDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "CPP_Default_RequiresDelegate", "false" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
	static void NewProp_RequiresDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RequiresDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms, PayloadKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadKey_MetaData), NewProp_PayloadKey_MetaData) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_RequiresDelegate_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms*)Obj)->RequiresDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_RequiresDelegate = { "RequiresDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_RequiresDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_PayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_RequiresDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "CreateUserDefinedAttribute_Int32", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Int32)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
	P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
	P_GET_UBOOL(Z_Param_RequiresDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Int32(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_Value,Z_Param_PayloadKey,Z_Param_RequiresDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function CreateUserDefinedAttribute_Int32

// Begin Class UInterchangeUserDefinedAttributesAPI Function DuplicateAllUserDefinedAttribute
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms
	{
		const UInterchangeBaseNode* InterchangeSourceNode;
		UInterchangeBaseNode* InterchangeDestinationNode;
		bool bAddSourceNodeName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeSourceNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeSourceNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeDestinationNode;
	static void NewProp_bAddSourceNodeName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddSourceNodeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeSourceNode = { "InterchangeSourceNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms, InterchangeSourceNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeSourceNode_MetaData), NewProp_InterchangeSourceNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeDestinationNode = { "InterchangeDestinationNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms, InterchangeDestinationNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_bAddSourceNodeName_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms*)Obj)->bAddSourceNodeName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_bAddSourceNodeName = { "bAddSourceNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_bAddSourceNodeName_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeSourceNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeDestinationNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_bAddSourceNodeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "DuplicateAllUserDefinedAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execDuplicateAllUserDefinedAttribute)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeSourceNode);
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeDestinationNode);
	P_GET_UBOOL(Z_Param_bAddSourceNodeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute(Z_Param_InterchangeSourceNode,Z_Param_InterchangeDestinationNode,Z_Param_bAddSourceNodeName);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function DuplicateAllUserDefinedAttribute

// Begin Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttribute_Boolean
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms
	{
		const UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		bool OutValue;
		FString OutPayloadKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static void NewProp_OutValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeNode_MetaData), NewProp_InterchangeNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms*)Obj)->OutValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms, OutPayloadKey), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutPayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttribute_Boolean", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Boolean)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_GET_UBOOL_REF(Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Boolean(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_OutValue,Z_Param_Out_OutPayloadKey);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttribute_Boolean

// Begin Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttribute_Double
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms
	{
		const UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		double OutValue;
		FString OutPayloadKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeNode_MetaData), NewProp_InterchangeNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms, OutPayloadKey), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_OutPayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttribute_Double", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Double)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Double(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_OutValue,Z_Param_Out_OutPayloadKey);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttribute_Double

// Begin Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttribute_Float
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms
	{
		const UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		float OutValue;
		FString OutPayloadKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeNode_MetaData), NewProp_InterchangeNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms, OutPayloadKey), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_OutPayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttribute_Float", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Float)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Float(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_OutValue,Z_Param_Out_OutPayloadKey);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttribute_Float

// Begin Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttribute_FString
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms
	{
		const UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		FString OutValue;
		FString OutPayloadKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeNode_MetaData), NewProp_InterchangeNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms, OutPayloadKey), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_OutPayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttribute_FString", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_FString)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_FString(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_OutValue,Z_Param_Out_OutPayloadKey);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttribute_FString

// Begin Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttribute_Int32
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms
	{
		const UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		int32 OutValue;
		FString OutPayloadKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeNode_MetaData), NewProp_InterchangeNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms, OutPayloadKey), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_OutPayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttribute_Int32", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Int32)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Int32(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_OutValue,Z_Param_Out_OutPayloadKey);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttribute_Int32

// Begin Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttributeInfos
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttributeInfos_Parms
	{
		const UInterchangeBaseNode* InterchangeNode;
		TArray<FInterchangeUserDefinedAttributeInfo> UserDefinedAttributeInfos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserDefinedAttributeInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserDefinedAttributeInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttributeInfos_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeNode_MetaData), NewProp_InterchangeNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_UserDefinedAttributeInfos_Inner = { "UserDefinedAttributeInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo, METADATA_PARAMS(0, nullptr) }; // 920735579
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_UserDefinedAttributeInfos = { "UserDefinedAttributeInfos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttributeInfos_Parms, UserDefinedAttributeInfos), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 920735579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_UserDefinedAttributeInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_UserDefinedAttributeInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttributeInfos", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttributeInfos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttributeInfos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttributeInfos)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_TARRAY_REF(FInterchangeUserDefinedAttributeInfo,Z_Param_Out_UserDefinedAttributeInfos);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttributeInfos(Z_Param_InterchangeNode,Z_Param_Out_UserDefinedAttributeInfos);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function GetUserDefinedAttributeInfos

// Begin Class UInterchangeUserDefinedAttributesAPI Function RemoveUserDefinedAttribute
struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics
{
	struct InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms
	{
		UInterchangeBaseNode* InterchangeNode;
		FString UserDefinedAttributeName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "Comment", "/**\n\x09 * Remove the specified user-defined attribute.\n\x09 * @param UserDefinedAttributeName - The name of the user-defined attribute to remove.\n\x09 * @return - True if the attribute exists and was removed, or if the attribute doesn't exist. Returns false if the attribute exists but could not be removed.\n\x09 * Note - User-defined attributes are the user custom attributes from the DCC translated node (for example, extra attributes in Maya).\n\x09 *        The payload key points to an FRichCurve payload.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
		{ "ToolTip", "Remove the specified user-defined attribute.\n@param UserDefinedAttributeName - The name of the user-defined attribute to remove.\n@return - True if the attribute exists and was removed, or if the attribute doesn't exist. Returns false if the attribute exists but could not be removed.\nNote - User-defined attributes are the user custom attributes from the DCC translated node (for example, extra attributes in Maya).\n       The payload key points to an FRichCurve payload." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms, UserDefinedAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedAttributeName_MetaData), NewProp_UserDefinedAttributeName_MetaData) };
void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_UserDefinedAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "RemoveUserDefinedAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execRemoveUserDefinedAttribute)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::RemoveUserDefinedAttribute(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName);
	P_NATIVE_END;
}
// End Class UInterchangeUserDefinedAttributesAPI Function RemoveUserDefinedAttribute

// Begin Class UInterchangeUserDefinedAttributesAPI
void UInterchangeUserDefinedAttributesAPI::StaticRegisterNativesUInterchangeUserDefinedAttributesAPI()
{
	UClass* Class = UInterchangeUserDefinedAttributesAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateUserDefinedAttribute_Boolean", &UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Boolean },
		{ "CreateUserDefinedAttribute_Double", &UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Double },
		{ "CreateUserDefinedAttribute_Float", &UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Float },
		{ "CreateUserDefinedAttribute_FString", &UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_FString },
		{ "CreateUserDefinedAttribute_Int32", &UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Int32 },
		{ "DuplicateAllUserDefinedAttribute", &UInterchangeUserDefinedAttributesAPI::execDuplicateAllUserDefinedAttribute },
		{ "GetUserDefinedAttribute_Boolean", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Boolean },
		{ "GetUserDefinedAttribute_Double", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Double },
		{ "GetUserDefinedAttribute_Float", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Float },
		{ "GetUserDefinedAttribute_FString", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_FString },
		{ "GetUserDefinedAttribute_Int32", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Int32 },
		{ "GetUserDefinedAttributeInfos", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttributeInfos },
		{ "RemoveUserDefinedAttribute", &UInterchangeUserDefinedAttributesAPI::execRemoveUserDefinedAttribute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeUserDefinedAttributesAPI);
UClass* Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_NoRegister()
{
	return UInterchangeUserDefinedAttributesAPI::StaticClass();
}
struct Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UInterchangeUserDefinedAttributesAPI is used to store and retrieve user-defined attributes such as DCC node attributes, so that pipelines have access to those attributes.\n * Every user-defined attribute has a name, a value, and an optional AnimationPayloadKey: an FRichCurve that is a float curve.\n * The value type must be supported by the UE::Interchange::EAttributeTypes enumeration.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Nodes/InterchangeUserDefinedAttribute.h" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
		{ "ToolTip", "UInterchangeUserDefinedAttributesAPI is used to store and retrieve user-defined attributes such as DCC node attributes, so that pipelines have access to those attributes.\nEvery user-defined attribute has a name, a value, and an optional AnimationPayloadKey: an FRichCurve that is a float curve.\nThe value type must be supported by the UE::Interchange::EAttributeTypes enumeration." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean, "CreateUserDefinedAttribute_Boolean" }, // 1687374419
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double, "CreateUserDefinedAttribute_Double" }, // 2274437233
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float, "CreateUserDefinedAttribute_Float" }, // 155203384
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString, "CreateUserDefinedAttribute_FString" }, // 381006029
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32, "CreateUserDefinedAttribute_Int32" }, // 3082675794
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute, "DuplicateAllUserDefinedAttribute" }, // 320195612
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean, "GetUserDefinedAttribute_Boolean" }, // 4017216992
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double, "GetUserDefinedAttribute_Double" }, // 1284948111
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float, "GetUserDefinedAttribute_Float" }, // 2051206518
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString, "GetUserDefinedAttribute_FString" }, // 2771944168
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32, "GetUserDefinedAttribute_Int32" }, // 2458150561
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos, "GetUserDefinedAttributeInfos" }, // 3312604316
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute, "RemoveUserDefinedAttribute" }, // 2611410958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeUserDefinedAttributesAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::ClassParams = {
	&UInterchangeUserDefinedAttributesAPI::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI()
{
	if (!Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.OuterSingleton, Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeUserDefinedAttributesAPI>()
{
	return UInterchangeUserDefinedAttributesAPI::StaticClass();
}
UInterchangeUserDefinedAttributesAPI::UInterchangeUserDefinedAttributesAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeUserDefinedAttributesAPI);
UInterchangeUserDefinedAttributesAPI::~UInterchangeUserDefinedAttributesAPI() {}
// End Class UInterchangeUserDefinedAttributesAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInterchangeUserDefinedAttributeInfo::StaticStruct, Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::NewStructOps, TEXT("InterchangeUserDefinedAttributeInfo"), &Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeUserDefinedAttributeInfo), 920735579U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, UInterchangeUserDefinedAttributesAPI::StaticClass, TEXT("UInterchangeUserDefinedAttributesAPI"), &Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeUserDefinedAttributesAPI), 3492894757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_2506720070(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
