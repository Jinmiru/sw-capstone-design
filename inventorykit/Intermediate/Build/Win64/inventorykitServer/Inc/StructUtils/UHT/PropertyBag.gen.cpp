// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructUtils/Public/PropertyBag.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyBag() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
STRUCTUTILS_API UClass* Z_Construct_UClass_UPropertyBag();
STRUCTUTILS_API UClass* Z_Construct_UClass_UPropertyBag_NoRegister();
STRUCTUTILS_API UClass* Z_Construct_UClass_UPropertyBagMissingObject();
STRUCTUTILS_API UClass* Z_Construct_UClass_UPropertyBagMissingObject_NoRegister();
STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagContainerType();
STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum();
STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType();
STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagResult();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagContainerTypes();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagMissingStruct();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagPropertyDesc();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData();
UPackage* Z_Construct_UPackage__Script_StructUtils();
// End Cross Module References

// Begin Enum EPropertyBagPropertyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBagPropertyType;
static UEnum* EPropertyBagPropertyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("EPropertyBagPropertyType"));
	}
	return Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton;
}
template<> STRUCTUTILS_API UEnum* StaticEnum<EPropertyBagPropertyType>()
{
	return EPropertyBagPropertyType_StaticEnum();
}
struct Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "EPropertyBagPropertyType::Bool" },
		{ "Byte.Name", "EPropertyBagPropertyType::Byte" },
		{ "Class.Hidden", "" },
		{ "Class.Name", "EPropertyBagPropertyType::Class" },
		{ "Comment", "/** Property bag property type, loosely based on BluePrint pin types. */" },
		{ "Count.Comment", "// Type not fully supported at UI, will work with restrictions to type editing\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EPropertyBagPropertyType::Count" },
		{ "Count.ToolTip", "Type not fully supported at UI, will work with restrictions to type editing" },
		{ "Double.Name", "EPropertyBagPropertyType::Double" },
		{ "Enum.Hidden", "" },
		{ "Enum.Name", "EPropertyBagPropertyType::Enum" },
		{ "Float.Name", "EPropertyBagPropertyType::Float" },
		{ "Int32.Name", "EPropertyBagPropertyType::Int32" },
		{ "Int64.Name", "EPropertyBagPropertyType::Int64" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "Name.Name", "EPropertyBagPropertyType::Name" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPropertyBagPropertyType::None" },
		{ "Object.Hidden", "" },
		{ "Object.Name", "EPropertyBagPropertyType::Object" },
		{ "SoftClass.Hidden", "" },
		{ "SoftClass.Name", "EPropertyBagPropertyType::SoftClass" },
		{ "SoftObject.Hidden", "" },
		{ "SoftObject.Name", "EPropertyBagPropertyType::SoftObject" },
		{ "String.Name", "EPropertyBagPropertyType::String" },
		{ "Struct.Hidden", "" },
		{ "Struct.Name", "EPropertyBagPropertyType::Struct" },
		{ "Text.Name", "EPropertyBagPropertyType::Text" },
		{ "ToolTip", "Property bag property type, loosely based on BluePrint pin types." },
		{ "UInt32.Name", "EPropertyBagPropertyType::UInt32" },
		{ "UInt64.Comment", "// Type not fully supported at UI, will work with restrictions to type editing\n" },
		{ "UInt64.Name", "EPropertyBagPropertyType::UInt64" },
		{ "UInt64.ToolTip", "Type not fully supported at UI, will work with restrictions to type editing" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPropertyBagPropertyType::None", (int64)EPropertyBagPropertyType::None },
		{ "EPropertyBagPropertyType::Bool", (int64)EPropertyBagPropertyType::Bool },
		{ "EPropertyBagPropertyType::Byte", (int64)EPropertyBagPropertyType::Byte },
		{ "EPropertyBagPropertyType::Int32", (int64)EPropertyBagPropertyType::Int32 },
		{ "EPropertyBagPropertyType::Int64", (int64)EPropertyBagPropertyType::Int64 },
		{ "EPropertyBagPropertyType::Float", (int64)EPropertyBagPropertyType::Float },
		{ "EPropertyBagPropertyType::Double", (int64)EPropertyBagPropertyType::Double },
		{ "EPropertyBagPropertyType::Name", (int64)EPropertyBagPropertyType::Name },
		{ "EPropertyBagPropertyType::String", (int64)EPropertyBagPropertyType::String },
		{ "EPropertyBagPropertyType::Text", (int64)EPropertyBagPropertyType::Text },
		{ "EPropertyBagPropertyType::Enum", (int64)EPropertyBagPropertyType::Enum },
		{ "EPropertyBagPropertyType::Struct", (int64)EPropertyBagPropertyType::Struct },
		{ "EPropertyBagPropertyType::Object", (int64)EPropertyBagPropertyType::Object },
		{ "EPropertyBagPropertyType::SoftObject", (int64)EPropertyBagPropertyType::SoftObject },
		{ "EPropertyBagPropertyType::Class", (int64)EPropertyBagPropertyType::Class },
		{ "EPropertyBagPropertyType::SoftClass", (int64)EPropertyBagPropertyType::SoftClass },
		{ "EPropertyBagPropertyType::UInt32", (int64)EPropertyBagPropertyType::UInt32 },
		{ "EPropertyBagPropertyType::UInt64", (int64)EPropertyBagPropertyType::UInt64 },
		{ "EPropertyBagPropertyType::Count", (int64)EPropertyBagPropertyType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StructUtils,
	nullptr,
	"EPropertyBagPropertyType",
	"EPropertyBagPropertyType",
	Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType()
{
	if (!Z_Registration_Info_UEnum_EPropertyBagPropertyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBagPropertyType.InnerSingleton, Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPropertyBagPropertyType.InnerSingleton;
}
// End Enum EPropertyBagPropertyType

// Begin Enum EPropertyBagContainerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBagContainerType;
static UEnum* EPropertyBagContainerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtils_EPropertyBagContainerType, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("EPropertyBagContainerType"));
	}
	return Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton;
}
template<> STRUCTUTILS_API UEnum* StaticEnum<EPropertyBagContainerType>()
{
	return EPropertyBagContainerType_StaticEnum();
}
struct Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Array.Name", "EPropertyBagContainerType::Array" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Property bag property container type. */" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EPropertyBagContainerType::Count" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "None.Name", "EPropertyBagContainerType::None" },
		{ "ToolTip", "Property bag property container type." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPropertyBagContainerType::None", (int64)EPropertyBagContainerType::None },
		{ "EPropertyBagContainerType::Array", (int64)EPropertyBagContainerType::Array },
		{ "EPropertyBagContainerType::Count", (int64)EPropertyBagContainerType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StructUtils,
	nullptr,
	"EPropertyBagContainerType",
	"EPropertyBagContainerType",
	Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagContainerType()
{
	if (!Z_Registration_Info_UEnum_EPropertyBagContainerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBagContainerType.InnerSingleton, Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPropertyBagContainerType.InnerSingleton;
}
// End Enum EPropertyBagContainerType

// Begin ScriptStruct FPropertyBagContainerTypes
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyBagContainerTypes;
class UScriptStruct* FPropertyBagContainerTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagContainerTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyBagContainerTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagContainerTypes, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("PropertyBagContainerTypes"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagContainerTypes.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FPropertyBagContainerTypes>()
{
	return FPropertyBagContainerTypes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper to manage container types, with nested container support. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Helper to manage container types, with nested container support." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyBagContainerTypes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
	nullptr,
	&NewStructOps,
	"PropertyBagContainerTypes",
	nullptr,
	0,
	sizeof(FPropertyBagContainerTypes),
	alignof(FPropertyBagContainerTypes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagContainerTypes()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagContainerTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyBagContainerTypes.InnerSingleton, Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagContainerTypes.InnerSingleton;
}
// End ScriptStruct FPropertyBagContainerTypes

// Begin Enum EPropertyBagResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBagResult;
static UEnum* EPropertyBagResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtils_EPropertyBagResult, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("EPropertyBagResult"));
	}
	return Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton;
}
template<> STRUCTUTILS_API UEnum* StaticEnum<EPropertyBagResult>()
{
	return EPropertyBagResult_StaticEnum();
}
struct Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Getter and setter result code. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "OutOfBounds.Comment", "// Tried to access mismatching type (e.g. setting a struct to bool)\n" },
		{ "OutOfBounds.Name", "EPropertyBagResult::OutOfBounds" },
		{ "OutOfBounds.ToolTip", "Tried to access mismatching type (e.g. setting a struct to bool)" },
		{ "PropertyNotFound.Comment", "// Tried to access an array property out of bounds.\n" },
		{ "PropertyNotFound.Name", "EPropertyBagResult::PropertyNotFound" },
		{ "PropertyNotFound.ToolTip", "Tried to access an array property out of bounds." },
		{ "Success.Name", "EPropertyBagResult::Success" },
		{ "ToolTip", "Getter and setter result code." },
		{ "TypeMismatch.Comment", "// Operation succeeded.\n" },
		{ "TypeMismatch.Name", "EPropertyBagResult::TypeMismatch" },
		{ "TypeMismatch.ToolTip", "Operation succeeded." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPropertyBagResult::Success", (int64)EPropertyBagResult::Success },
		{ "EPropertyBagResult::TypeMismatch", (int64)EPropertyBagResult::TypeMismatch },
		{ "EPropertyBagResult::OutOfBounds", (int64)EPropertyBagResult::OutOfBounds },
		{ "EPropertyBagResult::PropertyNotFound", (int64)EPropertyBagResult::PropertyNotFound },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StructUtils,
	nullptr,
	"EPropertyBagResult",
	"EPropertyBagResult",
	Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagResult()
{
	if (!Z_Registration_Info_UEnum_EPropertyBagResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBagResult.InnerSingleton, Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPropertyBagResult.InnerSingleton;
}
// End Enum EPropertyBagResult

// Begin ScriptStruct FPropertyBagPropertyDescMetaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData;
class UScriptStruct* FPropertyBagPropertyDescMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("PropertyBagPropertyDescMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FPropertyBagPropertyDescMetaData>()
{
	return FPropertyBagPropertyDescMetaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyBagPropertyDescMetaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyBagPropertyDescMetaData, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyBagPropertyDescMetaData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
	nullptr,
	&NewStructOps,
	"PropertyBagPropertyDescMetaData",
	Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::PropPointers),
	sizeof(FPropertyBagPropertyDescMetaData),
	alignof(FPropertyBagPropertyDescMetaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.InnerSingleton, Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.InnerSingleton;
}
// End ScriptStruct FPropertyBagPropertyDescMetaData

// Begin ScriptStruct FPropertyBagPropertyDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc;
class UScriptStruct* FPropertyBagPropertyDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("PropertyBagPropertyDesc"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FPropertyBagPropertyDesc>()
{
	return FPropertyBagPropertyDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes a property in the property bag. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Describes a property in the property bag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueTypeObject_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Pointer to object that defines the Enum, Struct, or Class. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pointer to object that defines the Enum, Struct, or Class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Unique ID for this property. Used as main identifier when copying values over. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Unique ID for this property. Used as main identifier when copying values over." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Name for the property. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Name for the property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Type of the value described by this property. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Type of the value described by this property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerTypes_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Type of the container described by this property. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Type of the container described by this property." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Editor-only meta data for CachedProperty */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Editor-only meta data for CachedProperty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaClass_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Editor-only meta class for IClassViewer */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Editor-only meta class for IClassViewer" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValueTypeObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTypes;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MetaClass;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyBagPropertyDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueTypeObject = { "ValueTypeObject", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyBagPropertyDesc, ValueTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueTypeObject_MetaData), NewProp_ValueTypeObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyBagPropertyDesc, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyBagPropertyDesc, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyBagPropertyDesc, ValueType), Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 1113691238
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ContainerTypes = { "ContainerTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyBagPropertyDesc, ContainerTypes), Z_Construct_UScriptStruct_FPropertyBagContainerTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerTypes_MetaData), NewProp_ContainerTypes_MetaData) }; // 1929394274
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData_Inner = { "MetaData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData, METADATA_PARAMS(0, nullptr) }; // 2668798034
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyBagPropertyDesc, MetaData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) }; // 2668798034
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaClass = { "MetaClass", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyBagPropertyDesc, MetaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaClass_MetaData), NewProp_MetaClass_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueTypeObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ContainerTypes,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaClass,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
	nullptr,
	&NewStructOps,
	"PropertyBagPropertyDesc",
	Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::PropPointers),
	sizeof(FPropertyBagPropertyDesc),
	alignof(FPropertyBagPropertyDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagPropertyDesc()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.InnerSingleton, Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.InnerSingleton;
}
// End ScriptStruct FPropertyBagPropertyDesc

// Begin ScriptStruct FInstancedPropertyBag
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedPropertyBag;
class UScriptStruct* FInstancedPropertyBag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedPropertyBag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedPropertyBag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedPropertyBag, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("InstancedPropertyBag"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedPropertyBag.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FInstancedPropertyBag>()
{
	return FInstancedPropertyBag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedPropertyBag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedPropertyBag, Value), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
	nullptr,
	&NewStructOps,
	"InstancedPropertyBag",
	Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::PropPointers),
	sizeof(FInstancedPropertyBag),
	alignof(FInstancedPropertyBag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedPropertyBag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedPropertyBag.InnerSingleton, Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedPropertyBag.InnerSingleton;
}
// End ScriptStruct FInstancedPropertyBag

// Begin Enum EPropertyBagMissingEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBagMissingEnum;
static UEnum* EPropertyBagMissingEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("EPropertyBagMissingEnum"));
	}
	return Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton;
}
template<> STRUCTUTILS_API UEnum* StaticEnum<EPropertyBagMissingEnum>()
{
	return EPropertyBagMissingEnum_StaticEnum();
}
struct Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Dummy types used to mark up missing types when creating property bags. These are used in the UI to display error message.\n */" },
		{ "Missing.Name", "EPropertyBagMissingEnum::Missing" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Dummy types used to mark up missing types when creating property bags. These are used in the UI to display error message." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPropertyBagMissingEnum::Missing", (int64)EPropertyBagMissingEnum::Missing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StructUtils,
	nullptr,
	"EPropertyBagMissingEnum",
	"EPropertyBagMissingEnum",
	Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum()
{
	if (!Z_Registration_Info_UEnum_EPropertyBagMissingEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBagMissingEnum.InnerSingleton, Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPropertyBagMissingEnum.InnerSingleton;
}
// End Enum EPropertyBagMissingEnum

// Begin ScriptStruct FPropertyBagMissingStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct;
class UScriptStruct* FPropertyBagMissingStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagMissingStruct, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("PropertyBagMissingStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FPropertyBagMissingStruct>()
{
	return FPropertyBagMissingStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyBagMissingStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
	nullptr,
	&NewStructOps,
	"PropertyBagMissingStruct",
	nullptr,
	0,
	sizeof(FPropertyBagMissingStruct),
	alignof(FPropertyBagMissingStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagMissingStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.InnerSingleton, Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.InnerSingleton;
}
// End ScriptStruct FPropertyBagMissingStruct

// Begin Class UPropertyBagMissingObject
void UPropertyBagMissingObject::StaticRegisterNativesUPropertyBagMissingObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyBagMissingObject);
UClass* Z_Construct_UClass_UPropertyBagMissingObject_NoRegister()
{
	return UPropertyBagMissingObject::StaticClass();
}
struct Z_Construct_UClass_UPropertyBagMissingObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PropertyBag.h" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyBagMissingObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPropertyBagMissingObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBagMissingObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyBagMissingObject_Statics::ClassParams = {
	&UPropertyBagMissingObject::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBagMissingObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UPropertyBagMissingObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPropertyBagMissingObject()
{
	if (!Z_Registration_Info_UClass_UPropertyBagMissingObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyBagMissingObject.OuterSingleton, Z_Construct_UClass_UPropertyBagMissingObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPropertyBagMissingObject.OuterSingleton;
}
template<> STRUCTUTILS_API UClass* StaticClass<UPropertyBagMissingObject>()
{
	return UPropertyBagMissingObject::StaticClass();
}
UPropertyBagMissingObject::UPropertyBagMissingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyBagMissingObject);
UPropertyBagMissingObject::~UPropertyBagMissingObject() {}
// End Class UPropertyBagMissingObject

// Begin Class UPropertyBag
void UPropertyBag::StaticRegisterNativesUPropertyBag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyBag);
UClass* Z_Construct_UClass_UPropertyBag_NoRegister()
{
	return UPropertyBag::StaticClass();
}
struct Z_Construct_UClass_UPropertyBag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A script struct that is used to store the value of the property bag instance.\n * References to UPropertyBag cannot be serialized, instead the array of the properties\n * is serialized and new class is create on load based on the composition of the properties.\n *\n * Note: Should not be used directly.\n */" },
		{ "IncludePath", "PropertyBag.h" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "A script struct that is used to store the value of the property bag instance.\nReferences to UPropertyBag cannot be serialized, instead the array of the properties\nis serialized and new class is create on load based on the composition of the properties.\n\nNote: Should not be used directly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyDescs_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyDescs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyDescs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyBag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs_Inner = { "PropertyDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPropertyBagPropertyDesc, METADATA_PARAMS(0, nullptr) }; // 1602579821
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs = { "PropertyDescs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyBag, PropertyDescs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyDescs_MetaData), NewProp_PropertyDescs_MetaData) }; // 1602579821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyBag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPropertyBag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UScriptStruct,
	(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyBag_Statics::ClassParams = {
	&UPropertyBag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPropertyBag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBag_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBag_Statics::Class_MetaDataParams), Z_Construct_UClass_UPropertyBag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPropertyBag()
{
	if (!Z_Registration_Info_UClass_UPropertyBag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyBag.OuterSingleton, Z_Construct_UClass_UPropertyBag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPropertyBag.OuterSingleton;
}
template<> STRUCTUTILS_API UClass* StaticClass<UPropertyBag>()
{
	return UPropertyBag::StaticClass();
}
UPropertyBag::UPropertyBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyBag);
UPropertyBag::~UPropertyBag() {}
// End Class UPropertyBag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPropertyBagPropertyType_StaticEnum, TEXT("EPropertyBagPropertyType"), &Z_Registration_Info_UEnum_EPropertyBagPropertyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1113691238U) },
		{ EPropertyBagContainerType_StaticEnum, TEXT("EPropertyBagContainerType"), &Z_Registration_Info_UEnum_EPropertyBagContainerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3168649831U) },
		{ EPropertyBagResult_StaticEnum, TEXT("EPropertyBagResult"), &Z_Registration_Info_UEnum_EPropertyBagResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2811565458U) },
		{ EPropertyBagMissingEnum_StaticEnum, TEXT("EPropertyBagMissingEnum"), &Z_Registration_Info_UEnum_EPropertyBagMissingEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 77563868U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPropertyBagContainerTypes::StaticStruct, Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics::NewStructOps, TEXT("PropertyBagContainerTypes"), &Z_Registration_Info_UScriptStruct_PropertyBagContainerTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyBagContainerTypes), 1929394274U) },
		{ FPropertyBagPropertyDescMetaData::StaticStruct, Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewStructOps, TEXT("PropertyBagPropertyDescMetaData"), &Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyBagPropertyDescMetaData), 2668798034U) },
		{ FPropertyBagPropertyDesc::StaticStruct, Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewStructOps, TEXT("PropertyBagPropertyDesc"), &Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyBagPropertyDesc), 1602579821U) },
		{ FInstancedPropertyBag::StaticStruct, Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewStructOps, TEXT("InstancedPropertyBag"), &Z_Registration_Info_UScriptStruct_InstancedPropertyBag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedPropertyBag), 4063164469U) },
		{ FPropertyBagMissingStruct::StaticStruct, Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::NewStructOps, TEXT("PropertyBagMissingStruct"), &Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyBagMissingStruct), 488878590U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyBagMissingObject, UPropertyBagMissingObject::StaticClass, TEXT("UPropertyBagMissingObject"), &Z_Registration_Info_UClass_UPropertyBagMissingObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyBagMissingObject), 2130957342U) },
		{ Z_Construct_UClass_UPropertyBag, UPropertyBag::StaticClass, TEXT("UPropertyBag"), &Z_Registration_Info_UClass_UPropertyBag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyBag), 616561949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_3891145052(TEXT("/Script/StructUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
