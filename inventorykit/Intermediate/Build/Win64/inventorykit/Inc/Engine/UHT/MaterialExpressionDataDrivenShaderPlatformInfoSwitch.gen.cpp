// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDataDrivenShaderPlatformInfoSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDataDrivenShaderPlatformInfoCondition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition;
static UEnum* EDataDrivenShaderPlatformInfoCondition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDataDrivenShaderPlatformInfoCondition"));
	}
	return Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDataDrivenShaderPlatformInfoCondition>()
{
	return EDataDrivenShaderPlatformInfoCondition_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "COND_False.DisplayName", "Property must be false" },
		{ "COND_False.Name", "COND_False" },
		{ "COND_True.DisplayName", "Property must be true" },
		{ "COND_True.Name", "COND_True" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "COND_True", (int64)COND_True },
		{ "COND_False", (int64)COND_False },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDataDrivenShaderPlatformInfoCondition",
	"EDataDrivenShaderPlatformInfoCondition",
	Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition()
{
	if (!Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.InnerSingleton, Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.InnerSingleton;
}
// End Enum EDataDrivenShaderPlatformInfoCondition

// Begin ScriptStruct FDataDrivenShaderPlatformInfoInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput;
class UScriptStruct* FDataDrivenShaderPlatformInfoInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DataDrivenShaderPlatformInfoInput"));
	}
	return Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataDrivenShaderPlatformInfoInput>()
{
	return FDataDrivenShaderPlatformInfoInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "Category", "FDataDrivenShaderPlatformInfoInput" },
		{ "GetOptions", "GetNameOptions" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyCondition_MetaData[] = {
		{ "Category", "FDataDrivenShaderPlatformInfoInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PropertyCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataDrivenShaderPlatformInfoInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataDrivenShaderPlatformInfoInput, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_PropertyCondition = { "PropertyCondition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataDrivenShaderPlatformInfoInput, PropertyCondition), Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyCondition_MetaData), NewProp_PropertyCondition_MetaData) }; // 1930031135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_PropertyCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DataDrivenShaderPlatformInfoInput",
	Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::PropPointers),
	sizeof(FDataDrivenShaderPlatformInfoInput),
	alignof(FDataDrivenShaderPlatformInfoInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput()
{
	if (!Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.InnerSingleton, Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.InnerSingleton;
}
// End ScriptStruct FDataDrivenShaderPlatformInfoInput

// Begin Class UMaterialExpressionDataDrivenShaderPlatformInfoSwitch Function GetNameOptions
struct Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics
{
	struct MaterialExpressionDataDrivenShaderPlatformInfoSwitch_eventGetNameOptions_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialExpressionDataDrivenShaderPlatformInfoSwitch_eventGetNameOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, nullptr, "GetNameOptions", nullptr, nullptr, Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::MaterialExpressionDataDrivenShaderPlatformInfoSwitch_eventGetNameOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::MaterialExpressionDataDrivenShaderPlatformInfoSwitch_eventGetNameOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::execGetNameOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetNameOptions();
	P_NATIVE_END;
}
// End Class UMaterialExpressionDataDrivenShaderPlatformInfoSwitch Function GetNameOptions

// Begin Class UMaterialExpressionDataDrivenShaderPlatformInfoSwitch
void UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticRegisterNativesUMaterialExpressionDataDrivenShaderPlatformInfoSwitch()
{
	UClass* Class = UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNameOptions", &UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::execGetNameOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch);
UClass* Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_NoRegister()
{
	return UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DDSPIPropertyNames_MetaData[] = {
		{ "Category", "DataDrivenShaderPlatformInfoInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContainsInvalidProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTrue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputFalse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DDSPIPropertyNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DDSPIPropertyNames;
	static void NewProp_bContainsInvalidProperty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContainsInvalidProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions, "GetNameOptions" }, // 2489372042
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDataDrivenShaderPlatformInfoSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputTrue = { "InputTrue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, InputTrue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTrue_MetaData), NewProp_InputTrue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputFalse = { "InputFalse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, InputFalse), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputFalse_MetaData), NewProp_InputFalse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames_Inner = { "DDSPIPropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput, METADATA_PARAMS(0, nullptr) }; // 722609680
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames = { "DDSPIPropertyNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, DDSPIPropertyNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DDSPIPropertyNames_MetaData), NewProp_DDSPIPropertyNames_MetaData) }; // 722609680
void Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty_SetBit(void* Obj)
{
	((UMaterialExpressionDataDrivenShaderPlatformInfoSwitch*)Obj)->bContainsInvalidProperty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty = { "bContainsInvalidProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch), &Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContainsInvalidProperty_MetaData), NewProp_bContainsInvalidProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputFalse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::ClassParams = {
	&UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDataDrivenShaderPlatformInfoSwitch>()
{
	return UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch);
UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::~UMaterialExpressionDataDrivenShaderPlatformInfoSwitch() {}
// End Class UMaterialExpressionDataDrivenShaderPlatformInfoSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataDrivenShaderPlatformInfoCondition_StaticEnum, TEXT("EDataDrivenShaderPlatformInfoCondition"), &Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1930031135U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataDrivenShaderPlatformInfoInput::StaticStruct, Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewStructOps, TEXT("DataDrivenShaderPlatformInfoInput"), &Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataDrivenShaderPlatformInfoInput), 722609680U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass, TEXT("UMaterialExpressionDataDrivenShaderPlatformInfoSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch), 3413968898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_2739526958(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
