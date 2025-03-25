// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontImportOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UFontImportOptions();
ENGINE_API UClass* Z_Construct_UClass_UFontImportOptions_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFontImportCharacterSet();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontImportOptionsData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EFontImportCharacterSet
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFontImportCharacterSet;
static UEnum* EFontImportCharacterSet_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFontImportCharacterSet.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFontImportCharacterSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFontImportCharacterSet, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFontImportCharacterSet"));
	}
	return Z_Registration_Info_UEnum_EFontImportCharacterSet.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EFontImportCharacterSet>()
{
	return EFontImportCharacterSet_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EFontImportCharacterSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Font character set type for importing TrueType fonts. */" },
		{ "FontICS_Ansi.Name", "FontICS_Ansi" },
		{ "FontICS_Default.Name", "FontICS_Default" },
		{ "FontICS_MAX.Name", "FontICS_MAX" },
		{ "FontICS_Symbol.Name", "FontICS_Symbol" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Font character set type for importing TrueType fonts." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FontICS_Default", (int64)FontICS_Default },
		{ "FontICS_Ansi", (int64)FontICS_Ansi },
		{ "FontICS_Symbol", (int64)FontICS_Symbol },
		{ "FontICS_MAX", (int64)FontICS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFontImportCharacterSet_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EFontImportCharacterSet",
	"EFontImportCharacterSet",
	Z_Construct_UEnum_Engine_EFontImportCharacterSet_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFontImportCharacterSet_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFontImportCharacterSet_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EFontImportCharacterSet_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EFontImportCharacterSet()
{
	if (!Z_Registration_Info_UEnum_EFontImportCharacterSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFontImportCharacterSet.InnerSingleton, Z_Construct_UEnum_Engine_EFontImportCharacterSet_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFontImportCharacterSet.InnerSingleton;
}
// End Enum EFontImportCharacterSet

// Begin ScriptStruct FFontImportOptionsData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FontImportOptionsData;
class UScriptStruct* FFontImportOptionsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FontImportOptionsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FontImportOptionsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontImportOptionsData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FontImportOptionsData"));
	}
	return Z_Registration_Info_UScriptStruct_FontImportOptionsData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFontImportOptionsData>()
{
	return FFontImportOptionsData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFontImportOptionsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Font import options */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Font import options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontName_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Name of the typeface for the font to import */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Name of the typeface for the font to import" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Height of font (point size) */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Height of font (point size)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAntialiasing_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Whether the font should be antialiased or not.  Usually you should leave this enabled. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Whether the font should be antialiased or not.  Usually you should leave this enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBold_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Whether the font should be generated in bold or not */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Whether the font should be generated in bold or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableItalic_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Whether the font should be generated in italics or not */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Whether the font should be generated in italics or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUnderline_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Whether the font should be generated with an underline or not */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Whether the font should be generated with an underline or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaOnly_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** if true then forces PF_G8 and only maintains Alpha value and discards color */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "if true then forces PF_G8 and only maintains Alpha value and discards color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSet_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Character set for this font */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Character set for this font" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chars_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Explicit list of characters to include in the font */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Explicit list of characters to include in the font" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnicodeRange_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Range of Unicode character values to include in the font.  You can specify ranges using hyphens and/or commas (e.g. '400-900') */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Range of Unicode character values to include in the font.  You can specify ranges using hyphens and/or commas (e.g. '400-900')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharsFilePath_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Path on disk to a folder where files that contain a list of characters to include in the font */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Path on disk to a folder where files that contain a list of characters to include in the font" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharsFileWildcard_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** File mask wildcard that specifies which files within the CharsFilePath to scan for characters in include in the font */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "File mask wildcard that specifies which files within the CharsFilePath to scan for characters in include in the font" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreatePrintableOnly_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Skips generation of glyphs for any characters that are not considered 'printable' */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Skips generation of glyphs for any characters that are not considered 'printable'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeASCIIRange_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** When specifying a range of characters and this is enabled, forces ASCII characters (0 thru 255) to be included as well */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "When specifying a range of characters and this is enabled, forces ASCII characters (0 thru 255) to be included as well" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Color of the foreground font pixels.  Usually you should leave this white and instead use the UI Styles editor to change the color of the font on the fly */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Color of the foreground font pixels.  Usually you should leave this white and instead use the UI Styles editor to change the color of the font on the fly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDropShadow_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Enables a very simple, 1-pixel, black colored drop shadow for the generated font */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Enables a very simple, 1-pixel, black colored drop shadow for the generated font" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturePageWidth_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Horizontal size of each texture page for this font in pixels */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Horizontal size of each texture page for this font in pixels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturePageMaxHeight_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** The maximum vertical size of a texture page for this font in pixels.  The actual height of a texture page may be less than this if the font can fit within a smaller sized texture page. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "The maximum vertical size of a texture page for this font in pixels.  The actual height of a texture page may be less than this if the font can fit within a smaller sized texture page." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XPadding_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Horizontal padding between each font character on the texture page in pixels */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Horizontal padding between each font character on the texture page in pixels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YPadding_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Vertical padding between each font character on the texture page in pixels */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Vertical padding between each font character on the texture page in pixels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxTop_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** How much to extend the top of the UV coordinate rectangle for each character in pixels */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "How much to extend the top of the UV coordinate rectangle for each character in pixels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxBottom_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** How much to extend the bottom of the UV coordinate rectangle for each character in pixels */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "How much to extend the bottom of the UV coordinate rectangle for each character in pixels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxRight_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** How much to extend the right of the UV coordinate rectangle for each character in pixels */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "How much to extend the right of the UV coordinate rectangle for each character in pixels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtendBoxLeft_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** How much to extend the left of the UV coordinate rectangle for each character in pixels */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "How much to extend the left of the UV coordinate rectangle for each character in pixels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLegacyMode_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** Enables legacy font import mode.  This results in lower quality antialiasing and larger glyph bounds, but may be useful when debugging problems */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Enables legacy font import mode.  This results in lower quality antialiasing and larger glyph bounds, but may be useful when debugging problems" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kerning_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** The initial horizontal spacing adjustment between rendered characters.  This setting will be copied directly into the generated Font object's properties. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "The initial horizontal spacing adjustment between rendered characters.  This setting will be copied directly into the generated Font object's properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceFieldAlpha_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** If true then the alpha channel of the font textures will store a distance field instead of a color mask */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "If true then the alpha channel of the font textures will store a distance field instead of a color mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldScaleFactor_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "Comment", "/** \n\x09* Scale factor determines how big to scale the font bitmap during import when generating distance field values \n\x09* Note that higher values give better quality but importing will take much longer.\n\x09*/" },
		{ "editcondition", "bUseDistanceFieldAlpha" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Scale factor determines how big to scale the font bitmap during import when generating distance field values\nNote that higher values give better quality but importing will take much longer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldScanRadiusScale_MetaData[] = {
		{ "Category", "FontImportOptionsData" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Shrinks or expands the scan radius used to determine the silhouette of the font edges. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Shrinks or expands the scan radius used to determine the silhouette of the font edges." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FontName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static void NewProp_bEnableAntialiasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAntialiasing;
	static void NewProp_bEnableBold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBold;
	static void NewProp_bEnableItalic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableItalic;
	static void NewProp_bEnableUnderline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUnderline;
	static void NewProp_bAlphaOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaOnly;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterSet;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Chars;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnicodeRange;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharsFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharsFileWildcard;
	static void NewProp_bCreatePrintableOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatePrintableOnly;
	static void NewProp_bIncludeASCIIRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeASCIIRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
	static void NewProp_bEnableDropShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDropShadow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TexturePageWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TexturePageMaxHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XPadding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YPadding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExtendBoxTop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExtendBoxBottom;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExtendBoxRight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExtendBoxLeft;
	static void NewProp_bEnableLegacyMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLegacyMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Kerning;
	static void NewProp_bUseDistanceFieldAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceFieldAlpha;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceFieldScaleFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldScanRadiusScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontImportOptionsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_FontName = { "FontName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, FontName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontName_MetaData), NewProp_FontName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing_SetBit(void* Obj)
{
	((FFontImportOptionsData*)Obj)->bEnableAntialiasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing = { "bEnableAntialiasing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAntialiasing_MetaData), NewProp_bEnableAntialiasing_MetaData) };
void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold_SetBit(void* Obj)
{
	((FFontImportOptionsData*)Obj)->bEnableBold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold = { "bEnableBold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBold_MetaData), NewProp_bEnableBold_MetaData) };
void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic_SetBit(void* Obj)
{
	((FFontImportOptionsData*)Obj)->bEnableItalic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic = { "bEnableItalic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableItalic_MetaData), NewProp_bEnableItalic_MetaData) };
void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline_SetBit(void* Obj)
{
	((FFontImportOptionsData*)Obj)->bEnableUnderline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline = { "bEnableUnderline", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUnderline_MetaData), NewProp_bEnableUnderline_MetaData) };
void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly_SetBit(void* Obj)
{
	((FFontImportOptionsData*)Obj)->bAlphaOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly = { "bAlphaOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlphaOnly_MetaData), NewProp_bAlphaOnly_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharacterSet = { "CharacterSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, CharacterSet), Z_Construct_UEnum_Engine_EFontImportCharacterSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSet_MetaData), NewProp_CharacterSet_MetaData) }; // 4052823898
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Chars = { "Chars", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, Chars), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chars_MetaData), NewProp_Chars_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_UnicodeRange = { "UnicodeRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, UnicodeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnicodeRange_MetaData), NewProp_UnicodeRange_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFilePath = { "CharsFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, CharsFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharsFilePath_MetaData), NewProp_CharsFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFileWildcard = { "CharsFileWildcard", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, CharsFileWildcard), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharsFileWildcard_MetaData), NewProp_CharsFileWildcard_MetaData) };
void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly_SetBit(void* Obj)
{
	((FFontImportOptionsData*)Obj)->bCreatePrintableOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly = { "bCreatePrintableOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreatePrintableOnly_MetaData), NewProp_bCreatePrintableOnly_MetaData) };
void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange_SetBit(void* Obj)
{
	((FFontImportOptionsData*)Obj)->bIncludeASCIIRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange = { "bIncludeASCIIRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeASCIIRange_MetaData), NewProp_bIncludeASCIIRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, ForegroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundColor_MetaData), NewProp_ForegroundColor_MetaData) };
void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow_SetBit(void* Obj)
{
	((FFontImportOptionsData*)Obj)->bEnableDropShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow = { "bEnableDropShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDropShadow_MetaData), NewProp_bEnableDropShadow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageWidth = { "TexturePageWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, TexturePageWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturePageWidth_MetaData), NewProp_TexturePageWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageMaxHeight = { "TexturePageMaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, TexturePageMaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturePageMaxHeight_MetaData), NewProp_TexturePageMaxHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_XPadding = { "XPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, XPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XPadding_MetaData), NewProp_XPadding_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_YPadding = { "YPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, YPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YPadding_MetaData), NewProp_YPadding_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxTop = { "ExtendBoxTop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxTop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtendBoxTop_MetaData), NewProp_ExtendBoxTop_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxBottom = { "ExtendBoxBottom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxBottom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtendBoxBottom_MetaData), NewProp_ExtendBoxBottom_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxRight = { "ExtendBoxRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtendBoxRight_MetaData), NewProp_ExtendBoxRight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxLeft = { "ExtendBoxLeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, ExtendBoxLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtendBoxLeft_MetaData), NewProp_ExtendBoxLeft_MetaData) };
void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode_SetBit(void* Obj)
{
	((FFontImportOptionsData*)Obj)->bEnableLegacyMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode = { "bEnableLegacyMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLegacyMode_MetaData), NewProp_bEnableLegacyMode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Kerning = { "Kerning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, Kerning), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kerning_MetaData), NewProp_Kerning_MetaData) };
void Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha_SetBit(void* Obj)
{
	((FFontImportOptionsData*)Obj)->bUseDistanceFieldAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha = { "bUseDistanceFieldAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFontImportOptionsData), &Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDistanceFieldAlpha_MetaData), NewProp_bUseDistanceFieldAlpha_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScaleFactor = { "DistanceFieldScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, DistanceFieldScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldScaleFactor_MetaData), NewProp_DistanceFieldScaleFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScanRadiusScale = { "DistanceFieldScanRadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontImportOptionsData, DistanceFieldScanRadiusScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldScanRadiusScale_MetaData), NewProp_DistanceFieldScanRadiusScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_FontName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableAntialiasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableBold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableItalic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableUnderline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bAlphaOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharacterSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Chars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_UnicodeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_CharsFileWildcard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bCreatePrintableOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bIncludeASCIIRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableDropShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_TexturePageMaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_XPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_YPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_ExtendBoxLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bEnableLegacyMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_Kerning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_bUseDistanceFieldAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewProp_DistanceFieldScanRadiusScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"FontImportOptionsData",
	Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::PropPointers),
	sizeof(FFontImportOptionsData),
	alignof(FFontImportOptionsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFontImportOptionsData()
{
	if (!Z_Registration_Info_UScriptStruct_FontImportOptionsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FontImportOptionsData.InnerSingleton, Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FontImportOptionsData.InnerSingleton;
}
// End ScriptStruct FFontImportOptionsData

// Begin Class UFontImportOptions
void UFontImportOptions::StaticRegisterNativesUFontImportOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFontImportOptions);
UClass* Z_Construct_UClass_UFontImportOptions_NoRegister()
{
	return UFontImportOptions::StaticClass();
}
struct Z_Construct_UClass_UFontImportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds options for importing fonts.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/FontImportOptions.h" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "Holds options for importing fonts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "FontImportOptions" },
		{ "Comment", "/** The actual data for this object.  We wrap it in a struct so that we can copy it around between objects. */" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Classes/Engine/FontImportOptions.h" },
		{ "ToolTip", "The actual data for this object.  We wrap it in a struct so that we can copy it around between objects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFontImportOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFontImportOptions_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontImportOptions, Data), Z_Construct_UScriptStruct_FFontImportOptionsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1212462346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFontImportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontImportOptions_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFontImportOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFontImportOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFontImportOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFontImportOptions_Statics::ClassParams = {
	&UFontImportOptions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFontImportOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFontImportOptions_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFontImportOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UFontImportOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFontImportOptions()
{
	if (!Z_Registration_Info_UClass_UFontImportOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFontImportOptions.OuterSingleton, Z_Construct_UClass_UFontImportOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFontImportOptions.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UFontImportOptions>()
{
	return UFontImportOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFontImportOptions);
UFontImportOptions::~UFontImportOptions() {}
// End Class UFontImportOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFontImportCharacterSet_StaticEnum, TEXT("EFontImportCharacterSet"), &Z_Registration_Info_UEnum_EFontImportCharacterSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4052823898U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFontImportOptionsData::StaticStruct, Z_Construct_UScriptStruct_FFontImportOptionsData_Statics::NewStructOps, TEXT("FontImportOptionsData"), &Z_Registration_Info_UScriptStruct_FontImportOptionsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFontImportOptionsData), 1212462346U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFontImportOptions, UFontImportOptions::StaticClass, TEXT("UFontImportOptions"), &Z_Registration_Info_UClass_UFontImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFontImportOptions), 2557127647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_3880797938(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
