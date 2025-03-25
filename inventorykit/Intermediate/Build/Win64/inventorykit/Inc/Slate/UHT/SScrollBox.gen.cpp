// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Widgets/Layout/SScrollBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSScrollBox() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_EDescendantScrollDestination();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EScrollWhenFocusChanges();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Enum EDescendantScrollDestination
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDescendantScrollDestination;
static UEnum* EDescendantScrollDestination_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDescendantScrollDestination.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDescendantScrollDestination.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EDescendantScrollDestination, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EDescendantScrollDestination"));
	}
	return Z_Registration_Info_UEnum_EDescendantScrollDestination.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<EDescendantScrollDestination>()
{
	return EDescendantScrollDestination_StaticEnum();
}
struct Z_Construct_UEnum_Slate_EDescendantScrollDestination_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomOrRight.Comment", "/** Always scroll the widget so it appears at the bottom/Right of the scrollable area. */" },
		{ "BottomOrRight.Name", "EDescendantScrollDestination::BottomOrRight" },
		{ "BottomOrRight.ToolTip", "Always scroll the widget so it appears at the bottom/Right of the scrollable area." },
		{ "Center.Comment", "/**\n\x09* Always scroll the widget so it appears at the center of the scrollable area, if possible.\n\x09* This won't be possible for the first few items and the last few items, as there's not enough\n\x09* slack.\n\x09*/" },
		{ "Center.Name", "EDescendantScrollDestination::Center" },
		{ "Center.ToolTip", "Always scroll the widget so it appears at the center of the scrollable area, if possible.\nThis won't be possible for the first few items and the last few items, as there's not enough\nslack." },
		{ "Comment", "/** Where to scroll the descendant to */" },
		{ "IntoView.Comment", "/**\n\x09* Scroll the widget into view using the least amount of energy possible.  So if the new item\n\x09* is above the visible set, it will stop as soon as it's in view at the top.  If it's below the\n\x09* visible set, it stop it comes into view at the bottom.\n\x09*/" },
		{ "IntoView.Name", "EDescendantScrollDestination::IntoView" },
		{ "IntoView.ToolTip", "Scroll the widget into view using the least amount of energy possible.  So if the new item\nis above the visible set, it will stop as soon as it's in view at the top.  If it's below the\nvisible set, it stop it comes into view at the bottom." },
		{ "ModuleRelativePath", "Public/Widgets/Layout/SScrollBox.h" },
		{ "ToolTip", "Where to scroll the descendant to" },
		{ "TopOrLeft.Comment", "/** Always scroll the widget so it appears at the top/Left of the scrollable area. */" },
		{ "TopOrLeft.Name", "EDescendantScrollDestination::TopOrLeft" },
		{ "TopOrLeft.ToolTip", "Always scroll the widget so it appears at the top/Left of the scrollable area." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDescendantScrollDestination::IntoView", (int64)EDescendantScrollDestination::IntoView },
		{ "EDescendantScrollDestination::TopOrLeft", (int64)EDescendantScrollDestination::TopOrLeft },
		{ "EDescendantScrollDestination::Center", (int64)EDescendantScrollDestination::Center },
		{ "EDescendantScrollDestination::BottomOrRight", (int64)EDescendantScrollDestination::BottomOrRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EDescendantScrollDestination_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"EDescendantScrollDestination",
	"EDescendantScrollDestination",
	Z_Construct_UEnum_Slate_EDescendantScrollDestination_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EDescendantScrollDestination_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EDescendantScrollDestination_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_EDescendantScrollDestination_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_EDescendantScrollDestination()
{
	if (!Z_Registration_Info_UEnum_EDescendantScrollDestination.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDescendantScrollDestination.InnerSingleton, Z_Construct_UEnum_Slate_EDescendantScrollDestination_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDescendantScrollDestination.InnerSingleton;
}
// End Enum EDescendantScrollDestination

// Begin Enum EScrollWhenFocusChanges
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScrollWhenFocusChanges;
static UEnum* EScrollWhenFocusChanges_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScrollWhenFocusChanges.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScrollWhenFocusChanges.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EScrollWhenFocusChanges, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EScrollWhenFocusChanges"));
	}
	return Z_Registration_Info_UEnum_EScrollWhenFocusChanges.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<EScrollWhenFocusChanges>()
{
	return EScrollWhenFocusChanges_StaticEnum();
}
struct Z_Construct_UEnum_Slate_EScrollWhenFocusChanges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimatedScroll.Comment", "/** Use animation to scroll using NavigationDestination rule */" },
		{ "AnimatedScroll.Name", "EScrollWhenFocusChanges::AnimatedScroll" },
		{ "AnimatedScroll.ToolTip", "Use animation to scroll using NavigationDestination rule" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Set behavior when user focus changes inside this scroll box */" },
		{ "InstantScroll.Comment", "/** Instantly scroll using NavigationDestination rule */" },
		{ "InstantScroll.Name", "EScrollWhenFocusChanges::InstantScroll" },
		{ "InstantScroll.ToolTip", "Instantly scroll using NavigationDestination rule" },
		{ "ModuleRelativePath", "Public/Widgets/Layout/SScrollBox.h" },
		{ "NoScroll.Comment", "/** Don't automatically scroll, navigation or child widget will handle this */" },
		{ "NoScroll.Name", "EScrollWhenFocusChanges::NoScroll" },
		{ "NoScroll.ToolTip", "Don't automatically scroll, navigation or child widget will handle this" },
		{ "ToolTip", "Set behavior when user focus changes inside this scroll box" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScrollWhenFocusChanges::NoScroll", (int64)EScrollWhenFocusChanges::NoScroll },
		{ "EScrollWhenFocusChanges::InstantScroll", (int64)EScrollWhenFocusChanges::InstantScroll },
		{ "EScrollWhenFocusChanges::AnimatedScroll", (int64)EScrollWhenFocusChanges::AnimatedScroll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EScrollWhenFocusChanges_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"EScrollWhenFocusChanges",
	"EScrollWhenFocusChanges",
	Z_Construct_UEnum_Slate_EScrollWhenFocusChanges_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EScrollWhenFocusChanges_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EScrollWhenFocusChanges_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_EScrollWhenFocusChanges_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_EScrollWhenFocusChanges()
{
	if (!Z_Registration_Info_UEnum_EScrollWhenFocusChanges.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScrollWhenFocusChanges.InnerSingleton, Z_Construct_UEnum_Slate_EScrollWhenFocusChanges_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScrollWhenFocusChanges.InnerSingleton;
}
// End Enum EScrollWhenFocusChanges

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScrollBox_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDescendantScrollDestination_StaticEnum, TEXT("EDescendantScrollDestination"), &Z_Registration_Info_UEnum_EDescendantScrollDestination, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1190384837U) },
		{ EScrollWhenFocusChanges_StaticEnum, TEXT("EScrollWhenFocusChanges"), &Z_Registration_Info_UEnum_EScrollWhenFocusChanges, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 348806553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScrollBox_h_1631328817(TEXT("/Script/Slate"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScrollBox_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScrollBox_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
