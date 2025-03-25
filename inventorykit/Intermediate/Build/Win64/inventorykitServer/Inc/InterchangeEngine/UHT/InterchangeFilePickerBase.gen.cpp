// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Engine/Public/InterchangeFilePickerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeFilePickerBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeFilePickerBase();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeFilePickerBase_NoRegister();
INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeFilePickerParameters();
UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References

// Begin ScriptStruct FInterchangeFilePickerParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeFilePickerParameters;
class UScriptStruct* FInterchangeFilePickerParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeFilePickerParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeFilePickerParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeFilePickerParameters, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangeFilePickerParameters"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeFilePickerParameters.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangeFilePickerParameters>()
{
	return FInterchangeFilePickerParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangeFilePickerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleFiles_MetaData[] = {
		{ "Category", "Interchange | File Picker" },
		{ "Comment", "//If true, the user will be able to select multiple files.\n" },
		{ "ModuleRelativePath", "Public/InterchangeFilePickerBase.h" },
		{ "ToolTip", "If true, the user will be able to select multiple files." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Interchange | File Picker" },
		{ "Comment", "//If not empty, this will override the default title.\n" },
		{ "ModuleRelativePath", "Public/InterchangeFilePickerBase.h" },
		{ "ToolTip", "If not empty, this will override the default title." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[] = {
		{ "Category", "Interchange | File Picker" },
		{ "Comment", "//Set the default open path that the dialog will show to the user.\n" },
		{ "ModuleRelativePath", "Public/InterchangeFilePickerBase.h" },
		{ "ToolTip", "Set the default open path that the dialog will show to the user." },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowMultipleFiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleFiles;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeFilePickerParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::NewProp_bAllowMultipleFiles_SetBit(void* Obj)
{
	((FInterchangeFilePickerParameters*)Obj)->bAllowMultipleFiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::NewProp_bAllowMultipleFiles = { "bAllowMultipleFiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangeFilePickerParameters), &Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::NewProp_bAllowMultipleFiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMultipleFiles_MetaData), NewProp_bAllowMultipleFiles_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeFilePickerParameters, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeFilePickerParameters, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPath_MetaData), NewProp_DefaultPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::NewProp_bAllowMultipleFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::NewProp_DefaultPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	nullptr,
	&NewStructOps,
	"InterchangeFilePickerParameters",
	Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::PropPointers),
	sizeof(FInterchangeFilePickerParameters),
	alignof(FInterchangeFilePickerParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeFilePickerParameters()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeFilePickerParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeFilePickerParameters.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeFilePickerParameters.InnerSingleton;
}
// End ScriptStruct FInterchangeFilePickerParameters

// Begin Class UInterchangeFilePickerBase Function ScriptedFilePickerForTranslatorAssetType
struct InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorAssetType_Parms
{
	EInterchangeTranslatorAssetType TranslatorAssetType;
	FInterchangeFilePickerParameters Parameters;
	TArray<FString> OutFilenames;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorAssetType_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType = FName(TEXT("ScriptedFilePickerForTranslatorAssetType"));
bool UInterchangeFilePickerBase::ScriptedFilePickerForTranslatorAssetType(const EInterchangeTranslatorAssetType TranslatorAssetType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames)
{
	InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorAssetType_Parms Parms;
	Parms.TranslatorAssetType=TranslatorAssetType;
	Parms.Parameters=Parameters;
	Parms.OutFilenames=OutFilenames;
	ProcessEvent(FindFunctionChecked(NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType),&Parms);
	Parameters=Parms.Parameters;
	OutFilenames=Parms.OutFilenames;
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Utilities" },
		{ "Comment", "/**\n\x09 * Non-virtual helper that allows Blueprint to implement an event-based function to implement FilePickerForTranslatorAssetType().\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeFilePickerBase.h" },
		{ "ToolTip", "Non-virtual helper that allows Blueprint to implement an event-based function to implement FilePickerForTranslatorAssetType()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslatorAssetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslatorAssetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslatorAssetType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilenames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFilenames;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_TranslatorAssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_TranslatorAssetType = { "TranslatorAssetType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorAssetType_Parms, TranslatorAssetType), Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslatorAssetType_MetaData), NewProp_TranslatorAssetType_MetaData) }; // 3610793168
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorAssetType_Parms, Parameters), Z_Construct_UScriptStruct_FInterchangeFilePickerParameters, METADATA_PARAMS(0, nullptr) }; // 971617621
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_OutFilenames_Inner = { "OutFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_OutFilenames = { "OutFilenames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorAssetType_Parms, OutFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorAssetType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorAssetType_Parms), &Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_TranslatorAssetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_TranslatorAssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_OutFilenames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_OutFilenames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFilePickerBase, nullptr, "ScriptedFilePickerForTranslatorAssetType", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::PropPointers), sizeof(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorAssetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorAssetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFilePickerBase::execScriptedFilePickerForTranslatorAssetType)
{
	P_GET_ENUM(EInterchangeTranslatorAssetType,Z_Param_TranslatorAssetType);
	P_GET_STRUCT_REF(FInterchangeFilePickerParameters,Z_Param_Out_Parameters);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutFilenames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ScriptedFilePickerForTranslatorAssetType_Implementation(EInterchangeTranslatorAssetType(Z_Param_TranslatorAssetType),Z_Param_Out_Parameters,Z_Param_Out_OutFilenames);
	P_NATIVE_END;
}
// End Class UInterchangeFilePickerBase Function ScriptedFilePickerForTranslatorAssetType

// Begin Class UInterchangeFilePickerBase Function ScriptedFilePickerForTranslatorType
struct InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorType_Parms
{
	EInterchangeTranslatorType TranslatorType;
	FInterchangeFilePickerParameters Parameters;
	TArray<FString> OutFilenames;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorType_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType = FName(TEXT("ScriptedFilePickerForTranslatorType"));
bool UInterchangeFilePickerBase::ScriptedFilePickerForTranslatorType(const EInterchangeTranslatorType TranslatorType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames)
{
	InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorType_Parms Parms;
	Parms.TranslatorType=TranslatorType;
	Parms.Parameters=Parameters;
	Parms.OutFilenames=OutFilenames;
	ProcessEvent(FindFunctionChecked(NAME_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType),&Parms);
	Parameters=Parms.Parameters;
	OutFilenames=Parms.OutFilenames;
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Utilities" },
		{ "Comment", "/**\n\x09 * Non-virtual helper that allows Blueprint to implement an event-based function to implement FilePickerForTranslatorType().\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeFilePickerBase.h" },
		{ "ToolTip", "Non-virtual helper that allows Blueprint to implement an event-based function to implement FilePickerForTranslatorType()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslatorType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslatorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslatorType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilenames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFilenames;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_TranslatorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_TranslatorType = { "TranslatorType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorType_Parms, TranslatorType), Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslatorType_MetaData), NewProp_TranslatorType_MetaData) }; // 2929013043
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorType_Parms, Parameters), Z_Construct_UScriptStruct_FInterchangeFilePickerParameters, METADATA_PARAMS(0, nullptr) }; // 971617621
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_OutFilenames_Inner = { "OutFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_OutFilenames = { "OutFilenames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorType_Parms, OutFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorType_Parms), &Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_TranslatorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_TranslatorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_OutFilenames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_OutFilenames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFilePickerBase, nullptr, "ScriptedFilePickerForTranslatorType", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::PropPointers), sizeof(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::Function_MetaDataParams) };
static_assert(sizeof(InterchangeFilePickerBase_eventScriptedFilePickerForTranslatorType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFilePickerBase::execScriptedFilePickerForTranslatorType)
{
	P_GET_ENUM(EInterchangeTranslatorType,Z_Param_TranslatorType);
	P_GET_STRUCT_REF(FInterchangeFilePickerParameters,Z_Param_Out_Parameters);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutFilenames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ScriptedFilePickerForTranslatorType_Implementation(EInterchangeTranslatorType(Z_Param_TranslatorType),Z_Param_Out_Parameters,Z_Param_Out_OutFilenames);
	P_NATIVE_END;
}
// End Class UInterchangeFilePickerBase Function ScriptedFilePickerForTranslatorType

// Begin Class UInterchangeFilePickerBase
void UInterchangeFilePickerBase::StaticRegisterNativesUInterchangeFilePickerBase()
{
	UClass* Class = UInterchangeFilePickerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ScriptedFilePickerForTranslatorAssetType", &UInterchangeFilePickerBase::execScriptedFilePickerForTranslatorAssetType },
		{ "ScriptedFilePickerForTranslatorType", &UInterchangeFilePickerBase::execScriptedFilePickerForTranslatorType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFilePickerBase);
UClass* Z_Construct_UClass_UInterchangeFilePickerBase_NoRegister()
{
	return UInterchangeFilePickerBase::StaticClass();
}
struct Z_Construct_UClass_UInterchangeFilePickerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeFilePickerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangeFilePickerBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType, "ScriptedFilePickerForTranslatorAssetType" }, // 647965660
		{ &Z_Construct_UFunction_UInterchangeFilePickerBase_ScriptedFilePickerForTranslatorType, "ScriptedFilePickerForTranslatorType" }, // 915806149
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFilePickerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeFilePickerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFilePickerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFilePickerBase_Statics::ClassParams = {
	&UInterchangeFilePickerBase::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFilePickerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeFilePickerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeFilePickerBase()
{
	if (!Z_Registration_Info_UClass_UInterchangeFilePickerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFilePickerBase.OuterSingleton, Z_Construct_UClass_UInterchangeFilePickerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeFilePickerBase.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeFilePickerBase>()
{
	return UInterchangeFilePickerBase::StaticClass();
}
UInterchangeFilePickerBase::UInterchangeFilePickerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFilePickerBase);
UInterchangeFilePickerBase::~UInterchangeFilePickerBase() {}
// End Class UInterchangeFilePickerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInterchangeFilePickerParameters::StaticStruct, Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics::NewStructOps, TEXT("InterchangeFilePickerParameters"), &Z_Registration_Info_UScriptStruct_InterchangeFilePickerParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeFilePickerParameters), 971617621U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeFilePickerBase, UInterchangeFilePickerBase::StaticClass, TEXT("UInterchangeFilePickerBase"), &Z_Registration_Info_UClass_UInterchangeFilePickerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFilePickerBase), 2115278089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_2563499749(TEXT("/Script/InterchangeEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
