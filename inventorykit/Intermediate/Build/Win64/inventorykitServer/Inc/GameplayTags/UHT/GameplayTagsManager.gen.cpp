// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister();
GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType();
GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNode();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagSource();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow();
UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References

// Begin ScriptStruct FGameplayTagTableRow
static_assert(std::is_polymorphic<FGameplayTagTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FGameplayTagTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagTableRow;
class UScriptStruct* FGameplayTagTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagTableRow, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagTableRow.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagTableRow>()
{
	return FGameplayTagTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple struct for a table row in the gameplay tag table and element in the ini list */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Simple struct for a table row in the gameplay tag table and element in the ini list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "Comment", "/** Tag specified in the table */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Tag specified in the table" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DevComment_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "Comment", "/** Developer comment clarifying the usage of a particular tag, not user facing */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Developer comment clarifying the usage of a particular tag, not user facing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DevComment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagTableRow, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment = { "DevComment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagTableRow, DevComment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DevComment_MetaData), NewProp_DevComment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewProp_DevComment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"GameplayTagTableRow",
	Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::PropPointers),
	sizeof(FGameplayTagTableRow),
	alignof(FGameplayTagTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagTableRow.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagTableRow.InnerSingleton;
}
// End ScriptStruct FGameplayTagTableRow

// Begin ScriptStruct FRestrictedGameplayTagTableRow
static_assert(std::is_polymorphic<FRestrictedGameplayTagTableRow>() == std::is_polymorphic<FGameplayTagTableRow>(), "USTRUCT FRestrictedGameplayTagTableRow cannot be polymorphic unless super FGameplayTagTableRow is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow;
class UScriptStruct* FRestrictedGameplayTagTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("RestrictedGameplayTagTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FRestrictedGameplayTagTableRow>()
{
	return FRestrictedGameplayTagTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple struct for a table row in the restricted gameplay tag table and element in the ini list */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Simple struct for a table row in the restricted gameplay tag table and element in the ini list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNonRestrictedChildren_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "Comment", "/** Tag specified in the table */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Tag specified in the table" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowNonRestrictedChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNonRestrictedChildren;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRestrictedGameplayTagTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_SetBit(void* Obj)
{
	((FRestrictedGameplayTagTableRow*)Obj)->bAllowNonRestrictedChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren = { "bAllowNonRestrictedChildren", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRestrictedGameplayTagTableRow), &Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowNonRestrictedChildren_MetaData), NewProp_bAllowNonRestrictedChildren_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewProp_bAllowNonRestrictedChildren,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	Z_Construct_UScriptStruct_FGameplayTagTableRow,
	&NewStructOps,
	"RestrictedGameplayTagTableRow",
	Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::PropPointers),
	sizeof(FRestrictedGameplayTagTableRow),
	alignof(FRestrictedGameplayTagTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.InnerSingleton, Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow.InnerSingleton;
}
// End ScriptStruct FRestrictedGameplayTagTableRow

// Begin Enum EGameplayTagSourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTagSourceType;
static UEnum* EGameplayTagSourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagSourceType"));
	}
	return Z_Registration_Info_UEnum_EGameplayTagSourceType.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayTagSourceType>()
{
	return EGameplayTagSourceType_StaticEnum();
}
struct Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DataTable.Comment", "// Restricted tags from an ini\n" },
		{ "DataTable.Name", "EGameplayTagSourceType::DataTable" },
		{ "DataTable.ToolTip", "Restricted tags from an ini" },
		{ "DefaultTagList.Comment", "// Was added from C++ code\n" },
		{ "DefaultTagList.Name", "EGameplayTagSourceType::DefaultTagList" },
		{ "DefaultTagList.ToolTip", "Was added from C++ code" },
		{ "Invalid.Comment", "// From a DataTable\n" },
		{ "Invalid.Name", "EGameplayTagSourceType::Invalid" },
		{ "Invalid.ToolTip", "From a DataTable" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "Native.Name", "EGameplayTagSourceType::Native" },
		{ "RestrictedTagList.Comment", "// Another tag list from an ini in tags/*.ini\n" },
		{ "RestrictedTagList.Name", "EGameplayTagSourceType::RestrictedTagList" },
		{ "RestrictedTagList.ToolTip", "Another tag list from an ini in tags.ini" },
		{ "TagList.Comment", "// The default tag list in DefaultGameplayTags.ini\n" },
		{ "TagList.Name", "EGameplayTagSourceType::TagList" },
		{ "TagList.ToolTip", "The default tag list in DefaultGameplayTags.ini" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayTagSourceType::Native", (int64)EGameplayTagSourceType::Native },
		{ "EGameplayTagSourceType::DefaultTagList", (int64)EGameplayTagSourceType::DefaultTagList },
		{ "EGameplayTagSourceType::TagList", (int64)EGameplayTagSourceType::TagList },
		{ "EGameplayTagSourceType::RestrictedTagList", (int64)EGameplayTagSourceType::RestrictedTagList },
		{ "EGameplayTagSourceType::DataTable", (int64)EGameplayTagSourceType::DataTable },
		{ "EGameplayTagSourceType::Invalid", (int64)EGameplayTagSourceType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
	nullptr,
	"EGameplayTagSourceType",
	"EGameplayTagSourceType",
	Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType()
{
	if (!Z_Registration_Info_UEnum_EGameplayTagSourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTagSourceType.InnerSingleton, Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayTagSourceType.InnerSingleton;
}
// End Enum EGameplayTagSourceType

// Begin Enum EGameplayTagSelectionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTagSelectionType;
static UEnum* EGameplayTagSelectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagSelectionType"));
	}
	return Z_Registration_Info_UEnum_EGameplayTagSelectionType.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayTagSelectionType>()
{
	return EGameplayTagSelectionType_StaticEnum();
}
struct Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "EGameplayTagSelectionType::All" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "None.Name", "EGameplayTagSelectionType::None" },
		{ "NonRestrictedOnly.Name", "EGameplayTagSelectionType::NonRestrictedOnly" },
		{ "RestrictedOnly.Name", "EGameplayTagSelectionType::RestrictedOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayTagSelectionType::None", (int64)EGameplayTagSelectionType::None },
		{ "EGameplayTagSelectionType::NonRestrictedOnly", (int64)EGameplayTagSelectionType::NonRestrictedOnly },
		{ "EGameplayTagSelectionType::RestrictedOnly", (int64)EGameplayTagSelectionType::RestrictedOnly },
		{ "EGameplayTagSelectionType::All", (int64)EGameplayTagSelectionType::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
	nullptr,
	"EGameplayTagSelectionType",
	"EGameplayTagSelectionType",
	Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType()
{
	if (!Z_Registration_Info_UEnum_EGameplayTagSelectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTagSelectionType.InnerSingleton, Z_Construct_UEnum_GameplayTags_EGameplayTagSelectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayTagSelectionType.InnerSingleton;
}
// End Enum EGameplayTagSelectionType

// Begin ScriptStruct FGameplayTagSource
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagSource;
class UScriptStruct* FGameplayTagSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagSource, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagSource"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagSource.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagSource>()
{
	return FGameplayTagSource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct defining where gameplay tags are loaded/saved from. Mostly for the editor */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Struct defining where gameplay tags are loaded/saved from. Mostly for the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
		{ "Comment", "/** Name of this source */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Name of this source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
		{ "Comment", "/** Type of this source */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Type of this source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTagList_MetaData[] = {
		{ "Comment", "/** If this is bound to an ini object for saving, this is the one */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "If this is bound to an ini object for saving, this is the one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRestrictedTagList_MetaData[] = {
		{ "Comment", "/** If this has restricted tags and is bound to an ini object for saving, this is the one */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "If this has restricted tags and is bound to an ini object for saving, this is the one" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTagList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceRestrictedTagList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagSource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagSource, SourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceName_MetaData), NewProp_SourceName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagSource, SourceType), Z_Construct_UEnum_GameplayTags_EGameplayTagSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceType_MetaData), NewProp_SourceType_MetaData) }; // 2957254201
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList = { "SourceTagList", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagSource, SourceTagList), Z_Construct_UClass_UGameplayTagsList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTagList_MetaData), NewProp_SourceTagList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList = { "SourceRestrictedTagList", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagSource, SourceRestrictedTagList), Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRestrictedTagList_MetaData), NewProp_SourceRestrictedTagList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceTagList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewProp_SourceRestrictedTagList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagSource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	nullptr,
	&NewStructOps,
	"GameplayTagSource",
	Z_Construct_UScriptStruct_FGameplayTagSource_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::PropPointers),
	sizeof(FGameplayTagSource),
	alignof(FGameplayTagSource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagSource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagSource()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagSource.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagSource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagSource.InnerSingleton;
}
// End ScriptStruct FGameplayTagSource

// Begin ScriptStruct FGameplayTagNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagNode;
class UScriptStruct* FGameplayTagNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagNode, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagNode"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagNode.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagNode>()
{
	return FGameplayTagNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple tree node for gameplay tags, this stores metadata about specific tags */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Simple tree node for gameplay tags, this stores metadata about specific tags" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	nullptr,
	&NewStructOps,
	"GameplayTagNode",
	nullptr,
	0,
	sizeof(FGameplayTagNode),
	alignof(FGameplayTagNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNode()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagNode.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagNode.InnerSingleton;
}
// End ScriptStruct FGameplayTagNode

// Begin Class UGameplayTagsManager
void UGameplayTagsManager::StaticRegisterNativesUGameplayTagsManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsManager);
UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister()
{
	return UGameplayTagsManager::StaticClass();
}
struct Z_Construct_UClass_UGameplayTagsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Holds data about the tag dictionary, is in a singleton UObject */" },
		{ "IncludePath", "GameplayTagsManager.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Holds data about the tag dictionary, is in a singleton UObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagSources_MetaData[] = {
		{ "Comment", "/** Map of gameplay tag source names to source objects */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Map of gameplay tag source names to source objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagTables_MetaData[] = {
		{ "Comment", "/** Holds all of the valid gameplay-related tags that can be applied to assets */" },
		{ "ModuleRelativePath", "Classes/GameplayTagsManager.h" },
		{ "ToolTip", "Holds all of the valid gameplay-related tags that can be applied to assets" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagSources_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagSources_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TagSources;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplayTagTables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTagTables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_ValueProp = { "TagSources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayTagSource, METADATA_PARAMS(0, nullptr) }; // 2283349618
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_Key_KeyProp = { "TagSources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources = { "TagSources", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsManager, TagSources), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagSources_MetaData), NewProp_TagSources_MetaData) }; // 2283349618
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_Inner = { "GameplayTagTables", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables = { "GameplayTagTables", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsManager, GameplayTagTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagTables_MetaData), NewProp_GameplayTagTables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_TagSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsManager_Statics::NewProp_GameplayTagTables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayTagsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsManager_Statics::ClassParams = {
	&UGameplayTagsManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayTagsManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTagsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTagsManager()
{
	if (!Z_Registration_Info_UClass_UGameplayTagsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsManager.OuterSingleton, Z_Construct_UClass_UGameplayTagsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTagsManager.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UClass* StaticClass<UGameplayTagsManager>()
{
	return UGameplayTagsManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsManager);
// End Class UGameplayTagsManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameplayTagSourceType_StaticEnum, TEXT("EGameplayTagSourceType"), &Z_Registration_Info_UEnum_EGameplayTagSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2957254201U) },
		{ EGameplayTagSelectionType_StaticEnum, TEXT("EGameplayTagSelectionType"), &Z_Registration_Info_UEnum_EGameplayTagSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1589618259U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayTagTableRow::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics::NewStructOps, TEXT("GameplayTagTableRow"), &Z_Registration_Info_UScriptStruct_GameplayTagTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagTableRow), 1004660030U) },
		{ FRestrictedGameplayTagTableRow::StaticStruct, Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics::NewStructOps, TEXT("RestrictedGameplayTagTableRow"), &Z_Registration_Info_UScriptStruct_RestrictedGameplayTagTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRestrictedGameplayTagTableRow), 151921750U) },
		{ FGameplayTagSource::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagSource_Statics::NewStructOps, TEXT("GameplayTagSource"), &Z_Registration_Info_UScriptStruct_GameplayTagSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagSource), 2283349618U) },
		{ FGameplayTagNode::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagNode_Statics::NewStructOps, TEXT("GameplayTagNode"), &Z_Registration_Info_UScriptStruct_GameplayTagNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagNode), 2492834856U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagsManager, UGameplayTagsManager::StaticClass, TEXT("UGameplayTagsManager"), &Z_Registration_Info_UClass_UGameplayTagsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsManager), 1197275434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_4237466138(TEXT("/Script/GameplayTags"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
