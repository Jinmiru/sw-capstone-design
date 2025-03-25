// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Public/ToolMenuEntry.h"
#include "Developer/ToolMenus/Public/ToolMenuMisc.h"
#include "Developer/ToolMenus/Public/ToolMenuOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuEntry() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBlockType();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EUserInterfaceActionType();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntry();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuInsert();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin ScriptStruct FToolMenuEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuEntry;
class UScriptStruct* FToolMenuEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuEntry, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuEntry.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuEntry>()
{
	return FToolMenuEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolMenuEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents entries in menus such as buttons, checkboxes, and sub-menus.\n *\n * Many entries are created for you via the methods of FToolMenuSection, such as FToolMenuSection::AddMenuEntry.\n */" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
		{ "ToolTip", "Represents entries in menus such as buttons, checkboxes, and sub-menus.\n\nMany entries are created for you via the methods of FToolMenuSection, such as FToolMenuSection::AddMenuEntry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserInterfaceActionType_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TutorialHighlightName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCloseWindowAfterMenuSelection_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptObject_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleNameOverride_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCommandIsKeybindOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenuEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UserInterfaceActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UserInterfaceActionType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TutorialHighlightName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InsertPosition;
	static void NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCloseWindowAfterMenuSelection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScriptObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleNameOverride;
	static void NewProp_bCommandIsKeybindOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommandIsKeybindOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntry, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntry, Owner), Z_Construct_UScriptStruct_FToolMenuOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) }; // 1275886166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntry, Type), Z_Construct_UEnum_Slate_EMultiBlockType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2624468472
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType = { "UserInterfaceActionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntry, UserInterfaceActionType), Z_Construct_UEnum_Slate_EUserInterfaceActionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserInterfaceActionType_MetaData), NewProp_UserInterfaceActionType_MetaData) }; // 1545759475
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_TutorialHighlightName = { "TutorialHighlightName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntry, TutorialHighlightName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TutorialHighlightName_MetaData), NewProp_TutorialHighlightName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntry, InsertPosition), Z_Construct_UScriptStruct_FToolMenuInsert, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertPosition_MetaData), NewProp_InsertPosition_MetaData) }; // 2754096453
void Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj)
{
	((FToolMenuEntry*)Obj)->bShouldCloseWindowAfterMenuSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection = { "bShouldCloseWindowAfterMenuSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FToolMenuEntry), &Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldCloseWindowAfterMenuSelection_MetaData), NewProp_bShouldCloseWindowAfterMenuSelection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_ScriptObject = { "ScriptObject", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntry, ScriptObject), Z_Construct_UClass_UToolMenuEntryScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptObject_MetaData), NewProp_ScriptObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_StyleNameOverride = { "StyleNameOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntry, StyleNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleNameOverride_MetaData), NewProp_StyleNameOverride_MetaData) };
void Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly_SetBit(void* Obj)
{
	((FToolMenuEntry*)Obj)->bCommandIsKeybindOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly = { "bCommandIsKeybindOnly", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FToolMenuEntry), &Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCommandIsKeybindOnly_MetaData), NewProp_bCommandIsKeybindOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_UserInterfaceActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_TutorialHighlightName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_InsertPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bShouldCloseWindowAfterMenuSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_ScriptObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_StyleNameOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewProp_bCommandIsKeybindOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ToolMenuEntry",
	Z_Construct_UScriptStruct_FToolMenuEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::PropPointers),
	sizeof(FToolMenuEntry),
	alignof(FToolMenuEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolMenuEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntry()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuEntry.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuEntry.InnerSingleton;
}
// End ScriptStruct FToolMenuEntry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FToolMenuEntry::StaticStruct, Z_Construct_UScriptStruct_FToolMenuEntry_Statics::NewStructOps, TEXT("ToolMenuEntry"), &Z_Registration_Info_UScriptStruct_ToolMenuEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuEntry), 1714537137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h_1277126808(TEXT("/Script/ToolMenus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntry_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
