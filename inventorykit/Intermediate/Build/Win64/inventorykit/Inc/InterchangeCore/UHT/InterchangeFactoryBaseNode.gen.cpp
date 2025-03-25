// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/Nodes/InterchangeFactoryBaseNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeFactoryBaseNode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin Enum EReimportStrategyFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReimportStrategyFlags;
static UEnum* EReimportStrategyFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReimportStrategyFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReimportStrategyFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EReimportStrategyFlags"));
	}
	return Z_Registration_Info_UEnum_EReimportStrategyFlags.OuterSingleton;
}
template<> INTERCHANGECORE_API UEnum* StaticEnum<EReimportStrategyFlags>()
{
	return EReimportStrategyFlags_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyEditorChangedProperties.Comment", "//Always apply all properties specified by the pipeline, but leave the properties that were modified in the editor since the last import.\n" },
		{ "ApplyEditorChangedProperties.Name", "EReimportStrategyFlags::ApplyEditorChangedProperties" },
		{ "ApplyEditorChangedProperties.ToolTip", "Always apply all properties specified by the pipeline, but leave the properties that were modified in the editor since the last import." },
		{ "ApplyNoProperties.Comment", "//Do not apply any properties when reimporting. Simply change the source data\n" },
		{ "ApplyNoProperties.Name", "EReimportStrategyFlags::ApplyNoProperties" },
		{ "ApplyNoProperties.ToolTip", "Do not apply any properties when reimporting. Simply change the source data" },
		{ "ApplyPipelineProperties.Comment", "//Always apply all properties specified by the pipeline.\n" },
		{ "ApplyPipelineProperties.Name", "EReimportStrategyFlags::ApplyPipelineProperties" },
		{ "ApplyPipelineProperties.ToolTip", "Always apply all properties specified by the pipeline." },
		{ "Comment", "// namespace UE::Interchange\n" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "namespace UE::Interchange" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReimportStrategyFlags::ApplyNoProperties", (int64)EReimportStrategyFlags::ApplyNoProperties },
		{ "EReimportStrategyFlags::ApplyPipelineProperties", (int64)EReimportStrategyFlags::ApplyPipelineProperties },
		{ "EReimportStrategyFlags::ApplyEditorChangedProperties", (int64)EReimportStrategyFlags::ApplyEditorChangedProperties },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	"EReimportStrategyFlags",
	"EReimportStrategyFlags",
	Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags()
{
	if (!Z_Registration_Info_UEnum_EReimportStrategyFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReimportStrategyFlags.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReimportStrategyFlags.InnerSingleton;
}
// End Enum EReimportStrategyFlags

// Begin Class UInterchangeFactoryBaseNode Function AddFactoryDependencyUid
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics
{
	struct InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add one dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Add one dependency to this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "AddFactoryDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::InterchangeFactoryBaseNode_eventAddFactoryDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execAddFactoryDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddFactoryDependencyUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function AddFactoryDependencyUid

// Begin Class UInterchangeFactoryBaseNode Function GetCustomReferenceObject
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms
	{
		FSoftObjectPath AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return the custom ReferenceObject: the UObject this factory node has created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Return the custom ReferenceObject: the UObject this factory node has created." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetCustomReferenceObject", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::InterchangeFactoryBaseNode_eventGetCustomReferenceObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetCustomReferenceObject)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomReferenceObject(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function GetCustomReferenceObject

// Begin Class UInterchangeFactoryBaseNode Function GetCustomSubPath
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics
{
	struct InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return the custom sub-path under PackageBasePath where the assets will be created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Return the custom sub-path under PackageBasePath where the assets will be created." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetCustomSubPath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::InterchangeFactoryBaseNode_eventGetCustomSubPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetCustomSubPath)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSubPath(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function GetCustomSubPath

// Begin Class UInterchangeFactoryBaseNode Function GetFactoryDependencies
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics
{
	struct InterchangeFactoryBaseNode_eventGetFactoryDependencies_Parms
	{
		TArray<FString> OutDependencies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Retrieve the dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Retrieve the dependencies for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetFactoryDependencies_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::NewProp_OutDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::NewProp_OutDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetFactoryDependencies", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::InterchangeFactoryBaseNode_eventGetFactoryDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::InterchangeFactoryBaseNode_eventGetFactoryDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetFactoryDependencies)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFactoryDependencies(Z_Param_Out_OutDependencies);
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function GetFactoryDependencies

// Begin Class UInterchangeFactoryBaseNode Function GetFactoryDependenciesCount
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics
{
	struct InterchangeFactoryBaseNode_eventGetFactoryDependenciesCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Retrieve the number of factory dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Retrieve the number of factory dependencies for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetFactoryDependenciesCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetFactoryDependenciesCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::InterchangeFactoryBaseNode_eventGetFactoryDependenciesCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::InterchangeFactoryBaseNode_eventGetFactoryDependenciesCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetFactoryDependenciesCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFactoryDependenciesCount();
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function GetFactoryDependenciesCount

// Begin Class UInterchangeFactoryBaseNode Function GetFactoryDependency
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics
{
	struct InterchangeFactoryBaseNode_eventGetFactoryDependency_Parms
	{
		int32 Index;
		FString OutDependency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Retrieve one dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Retrieve one dependency for this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetFactoryDependency_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_OutDependency = { "OutDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetFactoryDependency_Parms, OutDependency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::NewProp_OutDependency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetFactoryDependency", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::InterchangeFactoryBaseNode_eventGetFactoryDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::InterchangeFactoryBaseNode_eventGetFactoryDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetFactoryDependency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFactoryDependency(Z_Param_Index,Z_Param_Out_OutDependency);
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function GetFactoryDependency

// Begin Class UInterchangeFactoryBaseNode Function GetReimportStrategyFlags
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics
{
	struct InterchangeFactoryBaseNode_eventGetReimportStrategyFlags_Parms
	{
		EReimportStrategyFlags ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return the reimport strategy flags.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Return the reimport strategy flags." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventGetReimportStrategyFlags_Parms, ReturnValue), Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags, METADATA_PARAMS(0, nullptr) }; // 2417377604
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "GetReimportStrategyFlags", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::InterchangeFactoryBaseNode_eventGetReimportStrategyFlags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::InterchangeFactoryBaseNode_eventGetReimportStrategyFlags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execGetReimportStrategyFlags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EReimportStrategyFlags*)Z_Param__Result=P_THIS->GetReimportStrategyFlags();
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function GetReimportStrategyFlags

// Begin Class UInterchangeFactoryBaseNode Function RemoveFactoryDependencyUid
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics
{
	struct InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Remove one dependency from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Remove one dependency from this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "RemoveFactoryDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::InterchangeFactoryBaseNode_eventRemoveFactoryDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execRemoveFactoryDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveFactoryDependencyUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function RemoveFactoryDependencyUid

// Begin Class UInterchangeFactoryBaseNode Function SetCustomReferenceObject
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms
	{
		FSoftObjectPath AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Set the custom ReferenceObject: the UObject this factory node has created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Set the custom ReferenceObject: the UObject this factory node has created." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "SetCustomReferenceObject", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::InterchangeFactoryBaseNode_eventSetCustomReferenceObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execSetCustomReferenceObject)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomReferenceObject(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function SetCustomReferenceObject

// Begin Class UInterchangeFactoryBaseNode Function SetCustomSubPath
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics
{
	struct InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Set the custom sub-path under PackageBasePath where the assets will be created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Set the custom sub-path under PackageBasePath where the assets will be created." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "SetCustomSubPath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::InterchangeFactoryBaseNode_eventSetCustomSubPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execSetCustomSubPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSubPath(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function SetCustomSubPath

// Begin Class UInterchangeFactoryBaseNode Function SetForceNodeReimport
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics
{
	struct InterchangeFactoryBaseNode_eventSetForceNodeReimport_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Allow the creation of the Unreal object even if it has been previously deleted in the editor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Allow the creation of the Unreal object even if it has been previously deleted in the editor." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventSetForceNodeReimport_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventSetForceNodeReimport_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "SetForceNodeReimport", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::InterchangeFactoryBaseNode_eventSetForceNodeReimport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::InterchangeFactoryBaseNode_eventSetForceNodeReimport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execSetForceNodeReimport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetForceNodeReimport();
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function SetForceNodeReimport

// Begin Class UInterchangeFactoryBaseNode Function SetReimportStrategyFlags
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics
{
	struct InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms
	{
		EReimportStrategyFlags ReimportStrategyFlags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Change the reimport strategy flags.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Change the reimport strategy flags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportStrategyFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReimportStrategyFlags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReimportStrategyFlags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags = { "ReimportStrategyFlags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms, ReimportStrategyFlags), Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportStrategyFlags_MetaData), NewProp_ReimportStrategyFlags_MetaData) }; // 2417377604
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReimportStrategyFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "SetReimportStrategyFlags", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::InterchangeFactoryBaseNode_eventSetReimportStrategyFlags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execSetReimportStrategyFlags)
{
	P_GET_ENUM_REF(EReimportStrategyFlags,Z_Param_Out_ReimportStrategyFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetReimportStrategyFlags((EReimportStrategyFlags&)(Z_Param_Out_ReimportStrategyFlags));
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function SetReimportStrategyFlags

// Begin Class UInterchangeFactoryBaseNode Function SetSkipNodeImport
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics
{
	struct InterchangeFactoryBaseNode_eventSetSkipNodeImport_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Add the skip node attribute. Use this function to cancel the creation of the Unreal asset. See ShouldSkipNodeImport for more documentation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Add the skip node attribute. Use this function to cancel the creation of the Unreal asset. See ShouldSkipNodeImport for more documentation." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventSetSkipNodeImport_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventSetSkipNodeImport_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "SetSkipNodeImport", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::InterchangeFactoryBaseNode_eventSetSkipNodeImport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::InterchangeFactoryBaseNode_eventSetSkipNodeImport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execSetSkipNodeImport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSkipNodeImport();
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function SetSkipNodeImport

// Begin Class UInterchangeFactoryBaseNode Function ShouldForceNodeReimport
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics
{
	struct InterchangeFactoryBaseNode_eventShouldForceNodeReimport_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return whether or not an object should be created even if it has been deleted in the editor.\n\x09 * Return false by default.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Return whether or not an object should be created even if it has been deleted in the editor.\nReturn false by default." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventShouldForceNodeReimport_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventShouldForceNodeReimport_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "ShouldForceNodeReimport", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::InterchangeFactoryBaseNode_eventShouldForceNodeReimport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::InterchangeFactoryBaseNode_eventShouldForceNodeReimport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execShouldForceNodeReimport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldForceNodeReimport();
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function ShouldForceNodeReimport

// Begin Class UInterchangeFactoryBaseNode Function ShouldSkipNodeImport
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics
{
	struct InterchangeFactoryBaseNode_eventShouldSkipNodeImport_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Return true if this node should skip the factory import process, or false otherwise.\n\x09 * Nodes can be in a situation where we have to skip the import process because we cannot import the associated asset for multiple reasons. For example:\n\x09 * - An asset can already exist and represents a different type (UClass).\n\x09 * - An asset can already exist and is being compiled.\n\x09 * - An asset can already exist and is being imported by another concurrent import task (such as a user importing multiple files at the same time in the same content folder).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Return true if this node should skip the factory import process, or false otherwise.\nNodes can be in a situation where we have to skip the import process because we cannot import the associated asset for multiple reasons. For example:\n- An asset can already exist and represents a different type (UClass).\n- An asset can already exist and is being compiled.\n- An asset can already exist and is being imported by another concurrent import task (such as a user importing multiple files at the same time in the same content folder)." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventShouldSkipNodeImport_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventShouldSkipNodeImport_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "ShouldSkipNodeImport", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::InterchangeFactoryBaseNode_eventShouldSkipNodeImport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::InterchangeFactoryBaseNode_eventShouldSkipNodeImport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execShouldSkipNodeImport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldSkipNodeImport();
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function ShouldSkipNodeImport

// Begin Class UInterchangeFactoryBaseNode Function UnsetForceNodeReimport
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics
{
	struct InterchangeFactoryBaseNode_eventUnsetForceNodeReimport_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Disallow the creation of the Unreal object if it has been previously deleted in the editor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Disallow the creation of the Unreal object if it has been previously deleted in the editor." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventUnsetForceNodeReimport_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventUnsetForceNodeReimport_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "UnsetForceNodeReimport", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::InterchangeFactoryBaseNode_eventUnsetForceNodeReimport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::InterchangeFactoryBaseNode_eventUnsetForceNodeReimport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execUnsetForceNodeReimport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnsetForceNodeReimport();
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function UnsetForceNodeReimport

// Begin Class UInterchangeFactoryBaseNode Function UnsetSkipNodeImport
struct Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics
{
	struct InterchangeFactoryBaseNode_eventUnsetSkipNodeImport_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node" },
		{ "Comment", "/**\n\x09 * Remove the skip node attribute. See ShouldSkipNodeImport for more documentation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "Remove the skip node attribute. See ShouldSkipNodeImport for more documentation." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFactoryBaseNode_eventUnsetSkipNodeImport_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFactoryBaseNode_eventUnsetSkipNodeImport_Parms), &Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBaseNode, nullptr, "UnsetSkipNodeImport", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::InterchangeFactoryBaseNode_eventUnsetSkipNodeImport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::InterchangeFactoryBaseNode_eventUnsetSkipNodeImport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBaseNode::execUnsetSkipNodeImport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnsetSkipNodeImport();
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBaseNode Function UnsetSkipNodeImport

// Begin Class UInterchangeFactoryBaseNode
void UInterchangeFactoryBaseNode::StaticRegisterNativesUInterchangeFactoryBaseNode()
{
	UClass* Class = UInterchangeFactoryBaseNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFactoryDependencyUid", &UInterchangeFactoryBaseNode::execAddFactoryDependencyUid },
		{ "GetCustomReferenceObject", &UInterchangeFactoryBaseNode::execGetCustomReferenceObject },
		{ "GetCustomSubPath", &UInterchangeFactoryBaseNode::execGetCustomSubPath },
		{ "GetFactoryDependencies", &UInterchangeFactoryBaseNode::execGetFactoryDependencies },
		{ "GetFactoryDependenciesCount", &UInterchangeFactoryBaseNode::execGetFactoryDependenciesCount },
		{ "GetFactoryDependency", &UInterchangeFactoryBaseNode::execGetFactoryDependency },
		{ "GetReimportStrategyFlags", &UInterchangeFactoryBaseNode::execGetReimportStrategyFlags },
		{ "RemoveFactoryDependencyUid", &UInterchangeFactoryBaseNode::execRemoveFactoryDependencyUid },
		{ "SetCustomReferenceObject", &UInterchangeFactoryBaseNode::execSetCustomReferenceObject },
		{ "SetCustomSubPath", &UInterchangeFactoryBaseNode::execSetCustomSubPath },
		{ "SetForceNodeReimport", &UInterchangeFactoryBaseNode::execSetForceNodeReimport },
		{ "SetReimportStrategyFlags", &UInterchangeFactoryBaseNode::execSetReimportStrategyFlags },
		{ "SetSkipNodeImport", &UInterchangeFactoryBaseNode::execSetSkipNodeImport },
		{ "ShouldForceNodeReimport", &UInterchangeFactoryBaseNode::execShouldForceNodeReimport },
		{ "ShouldSkipNodeImport", &UInterchangeFactoryBaseNode::execShouldSkipNodeImport },
		{ "UnsetForceNodeReimport", &UInterchangeFactoryBaseNode::execUnsetForceNodeReimport },
		{ "UnsetSkipNodeImport", &UInterchangeFactoryBaseNode::execUnsetSkipNodeImport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFactoryBaseNode);
UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister()
{
	return UInterchangeFactoryBaseNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This struct is used to store and retrieve key-value attributes. The attributes are stored in a generic FAttributeStorage that serializes the values in a TArray64<uint8>.\n * See UE::Interchange::EAttributeTypes to know the supported template types.\n * This is an abstract class. This is the base class of the Interchange node graph format; all classes in this format should derive from this class.\n */" },
		{ "IncludePath", "Nodes/InterchangeFactoryBaseNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeFactoryBaseNode.h" },
		{ "ToolTip", "This struct is used to store and retrieve key-value attributes. The attributes are stored in a generic FAttributeStorage that serializes the values in a TArray64<uint8>.\nSee UE::Interchange::EAttributeTypes to know the supported template types.\nThis is an abstract class. This is the base class of the Interchange node graph format; all classes in this format should derive from this class." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_AddFactoryDependencyUid, "AddFactoryDependencyUid" }, // 2352946767
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomReferenceObject, "GetCustomReferenceObject" }, // 1653429448
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetCustomSubPath, "GetCustomSubPath" }, // 4253502462
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependencies, "GetFactoryDependencies" }, // 1799600358
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependenciesCount, "GetFactoryDependenciesCount" }, // 799287085
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetFactoryDependency, "GetFactoryDependency" }, // 1094985013
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_GetReimportStrategyFlags, "GetReimportStrategyFlags" }, // 2277935172
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid, "RemoveFactoryDependencyUid" }, // 2515370618
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomReferenceObject, "SetCustomReferenceObject" }, // 1521649806
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetCustomSubPath, "SetCustomSubPath" }, // 4131700819
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetForceNodeReimport, "SetForceNodeReimport" }, // 2503511059
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetReimportStrategyFlags, "SetReimportStrategyFlags" }, // 3952840093
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_SetSkipNodeImport, "SetSkipNodeImport" }, // 278782257
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldForceNodeReimport, "ShouldForceNodeReimport" }, // 2999211684
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_ShouldSkipNodeImport, "ShouldSkipNodeImport" }, // 2287434138
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetForceNodeReimport, "UnsetForceNodeReimport" }, // 302869072
		{ &Z_Construct_UFunction_UInterchangeFactoryBaseNode_UnsetSkipNodeImport, "UnsetSkipNodeImport" }, // 4226426997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFactoryBaseNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::ClassParams = {
	&UInterchangeFactoryBaseNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeFactoryBaseNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFactoryBaseNode.OuterSingleton, Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeFactoryBaseNode.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeFactoryBaseNode>()
{
	return UInterchangeFactoryBaseNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFactoryBaseNode);
UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode() {}
// End Class UInterchangeFactoryBaseNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EReimportStrategyFlags_StaticEnum, TEXT("EReimportStrategyFlags"), &Z_Registration_Info_UEnum_EReimportStrategyFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2417377604U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeFactoryBaseNode, UInterchangeFactoryBaseNode::StaticClass, TEXT("UInterchangeFactoryBaseNode"), &Z_Registration_Info_UClass_UInterchangeFactoryBaseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFactoryBaseNode), 2659062594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_1872656332(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
