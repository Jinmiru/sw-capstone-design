// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraAssetTagDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraAssetTagDefinitions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraAssetTagDefinitions();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraAssetTagDefinitions_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAssetLibraryAssetTypes();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraAssetLibraryAssetTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraAssetLibraryAssetTypes;
static UEnum* ENiagaraAssetLibraryAssetTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraAssetLibraryAssetTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraAssetLibraryAssetTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraAssetLibraryAssetTypes, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraAssetLibraryAssetTypes"));
	}
	return Z_Registration_Info_UEnum_ENiagaraAssetLibraryAssetTypes.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraAssetLibraryAssetTypes>()
{
	return ENiagaraAssetLibraryAssetTypes_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraAssetLibraryAssetTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Emitters.Name", "ENiagaraAssetLibraryAssetTypes::Emitters" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "Scripts.Name", "ENiagaraAssetLibraryAssetTypes::Scripts" },
		{ "Systems.Name", "ENiagaraAssetLibraryAssetTypes::Systems" },
		{ "UseEnumValuesAsMaskValuesInEditor", "TRUE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraAssetLibraryAssetTypes::Emitters", (int64)ENiagaraAssetLibraryAssetTypes::Emitters },
		{ "ENiagaraAssetLibraryAssetTypes::Systems", (int64)ENiagaraAssetLibraryAssetTypes::Systems },
		{ "ENiagaraAssetLibraryAssetTypes::Scripts", (int64)ENiagaraAssetLibraryAssetTypes::Scripts },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraAssetLibraryAssetTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraAssetLibraryAssetTypes",
	"ENiagaraAssetLibraryAssetTypes",
	Z_Construct_UEnum_Niagara_ENiagaraAssetLibraryAssetTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraAssetLibraryAssetTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraAssetLibraryAssetTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraAssetLibraryAssetTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraAssetLibraryAssetTypes()
{
	if (!Z_Registration_Info_UEnum_ENiagaraAssetLibraryAssetTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraAssetLibraryAssetTypes.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraAssetLibraryAssetTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraAssetLibraryAssetTypes.InnerSingleton;
}
// End Enum ENiagaraAssetLibraryAssetTypes

// Begin Enum ENiagaraAssetTagDefinitionImportance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraAssetTagDefinitionImportance;
static UEnum* ENiagaraAssetTagDefinitionImportance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraAssetTagDefinitionImportance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraAssetTagDefinitionImportance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraAssetTagDefinitionImportance"));
	}
	return Z_Registration_Info_UEnum_ENiagaraAssetTagDefinitionImportance.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraAssetTagDefinitionImportance>()
{
	return ENiagaraAssetTagDefinitionImportance_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "Primary.Name", "ENiagaraAssetTagDefinitionImportance::Primary" },
		{ "Primary.ToolTip", "This Asset Tag Definition is considered important and will get displayed in the primary filter UI in the Niagara Asset Browsers." },
		{ "Secondary.Name", "ENiagaraAssetTagDefinitionImportance::Secondary" },
		{ "Secondary.ToolTip", "This Asset Tag Definition is considered less important and will only get displayed in the additional drop down filter UI in the Niagara Asset Browsers." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraAssetTagDefinitionImportance::Primary", (int64)ENiagaraAssetTagDefinitionImportance::Primary },
		{ "ENiagaraAssetTagDefinitionImportance::Secondary", (int64)ENiagaraAssetTagDefinitionImportance::Secondary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraAssetTagDefinitionImportance",
	"ENiagaraAssetTagDefinitionImportance",
	Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance()
{
	if (!Z_Registration_Info_UEnum_ENiagaraAssetTagDefinitionImportance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraAssetTagDefinitionImportance.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraAssetTagDefinitionImportance.InnerSingleton;
}
// End Enum ENiagaraAssetTagDefinitionImportance

// Begin ScriptStruct FNiagaraAssetTagDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinition;
class UScriptStruct* FNiagaraAssetTagDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraAssetTagDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinition.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraAssetTagDefinition>()
{
	return FNiagaraAssetTagDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** An Asset Tag Definition defines a tag that can be added to various Niagara assets for sorting & filtering purposes. */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "An Asset Tag Definition defines a tag that can be added to various Niagara assets for sorting & filtering purposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTag_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The Display Name used for this tag. */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "The Display Name used for this tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Niagara.ENiagaraAssetLibraryAssetTypes" },
		{ "Category", "Properties" },
		{ "Comment", "/** Select the asset types this tag can apply to. This is used to hide tags that can never apply for a given type. */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "Select the asset types this tag can apply to. This is used to hide tags that can never apply for a given type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Further explanation of what this tag is about. */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "MultiLine", "" },
		{ "ToolTip", "Further explanation of what this tag is about." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Whether this tag should be shown directly or in the drop down for additional filters. */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "Whether this tag should be shown directly or in the drop down for additional filters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The color used in UI to represent this tag. */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "The color used in UI to represent this tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagGuid_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The Tag Guid identifies this tag. This makes it possible to change the AssetTag name without it affecting functionality. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "The Tag Guid identifies this tag. This makes it possible to change the AssetTag name without it affecting functionality." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_AssetTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetFlags;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraAssetTagDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_AssetTag = { "AssetTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraAssetTagDefinition, AssetTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTag_MetaData), NewProp_AssetTag_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_AssetFlags = { "AssetFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraAssetTagDefinition, AssetFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetFlags_MetaData), NewProp_AssetFlags_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraAssetTagDefinition, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraAssetTagDefinition, DisplayType), Z_Construct_UEnum_Niagara_ENiagaraAssetTagDefinitionImportance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayType_MetaData), NewProp_DisplayType_MetaData) }; // 3531327477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraAssetTagDefinition, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_TagGuid = { "TagGuid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraAssetTagDefinition, TagGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagGuid_MetaData), NewProp_TagGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_AssetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_AssetFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_DisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewProp_TagGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraAssetTagDefinition",
	Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::PropPointers),
	sizeof(FNiagaraAssetTagDefinition),
	alignof(FNiagaraAssetTagDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinition.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinition.InnerSingleton;
}
// End ScriptStruct FNiagaraAssetTagDefinition

// Begin ScriptStruct FNiagaraAssetTagDefinitionReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinitionReference;
class UScriptStruct* FNiagaraAssetTagDefinitionReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinitionReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinitionReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraAssetTagDefinitionReference"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinitionReference.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraAssetTagDefinitionReference>()
{
	return FNiagaraAssetTagDefinitionReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A Tag Definition Reference stores the guid of a Tag Definition. This is what assets should be storing. */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "A Tag Definition Reference stores the guid of a Tag Definition. This is what assets should be storing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTagDefinitionGuid_MetaData[] = {
		{ "Category", "Asset Tags" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTagDefinitionGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraAssetTagDefinitionReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::NewProp_AssetTagDefinitionGuid = { "AssetTagDefinitionGuid", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraAssetTagDefinitionReference, AssetTagDefinitionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTagDefinitionGuid_MetaData), NewProp_AssetTagDefinitionGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::NewProp_AssetTagDefinitionGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraAssetTagDefinitionReference",
	Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::PropPointers),
	sizeof(FNiagaraAssetTagDefinitionReference),
	alignof(FNiagaraAssetTagDefinitionReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinitionReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinitionReference.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinitionReference.InnerSingleton;
}
// End ScriptStruct FNiagaraAssetTagDefinitionReference

// Begin Class UNiagaraAssetTagDefinitions
void UNiagaraAssetTagDefinitions::StaticRegisterNativesUNiagaraAssetTagDefinitions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraAssetTagDefinitions);
UClass* Z_Construct_UClass_UNiagaraAssetTagDefinitions_NoRegister()
{
	return UNiagaraAssetTagDefinitions::StaticClass();
}
struct Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** An asset to define multiple tag definitions; used to sort and categorize Niagara assets. */" },
		{ "IncludePath", "NiagaraAssetTagDefinitions.h" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "An asset to define multiple tag definitions; used to sort and categorize Niagara assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The display name to use when listing this asset in the Niagara Asset Browser */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "The display name to use when listing this asset in the Niagara Asset Browser" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** A description for this group of tags. Used for tooltips. */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "A description for this group of tags. Used for tooltips." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagDefinitions_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "TitleProperty", "AssetTag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayTagsAsFlatList_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** If true, no 'parent' entry for this asset will be displayed in the Niagara Asset Browser. Instead a flat list of the contained tags will be added. */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "If true, no 'parent' entry for this asset will be displayed in the Niagara Asset Browser. Instead a flat list of the contained tags will be added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Tags are sorted by asset sort order first, then individually. That means tags of asset with sort order [0] come before tags of asset with sort order [1]. */" },
		{ "ModuleRelativePath", "Public/NiagaraAssetTagDefinitions.h" },
		{ "ToolTip", "Tags are sorted by asset sort order first, then individually. That means tags of asset with sort order [0] come before tags of asset with sort order [1]." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TagDefinitions;
	static void NewProp_bDisplayTagsAsFlatList_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayTagsAsFlatList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraAssetTagDefinitions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraAssetTagDefinitions, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraAssetTagDefinitions, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_TagDefinitions_Inner = { "TagDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition, METADATA_PARAMS(0, nullptr) }; // 2514063523
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_TagDefinitions = { "TagDefinitions", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraAssetTagDefinitions, TagDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagDefinitions_MetaData), NewProp_TagDefinitions_MetaData) }; // 2514063523
void Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_bDisplayTagsAsFlatList_SetBit(void* Obj)
{
	((UNiagaraAssetTagDefinitions*)Obj)->bDisplayTagsAsFlatList = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_bDisplayTagsAsFlatList = { "bDisplayTagsAsFlatList", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraAssetTagDefinitions), &Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_bDisplayTagsAsFlatList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayTagsAsFlatList_MetaData), NewProp_bDisplayTagsAsFlatList_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraAssetTagDefinitions, SortOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortOrder_MetaData), NewProp_SortOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_TagDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_TagDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_bDisplayTagsAsFlatList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::NewProp_SortOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::ClassParams = {
	&UNiagaraAssetTagDefinitions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraAssetTagDefinitions()
{
	if (!Z_Registration_Info_UClass_UNiagaraAssetTagDefinitions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraAssetTagDefinitions.OuterSingleton, Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraAssetTagDefinitions.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraAssetTagDefinitions>()
{
	return UNiagaraAssetTagDefinitions::StaticClass();
}
UNiagaraAssetTagDefinitions::UNiagaraAssetTagDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraAssetTagDefinitions);
UNiagaraAssetTagDefinitions::~UNiagaraAssetTagDefinitions() {}
// End Class UNiagaraAssetTagDefinitions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraAssetLibraryAssetTypes_StaticEnum, TEXT("ENiagaraAssetLibraryAssetTypes"), &Z_Registration_Info_UEnum_ENiagaraAssetLibraryAssetTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1206230849U) },
		{ ENiagaraAssetTagDefinitionImportance_StaticEnum, TEXT("ENiagaraAssetTagDefinitionImportance"), &Z_Registration_Info_UEnum_ENiagaraAssetTagDefinitionImportance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3531327477U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraAssetTagDefinition::StaticStruct, Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics::NewStructOps, TEXT("NiagaraAssetTagDefinition"), &Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraAssetTagDefinition), 2514063523U) },
		{ FNiagaraAssetTagDefinitionReference::StaticStruct, Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics::NewStructOps, TEXT("NiagaraAssetTagDefinitionReference"), &Z_Registration_Info_UScriptStruct_NiagaraAssetTagDefinitionReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraAssetTagDefinitionReference), 304733456U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraAssetTagDefinitions, UNiagaraAssetTagDefinitions::StaticClass, TEXT("UNiagaraAssetTagDefinitions"), &Z_Registration_Info_UClass_UNiagaraAssetTagDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraAssetTagDefinitions), 3345936715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_4210451979(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
