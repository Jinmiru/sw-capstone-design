// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/EngineSettings/Classes/GameMapsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMapsSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameMapsSettings();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameMapsSettings_NoRegister();
ENGINESETTINGS_API UEnum* Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType();
ENGINESETTINGS_API UEnum* Z_Construct_UEnum_EngineSettings_ESubLevelStripMode();
ENGINESETTINGS_API UEnum* Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType();
ENGINESETTINGS_API UEnum* Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType();
ENGINESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameModeName();
ENGINESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateMapInfoOverride();
UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References

// Begin Enum ETwoPlayerSplitScreenType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETwoPlayerSplitScreenType;
static UEnum* ETwoPlayerSplitScreenType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETwoPlayerSplitScreenType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETwoPlayerSplitScreenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType, (UObject*)Z_Construct_UPackage__Script_EngineSettings(), TEXT("ETwoPlayerSplitScreenType"));
	}
	return Z_Registration_Info_UEnum_ETwoPlayerSplitScreenType.OuterSingleton;
}
template<> ENGINESETTINGS_API UEnum* StaticEnum<ETwoPlayerSplitScreenType::Type>()
{
	return ETwoPlayerSplitScreenType_StaticEnum();
}
struct Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Ways the screen can be split with two players. */" },
		{ "Horizontal.Name", "ETwoPlayerSplitScreenType::Horizontal" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Ways the screen can be split with two players." },
		{ "Vertical.Name", "ETwoPlayerSplitScreenType::Vertical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETwoPlayerSplitScreenType::Horizontal", (int64)ETwoPlayerSplitScreenType::Horizontal },
		{ "ETwoPlayerSplitScreenType::Vertical", (int64)ETwoPlayerSplitScreenType::Vertical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EngineSettings,
	nullptr,
	"ETwoPlayerSplitScreenType",
	"ETwoPlayerSplitScreenType::Type",
	Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType()
{
	if (!Z_Registration_Info_UEnum_ETwoPlayerSplitScreenType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETwoPlayerSplitScreenType.InnerSingleton, Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETwoPlayerSplitScreenType.InnerSingleton;
}
// End Enum ETwoPlayerSplitScreenType

// Begin Enum EThreePlayerSplitScreenType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThreePlayerSplitScreenType;
static UEnum* EThreePlayerSplitScreenType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EThreePlayerSplitScreenType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EThreePlayerSplitScreenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType, (UObject*)Z_Construct_UPackage__Script_EngineSettings(), TEXT("EThreePlayerSplitScreenType"));
	}
	return Z_Registration_Info_UEnum_EThreePlayerSplitScreenType.OuterSingleton;
}
template<> ENGINESETTINGS_API UEnum* StaticEnum<EThreePlayerSplitScreenType::Type>()
{
	return EThreePlayerSplitScreenType_StaticEnum();
}
struct Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Ways the screen can be split with three players. */" },
		{ "FavorBottom.Name", "EThreePlayerSplitScreenType::FavorBottom" },
		{ "FavorTop.Name", "EThreePlayerSplitScreenType::FavorTop" },
		{ "Horizontal.Name", "EThreePlayerSplitScreenType::Horizontal" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Ways the screen can be split with three players." },
		{ "Vertical.Name", "EThreePlayerSplitScreenType::Vertical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EThreePlayerSplitScreenType::FavorTop", (int64)EThreePlayerSplitScreenType::FavorTop },
		{ "EThreePlayerSplitScreenType::FavorBottom", (int64)EThreePlayerSplitScreenType::FavorBottom },
		{ "EThreePlayerSplitScreenType::Vertical", (int64)EThreePlayerSplitScreenType::Vertical },
		{ "EThreePlayerSplitScreenType::Horizontal", (int64)EThreePlayerSplitScreenType::Horizontal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EngineSettings,
	nullptr,
	"EThreePlayerSplitScreenType",
	"EThreePlayerSplitScreenType::Type",
	Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType()
{
	if (!Z_Registration_Info_UEnum_EThreePlayerSplitScreenType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThreePlayerSplitScreenType.InnerSingleton, Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EThreePlayerSplitScreenType.InnerSingleton;
}
// End Enum EThreePlayerSplitScreenType

// Begin Enum EFourPlayerSplitScreenType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFourPlayerSplitScreenType;
static UEnum* EFourPlayerSplitScreenType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFourPlayerSplitScreenType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFourPlayerSplitScreenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType, (UObject*)Z_Construct_UPackage__Script_EngineSettings(), TEXT("EFourPlayerSplitScreenType"));
	}
	return Z_Registration_Info_UEnum_EFourPlayerSplitScreenType.OuterSingleton;
}
template<> ENGINESETTINGS_API UEnum* StaticEnum<EFourPlayerSplitScreenType>()
{
	return EFourPlayerSplitScreenType_StaticEnum();
}
struct Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Grid.Name", "EFourPlayerSplitScreenType::Grid" },
		{ "Horizontal.Name", "EFourPlayerSplitScreenType::Horizontal" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "Vertical.Name", "EFourPlayerSplitScreenType::Vertical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFourPlayerSplitScreenType::Grid", (int64)EFourPlayerSplitScreenType::Grid },
		{ "EFourPlayerSplitScreenType::Vertical", (int64)EFourPlayerSplitScreenType::Vertical },
		{ "EFourPlayerSplitScreenType::Horizontal", (int64)EFourPlayerSplitScreenType::Horizontal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EngineSettings,
	nullptr,
	"EFourPlayerSplitScreenType",
	"EFourPlayerSplitScreenType",
	Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType()
{
	if (!Z_Registration_Info_UEnum_EFourPlayerSplitScreenType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFourPlayerSplitScreenType.InnerSingleton, Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFourPlayerSplitScreenType.InnerSingleton;
}
// End Enum EFourPlayerSplitScreenType

// Begin ScriptStruct FGameModeName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameModeName;
class UScriptStruct* FGameModeName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameModeName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameModeName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameModeName, (UObject*)Z_Construct_UPackage__Script_EngineSettings(), TEXT("GameModeName"));
	}
	return Z_Registration_Info_UScriptStruct_GameModeName.OuterSingleton;
}
template<> ENGINESETTINGS_API UScriptStruct* StaticStruct<FGameModeName>()
{
	return FGameModeName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameModeName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper structure, used to associate GameModes with shortcut names. */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Helper structure, used to associate GameModes with shortcut names." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "Comment", "/** Abbreviation/prefix that can be used as an alias for the class name */" },
		{ "MetaClass", "/Script/Engine.GameModeBase" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Abbreviation/prefix that can be used as an alias for the class name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "Comment", "/** GameMode class to load */" },
		{ "MetaClass", "/Script/Engine.GameModeBase" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "GameMode class to load" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameModeName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameModeName, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameModeName, GameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameModeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_GameMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameModeName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	nullptr,
	&NewStructOps,
	"GameModeName",
	Z_Construct_UScriptStruct_FGameModeName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeName_Statics::PropPointers),
	sizeof(FGameModeName),
	alignof(FGameModeName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameModeName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameModeName()
{
	if (!Z_Registration_Info_UScriptStruct_GameModeName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameModeName.InnerSingleton, Z_Construct_UScriptStruct_FGameModeName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameModeName.InnerSingleton;
}
// End ScriptStruct FGameModeName

// Begin Enum ESubLevelStripMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubLevelStripMode;
static UEnum* ESubLevelStripMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubLevelStripMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubLevelStripMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_ESubLevelStripMode, (UObject*)Z_Construct_UPackage__Script_EngineSettings(), TEXT("ESubLevelStripMode"));
	}
	return Z_Registration_Info_UEnum_ESubLevelStripMode.OuterSingleton;
}
template<> ENGINESETTINGS_API UEnum* StaticEnum<ESubLevelStripMode>()
{
	return ESubLevelStripMode_StaticEnum();
}
struct Z_Construct_UEnum_EngineSettings_ESubLevelStripMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ExactClass.Comment", "// The class of the sub level actor must be exactly this class\n" },
		{ "ExactClass.Name", "ESubLevelStripMode::ExactClass" },
		{ "ExactClass.ToolTip", "The class of the sub level actor must be exactly this class" },
		{ "IsChildOf.Comment", "// Any child class of this class will be stripped, this is more expensive than ExactClass\n" },
		{ "IsChildOf.Name", "ESubLevelStripMode::IsChildOf" },
		{ "IsChildOf.ToolTip", "Any child class of this class will be stripped, this is more expensive than ExactClass" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESubLevelStripMode::ExactClass", (int64)ESubLevelStripMode::ExactClass },
		{ "ESubLevelStripMode::IsChildOf", (int64)ESubLevelStripMode::IsChildOf },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EngineSettings_ESubLevelStripMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EngineSettings,
	nullptr,
	"ESubLevelStripMode",
	"ESubLevelStripMode",
	Z_Construct_UEnum_EngineSettings_ESubLevelStripMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EngineSettings_ESubLevelStripMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EngineSettings_ESubLevelStripMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EngineSettings_ESubLevelStripMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EngineSettings_ESubLevelStripMode()
{
	if (!Z_Registration_Info_UEnum_ESubLevelStripMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubLevelStripMode.InnerSingleton, Z_Construct_UEnum_EngineSettings_ESubLevelStripMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubLevelStripMode.InnerSingleton;
}
// End Enum ESubLevelStripMode

// Begin ScriptStruct FTemplateMapInfoOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TemplateMapInfoOverride;
class UScriptStruct* FTemplateMapInfoOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateMapInfoOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TemplateMapInfoOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateMapInfoOverride, (UObject*)Z_Construct_UPackage__Script_EngineSettings(), TEXT("TemplateMapInfoOverride"));
	}
	return Z_Registration_Info_UScriptStruct_TemplateMapInfoOverride.OuterSingleton;
}
template<> ENGINESETTINGS_API UScriptStruct* StaticStruct<FTemplateMapInfoOverride>()
{
	return FTemplateMapInfoOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Used by new level dialog. */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Used by new level dialog." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "DefaultMaps" },
		{ "Comment", "/** The thumbnail to display in the new level dialog */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The thumbnail to display in the new level dialog" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "DefaultMaps" },
		{ "Comment", "/** The path to the template map */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The path to the template map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "DefaultMaps" },
		{ "Comment", "/** The display name of the map template in the level dialog. If this is empty the thumbnail name will be used */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The display name of the map template in the level dialog. If this is empty the thumbnail name will be used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Thumbnail;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateMapInfoOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTemplateMapInfoOverride, Thumbnail), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumbnail_MetaData), NewProp_Thumbnail_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTemplateMapInfoOverride, Map), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTemplateMapInfoOverride, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::NewProp_Thumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::NewProp_Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::NewProp_DisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	nullptr,
	&NewStructOps,
	"TemplateMapInfoOverride",
	Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::PropPointers),
	sizeof(FTemplateMapInfoOverride),
	alignof(FTemplateMapInfoOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTemplateMapInfoOverride()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateMapInfoOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TemplateMapInfoOverride.InnerSingleton, Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TemplateMapInfoOverride.InnerSingleton;
}
// End ScriptStruct FTemplateMapInfoOverride

// Begin Class UGameMapsSettings Function GetGameMapsSettings
struct Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics
{
	struct GameMapsSettings_eventGetGameMapsSettings_Parms
	{
		UGameMapsSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the game local maps settings */" },
		{ "DisplayName", "Get Game Maps and Modes Settings" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Returns the game local maps settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameMapsSettings_eventGetGameMapsSettings_Parms, ReturnValue), Z_Construct_UClass_UGameMapsSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameMapsSettings, nullptr, "GetGameMapsSettings", nullptr, nullptr, Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::GameMapsSettings_eventGetGameMapsSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::GameMapsSettings_eventGetGameMapsSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameMapsSettings::execGetGameMapsSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGameMapsSettings**)Z_Param__Result=UGameMapsSettings::GetGameMapsSettings();
	P_NATIVE_END;
}
// End Class UGameMapsSettings Function GetGameMapsSettings

// Begin Class UGameMapsSettings Function GetSkipAssigningGamepadToPlayer1
struct Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics
{
	struct GameMapsSettings_eventGetSkipAssigningGamepadToPlayer1_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameMapsSettings_eventGetSkipAssigningGamepadToPlayer1_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameMapsSettings_eventGetSkipAssigningGamepadToPlayer1_Parms), &Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameMapsSettings, nullptr, "GetSkipAssigningGamepadToPlayer1", nullptr, nullptr, Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::GameMapsSettings_eventGetSkipAssigningGamepadToPlayer1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::GameMapsSettings_eventGetSkipAssigningGamepadToPlayer1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameMapsSettings::execGetSkipAssigningGamepadToPlayer1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSkipAssigningGamepadToPlayer1();
	P_NATIVE_END;
}
// End Class UGameMapsSettings Function GetSkipAssigningGamepadToPlayer1

// Begin Class UGameMapsSettings Function SetSkipAssigningGamepadToPlayer1
struct Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics
{
	struct GameMapsSettings_eventSetSkipAssigningGamepadToPlayer1_Parms
	{
		bool bSkipFirstPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**\n\x09 * Modify \"Skip Assigning Gamepad to Player 1\" GameMapsSettings option\n\x09 * @param bSkipFirstPlayer\x09\x09If set connected game pads will only be assigned to the second and subsequent players\n\x09 * @note This value is saved to local config when changed.\n\x09*/" },
		{ "CPP_Default_bSkipFirstPlayer", "true" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Modify \"Skip Assigning Gamepad to Player 1\" GameMapsSettings option\n@param bSkipFirstPlayer              If set connected game pads will only be assigned to the second and subsequent players\n@note This value is saved to local config when changed." },
	};
#endif // WITH_METADATA
	static void NewProp_bSkipFirstPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipFirstPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::NewProp_bSkipFirstPlayer_SetBit(void* Obj)
{
	((GameMapsSettings_eventSetSkipAssigningGamepadToPlayer1_Parms*)Obj)->bSkipFirstPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::NewProp_bSkipFirstPlayer = { "bSkipFirstPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameMapsSettings_eventSetSkipAssigningGamepadToPlayer1_Parms), &Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::NewProp_bSkipFirstPlayer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::NewProp_bSkipFirstPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameMapsSettings, nullptr, "SetSkipAssigningGamepadToPlayer1", nullptr, nullptr, Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::GameMapsSettings_eventSetSkipAssigningGamepadToPlayer1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::GameMapsSettings_eventSetSkipAssigningGamepadToPlayer1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameMapsSettings::execSetSkipAssigningGamepadToPlayer1)
{
	P_GET_UBOOL(Z_Param_bSkipFirstPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkipAssigningGamepadToPlayer1(Z_Param_bSkipFirstPlayer);
	P_NATIVE_END;
}
// End Class UGameMapsSettings Function SetSkipAssigningGamepadToPlayer1

// Begin Class UGameMapsSettings
void UGameMapsSettings::StaticRegisterNativesUGameMapsSettings()
{
	UClass* Class = UGameMapsSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGameMapsSettings", &UGameMapsSettings::execGetGameMapsSettings },
		{ "GetSkipAssigningGamepadToPlayer1", &UGameMapsSettings::execGetSkipAssigningGamepadToPlayer1 },
		{ "SetSkipAssigningGamepadToPlayer1", &UGameMapsSettings::execSetSkipAssigningGamepadToPlayer1 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameMapsSettings);
UClass* Z_Construct_UClass_UGameMapsSettings_NoRegister()
{
	return UGameMapsSettings::StaticClass();
}
struct Z_Construct_UClass_UGameMapsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameMapsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorStartupMap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "DefaultMaps" },
		{ "Comment", "/** If set, this map will be loaded when the Editor starts up. */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "If set, this map will be loaded when the Editor starts up." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorTemplateMapOverrides_MetaData[] = {
		{ "Category", "DefaultMaps" },
		{ "Comment", "/** Map templates that should show up in the new level dialog. This will completely override the default maps chosen by the default editor */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Map templates that should show up in the new level dialog. This will completely override the default maps chosen by the default editor" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalMapOptions_MetaData[] = {
		{ "Category", "DefaultMaps" },
		{ "Comment", "/** The default options that will be appended to a map being loaded. */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The default options that will be appended to a map being loaded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionMap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "DefaultMaps" },
		{ "Comment", "/** The map loaded when transition from one map to another. */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The map loaded when transition from one map to another." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSplitscreen_MetaData[] = {
		{ "Category", "LocalMultiplayer" },
		{ "Comment", "/** Whether the screen should be split or not when multiple local players are present */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Whether the screen should be split or not when multiple local players are present" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwoPlayerSplitscreenLayout_MetaData[] = {
		{ "Category", "LocalMultiplayer" },
		{ "Comment", "/** The viewport layout to use if the screen should be split and there are two local players */" },
		{ "editcondition", "bUseSplitScreen" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The viewport layout to use if the screen should be split and there are two local players" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThreePlayerSplitscreenLayout_MetaData[] = {
		{ "Category", "LocalMultiplayer" },
		{ "Comment", "/** The viewport layout to use if the screen should be split and there are three local players */" },
		{ "editcondition", "bUseSplitScreen" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The viewport layout to use if the screen should be split and there are three local players" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FourPlayerSplitscreenLayout_MetaData[] = {
		{ "Category", "LocalMultiplayer" },
		{ "Comment", "/** The viewport layout to use if the screen should be split and there are three local players */" },
		{ "editcondition", "bUseSplitScreen" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The viewport layout to use if the screen should be split and there are three local players" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOffsetPlayerGamepadIds_MetaData[] = {
		{ "Category", "LocalMultiplayer" },
		{ "Comment", "/**\n\x09* If enabled, this will make so that gamepads start being assigned to the second controller ID in local multiplayer games.\n\x09* In PIE sessions with multiple windows, this has the same effect as enabling \"Route 1st Gamepad to 2nd Client\"\n\x09*/" },
		{ "DisplayName", "Skip Assigning Gamepad to Player 1" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "If enabled, this will make so that gamepads start being assigned to the second controller ID in local multiplayer games.\nIn PIE sessions with multiple windows, this has the same effect as enabling \"Route 1st Gamepad to 2nd Client\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameInstanceClass_MetaData[] = {
		{ "Category", "GameInstance" },
		{ "Comment", "/** The class to use when instantiating the transient GameInstance class */" },
		{ "MetaClass", "/Script/Engine.GameInstance" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The class to use when instantiating the transient GameInstance class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDefaultMap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "DefaultMaps" },
		{ "Comment", "/** The map that will be loaded by default when no other map is loaded. */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The map that will be loaded by default when no other map is loaded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerDefaultMap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "DefaultMaps" },
		{ "Comment", "/** The map that will be loaded by default when no other map is loaded (DEDICATED SERVER). */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The map that will be loaded by default when no other map is loaded (DEDICATED SERVER)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDefaultGameMode_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "Comment", "/** GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL). */" },
		{ "DisplayName", "Default GameMode" },
		{ "MetaClass", "/Script/Engine.GameModeBase" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDefaultServerGameMode_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "Comment", "/**\n\x09 * GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL) (DEDICATED SERVERS)\n\x09 * If not set, the GlobalDefaultGameMode value will be used.\n\x09 */" },
		{ "MetaClass", "/Script/Engine.GameModeBase" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL) (DEDICATED SERVERS)\nIf not set, the GlobalDefaultGameMode value will be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameModeMapPrefixes_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "Comment", "/** Overrides the GameMode to use when loading a map that starts with a specific prefix */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Overrides the GameMode to use when loading a map that starts with a specific prefix" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameModeClassAliases_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "Comment", "/** List of GameModes to load when game= is specified in the URL (e.g. \"DM\" could be an alias for \"MyProject.MyGameModeMP_DM\") */" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "List of GameModes to load when game= is specified in the URL (e.g. \"DM\" could be an alias for \"MyProject.MyGameModeMP_DM\")" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorStartupMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorTemplateMapOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorTemplateMapOverrides;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalMapOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionMap;
	static void NewProp_bUseSplitscreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSplitscreen;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TwoPlayerSplitscreenLayout;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThreePlayerSplitscreenLayout;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FourPlayerSplitscreenLayout_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FourPlayerSplitscreenLayout;
	static void NewProp_bOffsetPlayerGamepadIds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOffsetPlayerGamepadIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameInstanceClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameDefaultMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerDefaultMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalDefaultGameMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalDefaultServerGameMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameModeMapPrefixes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameModeMapPrefixes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameModeClassAliases_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameModeClassAliases;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameMapsSettings_GetGameMapsSettings, "GetGameMapsSettings" }, // 1785534960
		{ &Z_Construct_UFunction_UGameMapsSettings_GetSkipAssigningGamepadToPlayer1, "GetSkipAssigningGamepadToPlayer1" }, // 3270552079
		{ &Z_Construct_UFunction_UGameMapsSettings_SetSkipAssigningGamepadToPlayer1, "SetSkipAssigningGamepadToPlayer1" }, // 2759006435
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameMapsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorStartupMap = { "EditorStartupMap", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, EditorStartupMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorStartupMap_MetaData), NewProp_EditorStartupMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorTemplateMapOverrides_Inner = { "EditorTemplateMapOverrides", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTemplateMapInfoOverride, METADATA_PARAMS(0, nullptr) }; // 1383433739
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorTemplateMapOverrides = { "EditorTemplateMapOverrides", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, EditorTemplateMapOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorTemplateMapOverrides_MetaData), NewProp_EditorTemplateMapOverrides_MetaData) }; // 1383433739
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_LocalMapOptions = { "LocalMapOptions", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, LocalMapOptions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalMapOptions_MetaData), NewProp_LocalMapOptions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TransitionMap = { "TransitionMap", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, TransitionMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionMap_MetaData), NewProp_TransitionMap_MetaData) };
void Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen_SetBit(void* Obj)
{
	((UGameMapsSettings*)Obj)->bUseSplitscreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen = { "bUseSplitscreen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameMapsSettings), &Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSplitscreen_MetaData), NewProp_bUseSplitscreen_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TwoPlayerSplitscreenLayout = { "TwoPlayerSplitscreenLayout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, TwoPlayerSplitscreenLayout), Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwoPlayerSplitscreenLayout_MetaData), NewProp_TwoPlayerSplitscreenLayout_MetaData) }; // 555388427
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ThreePlayerSplitscreenLayout = { "ThreePlayerSplitscreenLayout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, ThreePlayerSplitscreenLayout), Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThreePlayerSplitscreenLayout_MetaData), NewProp_ThreePlayerSplitscreenLayout_MetaData) }; // 3625148195
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout = { "FourPlayerSplitscreenLayout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, FourPlayerSplitscreenLayout), Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FourPlayerSplitscreenLayout_MetaData), NewProp_FourPlayerSplitscreenLayout_MetaData) }; // 3349608567
void Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds_SetBit(void* Obj)
{
	((UGameMapsSettings*)Obj)->bOffsetPlayerGamepadIds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds = { "bOffsetPlayerGamepadIds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameMapsSettings), &Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOffsetPlayerGamepadIds_MetaData), NewProp_bOffsetPlayerGamepadIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameInstanceClass = { "GameInstanceClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, GameInstanceClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameInstanceClass_MetaData), NewProp_GameInstanceClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameDefaultMap = { "GameDefaultMap", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, GameDefaultMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDefaultMap_MetaData), NewProp_GameDefaultMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ServerDefaultMap = { "ServerDefaultMap", nullptr, (EPropertyFlags)0x0040040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, ServerDefaultMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerDefaultMap_MetaData), NewProp_ServerDefaultMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultGameMode = { "GlobalDefaultGameMode", nullptr, (EPropertyFlags)0x0040000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, GlobalDefaultGameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDefaultGameMode_MetaData), NewProp_GlobalDefaultGameMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultServerGameMode = { "GlobalDefaultServerGameMode", nullptr, (EPropertyFlags)0x0040040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, GlobalDefaultServerGameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDefaultServerGameMode_MetaData), NewProp_GlobalDefaultServerGameMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes_Inner = { "GameModeMapPrefixes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameModeName, METADATA_PARAMS(0, nullptr) }; // 783939822
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes = { "GameModeMapPrefixes", nullptr, (EPropertyFlags)0x0040040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, GameModeMapPrefixes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameModeMapPrefixes_MetaData), NewProp_GameModeMapPrefixes_MetaData) }; // 783939822
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases_Inner = { "GameModeClassAliases", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameModeName, METADATA_PARAMS(0, nullptr) }; // 783939822
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases = { "GameModeClassAliases", nullptr, (EPropertyFlags)0x0040040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameMapsSettings, GameModeClassAliases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameModeClassAliases_MetaData), NewProp_GameModeClassAliases_MetaData) }; // 783939822
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameMapsSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorStartupMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorTemplateMapOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorTemplateMapOverrides,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_LocalMapOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TransitionMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TwoPlayerSplitscreenLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ThreePlayerSplitscreenLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameInstanceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameDefaultMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ServerDefaultMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultGameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultServerGameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameMapsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameMapsSettings_Statics::ClassParams = {
	&UGameMapsSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameMapsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameMapsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameMapsSettings()
{
	if (!Z_Registration_Info_UClass_UGameMapsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameMapsSettings.OuterSingleton, Z_Construct_UClass_UGameMapsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameMapsSettings.OuterSingleton;
}
template<> ENGINESETTINGS_API UClass* StaticClass<UGameMapsSettings>()
{
	return UGameMapsSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameMapsSettings);
UGameMapsSettings::~UGameMapsSettings() {}
// End Class UGameMapsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETwoPlayerSplitScreenType_StaticEnum, TEXT("ETwoPlayerSplitScreenType"), &Z_Registration_Info_UEnum_ETwoPlayerSplitScreenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 555388427U) },
		{ EThreePlayerSplitScreenType_StaticEnum, TEXT("EThreePlayerSplitScreenType"), &Z_Registration_Info_UEnum_EThreePlayerSplitScreenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3625148195U) },
		{ EFourPlayerSplitScreenType_StaticEnum, TEXT("EFourPlayerSplitScreenType"), &Z_Registration_Info_UEnum_EFourPlayerSplitScreenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3349608567U) },
		{ ESubLevelStripMode_StaticEnum, TEXT("ESubLevelStripMode"), &Z_Registration_Info_UEnum_ESubLevelStripMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2874614669U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameModeName::StaticStruct, Z_Construct_UScriptStruct_FGameModeName_Statics::NewStructOps, TEXT("GameModeName"), &Z_Registration_Info_UScriptStruct_GameModeName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameModeName), 783939822U) },
		{ FTemplateMapInfoOverride::StaticStruct, Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics::NewStructOps, TEXT("TemplateMapInfoOverride"), &Z_Registration_Info_UScriptStruct_TemplateMapInfoOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTemplateMapInfoOverride), 1383433739U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameMapsSettings, UGameMapsSettings::StaticClass, TEXT("UGameMapsSettings"), &Z_Registration_Info_UClass_UGameMapsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameMapsSettings), 2657343653U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_345043763(TEXT("/Script/EngineSettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
