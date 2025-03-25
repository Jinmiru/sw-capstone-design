// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Engine/Public/InterchangeAssetImportData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAssetImportData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeAssetImportData();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeAssetImportData_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeAssetImportDataConverterBase();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References

// Begin Class UInterchangeAssetImportData Function GetNodeContainer
struct Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics
{
	struct InterchangeAssetImportData_eventGetNodeContainer_Parms
	{
		UInterchangeBaseNodeContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventGetNodeContainer_Parms, ReturnValue), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "GetNodeContainer", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::InterchangeAssetImportData_eventGetNodeContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::InterchangeAssetImportData_eventGetNodeContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execGetNodeContainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInterchangeBaseNodeContainer**)Z_Param__Result=P_THIS->GetNodeContainer();
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function GetNodeContainer

// Begin Class UInterchangeAssetImportData Function GetNumberOfPipelines
struct Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics
{
	struct InterchangeAssetImportData_eventGetNumberOfPipelines_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventGetNumberOfPipelines_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "GetNumberOfPipelines", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::InterchangeAssetImportData_eventGetNumberOfPipelines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::InterchangeAssetImportData_eventGetNumberOfPipelines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execGetNumberOfPipelines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumberOfPipelines();
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function GetNumberOfPipelines

// Begin Class UInterchangeAssetImportData Function GetPipelines
struct Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics
{
	struct InterchangeAssetImportData_eventGetPipelines_Parms
	{
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/**\n\x09* Returns Array of non-null pipelines\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "Returns Array of non-null pipelines" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventGetPipelines_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "GetPipelines", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::InterchangeAssetImportData_eventGetPipelines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::InterchangeAssetImportData_eventGetPipelines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execGetPipelines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetPipelines();
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function GetPipelines

// Begin Class UInterchangeAssetImportData Function GetStoredFactoryNode
struct Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics
{
	struct InterchangeAssetImportData_eventGetStoredFactoryNode_Parms
	{
		FString InNodeUniqueId;
		UInterchangeFactoryBaseNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNodeUniqueId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::NewProp_InNodeUniqueId = { "InNodeUniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventGetStoredFactoryNode_Parms, InNodeUniqueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeUniqueId_MetaData), NewProp_InNodeUniqueId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventGetStoredFactoryNode_Parms, ReturnValue), Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::NewProp_InNodeUniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "GetStoredFactoryNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::InterchangeAssetImportData_eventGetStoredFactoryNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::InterchangeAssetImportData_eventGetStoredFactoryNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execGetStoredFactoryNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNodeUniqueId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInterchangeFactoryBaseNode**)Z_Param__Result=P_THIS->GetStoredFactoryNode(Z_Param_InNodeUniqueId);
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function GetStoredFactoryNode

// Begin Class UInterchangeAssetImportData Function GetStoredNode
struct Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics
{
	struct InterchangeAssetImportData_eventGetStoredNode_Parms
	{
		FString InNodeUniqueId;
		const UInterchangeBaseNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNodeUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNodeUniqueId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::NewProp_InNodeUniqueId = { "InNodeUniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventGetStoredNode_Parms, InNodeUniqueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNodeUniqueId_MetaData), NewProp_InNodeUniqueId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventGetStoredNode_Parms, ReturnValue), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::NewProp_InNodeUniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "GetStoredNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::InterchangeAssetImportData_eventGetStoredNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::InterchangeAssetImportData_eventGetStoredNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execGetStoredNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNodeUniqueId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInterchangeBaseNode**)Z_Param__Result=P_THIS->GetStoredNode(Z_Param_InNodeUniqueId);
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function GetStoredNode

// Begin Class UInterchangeAssetImportData Function GetTranslatorSettings
struct Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics
{
	struct InterchangeAssetImportData_eventGetTranslatorSettings_Parms
	{
		const UInterchangeTranslatorSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventGetTranslatorSettings_Parms, ReturnValue), Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "GetTranslatorSettings", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::InterchangeAssetImportData_eventGetTranslatorSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::InterchangeAssetImportData_eventGetTranslatorSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execGetTranslatorSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInterchangeTranslatorSettings**)Z_Param__Result=P_THIS->GetTranslatorSettings();
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function GetTranslatorSettings

// Begin Class UInterchangeAssetImportData Function ScriptExtractDisplayLabels
struct Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics
{
	struct InterchangeAssetImportData_eventScriptExtractDisplayLabels_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/**\n\x09 * Extract all the filename labels.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "Extract all the filename labels." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventScriptExtractDisplayLabels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "ScriptExtractDisplayLabels", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::InterchangeAssetImportData_eventScriptExtractDisplayLabels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::InterchangeAssetImportData_eventScriptExtractDisplayLabels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execScriptExtractDisplayLabels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->ScriptExtractDisplayLabels();
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function ScriptExtractDisplayLabels

// Begin Class UInterchangeAssetImportData Function ScriptExtractFilenames
struct Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics
{
	struct InterchangeAssetImportData_eventScriptExtractFilenames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/**\n\x09 * Extract all the (resolved) filenames.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "Extract all the (resolved) filenames." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventScriptExtractFilenames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "ScriptExtractFilenames", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::InterchangeAssetImportData_eventScriptExtractFilenames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::InterchangeAssetImportData_eventScriptExtractFilenames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execScriptExtractFilenames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->ScriptExtractFilenames();
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function ScriptExtractFilenames

// Begin Class UInterchangeAssetImportData Function ScriptGetFirstFilename
struct Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics
{
	struct InterchangeAssetImportData_eventScriptGetFirstFilename_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/**\n\x09 * Return the first filename stored in this data. The resulting filename will be absolute (that is, not relative to the asset).\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "Return the first filename stored in this data. The resulting filename will be absolute (that is, not relative to the asset)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventScriptGetFirstFilename_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "ScriptGetFirstFilename", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::InterchangeAssetImportData_eventScriptGetFirstFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::InterchangeAssetImportData_eventScriptGetFirstFilename_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execScriptGetFirstFilename)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ScriptGetFirstFilename();
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function ScriptGetFirstFilename

// Begin Class UInterchangeAssetImportData Function SetNodeContainer
struct Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics
{
	struct InterchangeAssetImportData_eventSetNodeContainer_Parms
	{
		UInterchangeBaseNodeContainer* InNodeContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodeContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::NewProp_InNodeContainer = { "InNodeContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventSetNodeContainer_Parms, InNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::NewProp_InNodeContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "SetNodeContainer", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::InterchangeAssetImportData_eventSetNodeContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::InterchangeAssetImportData_eventSetNodeContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execSetNodeContainer)
{
	P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_InNodeContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNodeContainer(Z_Param_InNodeContainer);
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function SetNodeContainer

// Begin Class UInterchangeAssetImportData Function SetPipelines
struct Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics
{
	struct InterchangeAssetImportData_eventSetPipelines_Parms
	{
		TArray<UObject*> InPipelines;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPipelines_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipelines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InPipelines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::NewProp_InPipelines_Inner = { "InPipelines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::NewProp_InPipelines = { "InPipelines", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventSetPipelines_Parms, InPipelines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPipelines_MetaData), NewProp_InPipelines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::NewProp_InPipelines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::NewProp_InPipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "SetPipelines", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::InterchangeAssetImportData_eventSetPipelines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::InterchangeAssetImportData_eventSetPipelines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execSetPipelines)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_InPipelines);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPipelines(Z_Param_Out_InPipelines);
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function SetPipelines

// Begin Class UInterchangeAssetImportData Function SetTranslatorSettings
struct Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics
{
	struct InterchangeAssetImportData_eventSetTranslatorSettings_Parms
	{
		UInterchangeTranslatorSettings* TranslatorSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslatorSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::NewProp_TranslatorSettings = { "TranslatorSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAssetImportData_eventSetTranslatorSettings_Parms, TranslatorSettings), Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::NewProp_TranslatorSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "SetTranslatorSettings", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::InterchangeAssetImportData_eventSetTranslatorSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::InterchangeAssetImportData_eventSetTranslatorSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAssetImportData::execSetTranslatorSettings)
{
	P_GET_OBJECT(UInterchangeTranslatorSettings,Z_Param_TranslatorSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTranslatorSettings(Z_Param_TranslatorSettings);
	P_NATIVE_END;
}
// End Class UInterchangeAssetImportData Function SetTranslatorSettings

// Begin Class UInterchangeAssetImportData
void UInterchangeAssetImportData::StaticRegisterNativesUInterchangeAssetImportData()
{
	UClass* Class = UInterchangeAssetImportData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNodeContainer", &UInterchangeAssetImportData::execGetNodeContainer },
		{ "GetNumberOfPipelines", &UInterchangeAssetImportData::execGetNumberOfPipelines },
		{ "GetPipelines", &UInterchangeAssetImportData::execGetPipelines },
		{ "GetStoredFactoryNode", &UInterchangeAssetImportData::execGetStoredFactoryNode },
		{ "GetStoredNode", &UInterchangeAssetImportData::execGetStoredNode },
		{ "GetTranslatorSettings", &UInterchangeAssetImportData::execGetTranslatorSettings },
		{ "ScriptExtractDisplayLabels", &UInterchangeAssetImportData::execScriptExtractDisplayLabels },
		{ "ScriptExtractFilenames", &UInterchangeAssetImportData::execScriptExtractFilenames },
		{ "ScriptGetFirstFilename", &UInterchangeAssetImportData::execScriptGetFirstFilename },
		{ "SetNodeContainer", &UInterchangeAssetImportData::execSetNodeContainer },
		{ "SetPipelines", &UInterchangeAssetImportData::execSetPipelines },
		{ "SetTranslatorSettings", &UInterchangeAssetImportData::execSetTranslatorSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAssetImportData);
UClass* Z_Construct_UClass_UInterchangeAssetImportData_NoRegister()
{
	return UInterchangeAssetImportData::StaticClass();
}
struct Z_Construct_UClass_UInterchangeAssetImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeAssetImportData.h" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneImportAsset_MetaData[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/** On a level import, set to the UInterchangeSceneImportAsset created during the import. */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "On a level import, set to the UInterchangeSceneImportAsset created during the import." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/** The Node UID passed to the factory that existed in the graph that was used to create this asset. */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "The Node UID passed to the factory that existed in the graph that was used to create this asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeContainer_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use GetNodeContainer/SetNodeContainer instead." },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pipelines_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use GetPipelines/SetPipelines instead." },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientNodeContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientPipelines_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientTranslatorSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneImportAsset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pipelines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pipelines;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransientNodeContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransientPipelines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransientPipelines;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransientTranslatorSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_GetNodeContainer, "GetNodeContainer" }, // 3329226345
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_GetNumberOfPipelines, "GetNumberOfPipelines" }, // 3251798303
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_GetPipelines, "GetPipelines" }, // 2800217889
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredFactoryNode, "GetStoredFactoryNode" }, // 3741211628
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_GetStoredNode, "GetStoredNode" }, // 2895060984
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_GetTranslatorSettings, "GetTranslatorSettings" }, // 781690616
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels, "ScriptExtractDisplayLabels" }, // 3515697153
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames, "ScriptExtractFilenames" }, // 2756609477
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename, "ScriptGetFirstFilename" }, // 466379318
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_SetNodeContainer, "SetNodeContainer" }, // 189353322
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_SetPipelines, "SetPipelines" }, // 3977673320
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_SetTranslatorSettings, "SetTranslatorSettings" }, // 1913000202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAssetImportData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_SceneImportAsset = { "SceneImportAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeAssetImportData, SceneImportAsset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneImportAsset_MetaData), NewProp_SceneImportAsset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeAssetImportData, NodeUniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUniqueID_MetaData), NewProp_NodeUniqueID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeContainer = { "NodeContainer", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeAssetImportData, NodeContainer_DEPRECATED), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeContainer_MetaData), NewProp_NodeContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines_Inner = { "Pipelines", nullptr, (EPropertyFlags)0x0104000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines = { "Pipelines", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeAssetImportData, Pipelines_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pipelines_MetaData), NewProp_Pipelines_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_TransientNodeContainer = { "TransientNodeContainer", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeAssetImportData, TransientNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientNodeContainer_MetaData), NewProp_TransientNodeContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_TransientPipelines_Inner = { "TransientPipelines", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_TransientPipelines = { "TransientPipelines", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeAssetImportData, TransientPipelines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientPipelines_MetaData), NewProp_TransientPipelines_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_TransientTranslatorSettings = { "TransientTranslatorSettings", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeAssetImportData, TransientTranslatorSettings), Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientTranslatorSettings_MetaData), NewProp_TransientTranslatorSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeAssetImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_SceneImportAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeUniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_TransientNodeContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_TransientPipelines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_TransientPipelines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_TransientTranslatorSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeAssetImportData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetImportData,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::ClassParams = {
	&UInterchangeAssetImportData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInterchangeAssetImportData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportData_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeAssetImportData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeAssetImportData()
{
	if (!Z_Registration_Info_UClass_UInterchangeAssetImportData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAssetImportData.OuterSingleton, Z_Construct_UClass_UInterchangeAssetImportData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeAssetImportData.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeAssetImportData>()
{
	return UInterchangeAssetImportData::StaticClass();
}
UInterchangeAssetImportData::UInterchangeAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAssetImportData);
UInterchangeAssetImportData::~UInterchangeAssetImportData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeAssetImportData)
// End Class UInterchangeAssetImportData

// Begin Class UInterchangeAssetImportDataConverterBase
void UInterchangeAssetImportDataConverterBase::StaticRegisterNativesUInterchangeAssetImportDataConverterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAssetImportDataConverterBase);
UClass* Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_NoRegister()
{
	return UInterchangeAssetImportDataConverterBase::StaticClass();
}
struct Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class to create an asset import data converter.\n */" },
		{ "IncludePath", "InterchangeAssetImportData.h" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "Base class to create an asset import data converter." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAssetImportDataConverterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_Statics::ClassParams = {
	&UInterchangeAssetImportDataConverterBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeAssetImportDataConverterBase()
{
	if (!Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.OuterSingleton, Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeAssetImportDataConverterBase>()
{
	return UInterchangeAssetImportDataConverterBase::StaticClass();
}
UInterchangeAssetImportDataConverterBase::UInterchangeAssetImportDataConverterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAssetImportDataConverterBase);
UInterchangeAssetImportDataConverterBase::~UInterchangeAssetImportDataConverterBase() {}
// End Class UInterchangeAssetImportDataConverterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAssetImportData, UInterchangeAssetImportData::StaticClass, TEXT("UInterchangeAssetImportData"), &Z_Registration_Info_UClass_UInterchangeAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAssetImportData), 62224459U) },
		{ Z_Construct_UClass_UInterchangeAssetImportDataConverterBase, UInterchangeAssetImportDataConverterBase::StaticClass, TEXT("UInterchangeAssetImportDataConverterBase"), &Z_Registration_Info_UClass_UInterchangeAssetImportDataConverterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAssetImportDataConverterBase), 1585915506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_1258562542(TEXT("/Script/InterchangeEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
