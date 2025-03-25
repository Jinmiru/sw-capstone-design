// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundFrontend/Public/MetasoundFrontendLiteral.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundFrontendLiteral() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
METASOUNDFRONTEND_API UEnum* Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendLiteral();
UPackage* Z_Construct_UPackage__Script_MetasoundFrontend();
// End Cross Module References

// Begin Enum EMetasoundFrontendLiteralType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType;
static UEnum* EMetasoundFrontendLiteralType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("EMetasoundFrontendLiteralType"));
	}
	return Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UEnum* StaticEnum<EMetasoundFrontendLiteralType>()
{
	return EMetasoundFrontendLiteralType_StaticEnum();
}
struct Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Boolean.Comment", "//< A value of None expresses that an object being constructed with a literal should be default constructed.\n" },
		{ "Boolean.Name", "EMetasoundFrontendLiteralType::Boolean" },
		{ "Boolean.ToolTip", "< A value of None expresses that an object being constructed with a literal should be default constructed." },
		{ "BooleanArray.Comment", "//< A NoneArray expresses the number of objects to be default constructed.\n" },
		{ "BooleanArray.Name", "EMetasoundFrontendLiteralType::BooleanArray" },
		{ "BooleanArray.ToolTip", "< A NoneArray expresses the number of objects to be default constructed." },
		{ "Comment", "// The type of a given literal for an input value.\n//\n// The EMetasoundFrontendLiteralType's are matched to Metasound::ELiteralType`s \n// by giving them the same value. This supports easy conversion from one type to\n// another.\n" },
		{ "Float.Name", "EMetasoundFrontendLiteralType::Float" },
		{ "FloatArray.Name", "EMetasoundFrontendLiteralType::FloatArray" },
		{ "Integer.Name", "EMetasoundFrontendLiteralType::Integer" },
		{ "IntegerArray.Name", "EMetasoundFrontendLiteralType::IntegerArray" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EMetasoundFrontendLiteralType::Invalid" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteral.h" },
		{ "None.Name", "EMetasoundFrontendLiteralType::None" },
		{ "NoneArray.Name", "EMetasoundFrontendLiteralType::NoneArray" },
		{ "String.Name", "EMetasoundFrontendLiteralType::String" },
		{ "StringArray.Name", "EMetasoundFrontendLiteralType::StringArray" },
		{ "ToolTip", "The type of a given literal for an input value.\n\nThe EMetasoundFrontendLiteralType's are matched to Metasound::ELiteralType`s\nby giving them the same value. This supports easy conversion from one type to\nanother." },
		{ "UObject.Name", "EMetasoundFrontendLiteralType::UObject" },
		{ "UObjectArray.Name", "EMetasoundFrontendLiteralType::UObjectArray" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetasoundFrontendLiteralType::None", (int64)EMetasoundFrontendLiteralType::None },
		{ "EMetasoundFrontendLiteralType::Boolean", (int64)EMetasoundFrontendLiteralType::Boolean },
		{ "EMetasoundFrontendLiteralType::Integer", (int64)EMetasoundFrontendLiteralType::Integer },
		{ "EMetasoundFrontendLiteralType::Float", (int64)EMetasoundFrontendLiteralType::Float },
		{ "EMetasoundFrontendLiteralType::String", (int64)EMetasoundFrontendLiteralType::String },
		{ "EMetasoundFrontendLiteralType::UObject", (int64)EMetasoundFrontendLiteralType::UObject },
		{ "EMetasoundFrontendLiteralType::NoneArray", (int64)EMetasoundFrontendLiteralType::NoneArray },
		{ "EMetasoundFrontendLiteralType::BooleanArray", (int64)EMetasoundFrontendLiteralType::BooleanArray },
		{ "EMetasoundFrontendLiteralType::IntegerArray", (int64)EMetasoundFrontendLiteralType::IntegerArray },
		{ "EMetasoundFrontendLiteralType::FloatArray", (int64)EMetasoundFrontendLiteralType::FloatArray },
		{ "EMetasoundFrontendLiteralType::StringArray", (int64)EMetasoundFrontendLiteralType::StringArray },
		{ "EMetasoundFrontendLiteralType::UObjectArray", (int64)EMetasoundFrontendLiteralType::UObjectArray },
		{ "EMetasoundFrontendLiteralType::Invalid", (int64)EMetasoundFrontendLiteralType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	"EMetasoundFrontendLiteralType",
	"EMetasoundFrontendLiteralType",
	Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType()
{
	if (!Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.InnerSingleton, Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.InnerSingleton;
}
// End Enum EMetasoundFrontendLiteralType

// Begin ScriptStruct FMetasoundFrontendLiteral
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundFrontendLiteral;
class UScriptStruct* FMetasoundFrontendLiteral::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendLiteral.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundFrontendLiteral.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendLiteral, (UObject*)Z_Construct_UPackage__Script_MetasoundFrontend(), TEXT("MetasoundFrontendLiteral"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendLiteral.OuterSingleton;
}
template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<FMetasoundFrontendLiteral>()
{
	return FMetasoundFrontendLiteral::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Represents the serialized version of variant literal types. \n" },
		{ "DisplayName", "MetaSound Literal" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteral.h" },
		{ "ToolTip", "Represents the serialized version of variant literal types." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "// The set type of this literal.\n" },
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteral.h" },
		{ "ToolTip", "The set type of this literal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsNumDefault_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteral.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsBoolean_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteral.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsInteger_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteral.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsFloat_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteral.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsString_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteral.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsUObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundFrontendLiteral.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AsNumDefault;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AsBoolean_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsBoolean;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AsInteger_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsInteger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AsFloat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsFloat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AsString_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AsUObject_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsUObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundFrontendLiteral>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendLiteral, Type), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3047986920
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsNumDefault = { "AsNumDefault", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendLiteral, AsNumDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsNumDefault_MetaData), NewProp_AsNumDefault_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsBoolean_Inner = { "AsBoolean", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsBoolean = { "AsBoolean", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendLiteral, AsBoolean), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsBoolean_MetaData), NewProp_AsBoolean_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsInteger_Inner = { "AsInteger", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsInteger = { "AsInteger", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendLiteral, AsInteger), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsInteger_MetaData), NewProp_AsInteger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsFloat_Inner = { "AsFloat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsFloat = { "AsFloat", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendLiteral, AsFloat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsFloat_MetaData), NewProp_AsFloat_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsString_Inner = { "AsString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsString = { "AsString", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendLiteral, AsString), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsString_MetaData), NewProp_AsString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsUObject_Inner = { "AsUObject", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsUObject = { "AsUObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetasoundFrontendLiteral, AsUObject), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsUObject_MetaData), NewProp_AsUObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsNumDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsBoolean_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsBoolean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsInteger_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsInteger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsFloat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsString_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsUObject_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewProp_AsUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundFrontend,
	nullptr,
	&NewStructOps,
	"MetasoundFrontendLiteral",
	Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::PropPointers),
	sizeof(FMetasoundFrontendLiteral),
	alignof(FMetasoundFrontendLiteral),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendLiteral()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundFrontendLiteral.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundFrontendLiteral.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetasoundFrontendLiteral.InnerSingleton;
}
// End ScriptStruct FMetasoundFrontendLiteral

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMetasoundFrontendLiteralType_StaticEnum, TEXT("EMetasoundFrontendLiteralType"), &Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3047986920U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMetasoundFrontendLiteral::StaticStruct, Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewStructOps, TEXT("MetasoundFrontendLiteral"), &Z_Registration_Info_UScriptStruct_MetasoundFrontendLiteral, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundFrontendLiteral), 1401040219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h_3140562096(TEXT("/Script/MetasoundFrontend"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
