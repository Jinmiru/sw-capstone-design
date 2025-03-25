// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/Nodes/InterchangeBaseNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeBaseNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin Enum EInterchangeNodeContainerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeNodeContainerType;
static UEnum* EInterchangeNodeContainerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeNodeContainerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeNodeContainerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangeNodeContainerType"));
	}
	return Z_Registration_Info_UEnum_EInterchangeNodeContainerType.OuterSingleton;
}
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeNodeContainerType>()
{
	return EInterchangeNodeContainerType_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//ns UE::Interchange\n" },
		{ "FactoryData.Name", "EInterchangeNodeContainerType::FactoryData" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "None.Name", "EInterchangeNodeContainerType::None" },
		{ "ToolTip", "ns UE::Interchange" },
		{ "TranslatedAsset.Name", "EInterchangeNodeContainerType::TranslatedAsset" },
		{ "TranslatedScene.Name", "EInterchangeNodeContainerType::TranslatedScene" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeNodeContainerType::None", (int64)EInterchangeNodeContainerType::None },
		{ "EInterchangeNodeContainerType::TranslatedScene", (int64)EInterchangeNodeContainerType::TranslatedScene },
		{ "EInterchangeNodeContainerType::TranslatedAsset", (int64)EInterchangeNodeContainerType::TranslatedAsset },
		{ "EInterchangeNodeContainerType::FactoryData", (int64)EInterchangeNodeContainerType::FactoryData },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	"EInterchangeNodeContainerType",
	"EInterchangeNodeContainerType",
	Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType()
{
	if (!Z_Registration_Info_UEnum_EInterchangeNodeContainerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeNodeContainerType.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeNodeContainerType.InnerSingleton;
}
// End Enum EInterchangeNodeContainerType

// Begin Enum EInterchangeNodeUserInterfaceContext
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeNodeUserInterfaceContext;
static UEnum* EInterchangeNodeUserInterfaceContext_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeNodeUserInterfaceContext.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeNodeUserInterfaceContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangeNodeUserInterfaceContext"));
	}
	return Z_Registration_Info_UEnum_EInterchangeNodeUserInterfaceContext.OuterSingleton;
}
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeNodeUserInterfaceContext>()
{
	return EInterchangeNodeUserInterfaceContext_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "None.Name", "EInterchangeNodeUserInterfaceContext::None" },
		{ "Preview.Name", "EInterchangeNodeUserInterfaceContext::Preview" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeNodeUserInterfaceContext::None", (int64)EInterchangeNodeUserInterfaceContext::None },
		{ "EInterchangeNodeUserInterfaceContext::Preview", (int64)EInterchangeNodeUserInterfaceContext::Preview },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	"EInterchangeNodeUserInterfaceContext",
	"EInterchangeNodeUserInterfaceContext",
	Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext()
{
	if (!Z_Registration_Info_UEnum_EInterchangeNodeUserInterfaceContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeNodeUserInterfaceContext.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeNodeUserInterfaceContext.InnerSingleton;
}
// End Enum EInterchangeNodeUserInterfaceContext

// Begin Class UInterchangeBaseNode Function AddBooleanAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics
{
	struct InterchangeBaseNode_eventAddBooleanAttribute_Parms
	{
		FString NodeAttributeKey;
		bool Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add a Boolean attribute to this node. Returns false if the attribute does not exist or if it cannot be added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Add a Boolean attribute to this node. Returns false if the attribute does not exist or if it cannot be added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddBooleanAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::NewProp_Value_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventAddBooleanAttribute_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventAddBooleanAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventAddBooleanAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventAddBooleanAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "AddBooleanAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::InterchangeBaseNode_eventAddBooleanAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::InterchangeBaseNode_eventAddBooleanAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execAddBooleanAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_UBOOL_REF(Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddBooleanAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function AddBooleanAttribute

// Begin Class UInterchangeBaseNode Function AddDoubleAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics
{
	struct InterchangeBaseNode_eventAddDoubleAttribute_Parms
	{
		FString NodeAttributeKey;
		double Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add a double attribute to this node. Returns false if the attribute does not exist or if it cannot be added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Add a double attribute to this node. Returns false if the attribute does not exist or if it cannot be added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddDoubleAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddDoubleAttribute_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventAddDoubleAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventAddDoubleAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "AddDoubleAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::InterchangeBaseNode_eventAddDoubleAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::InterchangeBaseNode_eventAddDoubleAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execAddDoubleAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddDoubleAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function AddDoubleAttribute

// Begin Class UInterchangeBaseNode Function AddFloatAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics
{
	struct InterchangeBaseNode_eventAddFloatAttribute_Parms
	{
		FString NodeAttributeKey;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add a float attribute to this node. Returns false if the attribute does not exist or if it cannot be added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Add a float attribute to this node. Returns false if the attribute does not exist or if it cannot be added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddFloatAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddFloatAttribute_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventAddFloatAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventAddFloatAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "AddFloatAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::InterchangeBaseNode_eventAddFloatAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::InterchangeBaseNode_eventAddFloatAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execAddFloatAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddFloatAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function AddFloatAttribute

// Begin Class UInterchangeBaseNode Function AddGuidAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics
{
	struct InterchangeBaseNode_eventAddGuidAttribute_Parms
	{
		FString NodeAttributeKey;
		FGuid Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add a GUID attribute to this node. Returns false if the attribute does not exist or if it cannot be added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Add a GUID attribute to this node. Returns false if the attribute does not exist or if it cannot be added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddGuidAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddGuidAttribute_Parms, Value), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventAddGuidAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventAddGuidAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "AddGuidAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::InterchangeBaseNode_eventAddGuidAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::InterchangeBaseNode_eventAddGuidAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execAddGuidAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddGuidAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function AddGuidAttribute

// Begin Class UInterchangeBaseNode Function AddInt32Attribute
struct Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics
{
	struct InterchangeBaseNode_eventAddInt32Attribute_Parms
	{
		FString NodeAttributeKey;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add a int32 attribute to this node. Returns false if the attribute does not exist or if it cannot be added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Add a int32 attribute to this node. Returns false if the attribute does not exist or if it cannot be added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddInt32Attribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddInt32Attribute_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventAddInt32Attribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventAddInt32Attribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "AddInt32Attribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::InterchangeBaseNode_eventAddInt32Attribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::InterchangeBaseNode_eventAddInt32Attribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execAddInt32Attribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddInt32Attribute(Z_Param_NodeAttributeKey,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function AddInt32Attribute

// Begin Class UInterchangeBaseNode Function AddLinearColorAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics
{
	struct InterchangeBaseNode_eventAddLinearColorAttribute_Parms
	{
		FString NodeAttributeKey;
		FLinearColor Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add an FLinearColor attribute to this node. Returns false if the attribute does not exist or if it cannot be added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Add an FLinearColor attribute to this node. Returns false if the attribute does not exist or if it cannot be added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddLinearColorAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddLinearColorAttribute_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventAddLinearColorAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventAddLinearColorAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "AddLinearColorAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::InterchangeBaseNode_eventAddLinearColorAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::InterchangeBaseNode_eventAddLinearColorAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execAddLinearColorAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddLinearColorAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function AddLinearColorAttribute

// Begin Class UInterchangeBaseNode Function AddStringAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics
{
	struct InterchangeBaseNode_eventAddStringAttribute_Parms
	{
		FString NodeAttributeKey;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add a string attribute to this node. Returns false if the attribute does not exist or if it cannot be added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Add a string attribute to this node. Returns false if the attribute does not exist or if it cannot be added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddStringAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddStringAttribute_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventAddStringAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventAddStringAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "AddStringAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::InterchangeBaseNode_eventAddStringAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::InterchangeBaseNode_eventAddStringAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execAddStringAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddStringAttribute(Z_Param_NodeAttributeKey,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function AddStringAttribute

// Begin Class UInterchangeBaseNode Function AddTargetNodeUid
struct Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics
{
	struct InterchangeBaseNode_eventAddTargetNodeUid_Parms
	{
		FString AssetUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add an asset node UID relating to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Add an asset node UID relating to this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::NewProp_AssetUid = { "AssetUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddTargetNodeUid_Parms, AssetUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUid_MetaData), NewProp_AssetUid_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventAddTargetNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventAddTargetNodeUid_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::NewProp_AssetUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "AddTargetNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::InterchangeBaseNode_eventAddTargetNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::InterchangeBaseNode_eventAddTargetNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execAddTargetNodeUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddTargetNodeUid(Z_Param_AssetUid);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function AddTargetNodeUid

// Begin Class UInterchangeBaseNode Function AddVector2Attribute
struct Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics
{
	struct InterchangeBaseNode_eventAddVector2Attribute_Parms
	{
		FString NodeAttributeKey;
		FVector2f Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add a Vector2 attribute to this node. Returns false if the attribute does not exist or if it cannot be added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Add a Vector2 attribute to this node. Returns false if the attribute does not exist or if it cannot be added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddVector2Attribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventAddVector2Attribute_Parms, Value), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventAddVector2Attribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventAddVector2Attribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "AddVector2Attribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::InterchangeBaseNode_eventAddVector2Attribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::InterchangeBaseNode_eventAddVector2Attribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execAddVector2Attribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddVector2Attribute(Z_Param_NodeAttributeKey,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function AddVector2Attribute

// Begin Class UInterchangeBaseNode Function GetAssetName
struct Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics
{
	struct InterchangeBaseNode_eventGetAssetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Optional. Any node that can import or export an asset should set the desired name for the asset.\n\x09 * If the attribute was never set, returns GetDisplayLabel().\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Optional. Any node that can import or export an asset should set the desired name for the asset.\nIf the attribute was never set, returns GetDisplayLabel()." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetAssetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetAssetName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::InterchangeBaseNode_eventGetAssetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::InterchangeBaseNode_eventGetAssetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetAssetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAssetName();
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetAssetName

// Begin Class UInterchangeBaseNode Function GetBooleanAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics
{
	struct InterchangeBaseNode_eventGetBooleanAttribute_Parms
	{
		FString NodeAttributeKey;
		bool OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Get a Boolean attribute from this node. Returns false if the attribute does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Get a Boolean attribute from this node. Returns false if the attribute does not exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static void NewProp_OutValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetBooleanAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::NewProp_OutValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventGetBooleanAttribute_Parms*)Obj)->OutValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventGetBooleanAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::NewProp_OutValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventGetBooleanAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventGetBooleanAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetBooleanAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::InterchangeBaseNode_eventGetBooleanAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::InterchangeBaseNode_eventGetBooleanAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetBooleanAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_UBOOL_REF(Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBooleanAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetBooleanAttribute

// Begin Class UInterchangeBaseNode Function GetDisplayLabel
struct Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics
{
	struct InterchangeBaseNode_eventGetDisplayLabel_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return the display label.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Return the display label." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetDisplayLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetDisplayLabel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::InterchangeBaseNode_eventGetDisplayLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::InterchangeBaseNode_eventGetDisplayLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetDisplayLabel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDisplayLabel();
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetDisplayLabel

// Begin Class UInterchangeBaseNode Function GetDoubleAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics
{
	struct InterchangeBaseNode_eventGetDoubleAttribute_Parms
	{
		FString NodeAttributeKey;
		double OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Get a double attribute from this node. Returns false if the attribute does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Get a double attribute from this node. Returns false if the attribute does not exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetDoubleAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetDoubleAttribute_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventGetDoubleAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventGetDoubleAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetDoubleAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::InterchangeBaseNode_eventGetDoubleAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::InterchangeBaseNode_eventGetDoubleAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetDoubleAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDoubleAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetDoubleAttribute

// Begin Class UInterchangeBaseNode Function GetFloatAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics
{
	struct InterchangeBaseNode_eventGetFloatAttribute_Parms
	{
		FString NodeAttributeKey;
		float OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Get a float attribute from this node. Returns false if the attribute does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Get a float attribute from this node. Returns false if the attribute does not exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetFloatAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetFloatAttribute_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventGetFloatAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventGetFloatAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetFloatAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::InterchangeBaseNode_eventGetFloatAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::InterchangeBaseNode_eventGetFloatAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetFloatAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFloatAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetFloatAttribute

// Begin Class UInterchangeBaseNode Function GetGuidAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics
{
	struct InterchangeBaseNode_eventGetGuidAttribute_Parms
	{
		FString NodeAttributeKey;
		FGuid OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Get a GUID attribute from this node. Returns false if the attribute does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Get a GUID attribute from this node. Returns false if the attribute does not exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetGuidAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetGuidAttribute_Parms, OutValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventGetGuidAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventGetGuidAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetGuidAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::InterchangeBaseNode_eventGetGuidAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::InterchangeBaseNode_eventGetGuidAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetGuidAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGuidAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetGuidAttribute

// Begin Class UInterchangeBaseNode Function GetInt32Attribute
struct Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics
{
	struct InterchangeBaseNode_eventGetInt32Attribute_Parms
	{
		FString NodeAttributeKey;
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Get a int32 attribute from this node. Returns false if the attribute does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Get a int32 attribute from this node. Returns false if the attribute does not exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetInt32Attribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetInt32Attribute_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventGetInt32Attribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventGetInt32Attribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetInt32Attribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::InterchangeBaseNode_eventGetInt32Attribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::InterchangeBaseNode_eventGetInt32Attribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetInt32Attribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInt32Attribute(Z_Param_NodeAttributeKey,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetInt32Attribute

// Begin Class UInterchangeBaseNode Function GetLinearColorAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics
{
	struct InterchangeBaseNode_eventGetLinearColorAttribute_Parms
	{
		FString NodeAttributeKey;
		FLinearColor OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Get an FLinearColor attribute from this node. Returns false if the attribute does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Get an FLinearColor attribute from this node. Returns false if the attribute does not exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetLinearColorAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetLinearColorAttribute_Parms, OutValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventGetLinearColorAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventGetLinearColorAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetLinearColorAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::InterchangeBaseNode_eventGetLinearColorAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::InterchangeBaseNode_eventGetLinearColorAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetLinearColorAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLinearColorAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetLinearColorAttribute

// Begin Class UInterchangeBaseNode Function GetNodeContainerType
struct Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics
{
	struct InterchangeBaseNode_eventGetNodeContainerType_Parms
	{
		EInterchangeNodeContainerType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return the node container type that defines the purpose of the node (factory node, translated scene node, or translated asset node).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Return the node container type that defines the purpose of the node (factory node, translated scene node, or translated asset node)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetNodeContainerType_Parms, ReturnValue), Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType, METADATA_PARAMS(0, nullptr) }; // 12522686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetNodeContainerType", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::InterchangeBaseNode_eventGetNodeContainerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::InterchangeBaseNode_eventGetNodeContainerType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetNodeContainerType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInterchangeNodeContainerType*)Z_Param__Result=P_THIS->GetNodeContainerType();
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetNodeContainerType

// Begin Class UInterchangeBaseNode Function GetParentUid
struct Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics
{
	struct InterchangeBaseNode_eventGetParentUid_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return the parent unique ID. If the attribute does not exist, returns InvalidNodeUid().\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Return the parent unique ID. If the attribute does not exist, returns InvalidNodeUid()." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetParentUid_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetParentUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::InterchangeBaseNode_eventGetParentUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::InterchangeBaseNode_eventGetParentUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetParentUid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetParentUid();
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetParentUid

// Begin Class UInterchangeBaseNode Function GetStringAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics
{
	struct InterchangeBaseNode_eventGetStringAttribute_Parms
	{
		FString NodeAttributeKey;
		FString OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Get a string attribute from this node. Returns false if the attribute does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Get a string attribute from this node. Returns false if the attribute does not exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetStringAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetStringAttribute_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventGetStringAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventGetStringAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetStringAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::InterchangeBaseNode_eventGetStringAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::InterchangeBaseNode_eventGetStringAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetStringAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetStringAttribute(Z_Param_NodeAttributeKey,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetStringAttribute

// Begin Class UInterchangeBaseNode Function GetTargetNodeCount
struct Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics
{
	struct InterchangeBaseNode_eventGetTargetNodeCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Get the number of target assets relating to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Get the number of target assets relating to this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetTargetNodeCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetTargetNodeCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::InterchangeBaseNode_eventGetTargetNodeCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::InterchangeBaseNode_eventGetTargetNodeCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetTargetNodeCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTargetNodeCount();
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetTargetNodeCount

// Begin Class UInterchangeBaseNode Function GetTargetNodeUids
struct Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics
{
	struct InterchangeBaseNode_eventGetTargetNodeUids_Parms
	{
		TArray<FString> OutTargetAssets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Get the target assets relating to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Get the target assets relating to this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutTargetAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTargetAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::NewProp_OutTargetAssets_Inner = { "OutTargetAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::NewProp_OutTargetAssets = { "OutTargetAssets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetTargetNodeUids_Parms, OutTargetAssets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::NewProp_OutTargetAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::NewProp_OutTargetAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetTargetNodeUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::InterchangeBaseNode_eventGetTargetNodeUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::InterchangeBaseNode_eventGetTargetNodeUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetTargetNodeUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutTargetAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTargetNodeUids(Z_Param_Out_OutTargetAssets);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetTargetNodeUids

// Begin Class UInterchangeBaseNode Function GetUniqueID
struct Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics
{
	struct InterchangeBaseNode_eventGetUniqueID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return the unique ID passed in the constructor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Return the unique ID passed in the constructor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetUniqueID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetUniqueID", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::InterchangeBaseNode_eventGetUniqueID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::InterchangeBaseNode_eventGetUniqueID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetUniqueID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetUniqueID();
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetUniqueID

// Begin Class UInterchangeBaseNode Function GetVector2Attribute
struct Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics
{
	struct InterchangeBaseNode_eventGetVector2Attribute_Parms
	{
		FString NodeAttributeKey;
		FVector2f OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Get a Vector2 attribute from this node. Returns false if the attribute does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Get a Vector2 attribute from this node. Returns false if the attribute does not exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetVector2Attribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventGetVector2Attribute_Parms, OutValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventGetVector2Attribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventGetVector2Attribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "GetVector2Attribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::InterchangeBaseNode_eventGetVector2Attribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::InterchangeBaseNode_eventGetVector2Attribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execGetVector2Attribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetVector2Attribute(Z_Param_NodeAttributeKey,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function GetVector2Attribute

// Begin Class UInterchangeBaseNode Function InitializeNode
struct Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics
{
	struct InterchangeBaseNode_eventInitializeNode_Parms
	{
		FString UniqueID;
		FString DisplayLabel;
		EInterchangeNodeContainerType NodeContainerType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Initialize the base data of the node.\n\x09 * @param UniqueID - The unique ID for this node.\n\x09 * @param DisplayLabel - The name of the node.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Initialize the base data of the node.\n@param UniqueID - The unique ID for this node.\n@param DisplayLabel - The name of the node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeContainerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NodeContainerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeContainerType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventInitializeNode_Parms, UniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueID_MetaData), NewProp_UniqueID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventInitializeNode_Parms, DisplayLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayLabel_MetaData), NewProp_DisplayLabel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::NewProp_NodeContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::NewProp_NodeContainerType = { "NodeContainerType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventInitializeNode_Parms, NodeContainerType), Z_Construct_UEnum_InterchangeCore_EInterchangeNodeContainerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeContainerType_MetaData), NewProp_NodeContainerType_MetaData) }; // 12522686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::NewProp_UniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::NewProp_DisplayLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::NewProp_NodeContainerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::NewProp_NodeContainerType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "InitializeNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::InterchangeBaseNode_eventInitializeNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::InterchangeBaseNode_eventInitializeNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execInitializeNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
	P_GET_ENUM(EInterchangeNodeContainerType,Z_Param_NodeContainerType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeNode(Z_Param_UniqueID,Z_Param_DisplayLabel,EInterchangeNodeContainerType(Z_Param_NodeContainerType));
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function InitializeNode

// Begin Class UInterchangeBaseNode Function IsEnabled
struct Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics
{
	struct InterchangeBaseNode_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * If true, the node is imported or exported. If false, it is discarded.\n\x09 * Returns false if the node was disabled. Returns true if the attribute is not there or if it was enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "If true, the node is imported or exported. If false, it is discarded.\nReturns false if the node was disabled. Returns true if the attribute is not there or if it was enabled." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventIsEnabled_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "IsEnabled", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::InterchangeBaseNode_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::InterchangeBaseNode_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnabled();
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function IsEnabled

// Begin Class UInterchangeBaseNode Function RemoveAttribute
struct Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics
{
	struct InterchangeBaseNode_eventRemoveAttribute_Parms
	{
		FString NodeAttributeKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Remove the specified attribute from this node. Returns false if it could not be removed. If the attribute does not exist, returns true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Remove the specified attribute from this node. Returns false if it could not be removed. If the attribute does not exist, returns true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeAttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeAttributeKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::NewProp_NodeAttributeKey = { "NodeAttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventRemoveAttribute_Parms, NodeAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeAttributeKey_MetaData), NewProp_NodeAttributeKey_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventRemoveAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventRemoveAttribute_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::NewProp_NodeAttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "RemoveAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::InterchangeBaseNode_eventRemoveAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::InterchangeBaseNode_eventRemoveAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execRemoveAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeAttributeKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAttribute(Z_Param_NodeAttributeKey);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function RemoveAttribute

// Begin Class UInterchangeBaseNode Function RemoveTargetNodeUid
struct Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics
{
	struct InterchangeBaseNode_eventRemoveTargetNodeUid_Parms
	{
		FString AssetUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Remove an asset node UID relating to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Remove an asset node UID relating to this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::NewProp_AssetUid = { "AssetUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventRemoveTargetNodeUid_Parms, AssetUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUid_MetaData), NewProp_AssetUid_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventRemoveTargetNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventRemoveTargetNodeUid_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::NewProp_AssetUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "RemoveTargetNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::InterchangeBaseNode_eventRemoveTargetNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::InterchangeBaseNode_eventRemoveTargetNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execRemoveTargetNodeUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveTargetNodeUid(Z_Param_AssetUid);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function RemoveTargetNodeUid

// Begin Class UInterchangeBaseNode Function SetAssetName
struct Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics
{
	struct InterchangeBaseNode_eventSetAssetName_Parms
	{
		FString AssetName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Set the name for the imported asset this node represents. The asset factory will call GetAssetName().\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Set the name for the imported asset this node represents. The asset factory will call GetAssetName()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventSetAssetName_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventSetAssetName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventSetAssetName_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "SetAssetName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::InterchangeBaseNode_eventSetAssetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::InterchangeBaseNode_eventSetAssetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execSetAssetName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAssetName(Z_Param_AssetName);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function SetAssetName

// Begin Class UInterchangeBaseNode Function SetDisplayLabel
struct Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics
{
	struct InterchangeBaseNode_eventSetDisplayLabel_Parms
	{
		FString DisplayName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Change the display label.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Change the display label." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventSetDisplayLabel_Parms, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventSetDisplayLabel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventSetDisplayLabel_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "SetDisplayLabel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::InterchangeBaseNode_eventSetDisplayLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::InterchangeBaseNode_eventSetDisplayLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execSetDisplayLabel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetDisplayLabel(Z_Param_DisplayName);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function SetDisplayLabel

// Begin Class UInterchangeBaseNode Function SetEnabled
struct Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics
{
	struct InterchangeBaseNode_eventSetEnabled_Parms
	{
		bool bIsEnabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Determine whether this node should be part of the import or export process.\n\x09 * @param bIsEnabled - If true, this node is imported or exported. If false, it is discarded.\n\x09 * @return true if the attribute was set, or false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Determine whether this node should be part of the import or export process.\n@param bIsEnabled - If true, this node is imported or exported. If false, it is discarded.\n@return true if the attribute was set, or false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventSetEnabled_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventSetEnabled_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventSetEnabled_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::NewProp_bIsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "SetEnabled", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::InterchangeBaseNode_eventSetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::InterchangeBaseNode_eventSetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execSetEnabled)
{
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function SetEnabled

// Begin Class UInterchangeBaseNode Function SetParentUid
struct Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics
{
	struct InterchangeBaseNode_eventSetParentUid_Parms
	{
		FString ParentUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::NewProp_ParentUid = { "ParentUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNode_eventSetParentUid_Parms, ParentUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentUid_MetaData), NewProp_ParentUid_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNode_eventSetParentUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNode_eventSetParentUid_Parms), &Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::NewProp_ParentUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNode, nullptr, "SetParentUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::InterchangeBaseNode_eventSetParentUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::InterchangeBaseNode_eventSetParentUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNode::execSetParentUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ParentUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetParentUid(Z_Param_ParentUid);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNode Function SetParentUid

// Begin Class UInterchangeBaseNode
void UInterchangeBaseNode::StaticRegisterNativesUInterchangeBaseNode()
{
	UClass* Class = UInterchangeBaseNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBooleanAttribute", &UInterchangeBaseNode::execAddBooleanAttribute },
		{ "AddDoubleAttribute", &UInterchangeBaseNode::execAddDoubleAttribute },
		{ "AddFloatAttribute", &UInterchangeBaseNode::execAddFloatAttribute },
		{ "AddGuidAttribute", &UInterchangeBaseNode::execAddGuidAttribute },
		{ "AddInt32Attribute", &UInterchangeBaseNode::execAddInt32Attribute },
		{ "AddLinearColorAttribute", &UInterchangeBaseNode::execAddLinearColorAttribute },
		{ "AddStringAttribute", &UInterchangeBaseNode::execAddStringAttribute },
		{ "AddTargetNodeUid", &UInterchangeBaseNode::execAddTargetNodeUid },
		{ "AddVector2Attribute", &UInterchangeBaseNode::execAddVector2Attribute },
		{ "GetAssetName", &UInterchangeBaseNode::execGetAssetName },
		{ "GetBooleanAttribute", &UInterchangeBaseNode::execGetBooleanAttribute },
		{ "GetDisplayLabel", &UInterchangeBaseNode::execGetDisplayLabel },
		{ "GetDoubleAttribute", &UInterchangeBaseNode::execGetDoubleAttribute },
		{ "GetFloatAttribute", &UInterchangeBaseNode::execGetFloatAttribute },
		{ "GetGuidAttribute", &UInterchangeBaseNode::execGetGuidAttribute },
		{ "GetInt32Attribute", &UInterchangeBaseNode::execGetInt32Attribute },
		{ "GetLinearColorAttribute", &UInterchangeBaseNode::execGetLinearColorAttribute },
		{ "GetNodeContainerType", &UInterchangeBaseNode::execGetNodeContainerType },
		{ "GetParentUid", &UInterchangeBaseNode::execGetParentUid },
		{ "GetStringAttribute", &UInterchangeBaseNode::execGetStringAttribute },
		{ "GetTargetNodeCount", &UInterchangeBaseNode::execGetTargetNodeCount },
		{ "GetTargetNodeUids", &UInterchangeBaseNode::execGetTargetNodeUids },
		{ "GetUniqueID", &UInterchangeBaseNode::execGetUniqueID },
		{ "GetVector2Attribute", &UInterchangeBaseNode::execGetVector2Attribute },
		{ "InitializeNode", &UInterchangeBaseNode::execInitializeNode },
		{ "IsEnabled", &UInterchangeBaseNode::execIsEnabled },
		{ "RemoveAttribute", &UInterchangeBaseNode::execRemoveAttribute },
		{ "RemoveTargetNodeUid", &UInterchangeBaseNode::execRemoveTargetNodeUid },
		{ "SetAssetName", &UInterchangeBaseNode::execSetAssetName },
		{ "SetDisplayLabel", &UInterchangeBaseNode::execSetDisplayLabel },
		{ "SetEnabled", &UInterchangeBaseNode::execSetEnabled },
		{ "SetParentUid", &UInterchangeBaseNode::execSetParentUid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeBaseNode);
UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister()
{
	return UInterchangeBaseNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeBaseNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This struct is used to store and retrieve key-value attributes. The attributes are stored in a generic FAttributeStorage that serializes the values in a TArray64<uint8>.\n * See UE::Interchange::EAttributeTypes to know the supported template types.\n * This is an abstract class. This is the base class of the interchange node graph format; all classes in this format should derive from this class.\n */" },
		{ "IncludePath", "Nodes/InterchangeBaseNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "This struct is used to store and retrieve key-value attributes. The attributes are stored in a generic FAttributeStorage that serializes the values in a TArray64<uint8>.\nSee UE::Interchange::EAttributeTypes to know the supported template types.\nThis is an abstract class. This is the base class of the interchange node graph format; all classes in this format should derive from this class." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserInterfaceContext_MetaData[] = {
		{ "Comment", "/**\n\x09 * Temporary property set by UI to have the context for ShouldHideAttribute. We use this because the property editor cannot add this custom context when it calls CustomizeDetails.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNode.h" },
		{ "ToolTip", "Temporary property set by UI to have the context for ShouldHideAttribute. We use this because the property editor cannot add this custom context when it calls CustomizeDetails." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_UserInterfaceContext_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UserInterfaceContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeBaseNode_AddBooleanAttribute, "AddBooleanAttribute" }, // 1409711003
		{ &Z_Construct_UFunction_UInterchangeBaseNode_AddDoubleAttribute, "AddDoubleAttribute" }, // 4185765357
		{ &Z_Construct_UFunction_UInterchangeBaseNode_AddFloatAttribute, "AddFloatAttribute" }, // 1735433356
		{ &Z_Construct_UFunction_UInterchangeBaseNode_AddGuidAttribute, "AddGuidAttribute" }, // 4154799395
		{ &Z_Construct_UFunction_UInterchangeBaseNode_AddInt32Attribute, "AddInt32Attribute" }, // 1240453975
		{ &Z_Construct_UFunction_UInterchangeBaseNode_AddLinearColorAttribute, "AddLinearColorAttribute" }, // 3982977405
		{ &Z_Construct_UFunction_UInterchangeBaseNode_AddStringAttribute, "AddStringAttribute" }, // 3821690633
		{ &Z_Construct_UFunction_UInterchangeBaseNode_AddTargetNodeUid, "AddTargetNodeUid" }, // 1219493483
		{ &Z_Construct_UFunction_UInterchangeBaseNode_AddVector2Attribute, "AddVector2Attribute" }, // 3828215145
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetAssetName, "GetAssetName" }, // 2719949907
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetBooleanAttribute, "GetBooleanAttribute" }, // 3862438859
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetDisplayLabel, "GetDisplayLabel" }, // 2475031176
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetDoubleAttribute, "GetDoubleAttribute" }, // 3431152489
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetFloatAttribute, "GetFloatAttribute" }, // 763277758
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetGuidAttribute, "GetGuidAttribute" }, // 4201081616
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetInt32Attribute, "GetInt32Attribute" }, // 2348136851
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetLinearColorAttribute, "GetLinearColorAttribute" }, // 2071047949
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetNodeContainerType, "GetNodeContainerType" }, // 2175558165
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetParentUid, "GetParentUid" }, // 796869517
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetStringAttribute, "GetStringAttribute" }, // 1741555530
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeCount, "GetTargetNodeCount" }, // 3703177266
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetTargetNodeUids, "GetTargetNodeUids" }, // 1091121869
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetUniqueID, "GetUniqueID" }, // 262108534
		{ &Z_Construct_UFunction_UInterchangeBaseNode_GetVector2Attribute, "GetVector2Attribute" }, // 2705052200
		{ &Z_Construct_UFunction_UInterchangeBaseNode_InitializeNode, "InitializeNode" }, // 1178250201
		{ &Z_Construct_UFunction_UInterchangeBaseNode_IsEnabled, "IsEnabled" }, // 863401939
		{ &Z_Construct_UFunction_UInterchangeBaseNode_RemoveAttribute, "RemoveAttribute" }, // 940347408
		{ &Z_Construct_UFunction_UInterchangeBaseNode_RemoveTargetNodeUid, "RemoveTargetNodeUid" }, // 2246035289
		{ &Z_Construct_UFunction_UInterchangeBaseNode_SetAssetName, "SetAssetName" }, // 2754057286
		{ &Z_Construct_UFunction_UInterchangeBaseNode_SetDisplayLabel, "SetDisplayLabel" }, // 2495177440
		{ &Z_Construct_UFunction_UInterchangeBaseNode_SetEnabled, "SetEnabled" }, // 3421329794
		{ &Z_Construct_UFunction_UInterchangeBaseNode_SetParentUid, "SetParentUid" }, // 3858089569
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeBaseNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeBaseNode_Statics::NewProp_UserInterfaceContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeBaseNode_Statics::NewProp_UserInterfaceContext = { "UserInterfaceContext", nullptr, (EPropertyFlags)0x0010000800202000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeBaseNode, UserInterfaceContext), Z_Construct_UEnum_InterchangeCore_EInterchangeNodeUserInterfaceContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserInterfaceContext_MetaData), NewProp_UserInterfaceContext_MetaData) }; // 2926889016
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeBaseNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeBaseNode_Statics::NewProp_UserInterfaceContext_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeBaseNode_Statics::NewProp_UserInterfaceContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNode_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UInterchangeBaseNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeBaseNode_Statics::ClassParams = {
	&UInterchangeBaseNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UInterchangeBaseNode_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNode_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeBaseNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeBaseNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeBaseNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeBaseNode.OuterSingleton, Z_Construct_UClass_UInterchangeBaseNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeBaseNode.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeBaseNode>()
{
	return UInterchangeBaseNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeBaseNode);
UInterchangeBaseNode::~UInterchangeBaseNode() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeBaseNode)
// End Class UInterchangeBaseNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeNodeContainerType_StaticEnum, TEXT("EInterchangeNodeContainerType"), &Z_Registration_Info_UEnum_EInterchangeNodeContainerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 12522686U) },
		{ EInterchangeNodeUserInterfaceContext_StaticEnum, TEXT("EInterchangeNodeUserInterfaceContext"), &Z_Registration_Info_UEnum_EInterchangeNodeUserInterfaceContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2926889016U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeBaseNode, UInterchangeBaseNode::StaticClass, TEXT("UInterchangeBaseNode"), &Z_Registration_Info_UClass_UInterchangeBaseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeBaseNode), 3970869185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_1694903520(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
