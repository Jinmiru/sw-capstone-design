// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Styling/StyleColors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyleColors() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UClass* Z_Construct_UClass_USlateThemeManager();
SLATECORE_API UClass* Z_Construct_UClass_USlateThemeManager_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EStyleColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FStyleColorList();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FStyleTheme();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Enum EStyleColor
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStyleColor;
static UEnum* EStyleColor_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStyleColor.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStyleColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EStyleColor, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EStyleColor"));
	}
	return Z_Registration_Info_UEnum_EStyleColor.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<EStyleColor>()
{
	return EStyleColor_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_EStyleColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AccentBlack.Name", "EStyleColor::AccentBlack" },
		{ "AccentBlue.Name", "EStyleColor::AccentBlue" },
		{ "AccentBrown.Name", "EStyleColor::AccentBrown" },
		{ "AccentFolder.Name", "EStyleColor::AccentFolder" },
		{ "AccentGray.Name", "EStyleColor::AccentGray" },
		{ "AccentGreen.Name", "EStyleColor::AccentGreen" },
		{ "AccentOrange.Name", "EStyleColor::AccentOrange" },
		{ "AccentPink.Name", "EStyleColor::AccentPink" },
		{ "AccentPurple.Name", "EStyleColor::AccentPurple" },
		{ "AccentRed.Name", "EStyleColor::AccentRed" },
		{ "AccentWhite.Name", "EStyleColor::AccentWhite" },
		{ "AccentYellow.Name", "EStyleColor::AccentYellow" },
		{ "Background.Name", "EStyleColor::Background" },
		{ "Black.Name", "EStyleColor::Black" },
		{ "Comment", "/**\n * Note: If you add another color here, you should update the Dark.json theme file in Engine\\Content\\Slate\\Themes & FUMGColors in UMGCoreStyle.cpp for consistency\n */" },
		{ "Dropdown.Name", "EStyleColor::Dropdown" },
		{ "DropdownOutline.Name", "EStyleColor::DropdownOutline" },
		{ "Error.Name", "EStyleColor::Error" },
		{ "Foldout.Name", "EStyleColor::Foldout" },
		{ "Foreground.Name", "EStyleColor::Foreground" },
		{ "ForegroundHeader.Name", "EStyleColor::ForegroundHeader" },
		{ "ForegroundHover.Name", "EStyleColor::ForegroundHover" },
		{ "ForegroundInverted.Name", "EStyleColor::ForegroundInverted" },
		{ "Header.Name", "EStyleColor::Header" },
		{ "Highlight.Name", "EStyleColor::Highlight" },
		{ "Hover.Name", "EStyleColor::Hover" },
		{ "Hover2.Name", "EStyleColor::Hover2" },
		{ "Input.Name", "EStyleColor::Input" },
		{ "InputOutline.Name", "EStyleColor::InputOutline" },
		{ "MAX.Name", "EStyleColor::MAX" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
		{ "Notifications.Name", "EStyleColor::Notifications" },
		{ "Panel.Name", "EStyleColor::Panel" },
		{ "Primary.Name", "EStyleColor::Primary" },
		{ "PrimaryHover.Name", "EStyleColor::PrimaryHover" },
		{ "PrimaryPress.Name", "EStyleColor::PrimaryPress" },
		{ "Recessed.Name", "EStyleColor::Recessed" },
		{ "Secondary.Name", "EStyleColor::Secondary" },
		{ "Select.Name", "EStyleColor::Select" },
		{ "SelectHover.Name", "EStyleColor::SelectHover" },
		{ "SelectInactive.Name", "EStyleColor::SelectInactive" },
		{ "SelectParent.Name", "EStyleColor::SelectParent" },
		{ "Success.Name", "EStyleColor::Success" },
		{ "Title.Name", "EStyleColor::Title" },
		{ "ToolTip", "Note: If you add another color here, you should update the Dark.json theme file in Engine\\Content\\Slate\\Themes & FUMGColors in UMGCoreStyle.cpp for consistency" },
		{ "User1.Comment", "/** Only user colors should be below this line\n\x09 * To use user colors:\n\x09 * 1. Set an unused user enum value below as the color value for an FSlateColor. E.g. FSlateColor MyCustomColor(EStyleColors::User1)\n\x09 * 2. Set the actual color. E.g USlateThemeManager::Get().SetDefaultColor(EStyleColor::User1, FLinearColor::White)\n\x09 * 3. Give it a display name if you want it to be configurable by editor users. E.g.  UStyleColorTable::Get().SetColorDisplayName(EUserStyleColor::User1, \"My Color Name\")\n\x09 */" },
		{ "User1.Name", "EStyleColor::User1" },
		{ "User1.ToolTip", "Only user colors should be below this line\nTo use user colors:\n1. Set an unused user enum value below as the color value for an FSlateColor. E.g. FSlateColor MyCustomColor(EStyleColors::User1)\n2. Set the actual color. E.g USlateThemeManager::Get().SetDefaultColor(EStyleColor::User1, FLinearColor::White)\n3. Give it a display name if you want it to be configurable by editor users. E.g.  UStyleColorTable::Get().SetColorDisplayName(EUserStyleColor::User1, \"My Color Name\")" },
		{ "User10.Name", "EStyleColor::User10" },
		{ "User11.Name", "EStyleColor::User11" },
		{ "User12.Name", "EStyleColor::User12" },
		{ "User13.Name", "EStyleColor::User13" },
		{ "User14.Name", "EStyleColor::User14" },
		{ "User15.Name", "EStyleColor::User15" },
		{ "User16.Name", "EStyleColor::User16" },
		{ "User2.Name", "EStyleColor::User2" },
		{ "User3.Name", "EStyleColor::User3" },
		{ "User4.Name", "EStyleColor::User4" },
		{ "User5.Name", "EStyleColor::User5" },
		{ "User6.Name", "EStyleColor::User6" },
		{ "User7.Name", "EStyleColor::User7" },
		{ "User8.Name", "EStyleColor::User8" },
		{ "User9.Name", "EStyleColor::User9" },
		{ "Warning.Name", "EStyleColor::Warning" },
		{ "White.Name", "EStyleColor::White" },
		{ "White25.Name", "EStyleColor::White25" },
		{ "WindowBorder.Name", "EStyleColor::WindowBorder" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStyleColor::Black", (int64)EStyleColor::Black },
		{ "EStyleColor::Background", (int64)EStyleColor::Background },
		{ "EStyleColor::Title", (int64)EStyleColor::Title },
		{ "EStyleColor::WindowBorder", (int64)EStyleColor::WindowBorder },
		{ "EStyleColor::Foldout", (int64)EStyleColor::Foldout },
		{ "EStyleColor::Input", (int64)EStyleColor::Input },
		{ "EStyleColor::InputOutline", (int64)EStyleColor::InputOutline },
		{ "EStyleColor::Recessed", (int64)EStyleColor::Recessed },
		{ "EStyleColor::Panel", (int64)EStyleColor::Panel },
		{ "EStyleColor::Header", (int64)EStyleColor::Header },
		{ "EStyleColor::Dropdown", (int64)EStyleColor::Dropdown },
		{ "EStyleColor::DropdownOutline", (int64)EStyleColor::DropdownOutline },
		{ "EStyleColor::Hover", (int64)EStyleColor::Hover },
		{ "EStyleColor::Hover2", (int64)EStyleColor::Hover2 },
		{ "EStyleColor::White", (int64)EStyleColor::White },
		{ "EStyleColor::White25", (int64)EStyleColor::White25 },
		{ "EStyleColor::Highlight", (int64)EStyleColor::Highlight },
		{ "EStyleColor::Primary", (int64)EStyleColor::Primary },
		{ "EStyleColor::PrimaryHover", (int64)EStyleColor::PrimaryHover },
		{ "EStyleColor::PrimaryPress", (int64)EStyleColor::PrimaryPress },
		{ "EStyleColor::Secondary", (int64)EStyleColor::Secondary },
		{ "EStyleColor::Foreground", (int64)EStyleColor::Foreground },
		{ "EStyleColor::ForegroundHover", (int64)EStyleColor::ForegroundHover },
		{ "EStyleColor::ForegroundInverted", (int64)EStyleColor::ForegroundInverted },
		{ "EStyleColor::ForegroundHeader", (int64)EStyleColor::ForegroundHeader },
		{ "EStyleColor::Select", (int64)EStyleColor::Select },
		{ "EStyleColor::SelectInactive", (int64)EStyleColor::SelectInactive },
		{ "EStyleColor::SelectParent", (int64)EStyleColor::SelectParent },
		{ "EStyleColor::SelectHover", (int64)EStyleColor::SelectHover },
		{ "EStyleColor::Notifications", (int64)EStyleColor::Notifications },
		{ "EStyleColor::AccentBlue", (int64)EStyleColor::AccentBlue },
		{ "EStyleColor::AccentPurple", (int64)EStyleColor::AccentPurple },
		{ "EStyleColor::AccentPink", (int64)EStyleColor::AccentPink },
		{ "EStyleColor::AccentRed", (int64)EStyleColor::AccentRed },
		{ "EStyleColor::AccentOrange", (int64)EStyleColor::AccentOrange },
		{ "EStyleColor::AccentYellow", (int64)EStyleColor::AccentYellow },
		{ "EStyleColor::AccentGreen", (int64)EStyleColor::AccentGreen },
		{ "EStyleColor::AccentBrown", (int64)EStyleColor::AccentBrown },
		{ "EStyleColor::AccentBlack", (int64)EStyleColor::AccentBlack },
		{ "EStyleColor::AccentGray", (int64)EStyleColor::AccentGray },
		{ "EStyleColor::AccentWhite", (int64)EStyleColor::AccentWhite },
		{ "EStyleColor::AccentFolder", (int64)EStyleColor::AccentFolder },
		{ "EStyleColor::Warning", (int64)EStyleColor::Warning },
		{ "EStyleColor::Error", (int64)EStyleColor::Error },
		{ "EStyleColor::Success", (int64)EStyleColor::Success },
		{ "EStyleColor::User1", (int64)EStyleColor::User1 },
		{ "EStyleColor::User2", (int64)EStyleColor::User2 },
		{ "EStyleColor::User3", (int64)EStyleColor::User3 },
		{ "EStyleColor::User4", (int64)EStyleColor::User4 },
		{ "EStyleColor::User5", (int64)EStyleColor::User5 },
		{ "EStyleColor::User6", (int64)EStyleColor::User6 },
		{ "EStyleColor::User7", (int64)EStyleColor::User7 },
		{ "EStyleColor::User8", (int64)EStyleColor::User8 },
		{ "EStyleColor::User9", (int64)EStyleColor::User9 },
		{ "EStyleColor::User10", (int64)EStyleColor::User10 },
		{ "EStyleColor::User11", (int64)EStyleColor::User11 },
		{ "EStyleColor::User12", (int64)EStyleColor::User12 },
		{ "EStyleColor::User13", (int64)EStyleColor::User13 },
		{ "EStyleColor::User14", (int64)EStyleColor::User14 },
		{ "EStyleColor::User15", (int64)EStyleColor::User15 },
		{ "EStyleColor::User16", (int64)EStyleColor::User16 },
		{ "EStyleColor::MAX", (int64)EStyleColor::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EStyleColor_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"EStyleColor",
	"EStyleColor",
	Z_Construct_UEnum_SlateCore_EStyleColor_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EStyleColor_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EStyleColor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_EStyleColor_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_EStyleColor()
{
	if (!Z_Registration_Info_UEnum_EStyleColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStyleColor.InnerSingleton, Z_Construct_UEnum_SlateCore_EStyleColor_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStyleColor.InnerSingleton;
}
// End Enum EStyleColor

// Begin ScriptStruct FStyleColorList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StyleColorList;
class UScriptStruct* FStyleColorList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StyleColorList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StyleColorList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStyleColorList, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("StyleColorList"));
	}
	return Z_Registration_Info_UScriptStruct_StyleColorList.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FStyleColorList>()
{
	return FStyleColorList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStyleColorList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleColors_MetaData[] = {
		{ "ArraySizeEnum", "/Script/SlateCore.EStyleColor" },
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StyleColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStyleColorList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStyleColorList_Statics::NewProp_StyleColors = { "StyleColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(StyleColors, FStyleColorList), STRUCT_OFFSET(FStyleColorList, StyleColors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleColors_MetaData), NewProp_StyleColors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStyleColorList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStyleColorList_Statics::NewProp_StyleColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStyleColorList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStyleColorList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	&NewStructOps,
	"StyleColorList",
	Z_Construct_UScriptStruct_FStyleColorList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStyleColorList_Statics::PropPointers),
	sizeof(FStyleColorList),
	alignof(FStyleColorList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStyleColorList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStyleColorList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStyleColorList()
{
	if (!Z_Registration_Info_UScriptStruct_StyleColorList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StyleColorList.InnerSingleton, Z_Construct_UScriptStruct_FStyleColorList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StyleColorList.InnerSingleton;
}
// End ScriptStruct FStyleColorList

// Begin ScriptStruct FStyleTheme
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StyleTheme;
class UScriptStruct* FStyleTheme::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StyleTheme.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StyleTheme.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStyleTheme, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("StyleTheme"));
	}
	return Z_Registration_Info_UScriptStruct_StyleTheme.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FStyleTheme>()
{
	return FStyleTheme::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStyleTheme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a single theme\n */" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
		{ "ToolTip", "Represents a single theme" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStyleTheme>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStyleTheme_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	&NewStructOps,
	"StyleTheme",
	nullptr,
	0,
	sizeof(FStyleTheme),
	alignof(FStyleTheme),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStyleTheme_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStyleTheme_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStyleTheme()
{
	if (!Z_Registration_Info_UScriptStruct_StyleTheme.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StyleTheme.InnerSingleton, Z_Construct_UScriptStruct_FStyleTheme_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StyleTheme.InnerSingleton;
}
// End ScriptStruct FStyleTheme

// Begin Class USlateThemeManager
void USlateThemeManager::StaticRegisterNativesUSlateThemeManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateThemeManager);
UClass* Z_Construct_UClass_USlateThemeManager_NoRegister()
{
	return USlateThemeManager::StaticClass();
}
struct Z_Construct_UClass_USlateThemeManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Styling/StyleColors.h" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThemeId_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveColors_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentThemeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateThemeManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateThemeManager_Statics::NewProp_CurrentThemeId = { "CurrentThemeId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateThemeManager, CurrentThemeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentThemeId_MetaData), NewProp_CurrentThemeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateThemeManager_Statics::NewProp_ActiveColors = { "ActiveColors", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateThemeManager, ActiveColors), Z_Construct_UScriptStruct_FStyleColorList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveColors_MetaData), NewProp_ActiveColors_MetaData) }; // 928644973
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateThemeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateThemeManager_Statics::NewProp_CurrentThemeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateThemeManager_Statics::NewProp_ActiveColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateThemeManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlateThemeManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateThemeManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateThemeManager_Statics::ClassParams = {
	&USlateThemeManager::StaticClass,
	"EditorSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USlateThemeManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USlateThemeManager_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateThemeManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateThemeManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateThemeManager()
{
	if (!Z_Registration_Info_UClass_USlateThemeManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateThemeManager.OuterSingleton, Z_Construct_UClass_USlateThemeManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateThemeManager.OuterSingleton;
}
template<> SLATECORE_API UClass* StaticClass<USlateThemeManager>()
{
	return USlateThemeManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateThemeManager);
USlateThemeManager::~USlateThemeManager() {}
// End Class USlateThemeManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStyleColor_StaticEnum, TEXT("EStyleColor"), &Z_Registration_Info_UEnum_EStyleColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 385193054U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStyleColorList::StaticStruct, Z_Construct_UScriptStruct_FStyleColorList_Statics::NewStructOps, TEXT("StyleColorList"), &Z_Registration_Info_UScriptStruct_StyleColorList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStyleColorList), 928644973U) },
		{ FStyleTheme::StaticStruct, Z_Construct_UScriptStruct_FStyleTheme_Statics::NewStructOps, TEXT("StyleTheme"), &Z_Registration_Info_UScriptStruct_StyleTheme, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStyleTheme), 2193611492U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateThemeManager, USlateThemeManager::StaticClass, TEXT("USlateThemeManager"), &Z_Registration_Info_UClass_USlateThemeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateThemeManager), 2362002108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_862110255(TEXT("/Script/SlateCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
