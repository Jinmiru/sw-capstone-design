// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextLayout() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Enum ETextJustify
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextJustify;
static UEnum* ETextJustify_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextJustify.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextJustify.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETextJustify, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("ETextJustify"));
	}
	return Z_Registration_Info_UEnum_ETextJustify.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<ETextJustify::Type>()
{
	return ETextJustify_StaticEnum();
}
struct Z_Construct_UEnum_Slate_ETextJustify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.Comment", "/**\n\x09\x09 * Justify the text in the center.\n\x09\x09 * Text flow direction has no impact on this justification mode.\n\x09\x09 */" },
		{ "Center.Name", "ETextJustify::Center" },
		{ "Center.ToolTip", "Justify the text in the center.\nText flow direction has no impact on this justification mode." },
		{ "InvariantLeft.Comment", "/**\n\x09\x09 * Always justify the text to the left, regardless of the flow direction of the current culture.\n\x09\x09 */" },
		{ "InvariantLeft.Name", "ETextJustify::InvariantLeft" },
		{ "InvariantLeft.ToolTip", "Always justify the text to the left, regardless of the flow direction of the current culture." },
		{ "InvariantRight.Comment", "/**\n\x09\x09 * Always justify the text to the right, regardless of the flow direction of the current culture.\n\x09\x09 */" },
		{ "InvariantRight.Name", "ETextJustify::InvariantRight" },
		{ "InvariantRight.ToolTip", "Always justify the text to the right, regardless of the flow direction of the current culture." },
		{ "Left.Comment", "/**\n\x09\x09 * Justify the text logically to the left.\n\x09\x09 * When text is flowing left-to-right, this will align text visually to the left.\n\x09\x09 * When text is flowing right-to-left, this will align text visually to the right.\n\x09\x09 */" },
		{ "Left.Name", "ETextJustify::Left" },
		{ "Left.ToolTip", "Justify the text logically to the left.\nWhen text is flowing left-to-right, this will align text visually to the left.\nWhen text is flowing right-to-left, this will align text visually to the right." },
		{ "ModuleRelativePath", "Public/Framework/Text/TextLayout.h" },
		{ "Right.Comment", "/**\n\x09\x09 * Justify the text logically to the right.\n\x09\x09 * When text is flowing left-to-right, this will align text visually to the right.\n\x09\x09 * When text is flowing right-to-left, this will align text visually to the left.\n\x09\x09 */" },
		{ "Right.Name", "ETextJustify::Right" },
		{ "Right.ToolTip", "Justify the text logically to the right.\nWhen text is flowing left-to-right, this will align text visually to the right.\nWhen text is flowing right-to-left, this will align text visually to the left." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextJustify::Left", (int64)ETextJustify::Left },
		{ "ETextJustify::Center", (int64)ETextJustify::Center },
		{ "ETextJustify::Right", (int64)ETextJustify::Right },
		{ "ETextJustify::InvariantLeft", (int64)ETextJustify::InvariantLeft },
		{ "ETextJustify::InvariantRight", (int64)ETextJustify::InvariantRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_ETextJustify_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"ETextJustify",
	"ETextJustify::Type",
	Z_Construct_UEnum_Slate_ETextJustify_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ETextJustify_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ETextJustify_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_ETextJustify_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_ETextJustify()
{
	if (!Z_Registration_Info_UEnum_ETextJustify.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextJustify.InnerSingleton, Z_Construct_UEnum_Slate_ETextJustify_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextJustify.InnerSingleton;
}
// End Enum ETextJustify

// Begin Enum ETextWrappingPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextWrappingPolicy;
static UEnum* ETextWrappingPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextWrappingPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextWrappingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETextWrappingPolicy, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("ETextWrappingPolicy"));
	}
	return Z_Registration_Info_UEnum_ETextWrappingPolicy.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<ETextWrappingPolicy>()
{
	return ETextWrappingPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Slate_ETextWrappingPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllowPerCharacterWrapping.Comment", "/** Fallback to per-character wrapping if a word is too long */" },
		{ "AllowPerCharacterWrapping.Name", "ETextWrappingPolicy::AllowPerCharacterWrapping" },
		{ "AllowPerCharacterWrapping.ToolTip", "Fallback to per-character wrapping if a word is too long" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * The different methods that can be used if a word is too long to be broken by the default line-break iterator.\n */" },
		{ "DefaultWrapping.Comment", "/** No fallback, just use the given line-break iterator */" },
		{ "DefaultWrapping.Name", "ETextWrappingPolicy::DefaultWrapping" },
		{ "DefaultWrapping.ToolTip", "No fallback, just use the given line-break iterator" },
		{ "ModuleRelativePath", "Public/Framework/Text/TextLayout.h" },
		{ "ToolTip", "The different methods that can be used if a word is too long to be broken by the default line-break iterator." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextWrappingPolicy::DefaultWrapping", (int64)ETextWrappingPolicy::DefaultWrapping },
		{ "ETextWrappingPolicy::AllowPerCharacterWrapping", (int64)ETextWrappingPolicy::AllowPerCharacterWrapping },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_ETextWrappingPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"ETextWrappingPolicy",
	"ETextWrappingPolicy",
	Z_Construct_UEnum_Slate_ETextWrappingPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ETextWrappingPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ETextWrappingPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_ETextWrappingPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy()
{
	if (!Z_Registration_Info_UEnum_ETextWrappingPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextWrappingPolicy.InnerSingleton, Z_Construct_UEnum_Slate_ETextWrappingPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextWrappingPolicy.InnerSingleton;
}
// End Enum ETextWrappingPolicy

// Begin Enum ETextFlowDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextFlowDirection;
static UEnum* ETextFlowDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextFlowDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextFlowDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETextFlowDirection, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("ETextFlowDirection"));
	}
	return Z_Registration_Info_UEnum_ETextFlowDirection.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<ETextFlowDirection>()
{
	return ETextFlowDirection_StaticEnum();
}
struct Z_Construct_UEnum_Slate_ETextFlowDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Automatically detect the flow direction for each paragraph from its text */" },
		{ "Auto.Name", "ETextFlowDirection::Auto" },
		{ "Auto.ToolTip", "Automatically detect the flow direction for each paragraph from its text" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * The different directions that text can flow within a paragraph of text.\n * @note If you change this enum, make sure and update CVarDefaultTextFlowDirection and GetDefaultTextFlowDirection.\n */" },
		{ "Culture.Comment", "/** Uses the set culture to determine if text should flow left-to-right or right-to-left.  By comparison, Auto will use the text itself to determine it. */" },
		{ "Culture.Name", "ETextFlowDirection::Culture" },
		{ "Culture.ToolTip", "Uses the set culture to determine if text should flow left-to-right or right-to-left.  By comparison, Auto will use the text itself to determine it." },
		{ "LeftToRight.Comment", "/** Force text to be flowed left-to-right */" },
		{ "LeftToRight.Name", "ETextFlowDirection::LeftToRight" },
		{ "LeftToRight.ToolTip", "Force text to be flowed left-to-right" },
		{ "ModuleRelativePath", "Public/Framework/Text/TextLayout.h" },
		{ "RightToLeft.Comment", "/** Force text to be flowed right-to-left */" },
		{ "RightToLeft.Name", "ETextFlowDirection::RightToLeft" },
		{ "RightToLeft.ToolTip", "Force text to be flowed right-to-left" },
		{ "ToolTip", "The different directions that text can flow within a paragraph of text.\n@note If you change this enum, make sure and update CVarDefaultTextFlowDirection and GetDefaultTextFlowDirection." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextFlowDirection::Auto", (int64)ETextFlowDirection::Auto },
		{ "ETextFlowDirection::LeftToRight", (int64)ETextFlowDirection::LeftToRight },
		{ "ETextFlowDirection::RightToLeft", (int64)ETextFlowDirection::RightToLeft },
		{ "ETextFlowDirection::Culture", (int64)ETextFlowDirection::Culture },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_ETextFlowDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"ETextFlowDirection",
	"ETextFlowDirection",
	Z_Construct_UEnum_Slate_ETextFlowDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ETextFlowDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ETextFlowDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_ETextFlowDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection()
{
	if (!Z_Registration_Info_UEnum_ETextFlowDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextFlowDirection.InnerSingleton, Z_Construct_UEnum_Slate_ETextFlowDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextFlowDirection.InnerSingleton;
}
// End Enum ETextFlowDirection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_TextLayout_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETextJustify_StaticEnum, TEXT("ETextJustify"), &Z_Registration_Info_UEnum_ETextJustify, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3082493381U) },
		{ ETextWrappingPolicy_StaticEnum, TEXT("ETextWrappingPolicy"), &Z_Registration_Info_UEnum_ETextWrappingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 863261354U) },
		{ ETextFlowDirection_StaticEnum, TEXT("ETextFlowDirection"), &Z_Registration_Info_UEnum_ETextFlowDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1052999597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_TextLayout_h_2509936461(TEXT("/Script/Slate"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_TextLayout_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_TextLayout_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
