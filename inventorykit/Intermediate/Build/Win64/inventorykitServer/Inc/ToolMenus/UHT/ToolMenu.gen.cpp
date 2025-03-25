// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Public/ToolMenu.h"
#include "Developer/ToolMenus/Public/ToolMenuContext.h"
#include "Developer/ToolMenus/Public/ToolMenuEntry.h"
#include "Developer/ToolMenus/Public/ToolMenuOwner.h"
#include "Developer/ToolMenus/Public/ToolMenuSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenu() {}

// Begin Cross Module References
SLATE_API UClass* Z_Construct_UClass_UToolMenuBase();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBoxType();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister();
TOOLMENUS_API UEnum* Z_Construct_UEnum_ToolMenus_EToolMenuInsertType();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntry();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuSection();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin Class UToolMenu Function AddDynamicSectionScript
struct Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics
{
	struct ToolMenu_eventAddDynamicSectionScript_Parms
	{
		FName SectionName;
		UToolMenuSectionDynamic* Object;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "DisplayName", "Add Dynamic Section" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "ScriptName", "AddDynamicSection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddDynamicSectionScript_Parms, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddDynamicSectionScript_Parms, Object), Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "AddDynamicSectionScript", nullptr, nullptr, Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::ToolMenu_eventAddDynamicSectionScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::ToolMenu_eventAddDynamicSectionScript_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenu::execAddDynamicSectionScript)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_GET_OBJECT(UToolMenuSectionDynamic,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDynamicSectionScript(Z_Param_SectionName,Z_Param_Object);
	P_NATIVE_END;
}
// End Class UToolMenu Function AddDynamicSectionScript

// Begin Class UToolMenu Function AddMenuEntry
struct Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics
{
	struct ToolMenu_eventAddMenuEntry_Parms
	{
		FName SectionName;
		FToolMenuEntry Args;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Args;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddMenuEntry_Parms, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddMenuEntry_Parms, Args), Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Args_MetaData), NewProp_Args_MetaData) }; // 1714537137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::NewProp_Args,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "AddMenuEntry", nullptr, nullptr, Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::ToolMenu_eventAddMenuEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::ToolMenu_eventAddMenuEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenu_AddMenuEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_AddMenuEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenu::execAddMenuEntry)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_GET_STRUCT_REF(FToolMenuEntry,Z_Param_Out_Args);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMenuEntry(Z_Param_SectionName,Z_Param_Out_Args);
	P_NATIVE_END;
}
// End Class UToolMenu Function AddMenuEntry

// Begin Class UToolMenu Function AddMenuEntryObject
struct Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics
{
	struct ToolMenu_eventAddMenuEntryObject_Parms
	{
		UToolMenuEntryScript* InObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddMenuEntryObject_Parms, InObject), Z_Construct_UClass_UToolMenuEntryScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::NewProp_InObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "AddMenuEntryObject", nullptr, nullptr, Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::ToolMenu_eventAddMenuEntryObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::ToolMenu_eventAddMenuEntryObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenu_AddMenuEntryObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_AddMenuEntryObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenu::execAddMenuEntryObject)
{
	P_GET_OBJECT(UToolMenuEntryScript,Z_Param_InObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMenuEntryObject(Z_Param_InObject);
	P_NATIVE_END;
}
// End Class UToolMenu Function AddMenuEntryObject

// Begin Class UToolMenu Function AddSectionScript
struct Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics
{
	struct ToolMenu_eventAddSectionScript_Parms
	{
		FName SectionName;
		FText Label;
		FName InsertName;
		EToolMenuInsertType InsertType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "InsertName,InsertType" },
		{ "AutoCreateRefTerm", "Label" },
		{ "Category", "Tool Menus" },
		{ "CPP_Default_InsertName", "None" },
		{ "CPP_Default_InsertType", "Default" },
		{ "CPP_Default_Label", "" },
		{ "DisplayName", "Add Section" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "ScriptName", "AddSection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InsertName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InsertType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InsertType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddSectionScript_Parms, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddSectionScript_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertName = { "InsertName", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddSectionScript_Parms, InsertName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertName_MetaData), NewProp_InsertName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType = { "InsertType", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddSectionScript_Parms, InsertType), Z_Construct_UEnum_ToolMenus_EToolMenuInsertType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertType_MetaData), NewProp_InsertType_MetaData) }; // 3222736787
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::NewProp_InsertType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "AddSectionScript", nullptr, nullptr, Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::ToolMenu_eventAddSectionScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::ToolMenu_eventAddSectionScript_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenu_AddSectionScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_AddSectionScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenu::execAddSectionScript)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Label);
	P_GET_PROPERTY(FNameProperty,Z_Param_InsertName);
	P_GET_ENUM(EToolMenuInsertType,Z_Param_InsertType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSectionScript(Z_Param_SectionName,Z_Param_Out_Label,Z_Param_InsertName,EToolMenuInsertType(Z_Param_InsertType));
	P_NATIVE_END;
}
// End Class UToolMenu Function AddSectionScript

// Begin Class UToolMenu Function AddSubMenuScript
struct Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics
{
	struct ToolMenu_eventAddSubMenuScript_Parms
	{
		FName Owner;
		FName SectionName;
		FName Name;
		FText Label;
		FText ToolTip;
		UToolMenu* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Label,ToolTip" },
		{ "Category", "Tool Menus" },
		{ "CPP_Default_ToolTip", "" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "ScriptName", "AddSubMenu" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Owner;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, Owner), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventAddSubMenuScript_Parms, ReturnValue), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "AddSubMenuScript", nullptr, nullptr, Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::ToolMenu_eventAddSubMenuScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::ToolMenu_eventAddSubMenuScript_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenu_AddSubMenuScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_AddSubMenuScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenu::execAddSubMenuScript)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Owner);
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Label);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ToolTip);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UToolMenu**)Z_Param__Result=P_THIS->AddSubMenuScript(Z_Param_Owner,Z_Param_SectionName,Z_Param_Name,Z_Param_Out_Label,Z_Param_Out_ToolTip);
	P_NATIVE_END;
}
// End Class UToolMenu Function AddSubMenuScript

// Begin Class UToolMenu Function InitMenu
struct Z_Construct_UFunction_UToolMenu_InitMenu_Statics
{
	struct ToolMenu_eventInitMenu_Parms
	{
		FToolMenuOwner Owner;
		FName Name;
		FName Parent;
		EMultiBoxType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "CPP_Default_Parent", "None" },
		{ "CPP_Default_Type", "Menu" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Parent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventInitMenu_Parms, Owner), Z_Construct_UScriptStruct_FToolMenuOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) }; // 1275886166
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventInitMenu_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventInitMenu_Parms, Parent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenu_eventInitMenu_Parms, Type), Z_Construct_UEnum_Slate_EMultiBoxType, METADATA_PARAMS(0, nullptr) }; // 3653144851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenu_InitMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenu_InitMenu_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenu_InitMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenu, nullptr, "InitMenu", nullptr, nullptr, Z_Construct_UFunction_UToolMenu_InitMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::ToolMenu_eventInitMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenu_InitMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenu_InitMenu_Statics::ToolMenu_eventInitMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenu_InitMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenu_InitMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenu::execInitMenu)
{
	P_GET_STRUCT(FToolMenuOwner,Z_Param_Owner);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FNameProperty,Z_Param_Parent);
	P_GET_ENUM(EMultiBoxType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitMenu(Z_Param_Owner,Z_Param_Name,Z_Param_Parent,EMultiBoxType(Z_Param_Type));
	P_NATIVE_END;
}
// End Class UToolMenu Function InitMenu

// Begin Class UToolMenu
void UToolMenu::StaticRegisterNativesUToolMenu()
{
	UClass* Class = UToolMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDynamicSectionScript", &UToolMenu::execAddDynamicSectionScript },
		{ "AddMenuEntry", &UToolMenu::execAddMenuEntry },
		{ "AddMenuEntryObject", &UToolMenu::execAddMenuEntryObject },
		{ "AddSectionScript", &UToolMenu::execAddSectionScript },
		{ "AddSubMenuScript", &UToolMenu::execAddSubMenuScript },
		{ "InitMenu", &UToolMenu::execInitMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenu);
UClass* Z_Construct_UClass_UToolMenu_NoRegister()
{
	return UToolMenu::StaticClass();
}
struct Z_Construct_UClass_UToolMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a menu in the ToolMenus system.\n *\n * An instance of this class is returned by basic APIs such as UToolMenus::RegisterMenu and UToolMenus::ExtendMenu.\n **/" },
		{ "IncludePath", "ToolMenu.h" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "ToolTip", "Represents a menu in the ToolMenus system.\n\nAn instance of this class is returned by basic APIs such as UToolMenus::RegisterMenu and UToolMenus::ExtendMenu." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuParent_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TutorialHighlightName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuType_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCleanupContextOnDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCloseWindowAfterMenuSelection_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCloseSelfOnly_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSearchable_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToolBarIsFocusable_MetaData[] = {
		{ "Category", "ToolBar" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToolBarForceSmallIcons_MetaData[] = {
		{ "Category", "ToolBar" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventCustomization_MetaData[] = {
		{ "Category", "ToolBar" },
		{ "Comment", "/** Prevent menu from being customized */" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "ToolTip", "Prevent menu from being customized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuOwner_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuParent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuSourceEntryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuParent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TutorialHighlightName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MenuType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MenuType;
	static void NewProp_bShouldCleanupContextOnDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCleanupContextOnDestroy;
	static void NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCloseWindowAfterMenuSelection;
	static void NewProp_bCloseSelfOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseSelfOnly;
	static void NewProp_bSearchable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchable;
	static void NewProp_bToolBarIsFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToolBarIsFocusable;
	static void NewProp_bToolBarForceSmallIcons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToolBarForceSmallIcons;
	static void NewProp_bPreventCustomization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventCustomization;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubMenuParent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubMenuSourceEntryName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenu_AddDynamicSectionScript, "AddDynamicSectionScript" }, // 2911991692
		{ &Z_Construct_UFunction_UToolMenu_AddMenuEntry, "AddMenuEntry" }, // 2226162294
		{ &Z_Construct_UFunction_UToolMenu_AddMenuEntryObject, "AddMenuEntryObject" }, // 1978012405
		{ &Z_Construct_UFunction_UToolMenu_AddSectionScript, "AddSectionScript" }, // 3150247210
		{ &Z_Construct_UFunction_UToolMenu_AddSubMenuScript, "AddSubMenuScript" }, // 3665676828
		{ &Z_Construct_UFunction_UToolMenu_InitMenu, "InitMenu" }, // 314758996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenu, MenuName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuName_MetaData), NewProp_MenuName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuParent = { "MenuParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenu, MenuParent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuParent_MetaData), NewProp_MenuParent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_StyleName = { "StyleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenu, StyleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleName_MetaData), NewProp_StyleName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_TutorialHighlightName = { "TutorialHighlightName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenu, TutorialHighlightName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TutorialHighlightName_MetaData), NewProp_TutorialHighlightName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType = { "MenuType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenu, MenuType), Z_Construct_UEnum_Slate_EMultiBoxType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuType_MetaData), NewProp_MenuType_MetaData) }; // 3653144851
void Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy_SetBit(void* Obj)
{
	((UToolMenu*)Obj)->bShouldCleanupContextOnDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy = { "bShouldCleanupContextOnDestroy", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldCleanupContextOnDestroy_MetaData), NewProp_bShouldCleanupContextOnDestroy_MetaData) };
void Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj)
{
	((UToolMenu*)Obj)->bShouldCloseWindowAfterMenuSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection = { "bShouldCloseWindowAfterMenuSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldCloseWindowAfterMenuSelection_MetaData), NewProp_bShouldCloseWindowAfterMenuSelection_MetaData) };
void Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly_SetBit(void* Obj)
{
	((UToolMenu*)Obj)->bCloseSelfOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly = { "bCloseSelfOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCloseSelfOnly_MetaData), NewProp_bCloseSelfOnly_MetaData) };
void Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable_SetBit(void* Obj)
{
	((UToolMenu*)Obj)->bSearchable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable = { "bSearchable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSearchable_MetaData), NewProp_bSearchable_MetaData) };
void Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable_SetBit(void* Obj)
{
	((UToolMenu*)Obj)->bToolBarIsFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable = { "bToolBarIsFocusable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToolBarIsFocusable_MetaData), NewProp_bToolBarIsFocusable_MetaData) };
void Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons_SetBit(void* Obj)
{
	((UToolMenu*)Obj)->bToolBarForceSmallIcons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons = { "bToolBarForceSmallIcons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToolBarForceSmallIcons_MetaData), NewProp_bToolBarForceSmallIcons_MetaData) };
void Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization_SetBit(void* Obj)
{
	((UToolMenu*)Obj)->bPreventCustomization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization = { "bPreventCustomization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UToolMenu), &Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventCustomization_MetaData), NewProp_bPreventCustomization_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuOwner = { "MenuOwner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenu, MenuOwner), Z_Construct_UScriptStruct_FToolMenuOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuOwner_MetaData), NewProp_MenuOwner_MetaData) }; // 1275886166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenu, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FToolMenuSection, METADATA_PARAMS(0, nullptr) }; // 1692276526
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenu, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) }; // 1692276526
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuParent = { "SubMenuParent", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenu, SubMenuParent), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubMenuParent_MetaData), NewProp_SubMenuParent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuSourceEntryName = { "SubMenuSourceEntryName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenu, SubMenuSourceEntryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubMenuSourceEntryName_MetaData), NewProp_SubMenuSourceEntryName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_StyleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_TutorialHighlightName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCleanupContextOnDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bShouldCloseWindowAfterMenuSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bCloseSelfOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bSearchable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarIsFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bToolBarForceSmallIcons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_bPreventCustomization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_MenuOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenu_Statics::NewProp_SubMenuSourceEntryName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UToolMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UToolMenuBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenu_Statics::ClassParams = {
	&UToolMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UToolMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenu()
{
	if (!Z_Registration_Info_UClass_UToolMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenu.OuterSingleton, Z_Construct_UClass_UToolMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenu.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<UToolMenu>()
{
	return UToolMenu::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenu);
UToolMenu::~UToolMenu() {}
// End Class UToolMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenu, UToolMenu::StaticClass, TEXT("UToolMenu"), &Z_Registration_Info_UClass_UToolMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenu), 3094551975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_2834052238(TEXT("/Script/ToolMenus"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
