// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialParameterCollection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionParameterBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionScalarParameter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionVectorParameter();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCollectionParameterBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionParameterBase;
class UScriptStruct* FCollectionParameterBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionParameterBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionParameterBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionParameterBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollectionParameterBase"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionParameterBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollectionParameterBase>()
{
	return FCollectionParameterBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollectionParameterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct for collection parameters */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Base struct for collection parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** The name of the parameter.  Changing this name will break any blueprints that reference the parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "The name of the parameter.  Changing this name will break any blueprints that reference the parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Comment", "/** Uniquely identifies the parameter, used for fixing up materials that reference this parameter when renaming. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Uniquely identifies the parameter, used for fixing up materials that reference this parameter when renaming." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionParameterBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionParameterBase, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionParameterBase, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CollectionParameterBase",
	Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::PropPointers),
	sizeof(FCollectionParameterBase),
	alignof(FCollectionParameterBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollectionParameterBase()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionParameterBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionParameterBase.InnerSingleton, Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollectionParameterBase.InnerSingleton;
}
// End ScriptStruct FCollectionParameterBase

// Begin ScriptStruct FCollectionScalarParameter
static_assert(std::is_polymorphic<FCollectionScalarParameter>() == std::is_polymorphic<FCollectionParameterBase>(), "USTRUCT FCollectionScalarParameter cannot be polymorphic unless super FCollectionParameterBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionScalarParameter;
class UScriptStruct* FCollectionScalarParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionScalarParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionScalarParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionScalarParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollectionScalarParameter"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionScalarParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollectionScalarParameter>()
{
	return FCollectionScalarParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A scalar parameter */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "A scalar parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionScalarParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionScalarParameter, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FCollectionParameterBase,
	&NewStructOps,
	"CollectionScalarParameter",
	Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::PropPointers),
	sizeof(FCollectionScalarParameter),
	alignof(FCollectionScalarParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollectionScalarParameter()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionScalarParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionScalarParameter.InnerSingleton, Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollectionScalarParameter.InnerSingleton;
}
// End ScriptStruct FCollectionScalarParameter

// Begin ScriptStruct FCollectionVectorParameter
static_assert(std::is_polymorphic<FCollectionVectorParameter>() == std::is_polymorphic<FCollectionParameterBase>(), "USTRUCT FCollectionVectorParameter cannot be polymorphic unless super FCollectionParameterBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionVectorParameter;
class UScriptStruct* FCollectionVectorParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionVectorParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionVectorParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVectorParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollectionVectorParameter"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionVectorParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollectionVectorParameter>()
{
	return FCollectionVectorParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A vector parameter */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "A vector parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionVectorParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionVectorParameter, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FCollectionParameterBase,
	&NewStructOps,
	"CollectionVectorParameter",
	Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::PropPointers),
	sizeof(FCollectionVectorParameter),
	alignof(FCollectionVectorParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollectionVectorParameter()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionVectorParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionVectorParameter.InnerSingleton, Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollectionVectorParameter.InnerSingleton;
}
// End ScriptStruct FCollectionVectorParameter

// Begin Class UMaterialParameterCollection Function GetScalarParameterDefaultValue
struct Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics
{
	struct MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms
	{
		FName ParameterName;
		bool bParameterFound;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Gets the default value of a scalar parameter from a material collection.\n\x09 * @param ParameterName - The name of the value to get the value of\n\x09 * @param bParameterFound - if a parameter with the input name was found\n\x09 * @returns the value of the parameter\n\x09 **/" },
		{ "Keywords", "GetFloatParameterDefaultValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Gets the default value of a scalar parameter from a material collection.\n@param ParameterName - The name of the value to get the value of\n@param bParameterFound - if a parameter with the input name was found\n@returns the value of the parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_bParameterFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameterFound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_bParameterFound_SetBit(void* Obj)
{
	((MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms*)Obj)->bParameterFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_bParameterFound = { "bParameterFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms), &Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_bParameterFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_bParameterFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialParameterCollection, nullptr, "GetScalarParameterDefaultValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::MaterialParameterCollection_eventGetScalarParameterDefaultValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialParameterCollection::execGetScalarParameterDefaultValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_UBOOL_REF(Z_Param_Out_bParameterFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScalarParameterDefaultValue(Z_Param_ParameterName,Z_Param_Out_bParameterFound);
	P_NATIVE_END;
}
// End Class UMaterialParameterCollection Function GetScalarParameterDefaultValue

// Begin Class UMaterialParameterCollection Function GetScalarParameterNames
struct Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics
{
	struct MaterialParameterCollection_eventGetScalarParameterNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Returns an array of the names of all the scalar parameters in this Material Parameter Collection **/" },
		{ "Keywords", "GetScalarParameterNames" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Returns an array of the names of all the scalar parameters in this Material Parameter Collection *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialParameterCollection_eventGetScalarParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialParameterCollection, nullptr, "GetScalarParameterNames", nullptr, nullptr, Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::MaterialParameterCollection_eventGetScalarParameterNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::MaterialParameterCollection_eventGetScalarParameterNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialParameterCollection::execGetScalarParameterNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetScalarParameterNames();
	P_NATIVE_END;
}
// End Class UMaterialParameterCollection Function GetScalarParameterNames

// Begin Class UMaterialParameterCollection Function GetVectorParameterDefaultValue
struct Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics
{
	struct MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms
	{
		FName ParameterName;
		bool bParameterFound;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Gets the default value of a scalar parameter from a material collection.\n\x09 * @param ParameterName - The name of the value to get the value of\n\x09 * @param bParameterFound - if a parameter with the input name was found\n\x09 * @returns the value of the parameter\n\x09 **/" },
		{ "Keywords", "GetFloatParameterDefaultValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Gets the default value of a scalar parameter from a material collection.\n@param ParameterName - The name of the value to get the value of\n@param bParameterFound - if a parameter with the input name was found\n@returns the value of the parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_bParameterFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParameterFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_bParameterFound_SetBit(void* Obj)
{
	((MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms*)Obj)->bParameterFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_bParameterFound = { "bParameterFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms), &Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_bParameterFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_bParameterFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialParameterCollection, nullptr, "GetVectorParameterDefaultValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::MaterialParameterCollection_eventGetVectorParameterDefaultValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialParameterCollection::execGetVectorParameterDefaultValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_UBOOL_REF(Z_Param_Out_bParameterFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetVectorParameterDefaultValue(Z_Param_ParameterName,Z_Param_Out_bParameterFound);
	P_NATIVE_END;
}
// End Class UMaterialParameterCollection Function GetVectorParameterDefaultValue

// Begin Class UMaterialParameterCollection Function GetVectorParameterNames
struct Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics
{
	struct MaterialParameterCollection_eventGetVectorParameterNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Returns an array of the names of all the vector parameters in this Material Parameter Collection **/" },
		{ "Keywords", "GetVectorParameterNames" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Returns an array of the names of all the vector parameters in this Material Parameter Collection *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialParameterCollection_eventGetVectorParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialParameterCollection, nullptr, "GetVectorParameterNames", nullptr, nullptr, Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::MaterialParameterCollection_eventGetVectorParameterNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::MaterialParameterCollection_eventGetVectorParameterNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialParameterCollection::execGetVectorParameterNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetVectorParameterNames();
	P_NATIVE_END;
}
// End Class UMaterialParameterCollection Function GetVectorParameterNames

// Begin Class UMaterialParameterCollection
void UMaterialParameterCollection::StaticRegisterNativesUMaterialParameterCollection()
{
	UClass* Class = UMaterialParameterCollection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScalarParameterDefaultValue", &UMaterialParameterCollection::execGetScalarParameterDefaultValue },
		{ "GetScalarParameterNames", &UMaterialParameterCollection::execGetScalarParameterNames },
		{ "GetVectorParameterDefaultValue", &UMaterialParameterCollection::execGetVectorParameterDefaultValue },
		{ "GetVectorParameterNames", &UMaterialParameterCollection::execGetVectorParameterNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialParameterCollection);
UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister()
{
	return UMaterialParameterCollection::StaticClass();
}
struct Z_Construct_UClass_UMaterialParameterCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Asset class that contains a list of parameter names and their default values. \n * Any number of materials can reference these parameters and get new values when the parameter values are changed.\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Materials/MaterialParameterCollection.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Asset class that contains a list of parameter names and their default values.\nAny number of materials can reference these parameters and get new values when the parameter values are changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
		{ "Comment", "/** Used by materials using this collection to know when to recompile. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Used by materials using this collection to know when to recompile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameters_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "TitleProperty", "ParameterName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "TitleProperty", "ParameterName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterDefaultValue, "GetScalarParameterDefaultValue" }, // 2877948755
		{ &Z_Construct_UFunction_UMaterialParameterCollection_GetScalarParameterNames, "GetScalarParameterNames" }, // 2117458775
		{ &Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterDefaultValue, "GetVectorParameterDefaultValue" }, // 1439553880
		{ &Z_Construct_UFunction_UMaterialParameterCollection_GetVectorParameterNames, "GetVectorParameterNames" }, // 943010672
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialParameterCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialParameterCollection, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateId_MetaData), NewProp_StateId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_Inner = { "ScalarParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCollectionScalarParameter, METADATA_PARAMS(0, nullptr) }; // 2847539780
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters = { "ScalarParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialParameterCollection, ScalarParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarParameters_MetaData), NewProp_ScalarParameters_MetaData) }; // 2847539780
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_Inner = { "VectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCollectionVectorParameter, METADATA_PARAMS(0, nullptr) }; // 1215445078
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters = { "VectorParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialParameterCollection, VectorParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorParameters_MetaData), NewProp_VectorParameters_MetaData) }; // 1215445078
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialParameterCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialParameterCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialParameterCollection_Statics::ClassParams = {
	&UMaterialParameterCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMaterialParameterCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialParameterCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialParameterCollection()
{
	if (!Z_Registration_Info_UClass_UMaterialParameterCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialParameterCollection.OuterSingleton, Z_Construct_UClass_UMaterialParameterCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialParameterCollection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialParameterCollection>()
{
	return UMaterialParameterCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialParameterCollection);
UMaterialParameterCollection::~UMaterialParameterCollection() {}
// End Class UMaterialParameterCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCollectionParameterBase::StaticStruct, Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewStructOps, TEXT("CollectionParameterBase"), &Z_Registration_Info_UScriptStruct_CollectionParameterBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionParameterBase), 463717511U) },
		{ FCollectionScalarParameter::StaticStruct, Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewStructOps, TEXT("CollectionScalarParameter"), &Z_Registration_Info_UScriptStruct_CollectionScalarParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionScalarParameter), 2847539780U) },
		{ FCollectionVectorParameter::StaticStruct, Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewStructOps, TEXT("CollectionVectorParameter"), &Z_Registration_Info_UScriptStruct_CollectionVectorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionVectorParameter), 1215445078U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialParameterCollection, UMaterialParameterCollection::StaticClass, TEXT("UMaterialParameterCollection"), &Z_Registration_Info_UClass_UMaterialParameterCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialParameterCollection), 1522011066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_332032544(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
