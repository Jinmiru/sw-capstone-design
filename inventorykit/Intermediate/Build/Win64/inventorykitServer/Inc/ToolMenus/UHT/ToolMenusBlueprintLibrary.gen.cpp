// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Private/ToolMenusBlueprintLibrary.h"
#include "Developer/ToolMenus/Public/ToolMenuContext.h"
#include "Developer/ToolMenus/Public/ToolMenuEntry.h"
#include "Developer/ToolMenus/Public/ToolMenuEntryScript.h"
#include "Developer/ToolMenus/Public/ToolMenuMisc.h"
#include "Developer/ToolMenus/Public/ToolMenuOwner.h"
#include "Developer/ToolMenus/Public/ToolMenuSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenusBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextExtensions();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextExtensions_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryExtensions();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryExtensions_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionExtensions();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionExtensions_NoRegister();
TOOLMENUS_API UEnum* Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptSlateIcon();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntry();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuSection();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuStringCommand();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin Class UToolMenuContextExtensions Function FindByClass
struct Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics
{
	struct ToolMenuContextExtensions_eventFindByClass_Parms
	{
		FToolMenuContext Context;
		TSubclassOf<UObject> InClass;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "DeterminesOutputType", "InClass" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuContextExtensions_eventFindByClass_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuContextExtensions_eventFindByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuContextExtensions_eventFindByClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::NewProp_InClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuContextExtensions, nullptr, "FindByClass", nullptr, nullptr, Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::ToolMenuContextExtensions_eventFindByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::ToolMenuContextExtensions_eventFindByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuContextExtensions::execFindByClass)
{
	P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
	P_GET_OBJECT(UClass,Z_Param_InClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UToolMenuContextExtensions::FindByClass(Z_Param_Out_Context,Z_Param_InClass);
	P_NATIVE_END;
}
// End Class UToolMenuContextExtensions Function FindByClass

// Begin Class UToolMenuContextExtensions
void UToolMenuContextExtensions::StaticRegisterNativesUToolMenuContextExtensions()
{
	UClass* Class = UToolMenuContextExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindByClass", &UToolMenuContextExtensions::execFindByClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuContextExtensions);
UClass* Z_Construct_UClass_UToolMenuContextExtensions_NoRegister()
{
	return UToolMenuContextExtensions::StaticClass();
}
struct Z_Construct_UClass_UToolMenuContextExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenusBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenuContextExtensions_FindByClass, "FindByClass" }, // 465041998
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuContextExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolMenuContextExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuContextExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuContextExtensions_Statics::ClassParams = {
	&UToolMenuContextExtensions::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuContextExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenuContextExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenuContextExtensions()
{
	if (!Z_Registration_Info_UClass_UToolMenuContextExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuContextExtensions.OuterSingleton, Z_Construct_UClass_UToolMenuContextExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenuContextExtensions.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<UToolMenuContextExtensions>()
{
	return UToolMenuContextExtensions::StaticClass();
}
UToolMenuContextExtensions::UToolMenuContextExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuContextExtensions);
UToolMenuContextExtensions::~UToolMenuContextExtensions() {}
// End Class UToolMenuContextExtensions

// Begin Class UToolMenuEntryExtensions Function BreakScriptSlateIcon
struct Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics
{
	struct ToolMenuEntryExtensions_eventBreakScriptSlateIcon_Parms
	{
		FScriptSlateIcon InValue;
		FName StyleSetName;
		FName StyleName;
		FName SmallStyleName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "NativeBreakFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleSetName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SmallStyleName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventBreakScriptSlateIcon_Parms, InValue), Z_Construct_UScriptStruct_FScriptSlateIcon, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 2310858937
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::NewProp_StyleSetName = { "StyleSetName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventBreakScriptSlateIcon_Parms, StyleSetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::NewProp_StyleName = { "StyleName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventBreakScriptSlateIcon_Parms, StyleName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::NewProp_SmallStyleName = { "SmallStyleName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventBreakScriptSlateIcon_Parms, SmallStyleName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::NewProp_StyleSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::NewProp_StyleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::NewProp_SmallStyleName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "BreakScriptSlateIcon", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::ToolMenuEntryExtensions_eventBreakScriptSlateIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::ToolMenuEntryExtensions_eventBreakScriptSlateIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execBreakScriptSlateIcon)
{
	P_GET_STRUCT_REF(FScriptSlateIcon,Z_Param_Out_InValue);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StyleSetName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StyleName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SmallStyleName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToolMenuEntryExtensions::BreakScriptSlateIcon(Z_Param_Out_InValue,Z_Param_Out_StyleSetName,Z_Param_Out_StyleName,Z_Param_Out_SmallStyleName);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function BreakScriptSlateIcon

// Begin Class UToolMenuEntryExtensions Function BreakStringCommand
struct Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics
{
	struct ToolMenuEntryExtensions_eventBreakStringCommand_Parms
	{
		FToolMenuStringCommand InValue;
		EToolMenuStringCommandType Type;
		FName CustomType;
		FString String;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "NativeBreakFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventBreakStringCommand_Parms, InValue), Z_Construct_UScriptStruct_FToolMenuStringCommand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 3433498609
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventBreakStringCommand_Parms, Type), Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType, METADATA_PARAMS(0, nullptr) }; // 2778814419
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::NewProp_CustomType = { "CustomType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventBreakStringCommand_Parms, CustomType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventBreakStringCommand_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::NewProp_CustomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "BreakStringCommand", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::ToolMenuEntryExtensions_eventBreakStringCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::ToolMenuEntryExtensions_eventBreakStringCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execBreakStringCommand)
{
	P_GET_STRUCT_REF(FToolMenuStringCommand,Z_Param_Out_InValue);
	P_GET_ENUM_REF(EToolMenuStringCommandType,Z_Param_Out_Type);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CustomType);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToolMenuEntryExtensions::BreakStringCommand(Z_Param_Out_InValue,(EToolMenuStringCommandType&)(Z_Param_Out_Type),Z_Param_Out_CustomType,Z_Param_Out_String);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function BreakStringCommand

// Begin Class UToolMenuEntryExtensions Function BreakToolMenuOwner
struct Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics
{
	struct ToolMenuEntryExtensions_eventBreakToolMenuOwner_Parms
	{
		FToolMenuOwner InValue;
		FName Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "NativeBreakFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventBreakToolMenuOwner_Parms, InValue), Z_Construct_UScriptStruct_FToolMenuOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 1275886166
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventBreakToolMenuOwner_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "BreakToolMenuOwner", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::ToolMenuEntryExtensions_eventBreakToolMenuOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::ToolMenuEntryExtensions_eventBreakToolMenuOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execBreakToolMenuOwner)
{
	P_GET_STRUCT_REF(FToolMenuOwner,Z_Param_Out_InValue);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToolMenuEntryExtensions::BreakToolMenuOwner(Z_Param_Out_InValue,Z_Param_Out_Name);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function BreakToolMenuOwner

// Begin Class UToolMenuEntryExtensions Function GetLabel
struct Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics
{
	struct ToolMenuEntryExtensions_eventGetLabel_Parms
	{
		FToolMenuEntry Target;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventGetLabel_Parms, Target), Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 1714537137
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventGetLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "GetLabel", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::ToolMenuEntryExtensions_eventGetLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::ToolMenuEntryExtensions_eventGetLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execGetLabel)
{
	P_GET_STRUCT_REF(FToolMenuEntry,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UToolMenuEntryExtensions::GetLabel(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function GetLabel

// Begin Class UToolMenuEntryExtensions Function GetToolTip
struct Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics
{
	struct ToolMenuEntryExtensions_eventGetToolTip_Parms
	{
		FToolMenuEntry Target;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventGetToolTip_Parms, Target), Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 1714537137
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventGetToolTip_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "GetToolTip", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::ToolMenuEntryExtensions_eventGetToolTip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::ToolMenuEntryExtensions_eventGetToolTip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execGetToolTip)
{
	P_GET_STRUCT_REF(FToolMenuEntry,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UToolMenuEntryExtensions::GetToolTip(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function GetToolTip

// Begin Class UToolMenuEntryExtensions Function InitMenuEntry
struct Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics
{
	struct ToolMenuEntryExtensions_eventInitMenuEntry_Parms
	{
		FName InOwner;
		FName InName;
		FText InLabel;
		FText InToolTip;
		EToolMenuStringCommandType CommandType;
		FName CustomCommandType;
		FString CommandString;
		FToolMenuEntry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InToolTip_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCommandType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InLabel;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InToolTip;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommandType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CommandType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCommandType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommandString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventInitMenuEntry_Parms, InOwner), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOwner_MetaData), NewProp_InOwner_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventInitMenuEntry_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventInitMenuEntry_Parms, InLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLabel_MetaData), NewProp_InLabel_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_InToolTip = { "InToolTip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventInitMenuEntry_Parms, InToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InToolTip_MetaData), NewProp_InToolTip_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_CommandType = { "CommandType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventInitMenuEntry_Parms, CommandType), Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandType_MetaData), NewProp_CommandType_MetaData) }; // 2778814419
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_CustomCommandType = { "CustomCommandType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventInitMenuEntry_Parms, CustomCommandType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCommandType_MetaData), NewProp_CustomCommandType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_CommandString = { "CommandString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventInitMenuEntry_Parms, CommandString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandString_MetaData), NewProp_CommandString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventInitMenuEntry_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(0, nullptr) }; // 1714537137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_InLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_InToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_CommandType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_CommandType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_CustomCommandType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_CommandString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "InitMenuEntry", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::ToolMenuEntryExtensions_eventInitMenuEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::ToolMenuEntryExtensions_eventInitMenuEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execInitMenuEntry)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InOwner);
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InLabel);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InToolTip);
	P_GET_ENUM(EToolMenuStringCommandType,Z_Param_CommandType);
	P_GET_PROPERTY(FNameProperty,Z_Param_CustomCommandType);
	P_GET_PROPERTY(FStrProperty,Z_Param_CommandString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FToolMenuEntry*)Z_Param__Result=UToolMenuEntryExtensions::InitMenuEntry(Z_Param_InOwner,Z_Param_InName,Z_Param_Out_InLabel,Z_Param_Out_InToolTip,EToolMenuStringCommandType(Z_Param_CommandType),Z_Param_CustomCommandType,Z_Param_CommandString);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function InitMenuEntry

// Begin Class UToolMenuEntryExtensions Function MakeScriptSlateIcon
struct Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics
{
	struct ToolMenuEntryExtensions_eventMakeScriptSlateIcon_Parms
	{
		FName StyleSetName;
		FName StyleName;
		FName SmallStyleName;
		FScriptSlateIcon ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "CPP_Default_SmallStyleName", "None" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleSetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallStyleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleSetName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SmallStyleName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::NewProp_StyleSetName = { "StyleSetName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventMakeScriptSlateIcon_Parms, StyleSetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleSetName_MetaData), NewProp_StyleSetName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::NewProp_StyleName = { "StyleName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventMakeScriptSlateIcon_Parms, StyleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleName_MetaData), NewProp_StyleName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::NewProp_SmallStyleName = { "SmallStyleName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventMakeScriptSlateIcon_Parms, SmallStyleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallStyleName_MetaData), NewProp_SmallStyleName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventMakeScriptSlateIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptSlateIcon, METADATA_PARAMS(0, nullptr) }; // 2310858937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::NewProp_StyleSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::NewProp_StyleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::NewProp_SmallStyleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "MakeScriptSlateIcon", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::ToolMenuEntryExtensions_eventMakeScriptSlateIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::ToolMenuEntryExtensions_eventMakeScriptSlateIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execMakeScriptSlateIcon)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_StyleSetName);
	P_GET_PROPERTY(FNameProperty,Z_Param_StyleName);
	P_GET_PROPERTY(FNameProperty,Z_Param_SmallStyleName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptSlateIcon*)Z_Param__Result=UToolMenuEntryExtensions::MakeScriptSlateIcon(Z_Param_StyleSetName,Z_Param_StyleName,Z_Param_SmallStyleName);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function MakeScriptSlateIcon

// Begin Class UToolMenuEntryExtensions Function MakeStringCommand
struct Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics
{
	struct ToolMenuEntryExtensions_eventMakeStringCommand_Parms
	{
		EToolMenuStringCommandType Type;
		FName CustomType;
		FString String;
		FToolMenuStringCommand ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventMakeStringCommand_Parms, Type), Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType, METADATA_PARAMS(0, nullptr) }; // 2778814419
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::NewProp_CustomType = { "CustomType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventMakeStringCommand_Parms, CustomType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventMakeStringCommand_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventMakeStringCommand_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolMenuStringCommand, METADATA_PARAMS(0, nullptr) }; // 3433498609
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::NewProp_CustomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "MakeStringCommand", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::ToolMenuEntryExtensions_eventMakeStringCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::ToolMenuEntryExtensions_eventMakeStringCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execMakeStringCommand)
{
	P_GET_ENUM(EToolMenuStringCommandType,Z_Param_Type);
	P_GET_PROPERTY(FNameProperty,Z_Param_CustomType);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FToolMenuStringCommand*)Z_Param__Result=UToolMenuEntryExtensions::MakeStringCommand(EToolMenuStringCommandType(Z_Param_Type),Z_Param_CustomType,Z_Param_String);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function MakeStringCommand

// Begin Class UToolMenuEntryExtensions Function MakeToolMenuOwner
struct Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics
{
	struct ToolMenuEntryExtensions_eventMakeToolMenuOwner_Parms
	{
		FName Name;
		FToolMenuOwner ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventMakeToolMenuOwner_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventMakeToolMenuOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FToolMenuOwner, METADATA_PARAMS(0, nullptr) }; // 1275886166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "MakeToolMenuOwner", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::ToolMenuEntryExtensions_eventMakeToolMenuOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::ToolMenuEntryExtensions_eventMakeToolMenuOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execMakeToolMenuOwner)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FToolMenuOwner*)Z_Param__Result=UToolMenuEntryExtensions::MakeToolMenuOwner(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function MakeToolMenuOwner

// Begin Class UToolMenuEntryExtensions Function SetIcon
struct Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics
{
	struct ToolMenuEntryExtensions_eventSetIcon_Parms
	{
		FToolMenuEntry Target;
		FName StyleSetName;
		FName StyleName;
		FName SmallStyleName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "CPP_Default_SmallStyleName", "None" },
		{ "CPP_Default_StyleName", "None" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleSetName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallStyleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleSetName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SmallStyleName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetIcon_Parms, Target), Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(0, nullptr) }; // 1714537137
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::NewProp_StyleSetName = { "StyleSetName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetIcon_Parms, StyleSetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleSetName_MetaData), NewProp_StyleSetName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::NewProp_StyleName = { "StyleName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetIcon_Parms, StyleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleName_MetaData), NewProp_StyleName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::NewProp_SmallStyleName = { "SmallStyleName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetIcon_Parms, SmallStyleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallStyleName_MetaData), NewProp_SmallStyleName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::NewProp_StyleSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::NewProp_StyleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::NewProp_SmallStyleName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "SetIcon", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::ToolMenuEntryExtensions_eventSetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::ToolMenuEntryExtensions_eventSetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execSetIcon)
{
	P_GET_STRUCT_REF(FToolMenuEntry,Z_Param_Out_Target);
	P_GET_PROPERTY(FNameProperty,Z_Param_StyleSetName);
	P_GET_PROPERTY(FNameProperty,Z_Param_StyleName);
	P_GET_PROPERTY(FNameProperty,Z_Param_SmallStyleName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToolMenuEntryExtensions::SetIcon(Z_Param_Out_Target,Z_Param_StyleSetName,Z_Param_StyleName,Z_Param_SmallStyleName);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function SetIcon

// Begin Class UToolMenuEntryExtensions Function SetLabel
struct Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics
{
	struct ToolMenuEntryExtensions_eventSetLabel_Parms
	{
		FToolMenuEntry Target;
		FText Label;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetLabel_Parms, Target), Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(0, nullptr) }; // 1714537137
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetLabel_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "SetLabel", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::ToolMenuEntryExtensions_eventSetLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::ToolMenuEntryExtensions_eventSetLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execSetLabel)
{
	P_GET_STRUCT_REF(FToolMenuEntry,Z_Param_Out_Target);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Label);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToolMenuEntryExtensions::SetLabel(Z_Param_Out_Target,Z_Param_Out_Label);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function SetLabel

// Begin Class UToolMenuEntryExtensions Function SetStringCommand
struct Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics
{
	struct ToolMenuEntryExtensions_eventSetStringCommand_Parms
	{
		FToolMenuEntry Target;
		EToolMenuStringCommandType Type;
		FName CustomType;
		FString String;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetStringCommand_Parms, Target), Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(0, nullptr) }; // 1714537137
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetStringCommand_Parms, Type), Z_Construct_UEnum_ToolMenus_EToolMenuStringCommandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2778814419
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::NewProp_CustomType = { "CustomType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetStringCommand_Parms, CustomType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomType_MetaData), NewProp_CustomType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetStringCommand_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::NewProp_CustomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "SetStringCommand", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::ToolMenuEntryExtensions_eventSetStringCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::ToolMenuEntryExtensions_eventSetStringCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execSetStringCommand)
{
	P_GET_STRUCT_REF(FToolMenuEntry,Z_Param_Out_Target);
	P_GET_ENUM(EToolMenuStringCommandType,Z_Param_Type);
	P_GET_PROPERTY(FNameProperty,Z_Param_CustomType);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToolMenuEntryExtensions::SetStringCommand(Z_Param_Out_Target,EToolMenuStringCommandType(Z_Param_Type),Z_Param_CustomType,Z_Param_String);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function SetStringCommand

// Begin Class UToolMenuEntryExtensions Function SetToolTip
struct Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics
{
	struct ToolMenuEntryExtensions_eventSetToolTip_Parms
	{
		FToolMenuEntry Target;
		FText ToolTip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetToolTip_Parms, Target), Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(0, nullptr) }; // 1714537137
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryExtensions_eventSetToolTip_Parms, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::NewProp_ToolTip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryExtensions, nullptr, "SetToolTip", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::ToolMenuEntryExtensions_eventSetToolTip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::ToolMenuEntryExtensions_eventSetToolTip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryExtensions::execSetToolTip)
{
	P_GET_STRUCT_REF(FToolMenuEntry,Z_Param_Out_Target);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ToolTip);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToolMenuEntryExtensions::SetToolTip(Z_Param_Out_Target,Z_Param_Out_ToolTip);
	P_NATIVE_END;
}
// End Class UToolMenuEntryExtensions Function SetToolTip

// Begin Class UToolMenuEntryExtensions
void UToolMenuEntryExtensions::StaticRegisterNativesUToolMenuEntryExtensions()
{
	UClass* Class = UToolMenuEntryExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BreakScriptSlateIcon", &UToolMenuEntryExtensions::execBreakScriptSlateIcon },
		{ "BreakStringCommand", &UToolMenuEntryExtensions::execBreakStringCommand },
		{ "BreakToolMenuOwner", &UToolMenuEntryExtensions::execBreakToolMenuOwner },
		{ "GetLabel", &UToolMenuEntryExtensions::execGetLabel },
		{ "GetToolTip", &UToolMenuEntryExtensions::execGetToolTip },
		{ "InitMenuEntry", &UToolMenuEntryExtensions::execInitMenuEntry },
		{ "MakeScriptSlateIcon", &UToolMenuEntryExtensions::execMakeScriptSlateIcon },
		{ "MakeStringCommand", &UToolMenuEntryExtensions::execMakeStringCommand },
		{ "MakeToolMenuOwner", &UToolMenuEntryExtensions::execMakeToolMenuOwner },
		{ "SetIcon", &UToolMenuEntryExtensions::execSetIcon },
		{ "SetLabel", &UToolMenuEntryExtensions::execSetLabel },
		{ "SetStringCommand", &UToolMenuEntryExtensions::execSetStringCommand },
		{ "SetToolTip", &UToolMenuEntryExtensions::execSetToolTip },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuEntryExtensions);
UClass* Z_Construct_UClass_UToolMenuEntryExtensions_NoRegister()
{
	return UToolMenuEntryExtensions::StaticClass();
}
struct Z_Construct_UClass_UToolMenuEntryExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenusBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_BreakScriptSlateIcon, "BreakScriptSlateIcon" }, // 6740920
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_BreakStringCommand, "BreakStringCommand" }, // 3957774309
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_BreakToolMenuOwner, "BreakToolMenuOwner" }, // 3542594010
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_GetLabel, "GetLabel" }, // 1444474498
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_GetToolTip, "GetToolTip" }, // 1398190712
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_InitMenuEntry, "InitMenuEntry" }, // 2252098130
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_MakeScriptSlateIcon, "MakeScriptSlateIcon" }, // 1930037177
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_MakeStringCommand, "MakeStringCommand" }, // 3251983939
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_MakeToolMenuOwner, "MakeToolMenuOwner" }, // 742573626
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_SetIcon, "SetIcon" }, // 3878247238
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_SetLabel, "SetLabel" }, // 1285156154
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_SetStringCommand, "SetStringCommand" }, // 2043401487
		{ &Z_Construct_UFunction_UToolMenuEntryExtensions_SetToolTip, "SetToolTip" }, // 3098053122
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuEntryExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolMenuEntryExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEntryExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuEntryExtensions_Statics::ClassParams = {
	&UToolMenuEntryExtensions::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEntryExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenuEntryExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenuEntryExtensions()
{
	if (!Z_Registration_Info_UClass_UToolMenuEntryExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuEntryExtensions.OuterSingleton, Z_Construct_UClass_UToolMenuEntryExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenuEntryExtensions.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<UToolMenuEntryExtensions>()
{
	return UToolMenuEntryExtensions::StaticClass();
}
UToolMenuEntryExtensions::UToolMenuEntryExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuEntryExtensions);
UToolMenuEntryExtensions::~UToolMenuEntryExtensions() {}
// End Class UToolMenuEntryExtensions

// Begin Class UToolMenuSectionExtensions Function AddEntry
struct Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics
{
	struct ToolMenuSectionExtensions_eventAddEntry_Parms
	{
		FToolMenuSection Section;
		FToolMenuEntry Args;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Args;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuSectionExtensions_eventAddEntry_Parms, Section), Z_Construct_UScriptStruct_FToolMenuSection, METADATA_PARAMS(0, nullptr) }; // 1692276526
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuSectionExtensions_eventAddEntry_Parms, Args), Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Args_MetaData), NewProp_Args_MetaData) }; // 1714537137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::NewProp_Args,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuSectionExtensions, nullptr, "AddEntry", nullptr, nullptr, Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::ToolMenuSectionExtensions_eventAddEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::ToolMenuSectionExtensions_eventAddEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuSectionExtensions::execAddEntry)
{
	P_GET_STRUCT_REF(FToolMenuSection,Z_Param_Out_Section);
	P_GET_STRUCT_REF(FToolMenuEntry,Z_Param_Out_Args);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToolMenuSectionExtensions::AddEntry(Z_Param_Out_Section,Z_Param_Out_Args);
	P_NATIVE_END;
}
// End Class UToolMenuSectionExtensions Function AddEntry

// Begin Class UToolMenuSectionExtensions Function AddEntryObject
struct Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics
{
	struct ToolMenuSectionExtensions_eventAddEntryObject_Parms
	{
		FToolMenuSection Section;
		UToolMenuEntryScript* InObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Section;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuSectionExtensions_eventAddEntryObject_Parms, Section), Z_Construct_UScriptStruct_FToolMenuSection, METADATA_PARAMS(0, nullptr) }; // 1692276526
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuSectionExtensions_eventAddEntryObject_Parms, InObject), Z_Construct_UClass_UToolMenuEntryScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::NewProp_InObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuSectionExtensions, nullptr, "AddEntryObject", nullptr, nullptr, Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::ToolMenuSectionExtensions_eventAddEntryObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::ToolMenuSectionExtensions_eventAddEntryObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuSectionExtensions::execAddEntryObject)
{
	P_GET_STRUCT_REF(FToolMenuSection,Z_Param_Out_Section);
	P_GET_OBJECT(UToolMenuEntryScript,Z_Param_InObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToolMenuSectionExtensions::AddEntryObject(Z_Param_Out_Section,Z_Param_InObject);
	P_NATIVE_END;
}
// End Class UToolMenuSectionExtensions Function AddEntryObject

// Begin Class UToolMenuSectionExtensions Function GetLabel
struct Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics
{
	struct ToolMenuSectionExtensions_eventGetLabel_Parms
	{
		FToolMenuSection Section;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Section;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuSectionExtensions_eventGetLabel_Parms, Section), Z_Construct_UScriptStruct_FToolMenuSection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) }; // 1692276526
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuSectionExtensions_eventGetLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuSectionExtensions, nullptr, "GetLabel", nullptr, nullptr, Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::ToolMenuSectionExtensions_eventGetLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::ToolMenuSectionExtensions_eventGetLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuSectionExtensions::execGetLabel)
{
	P_GET_STRUCT_REF(FToolMenuSection,Z_Param_Out_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UToolMenuSectionExtensions::GetLabel(Z_Param_Out_Section);
	P_NATIVE_END;
}
// End Class UToolMenuSectionExtensions Function GetLabel

// Begin Class UToolMenuSectionExtensions Function SetLabel
struct Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics
{
	struct ToolMenuSectionExtensions_eventSetLabel_Parms
	{
		FToolMenuSection Section;
		FText Label;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Section;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuSectionExtensions_eventSetLabel_Parms, Section), Z_Construct_UScriptStruct_FToolMenuSection, METADATA_PARAMS(0, nullptr) }; // 1692276526
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuSectionExtensions_eventSetLabel_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuSectionExtensions, nullptr, "SetLabel", nullptr, nullptr, Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::ToolMenuSectionExtensions_eventSetLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::ToolMenuSectionExtensions_eventSetLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuSectionExtensions::execSetLabel)
{
	P_GET_STRUCT_REF(FToolMenuSection,Z_Param_Out_Section);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Label);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToolMenuSectionExtensions::SetLabel(Z_Param_Out_Section,Z_Param_Out_Label);
	P_NATIVE_END;
}
// End Class UToolMenuSectionExtensions Function SetLabel

// Begin Class UToolMenuSectionExtensions
void UToolMenuSectionExtensions::StaticRegisterNativesUToolMenuSectionExtensions()
{
	UClass* Class = UToolMenuSectionExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddEntry", &UToolMenuSectionExtensions::execAddEntry },
		{ "AddEntryObject", &UToolMenuSectionExtensions::execAddEntryObject },
		{ "GetLabel", &UToolMenuSectionExtensions::execGetLabel },
		{ "SetLabel", &UToolMenuSectionExtensions::execSetLabel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuSectionExtensions);
UClass* Z_Construct_UClass_UToolMenuSectionExtensions_NoRegister()
{
	return UToolMenuSectionExtensions::StaticClass();
}
struct Z_Construct_UClass_UToolMenuSectionExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenusBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/ToolMenusBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntry, "AddEntry" }, // 2920051881
		{ &Z_Construct_UFunction_UToolMenuSectionExtensions_AddEntryObject, "AddEntryObject" }, // 3673879082
		{ &Z_Construct_UFunction_UToolMenuSectionExtensions_GetLabel, "GetLabel" }, // 1612635491
		{ &Z_Construct_UFunction_UToolMenuSectionExtensions_SetLabel, "SetLabel" }, // 721637989
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuSectionExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolMenuSectionExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuSectionExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuSectionExtensions_Statics::ClassParams = {
	&UToolMenuSectionExtensions::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuSectionExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenuSectionExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenuSectionExtensions()
{
	if (!Z_Registration_Info_UClass_UToolMenuSectionExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuSectionExtensions.OuterSingleton, Z_Construct_UClass_UToolMenuSectionExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenuSectionExtensions.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<UToolMenuSectionExtensions>()
{
	return UToolMenuSectionExtensions::StaticClass();
}
UToolMenuSectionExtensions::UToolMenuSectionExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuSectionExtensions);
UToolMenuSectionExtensions::~UToolMenuSectionExtensions() {}
// End Class UToolMenuSectionExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuContextExtensions, UToolMenuContextExtensions::StaticClass, TEXT("UToolMenuContextExtensions"), &Z_Registration_Info_UClass_UToolMenuContextExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuContextExtensions), 2503275539U) },
		{ Z_Construct_UClass_UToolMenuEntryExtensions, UToolMenuEntryExtensions::StaticClass, TEXT("UToolMenuEntryExtensions"), &Z_Registration_Info_UClass_UToolMenuEntryExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuEntryExtensions), 2977987026U) },
		{ Z_Construct_UClass_UToolMenuSectionExtensions, UToolMenuSectionExtensions::StaticClass, TEXT("UToolMenuSectionExtensions"), &Z_Registration_Info_UClass_UToolMenuSectionExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuSectionExtensions), 1888135522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_3209230678(TEXT("/Script/ToolMenus"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
