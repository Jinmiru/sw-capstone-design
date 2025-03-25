// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSwitch_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESwitchMaterialOutputType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchCustomInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESwitchMaterialOutputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESwitchMaterialOutputType;
static UEnum* ESwitchMaterialOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESwitchMaterialOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESwitchMaterialOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESwitchMaterialOutputType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESwitchMaterialOutputType"));
	}
	return Z_Registration_Info_UEnum_ESwitchMaterialOutputType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESwitchMaterialOutputType>()
{
	return ESwitchMaterialOutputType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESwitchMaterialOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
		{ "TMMOT_Float1.Name", "TMMOT_Float1" },
		{ "TMMOT_Float2.Name", "TMMOT_Float2" },
		{ "TMMOT_Float3.Name", "TMMOT_Float3" },
		{ "TMMOT_Float4.Name", "TMMOT_Float4" },
		{ "TMMOT_MAX.Name", "TMMOT_MAX" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TMMOT_Float1", (int64)TMMOT_Float1 },
		{ "TMMOT_Float2", (int64)TMMOT_Float2 },
		{ "TMMOT_Float3", (int64)TMMOT_Float3 },
		{ "TMMOT_Float4", (int64)TMMOT_Float4 },
		{ "TMMOT_MAX", (int64)TMMOT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESwitchMaterialOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESwitchMaterialOutputType",
	"ESwitchMaterialOutputType",
	Z_Construct_UEnum_Engine_ESwitchMaterialOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESwitchMaterialOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESwitchMaterialOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESwitchMaterialOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESwitchMaterialOutputType()
{
	if (!Z_Registration_Info_UEnum_ESwitchMaterialOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESwitchMaterialOutputType.InnerSingleton, Z_Construct_UEnum_Engine_ESwitchMaterialOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESwitchMaterialOutputType.InnerSingleton;
}
// End Enum ESwitchMaterialOutputType

// Begin ScriptStruct FSwitchCustomInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwitchCustomInput;
class UScriptStruct* FSwitchCustomInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwitchCustomInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwitchCustomInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitchCustomInput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SwitchCustomInput"));
	}
	return Z_Registration_Info_UScriptStruct_SwitchCustomInput.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSwitchCustomInput>()
{
	return FSwitchCustomInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSwitchCustomInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "Category", "CustomInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitchCustomInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwitchCustomInput, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwitchCustomInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SwitchCustomInput",
	Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::PropPointers),
	sizeof(FSwitchCustomInput),
	alignof(FSwitchCustomInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSwitchCustomInput()
{
	if (!Z_Registration_Info_UScriptStruct_SwitchCustomInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwitchCustomInput.InnerSingleton, Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SwitchCustomInput.InnerSingleton;
}
// End ScriptStruct FSwitchCustomInput

// Begin Class UMaterialExpressionSwitch
void UMaterialExpressionSwitch::StaticRegisterNativesUMaterialExpressionSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSwitch);
UClass* Z_Construct_UClass_UMaterialExpressionSwitch_NoRegister()
{
	return UMaterialExpressionSwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "UMaterialExpressionSwitch" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstSwitchValue' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstSwitchValue_MetaData[] = {
		{ "Category", "UMaterialExpressionSwitch" },
		{ "Comment", "/** only used if Selector is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
		{ "OverridingInputProperty", "SwitchValue" },
		{ "ToolTip", "only used if Selector is not hooked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstDefault' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstDefault_MetaData[] = {
		{ "Category", "UMaterialExpressionSwitch" },
		{ "Comment", "/** only used if Selector is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
		{ "OverridingInputProperty", "Default" },
		{ "ToolTip", "only used if Selector is not hooked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "Category", "UMaterialExpressionSwitch" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstSwitchValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstDefault;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSwitch, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSwitch, SwitchValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchValue_MetaData), NewProp_SwitchValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_ConstSwitchValue = { "ConstSwitchValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSwitch, ConstSwitchValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstSwitchValue_MetaData), NewProp_ConstSwitchValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSwitch, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_ConstDefault = { "ConstDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSwitch, ConstDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstDefault_MetaData), NewProp_ConstDefault_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSwitchCustomInput, METADATA_PARAMS(0, nullptr) }; // 2707796560
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSwitch, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 2707796560
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_SwitchValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_ConstSwitchValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_ConstDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSwitch_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSwitch_Statics::ClassParams = {
	&UMaterialExpressionSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSwitch_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSwitch>()
{
	return UMaterialExpressionSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSwitch);
UMaterialExpressionSwitch::~UMaterialExpressionSwitch() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionSwitch)
// End Class UMaterialExpressionSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESwitchMaterialOutputType_StaticEnum, TEXT("ESwitchMaterialOutputType"), &Z_Registration_Info_UEnum_ESwitchMaterialOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1510392070U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSwitchCustomInput::StaticStruct, Z_Construct_UScriptStruct_FSwitchCustomInput_Statics::NewStructOps, TEXT("SwitchCustomInput"), &Z_Registration_Info_UScriptStruct_SwitchCustomInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwitchCustomInput), 2707796560U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSwitch, UMaterialExpressionSwitch::StaticClass, TEXT("UMaterialExpressionSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSwitch), 2289202412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_1801396131(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
