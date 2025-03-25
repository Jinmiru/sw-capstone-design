// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Public/ToolMenuEntryScript.h"
#include "Developer/ToolMenus/Public/ToolMenuContext.h"
#include "Developer/ToolMenus/Public/ToolMenuMisc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuEntryScript() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBlockType();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EUserInterfaceActionType();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptSlateIcon();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntryScriptData();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuInsert();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin ScriptStruct FScriptSlateIcon
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptSlateIcon;
class UScriptStruct* FScriptSlateIcon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptSlateIcon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptSlateIcon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptSlateIcon, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ScriptSlateIcon"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptSlateIcon.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FScriptSlateIcon>()
{
	return FScriptSlateIcon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScriptSlateIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/ToolMenus.ToolMenuEntryExtensions.BreakScriptSlateIcon" },
		{ "HasNativeMake", "/Script/ToolMenus.ToolMenuEntryExtensions.MakeScriptSlateIcon" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleSetName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallStyleName_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleSetName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SmallStyleName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptSlateIcon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleSetName = { "StyleSetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScriptSlateIcon, StyleSetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleSetName_MetaData), NewProp_StyleSetName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleName = { "StyleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScriptSlateIcon, StyleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleName_MetaData), NewProp_StyleName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_SmallStyleName = { "SmallStyleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScriptSlateIcon, SmallStyleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallStyleName_MetaData), NewProp_SmallStyleName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_StyleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewProp_SmallStyleName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ScriptSlateIcon",
	Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::PropPointers),
	sizeof(FScriptSlateIcon),
	alignof(FScriptSlateIcon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScriptSlateIcon()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptSlateIcon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptSlateIcon.InnerSingleton, Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScriptSlateIcon.InnerSingleton;
}
// End ScriptStruct FScriptSlateIcon

// Begin ScriptStruct FToolMenuEntryScriptDataAdvanced
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced;
class UScriptStruct* FToolMenuEntryScriptDataAdvanced::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuEntryScriptDataAdvanced"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuEntryScriptDataAdvanced>()
{
	return FToolMenuEntryScriptDataAdvanced::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TutorialHighlight_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryType_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserInterfaceActionType_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleNameOverride_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSubMenu_MetaData[] = {
		{ "Category", "SubMenu" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpenSubMenuOnClick_MetaData[] = {
		{ "Category", "SubMenu" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldCloseWindowAfterMenuSelection_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimpleComboBox_MetaData[] = {
		{ "Category", "ToolBar" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TutorialHighlight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EntryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EntryType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UserInterfaceActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UserInterfaceActionType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StyleNameOverride;
	static void NewProp_bIsSubMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSubMenu;
	static void NewProp_bOpenSubMenuOnClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenSubMenuOnClick;
	static void NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldCloseWindowAfterMenuSelection;
	static void NewProp_bSimpleComboBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimpleComboBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuEntryScriptDataAdvanced>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_TutorialHighlight = { "TutorialHighlight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptDataAdvanced, TutorialHighlight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TutorialHighlight_MetaData), NewProp_TutorialHighlight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType = { "EntryType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptDataAdvanced, EntryType), Z_Construct_UEnum_Slate_EMultiBlockType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryType_MetaData), NewProp_EntryType_MetaData) }; // 2624468472
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType = { "UserInterfaceActionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptDataAdvanced, UserInterfaceActionType), Z_Construct_UEnum_Slate_EUserInterfaceActionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserInterfaceActionType_MetaData), NewProp_UserInterfaceActionType_MetaData) }; // 1545759475
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_StyleNameOverride = { "StyleNameOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptDataAdvanced, StyleNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleNameOverride_MetaData), NewProp_StyleNameOverride_MetaData) };
void Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu_SetBit(void* Obj)
{
	((FToolMenuEntryScriptDataAdvanced*)Obj)->bIsSubMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu = { "bIsSubMenu", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FToolMenuEntryScriptDataAdvanced), &Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSubMenu_MetaData), NewProp_bIsSubMenu_MetaData) };
void Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick_SetBit(void* Obj)
{
	((FToolMenuEntryScriptDataAdvanced*)Obj)->bOpenSubMenuOnClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick = { "bOpenSubMenuOnClick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FToolMenuEntryScriptDataAdvanced), &Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpenSubMenuOnClick_MetaData), NewProp_bOpenSubMenuOnClick_MetaData) };
void Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit(void* Obj)
{
	((FToolMenuEntryScriptDataAdvanced*)Obj)->bShouldCloseWindowAfterMenuSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection = { "bShouldCloseWindowAfterMenuSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FToolMenuEntryScriptDataAdvanced), &Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldCloseWindowAfterMenuSelection_MetaData), NewProp_bShouldCloseWindowAfterMenuSelection_MetaData) };
void Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox_SetBit(void* Obj)
{
	((FToolMenuEntryScriptDataAdvanced*)Obj)->bSimpleComboBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox = { "bSimpleComboBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FToolMenuEntryScriptDataAdvanced), &Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimpleComboBox_MetaData), NewProp_bSimpleComboBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_TutorialHighlight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_EntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_UserInterfaceActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_StyleNameOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bIsSubMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bOpenSubMenuOnClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bShouldCloseWindowAfterMenuSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewProp_bSimpleComboBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ToolMenuEntryScriptDataAdvanced",
	Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::PropPointers),
	sizeof(FToolMenuEntryScriptDataAdvanced),
	alignof(FToolMenuEntryScriptDataAdvanced),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced.InnerSingleton;
}
// End ScriptStruct FToolMenuEntryScriptDataAdvanced

// Begin ScriptStruct FToolMenuEntryScriptData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData;
class UScriptStruct* FToolMenuEntryScriptData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuEntryScriptData, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuEntryScriptData"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuEntryScriptData>()
{
	return FToolMenuEntryScriptData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Optional identifier used for unregistering a group of menu items\n" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
		{ "ToolTip", "Optional identifier used for unregistering a group of menu items" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[] = {
		{ "Category", "Identity" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Menu;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Section;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InsertPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Advanced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuEntryScriptData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptData, Menu), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Menu_MetaData), NewProp_Menu_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptData, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptData, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptData, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptData, Icon), Z_Construct_UScriptStruct_FScriptSlateIcon, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) }; // 2310858937
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptData, OwnerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerName_MetaData), NewProp_OwnerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptData, InsertPosition), Z_Construct_UScriptStruct_FToolMenuInsert, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertPosition_MetaData), NewProp_InsertPosition_MetaData) }; // 2754096453
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuEntryScriptData, Advanced), Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Advanced_MetaData), NewProp_Advanced_MetaData) }; // 840112332
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_ToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_OwnerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_InsertPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewProp_Advanced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ToolMenuEntryScriptData",
	Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::PropPointers),
	sizeof(FToolMenuEntryScriptData),
	alignof(FToolMenuEntryScriptData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntryScriptData()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData.InnerSingleton;
}
// End ScriptStruct FToolMenuEntryScriptData

// Begin Class UToolMenuEntryScript Function CanExecute
struct ToolMenuEntryScript_eventCanExecute_Parms
{
	FToolMenuContext Context;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ToolMenuEntryScript_eventCanExecute_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UToolMenuEntryScript_CanExecute = FName(TEXT("CanExecute"));
bool UToolMenuEntryScript::CanExecute(FToolMenuContext const& Context) const
{
	ToolMenuEntryScript_eventCanExecute_Parms Parms;
	Parms.Context=Context;
	const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_CanExecute),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventCanExecute_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
void Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ToolMenuEntryScript_eventCanExecute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToolMenuEntryScript_eventCanExecute_Parms), &Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "CanExecute", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::PropPointers), sizeof(ToolMenuEntryScript_eventCanExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::Function_MetaDataParams) };
static_assert(sizeof(ToolMenuEntryScript_eventCanExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryScript_CanExecute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_CanExecute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryScript::execCanExecute)
{
	P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanExecute_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// End Class UToolMenuEntryScript Function CanExecute

// Begin Class UToolMenuEntryScript Function ConstructMenuEntry
struct ToolMenuEntryScript_eventConstructMenuEntry_Parms
{
	UToolMenu* Menu;
	FName SectionName;
	FToolMenuContext Context;
};
static FName NAME_UToolMenuEntryScript_ConstructMenuEntry = FName(TEXT("ConstructMenuEntry"));
void UToolMenuEntryScript::ConstructMenuEntry(UToolMenu* Menu, const FName SectionName, FToolMenuContext const& Context)
{
	ToolMenuEntryScript_eventConstructMenuEntry_Parms Parms;
	Parms.Menu=Menu;
	Parms.SectionName=SectionName;
	Parms.Context=Context;
	ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_ConstructMenuEntry),&Parms);
}
struct Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Menu;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventConstructMenuEntry_Parms, Menu), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventConstructMenuEntry_Parms, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventConstructMenuEntry_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "ConstructMenuEntry", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::PropPointers), sizeof(ToolMenuEntryScript_eventConstructMenuEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(ToolMenuEntryScript_eventConstructMenuEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UToolMenuEntryScript Function ConstructMenuEntry

// Begin Class UToolMenuEntryScript Function Execute
struct ToolMenuEntryScript_eventExecute_Parms
{
	FToolMenuContext Context;
};
static FName NAME_UToolMenuEntryScript_Execute = FName(TEXT("Execute"));
void UToolMenuEntryScript::Execute(FToolMenuContext const& Context)
{
	ToolMenuEntryScript_eventExecute_Parms Parms;
	Parms.Context=Context;
	ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_Execute),&Parms);
}
struct Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventExecute_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "Execute", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::PropPointers), sizeof(ToolMenuEntryScript_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::Function_MetaDataParams) };
static_assert(sizeof(ToolMenuEntryScript_eventExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryScript_Execute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_Execute_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UToolMenuEntryScript Function Execute

// Begin Class UToolMenuEntryScript Function GetCheckState
struct ToolMenuEntryScript_eventGetCheckState_Parms
{
	FToolMenuContext Context;
	ECheckBoxState ReturnValue;

	/** Constructor, initializes return property only **/
	ToolMenuEntryScript_eventGetCheckState_Parms()
		: ReturnValue((ECheckBoxState)0)
	{
	}
};
static FName NAME_UToolMenuEntryScript_GetCheckState = FName(TEXT("GetCheckState"));
ECheckBoxState UToolMenuEntryScript::GetCheckState(FToolMenuContext const& Context) const
{
	ToolMenuEntryScript_eventGetCheckState_Parms Parms;
	Parms.Context=Context;
	const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_GetCheckState),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventGetCheckState_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventGetCheckState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(0, nullptr) }; // 274390384
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "GetCheckState", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::PropPointers), sizeof(ToolMenuEntryScript_eventGetCheckState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::Function_MetaDataParams) };
static_assert(sizeof(ToolMenuEntryScript_eventGetCheckState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryScript::execGetCheckState)
{
	P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECheckBoxState*)Z_Param__Result=P_THIS->GetCheckState_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// End Class UToolMenuEntryScript Function GetCheckState

// Begin Class UToolMenuEntryScript Function GetIcon
struct ToolMenuEntryScript_eventGetIcon_Parms
{
	FToolMenuContext Context;
	FScriptSlateIcon ReturnValue;
};
static FName NAME_UToolMenuEntryScript_GetIcon = FName(TEXT("GetIcon"));
FScriptSlateIcon UToolMenuEntryScript::GetIcon(FToolMenuContext const& Context) const
{
	ToolMenuEntryScript_eventGetIcon_Parms Parms;
	Parms.Context=Context;
	const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_GetIcon),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventGetIcon_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventGetIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptSlateIcon, METADATA_PARAMS(0, nullptr) }; // 2310858937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "GetIcon", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::PropPointers), sizeof(ToolMenuEntryScript_eventGetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(ToolMenuEntryScript_eventGetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryScript_GetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_GetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryScript::execGetIcon)
{
	P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptSlateIcon*)Z_Param__Result=P_THIS->GetIcon_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// End Class UToolMenuEntryScript Function GetIcon

// Begin Class UToolMenuEntryScript Function GetLabel
struct ToolMenuEntryScript_eventGetLabel_Parms
{
	FToolMenuContext Context;
	FText ReturnValue;
};
static FName NAME_UToolMenuEntryScript_GetLabel = FName(TEXT("GetLabel"));
FText UToolMenuEntryScript::GetLabel(FToolMenuContext const& Context) const
{
	ToolMenuEntryScript_eventGetLabel_Parms Parms;
	Parms.Context=Context;
	const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_GetLabel),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventGetLabel_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventGetLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "GetLabel", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::PropPointers), sizeof(ToolMenuEntryScript_eventGetLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(ToolMenuEntryScript_eventGetLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryScript_GetLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_GetLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryScript::execGetLabel)
{
	P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetLabel_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// End Class UToolMenuEntryScript Function GetLabel

// Begin Class UToolMenuEntryScript Function GetToolTip
struct ToolMenuEntryScript_eventGetToolTip_Parms
{
	FToolMenuContext Context;
	FText ReturnValue;
};
static FName NAME_UToolMenuEntryScript_GetToolTip = FName(TEXT("GetToolTip"));
FText UToolMenuEntryScript::GetToolTip(FToolMenuContext const& Context) const
{
	ToolMenuEntryScript_eventGetToolTip_Parms Parms;
	Parms.Context=Context;
	const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_GetToolTip),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventGetToolTip_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventGetToolTip_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "GetToolTip", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::PropPointers), sizeof(ToolMenuEntryScript_eventGetToolTip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::Function_MetaDataParams) };
static_assert(sizeof(ToolMenuEntryScript_eventGetToolTip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryScript::execGetToolTip)
{
	P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetToolTip_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// End Class UToolMenuEntryScript Function GetToolTip

// Begin Class UToolMenuEntryScript Function InitEntry
struct Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics
{
	struct ToolMenuEntryScript_eventInitEntry_Parms
	{
		FName OwnerName;
		FName Menu;
		FName Section;
		FName Name;
		FText Label;
		FText ToolTip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "CPP_Default_Label", "" },
		{ "CPP_Default_ToolTip", "" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
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
	static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Menu;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Section;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, OwnerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerName_MetaData), NewProp_OwnerName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, Menu), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Menu_MetaData), NewProp_Menu_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventInitEntry_Parms, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_OwnerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::NewProp_ToolTip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "InitEntry", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::ToolMenuEntryScript_eventInitEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::ToolMenuEntryScript_eventInitEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryScript_InitEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_InitEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryScript::execInitEntry)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OwnerName);
	P_GET_PROPERTY(FNameProperty,Z_Param_Menu);
	P_GET_PROPERTY(FNameProperty,Z_Param_Section);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Label);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ToolTip);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitEntry(Z_Param_OwnerName,Z_Param_Menu,Z_Param_Section,Z_Param_Name,Z_Param_Out_Label,Z_Param_Out_ToolTip);
	P_NATIVE_END;
}
// End Class UToolMenuEntryScript Function InitEntry

// Begin Class UToolMenuEntryScript Function IsVisible
struct ToolMenuEntryScript_eventIsVisible_Parms
{
	FToolMenuContext Context;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ToolMenuEntryScript_eventIsVisible_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UToolMenuEntryScript_IsVisible = FName(TEXT("IsVisible"));
bool UToolMenuEntryScript::IsVisible(FToolMenuContext const& Context) const
{
	ToolMenuEntryScript_eventIsVisible_Parms Parms;
	Parms.Context=Context;
	const_cast<UToolMenuEntryScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UToolMenuEntryScript_IsVisible),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuEntryScript_eventIsVisible_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
void Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ToolMenuEntryScript_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToolMenuEntryScript_eventIsVisible_Parms), &Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "IsVisible", nullptr, nullptr, Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::PropPointers), sizeof(ToolMenuEntryScript_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(ToolMenuEntryScript_eventIsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuEntryScript_IsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_IsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryScript::execIsVisible)
{
	P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVisible_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// End Class UToolMenuEntryScript Function IsVisible

// Begin Class UToolMenuEntryScript Function RegisterMenuEntry
struct Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuEntryScript, nullptr, "RegisterMenuEntry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenuEntryScript::execRegisterMenuEntry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterMenuEntry();
	P_NATIVE_END;
}
// End Class UToolMenuEntryScript Function RegisterMenuEntry

// Begin Class UToolMenuEntryScript
void UToolMenuEntryScript::StaticRegisterNativesUToolMenuEntryScript()
{
	UClass* Class = UToolMenuEntryScript::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanExecute", &UToolMenuEntryScript::execCanExecute },
		{ "GetCheckState", &UToolMenuEntryScript::execGetCheckState },
		{ "GetIcon", &UToolMenuEntryScript::execGetIcon },
		{ "GetLabel", &UToolMenuEntryScript::execGetLabel },
		{ "GetToolTip", &UToolMenuEntryScript::execGetToolTip },
		{ "InitEntry", &UToolMenuEntryScript::execInitEntry },
		{ "IsVisible", &UToolMenuEntryScript::execIsVisible },
		{ "RegisterMenuEntry", &UToolMenuEntryScript::execRegisterMenuEntry },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuEntryScript);
UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister()
{
	return UToolMenuEntryScript::StaticClass();
}
struct Z_Construct_UClass_UToolMenuEntryScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ToolMenuEntryScript.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/ToolMenuEntryScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenuEntryScript_CanExecute, "CanExecute" }, // 285546906
		{ &Z_Construct_UFunction_UToolMenuEntryScript_ConstructMenuEntry, "ConstructMenuEntry" }, // 2980409767
		{ &Z_Construct_UFunction_UToolMenuEntryScript_Execute, "Execute" }, // 2626583192
		{ &Z_Construct_UFunction_UToolMenuEntryScript_GetCheckState, "GetCheckState" }, // 1694255803
		{ &Z_Construct_UFunction_UToolMenuEntryScript_GetIcon, "GetIcon" }, // 709274740
		{ &Z_Construct_UFunction_UToolMenuEntryScript_GetLabel, "GetLabel" }, // 2116556306
		{ &Z_Construct_UFunction_UToolMenuEntryScript_GetToolTip, "GetToolTip" }, // 333068250
		{ &Z_Construct_UFunction_UToolMenuEntryScript_InitEntry, "InitEntry" }, // 2457642235
		{ &Z_Construct_UFunction_UToolMenuEntryScript_IsVisible, "IsVisible" }, // 1855772157
		{ &Z_Construct_UFunction_UToolMenuEntryScript_RegisterMenuEntry, "RegisterMenuEntry" }, // 2124661355
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuEntryScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenuEntryScript_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenuEntryScript, Data), Z_Construct_UScriptStruct_FToolMenuEntryScriptData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3533867615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolMenuEntryScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenuEntryScript_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEntryScript_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UToolMenuEntryScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEntryScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuEntryScript_Statics::ClassParams = {
	&UToolMenuEntryScript::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UToolMenuEntryScript_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEntryScript_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEntryScript_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenuEntryScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenuEntryScript()
{
	if (!Z_Registration_Info_UClass_UToolMenuEntryScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuEntryScript.OuterSingleton, Z_Construct_UClass_UToolMenuEntryScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenuEntryScript.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<UToolMenuEntryScript>()
{
	return UToolMenuEntryScript::StaticClass();
}
UToolMenuEntryScript::UToolMenuEntryScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuEntryScript);
UToolMenuEntryScript::~UToolMenuEntryScript() {}
// End Class UToolMenuEntryScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScriptSlateIcon::StaticStruct, Z_Construct_UScriptStruct_FScriptSlateIcon_Statics::NewStructOps, TEXT("ScriptSlateIcon"), &Z_Registration_Info_UScriptStruct_ScriptSlateIcon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptSlateIcon), 2310858937U) },
		{ FToolMenuEntryScriptDataAdvanced::StaticStruct, Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics::NewStructOps, TEXT("ToolMenuEntryScriptDataAdvanced"), &Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptDataAdvanced, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuEntryScriptDataAdvanced), 840112332U) },
		{ FToolMenuEntryScriptData::StaticStruct, Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics::NewStructOps, TEXT("ToolMenuEntryScriptData"), &Z_Registration_Info_UScriptStruct_ToolMenuEntryScriptData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuEntryScriptData), 3533867615U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuEntryScript, UToolMenuEntryScript::StaticClass, TEXT("UToolMenuEntryScript"), &Z_Registration_Info_UClass_UToolMenuEntryScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuEntryScript), 2946982331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_4045149491(TEXT("/Script/ToolMenus"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
