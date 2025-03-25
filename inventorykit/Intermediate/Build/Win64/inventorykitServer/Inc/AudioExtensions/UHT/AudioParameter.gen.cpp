// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioExtensions/Public/AudioParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioParameter() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UEnum* Z_Construct_UEnum_AudioExtensions_EAudioParameterType();
AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References

// Begin Enum EAudioParameterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioParameterType;
static UEnum* EAudioParameterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioParameterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioExtensions_EAudioParameterType, (UObject*)Z_Construct_UPackage__Script_AudioExtensions(), TEXT("EAudioParameterType"));
	}
	return Z_Registration_Info_UEnum_EAudioParameterType.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UEnum* StaticEnum<EAudioParameterType>()
{
	return EAudioParameterType_StaticEnum();
}
struct Z_Construct_UEnum_AudioExtensions_EAudioParameterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Boolean.Comment", "// Boolean value\n" },
		{ "Boolean.Name", "EAudioParameterType::Boolean" },
		{ "Boolean.ToolTip", "Boolean value" },
		{ "BooleanArray.Comment", "// Array of boolean values (not supported by legacy SoundCue system)\n" },
		{ "BooleanArray.DisplayName", "Boolean (Array)" },
		{ "BooleanArray.Name", "EAudioParameterType::BooleanArray" },
		{ "BooleanArray.ToolTip", "Array of boolean values (not supported by legacy SoundCue system)" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EAudioParameterType::COUNT" },
		{ "Float.Comment", "// Float value\n" },
		{ "Float.Name", "EAudioParameterType::Float" },
		{ "Float.ToolTip", "Float value" },
		{ "FloatArray.Comment", "// Array of float values (not supported by legacy SoundCue system)\n" },
		{ "FloatArray.DisplayName", "Float (Array)" },
		{ "FloatArray.Name", "EAudioParameterType::FloatArray" },
		{ "FloatArray.ToolTip", "Array of float values (not supported by legacy SoundCue system)" },
		{ "Integer.Comment", "// Integer value\n" },
		{ "Integer.Name", "EAudioParameterType::Integer" },
		{ "Integer.ToolTip", "Integer value" },
		{ "IntegerArray.Comment", "// Array of integer values (not supported by legacy SoundCue system)\n" },
		{ "IntegerArray.DisplayName", "Integer (Array)" },
		{ "IntegerArray.Name", "EAudioParameterType::IntegerArray" },
		{ "IntegerArray.ToolTip", "Array of integer values (not supported by legacy SoundCue system)" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "None.Comment", "// 'Default' results in behavior that is resolved\n// based on the system interpreting it.  To support\n// legacy implementation, SoundCues cache all typed values\n// associated with a given parameter name. \n// For MetaSounds, use a specific Type instead of this one. \n" },
		{ "None.DisplayName", "Default" },
		{ "None.Name", "EAudioParameterType::None" },
		{ "None.ToolTip", "'Default' results in behavior that is resolved\nbased on the system interpreting it.  To support\nlegacy implementation, SoundCues cache all typed values\nassociated with a given parameter name.\nFor MetaSounds, use a specific Type instead of this one." },
		{ "NoneArray.Comment", "// Array of default initialized values (not supported by legacy SoundCue system)\n// Hidden for now as no parameter types exist that support default construction\n" },
		{ "NoneArray.DisplayName", "Default (Array)" },
		{ "NoneArray.Hidden", "" },
		{ "NoneArray.Name", "EAudioParameterType::NoneArray" },
		{ "NoneArray.ToolTip", "Array of default initialized values (not supported by legacy SoundCue system)\nHidden for now as no parameter types exist that support default construction" },
		{ "Object.Comment", "// Object value (types other than SoundWave not supported by legacy SoundCue system)\n" },
		{ "Object.Name", "EAudioParameterType::Object" },
		{ "Object.ToolTip", "Object value (types other than SoundWave not supported by legacy SoundCue system)" },
		{ "ObjectArray.Comment", "// Array of object values (not supported by legacy SoundCue system)\n" },
		{ "ObjectArray.DisplayName", "Object (Array)" },
		{ "ObjectArray.Name", "EAudioParameterType::ObjectArray" },
		{ "ObjectArray.ToolTip", "Array of object values (not supported by legacy SoundCue system)" },
		{ "String.Comment", "// String value (not supported by legacy SoundCue system)\n" },
		{ "String.Name", "EAudioParameterType::String" },
		{ "String.ToolTip", "String value (not supported by legacy SoundCue system)" },
		{ "StringArray.Comment", "// Array of string values (not supported by legacy SoundCue system)\n" },
		{ "StringArray.DisplayName", "String (Array)" },
		{ "StringArray.Name", "EAudioParameterType::StringArray" },
		{ "StringArray.ToolTip", "Array of string values (not supported by legacy SoundCue system)" },
		{ "Trigger.Comment", "// Trigger value\n" },
		{ "Trigger.Name", "EAudioParameterType::Trigger" },
		{ "Trigger.ToolTip", "Trigger value" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioParameterType::None", (int64)EAudioParameterType::None },
		{ "EAudioParameterType::Boolean", (int64)EAudioParameterType::Boolean },
		{ "EAudioParameterType::Integer", (int64)EAudioParameterType::Integer },
		{ "EAudioParameterType::Float", (int64)EAudioParameterType::Float },
		{ "EAudioParameterType::String", (int64)EAudioParameterType::String },
		{ "EAudioParameterType::Object", (int64)EAudioParameterType::Object },
		{ "EAudioParameterType::NoneArray", (int64)EAudioParameterType::NoneArray },
		{ "EAudioParameterType::BooleanArray", (int64)EAudioParameterType::BooleanArray },
		{ "EAudioParameterType::IntegerArray", (int64)EAudioParameterType::IntegerArray },
		{ "EAudioParameterType::FloatArray", (int64)EAudioParameterType::FloatArray },
		{ "EAudioParameterType::StringArray", (int64)EAudioParameterType::StringArray },
		{ "EAudioParameterType::ObjectArray", (int64)EAudioParameterType::ObjectArray },
		{ "EAudioParameterType::Trigger", (int64)EAudioParameterType::Trigger },
		{ "EAudioParameterType::COUNT", (int64)EAudioParameterType::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioExtensions_EAudioParameterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioExtensions,
	nullptr,
	"EAudioParameterType",
	"EAudioParameterType",
	Z_Construct_UEnum_AudioExtensions_EAudioParameterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioExtensions_EAudioParameterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioExtensions_EAudioParameterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioExtensions_EAudioParameterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioExtensions_EAudioParameterType()
{
	if (!Z_Registration_Info_UEnum_EAudioParameterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioParameterType.InnerSingleton, Z_Construct_UEnum_AudioExtensions_EAudioParameterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioParameterType.InnerSingleton;
}
// End Enum EAudioParameterType

// Begin ScriptStruct FAudioParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioParameter;
class UScriptStruct* FAudioParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioParameter, (UObject*)Z_Construct_UPackage__Script_AudioExtensions(), TEXT("AudioParameter"));
	}
	return Z_Registration_Info_UScriptStruct_AudioParameter.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UScriptStruct* StaticStruct<FAudioParameter>()
{
	return FAudioParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// Name of the parameter\n" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "Name of the parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatParam_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// Float value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Float)" },
		{ "EditCondition", "ParamType == EAudioParameterType::None || ParamType == EAudioParameterType::Float" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "Float value of parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolParam_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// Boolean value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Bool)" },
		{ "EditCondition", "ParamType == EAudioParameterType::None || ParamType == EAudioParameterType::Boolean" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "Boolean value of parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntParam_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// Integer value of parameter. If set to 'Default Construct', value is number of array items to construct.\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Int)" },
		{ "EditCondition", "ParamType == EAudioParameterType::None || ParamType == EAudioParameterType::Integer || ParamType == EAudioParameterType::NoneArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "Integer value of parameter. If set to 'Default Construct', value is number of array items to construct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectParam_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// Object value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Object)" },
		{ "EditCondition", "ParamType == EAudioParameterType::None || ParamType == EAudioParameterType::Object" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "Object value of parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringParam_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// String value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (String)" },
		{ "EditCondition", "ParamType == EAudioParameterType::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "String value of parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayFloatParam_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// Array Float value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Float Array)" },
		{ "EditCondition", "ParamType == EAudioParameterType::FloatArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "Array Float value of parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayBoolParam_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// Boolean value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Bool Array)" },
		{ "EditCondition", "ParamType == EAudioParameterType::BooleanArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "Boolean value of parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIntParam_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// Integer value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Int Array)" },
		{ "EditCondition", "ParamType == EAudioParameterType::IntegerArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "Integer value of parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayObjectParam_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// Object value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (Object Array)" },
		{ "EditCondition", "ParamType == EAudioParameterType::ObjectArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "Object value of parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayStringParam_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "Comment", "// String value of parameter\n" },
		{ "DisplayAfter", "ParamType" },
		{ "DisplayName", "Value (String Array)" },
		{ "EditCondition", "ParamType == EAudioParameterType::StringArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "String value of parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[] = {
		{ "Category", "AudioParameter" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[] = {
		{ "Comment", "// Optional TypeName used to describe what constructed type this parameter should be initializing.\n" },
		{ "ModuleRelativePath", "Public/AudioParameter.h" },
		{ "ToolTip", "Optional TypeName used to describe what constructed type this parameter should be initializing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatParam;
	static void NewProp_BoolParam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolParam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectParam;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringParam;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrayFloatParam_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayFloatParam;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ArrayBoolParam_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayBoolParam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIntParam_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayIntParam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrayObjectParam_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayObjectParam;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ArrayStringParam_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayStringParam;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ParamType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_FloatParam = { "FloatParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, FloatParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatParam_MetaData), NewProp_FloatParam_MetaData) };
void Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_BoolParam_SetBit(void* Obj)
{
	((FAudioParameter*)Obj)->BoolParam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_BoolParam = { "BoolParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAudioParameter), &Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_BoolParam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolParam_MetaData), NewProp_BoolParam_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_IntParam = { "IntParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, IntParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntParam_MetaData), NewProp_IntParam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ObjectParam = { "ObjectParam", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, ObjectParam), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectParam_MetaData), NewProp_ObjectParam_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_StringParam = { "StringParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, StringParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringParam_MetaData), NewProp_StringParam_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayFloatParam_Inner = { "ArrayFloatParam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayFloatParam = { "ArrayFloatParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, ArrayFloatParam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayFloatParam_MetaData), NewProp_ArrayFloatParam_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayBoolParam_Inner = { "ArrayBoolParam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayBoolParam = { "ArrayBoolParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, ArrayBoolParam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayBoolParam_MetaData), NewProp_ArrayBoolParam_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayIntParam_Inner = { "ArrayIntParam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayIntParam = { "ArrayIntParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, ArrayIntParam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayIntParam_MetaData), NewProp_ArrayIntParam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayObjectParam_Inner = { "ArrayObjectParam", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayObjectParam = { "ArrayObjectParam", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, ArrayObjectParam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayObjectParam_MetaData), NewProp_ArrayObjectParam_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayStringParam_Inner = { "ArrayStringParam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayStringParam = { "ArrayStringParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, ArrayStringParam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayStringParam_MetaData), NewProp_ArrayStringParam_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, ParamType), Z_Construct_UEnum_AudioExtensions_EAudioParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamType_MetaData), NewProp_ParamType_MetaData) }; // 692870963
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioParameter, TypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeName_MetaData), NewProp_TypeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_FloatParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_BoolParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_IntParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ObjectParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_StringParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayFloatParam_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayFloatParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayBoolParam_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayBoolParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayIntParam_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayIntParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayObjectParam_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayObjectParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayStringParam_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ArrayStringParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ParamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_ParamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioParameter_Statics::NewProp_TypeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	nullptr,
	&NewStructOps,
	"AudioParameter",
	Z_Construct_UScriptStruct_FAudioParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioParameter_Statics::PropPointers),
	sizeof(FAudioParameter),
	alignof(FAudioParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter()
{
	if (!Z_Registration_Info_UScriptStruct_AudioParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioParameter.InnerSingleton, Z_Construct_UScriptStruct_FAudioParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioParameter.InnerSingleton;
}
// End ScriptStruct FAudioParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioParameterType_StaticEnum, TEXT("EAudioParameterType"), &Z_Registration_Info_UEnum_EAudioParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 692870963U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioParameter::StaticStruct, Z_Construct_UScriptStruct_FAudioParameter_Statics::NewStructOps, TEXT("AudioParameter"), &Z_Registration_Info_UScriptStruct_AudioParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioParameter), 2092353974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h_2291921989(TEXT("/Script/AudioExtensions"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
