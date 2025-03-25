// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionCustom.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCustom() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustom();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustom_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomMaterialOutputType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomDefine();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ECustomMaterialOutputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomMaterialOutputType;
static UEnum* ECustomMaterialOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomMaterialOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomMaterialOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomMaterialOutputType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECustomMaterialOutputType"));
	}
	return Z_Registration_Info_UEnum_ECustomMaterialOutputType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECustomMaterialOutputType>()
{
	return ECustomMaterialOutputType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CMOT_Float1.Name", "CMOT_Float1" },
		{ "CMOT_Float2.Name", "CMOT_Float2" },
		{ "CMOT_Float3.Name", "CMOT_Float3" },
		{ "CMOT_Float4.Name", "CMOT_Float4" },
		{ "CMOT_MaterialAttributes.Name", "CMOT_MaterialAttributes" },
		{ "CMOT_MAX.Name", "CMOT_MAX" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CMOT_Float1", (int64)CMOT_Float1 },
		{ "CMOT_Float2", (int64)CMOT_Float2 },
		{ "CMOT_Float3", (int64)CMOT_Float3 },
		{ "CMOT_Float4", (int64)CMOT_Float4 },
		{ "CMOT_MaterialAttributes", (int64)CMOT_MaterialAttributes },
		{ "CMOT_MAX", (int64)CMOT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECustomMaterialOutputType",
	"ECustomMaterialOutputType",
	Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECustomMaterialOutputType()
{
	if (!Z_Registration_Info_UEnum_ECustomMaterialOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomMaterialOutputType.InnerSingleton, Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomMaterialOutputType.InnerSingleton;
}
// End Enum ECustomMaterialOutputType

// Begin ScriptStruct FCustomInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomInput;
class UScriptStruct* FCustomInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomInput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CustomInput"));
	}
	return Z_Registration_Info_UScriptStruct_CustomInput.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomInput>()
{
	return FCustomInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "Category", "CustomInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomInput, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CustomInput",
	Z_Construct_UScriptStruct_FCustomInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::PropPointers),
	sizeof(FCustomInput),
	alignof(FCustomInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomInput()
{
	if (!Z_Registration_Info_UScriptStruct_CustomInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomInput.InnerSingleton, Z_Construct_UScriptStruct_FCustomInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomInput.InnerSingleton;
}
// End ScriptStruct FCustomInput

// Begin ScriptStruct FCustomOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomOutput;
class UScriptStruct* FCustomOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomOutput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CustomOutput"));
	}
	return Z_Registration_Info_UScriptStruct_CustomOutput.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomOutput>()
{
	return FCustomOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "Category", "CustomOutput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "CustomOutput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomOutput, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomOutput, OutputType), Z_Construct_UEnum_Engine_ECustomMaterialOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 1274137392
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CustomOutput",
	Z_Construct_UScriptStruct_FCustomOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOutput_Statics::PropPointers),
	sizeof(FCustomOutput),
	alignof(FCustomOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomOutput()
{
	if (!Z_Registration_Info_UScriptStruct_CustomOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomOutput.InnerSingleton, Z_Construct_UScriptStruct_FCustomOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomOutput.InnerSingleton;
}
// End ScriptStruct FCustomOutput

// Begin ScriptStruct FCustomDefine
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomDefine;
class UScriptStruct* FCustomDefine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomDefine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomDefine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomDefine, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CustomDefine"));
	}
	return Z_Registration_Info_UScriptStruct_CustomDefine.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomDefine>()
{
	return FCustomDefine::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomDefine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefineName_MetaData[] = {
		{ "Category", "CustomInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefineValue_MetaData[] = {
		{ "Category", "CustomInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefineName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefineValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomDefine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineName = { "DefineName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomDefine, DefineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefineName_MetaData), NewProp_DefineName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineValue = { "DefineValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomDefine, DefineValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefineValue_MetaData), NewProp_DefineValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomDefine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDefine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomDefine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CustomDefine",
	Z_Construct_UScriptStruct_FCustomDefine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDefine_Statics::PropPointers),
	sizeof(FCustomDefine),
	alignof(FCustomDefine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDefine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomDefine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomDefine()
{
	if (!Z_Registration_Info_UScriptStruct_CustomDefine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomDefine.InnerSingleton, Z_Construct_UScriptStruct_FCustomDefine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomDefine.InnerSingleton;
}
// End ScriptStruct FCustomDefine

// Begin Class UMaterialExpressionCustom
void UMaterialExpressionCustom::StaticRegisterNativesUMaterialExpressionCustom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCustom);
UClass* Z_Construct_UClass_UMaterialExpressionCustom_NoRegister()
{
	return UMaterialExpressionCustom::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionCustom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCustom.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalOutputs_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalDefines_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeFilePaths_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowCode_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalOutputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalDefines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalDefines;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IncludeFilePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludeFilePaths;
	static void NewProp_ShowCode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCustom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustom, Code), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Code_MetaData), NewProp_Code_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustom, OutputType), Z_Construct_UEnum_Engine_ECustomMaterialOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 1274137392
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustom, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomInput, METADATA_PARAMS(0, nullptr) }; // 2181361022
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustom, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 2181361022
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs_Inner = { "AdditionalOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomOutput, METADATA_PARAMS(0, nullptr) }; // 1051453929
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs = { "AdditionalOutputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustom, AdditionalOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalOutputs_MetaData), NewProp_AdditionalOutputs_MetaData) }; // 1051453929
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines_Inner = { "AdditionalDefines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomDefine, METADATA_PARAMS(0, nullptr) }; // 1832315302
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines = { "AdditionalDefines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustom, AdditionalDefines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalDefines_MetaData), NewProp_AdditionalDefines_MetaData) }; // 1832315302
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths_Inner = { "IncludeFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths = { "IncludeFilePaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustom, IncludeFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeFilePaths_MetaData), NewProp_IncludeFilePaths_MetaData) };
void Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_ShowCode_SetBit(void* Obj)
{
	((UMaterialExpressionCustom*)Obj)->ShowCode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_ShowCode = { "ShowCode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionCustom), &Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_ShowCode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowCode_MetaData), NewProp_ShowCode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_ShowCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionCustom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::ClassParams = {
	&UMaterialExpressionCustom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionCustom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionCustom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionCustom()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionCustom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCustom.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCustom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionCustom.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCustom>()
{
	return UMaterialExpressionCustom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCustom);
UMaterialExpressionCustom::~UMaterialExpressionCustom() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionCustom)
// End Class UMaterialExpressionCustom

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECustomMaterialOutputType_StaticEnum, TEXT("ECustomMaterialOutputType"), &Z_Registration_Info_UEnum_ECustomMaterialOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1274137392U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCustomInput::StaticStruct, Z_Construct_UScriptStruct_FCustomInput_Statics::NewStructOps, TEXT("CustomInput"), &Z_Registration_Info_UScriptStruct_CustomInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomInput), 2181361022U) },
		{ FCustomOutput::StaticStruct, Z_Construct_UScriptStruct_FCustomOutput_Statics::NewStructOps, TEXT("CustomOutput"), &Z_Registration_Info_UScriptStruct_CustomOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomOutput), 1051453929U) },
		{ FCustomDefine::StaticStruct, Z_Construct_UScriptStruct_FCustomDefine_Statics::NewStructOps, TEXT("CustomDefine"), &Z_Registration_Info_UScriptStruct_CustomDefine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomDefine), 1832315302U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCustom, UMaterialExpressionCustom::StaticClass, TEXT("UMaterialExpressionCustom"), &Z_Registration_Info_UClass_UMaterialExpressionCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCustom), 2356868850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_3226643459(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
