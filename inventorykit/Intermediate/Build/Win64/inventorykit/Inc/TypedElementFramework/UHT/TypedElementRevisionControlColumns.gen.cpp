// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Columns/TypedElementRevisionControlColumns.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementRevisionControlColumns() {}

// Begin Cross Module References
TYPEDELEMENTFRAMEWORK_API UEnum* Z_Construct_UEnum_TypedElementFramework_ESCCModification();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCExternallyEditedTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCExternallyLockedColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCInChangelistTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCLockedTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCNotCurrentTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCRevisionId();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCRevisionIdColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCStagedTag();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCStatusColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSCCUserInfo();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FSCCInChangelistTag
static_assert(std::is_polymorphic<FSCCInChangelistTag>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FSCCInChangelistTag cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCInChangelistTag;
class UScriptStruct* FSCCInChangelistTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCInChangelistTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCInChangelistTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCInChangelistTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCInChangelistTag"));
	}
	return Z_Registration_Info_UScriptStruct_SCCInChangelistTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCInChangelistTag>()
{
	return FSCCInChangelistTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCInChangelistTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "In a changelist" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCInChangelistTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCInChangelistTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
	&NewStructOps,
	"SCCInChangelistTag",
	nullptr,
	0,
	sizeof(FSCCInChangelistTag),
	alignof(FSCCInChangelistTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCInChangelistTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCInChangelistTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCInChangelistTag()
{
	if (!Z_Registration_Info_UScriptStruct_SCCInChangelistTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCInChangelistTag.InnerSingleton, Z_Construct_UScriptStruct_FSCCInChangelistTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCInChangelistTag.InnerSingleton;
}
// End ScriptStruct FSCCInChangelistTag

// Begin ScriptStruct FSCCStagedTag
static_assert(std::is_polymorphic<FSCCStagedTag>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FSCCStagedTag cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCStagedTag;
class UScriptStruct* FSCCStagedTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCStagedTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCStagedTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCStagedTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCStagedTag"));
	}
	return Z_Registration_Info_UScriptStruct_SCCStagedTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCStagedTag>()
{
	return FSCCStagedTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCStagedTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Staged" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCStagedTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCStagedTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
	&NewStructOps,
	"SCCStagedTag",
	nullptr,
	0,
	sizeof(FSCCStagedTag),
	alignof(FSCCStagedTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCStagedTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCStagedTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCStagedTag()
{
	if (!Z_Registration_Info_UScriptStruct_SCCStagedTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCStagedTag.InnerSingleton, Z_Construct_UScriptStruct_FSCCStagedTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCStagedTag.InnerSingleton;
}
// End ScriptStruct FSCCStagedTag

// Begin ScriptStruct FSCCLockedTag
static_assert(std::is_polymorphic<FSCCLockedTag>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FSCCLockedTag cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCLockedTag;
class UScriptStruct* FSCCLockedTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCLockedTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCLockedTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCLockedTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCLockedTag"));
	}
	return Z_Registration_Info_UScriptStruct_SCCLockedTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCLockedTag>()
{
	return FSCCLockedTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCLockedTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Locked by you" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCLockedTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCLockedTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
	&NewStructOps,
	"SCCLockedTag",
	nullptr,
	0,
	sizeof(FSCCLockedTag),
	alignof(FSCCLockedTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCLockedTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCLockedTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCLockedTag()
{
	if (!Z_Registration_Info_UScriptStruct_SCCLockedTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCLockedTag.InnerSingleton, Z_Construct_UScriptStruct_FSCCLockedTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCLockedTag.InnerSingleton;
}
// End ScriptStruct FSCCLockedTag

// Begin ScriptStruct FSCCExternallyEditedTag
static_assert(std::is_polymorphic<FSCCExternallyEditedTag>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FSCCExternallyEditedTag cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCExternallyEditedTag;
class UScriptStruct* FSCCExternallyEditedTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCExternallyEditedTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCExternallyEditedTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCExternallyEditedTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCExternallyEditedTag"));
	}
	return Z_Registration_Info_UScriptStruct_SCCExternallyEditedTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCExternallyEditedTag>()
{
	return FSCCExternallyEditedTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCExternallyEditedTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Edited by others" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCExternallyEditedTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCExternallyEditedTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
	&NewStructOps,
	"SCCExternallyEditedTag",
	nullptr,
	0,
	sizeof(FSCCExternallyEditedTag),
	alignof(FSCCExternallyEditedTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCExternallyEditedTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCExternallyEditedTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCExternallyEditedTag()
{
	if (!Z_Registration_Info_UScriptStruct_SCCExternallyEditedTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCExternallyEditedTag.InnerSingleton, Z_Construct_UScriptStruct_FSCCExternallyEditedTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCExternallyEditedTag.InnerSingleton;
}
// End ScriptStruct FSCCExternallyEditedTag

// Begin ScriptStruct FSCCNotCurrentTag
static_assert(std::is_polymorphic<FSCCNotCurrentTag>() == std::is_polymorphic<FTypedElementDataStorageTag>(), "USTRUCT FSCCNotCurrentTag cannot be polymorphic unless super FTypedElementDataStorageTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCNotCurrentTag;
class UScriptStruct* FSCCNotCurrentTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCNotCurrentTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCNotCurrentTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCNotCurrentTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCNotCurrentTag"));
	}
	return Z_Registration_Info_UScriptStruct_SCCNotCurrentTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCNotCurrentTag>()
{
	return FSCCNotCurrentTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCNotCurrentTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Not at the latest revision" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCNotCurrentTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCNotCurrentTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageTag,
	&NewStructOps,
	"SCCNotCurrentTag",
	nullptr,
	0,
	sizeof(FSCCNotCurrentTag),
	alignof(FSCCNotCurrentTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCNotCurrentTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCNotCurrentTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCNotCurrentTag()
{
	if (!Z_Registration_Info_UScriptStruct_SCCNotCurrentTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCNotCurrentTag.InnerSingleton, Z_Construct_UScriptStruct_FSCCNotCurrentTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCNotCurrentTag.InnerSingleton;
}
// End ScriptStruct FSCCNotCurrentTag

// Begin Enum ESCCModification
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESCCModification;
static UEnum* ESCCModification_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESCCModification.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESCCModification.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TypedElementFramework_ESCCModification, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("ESCCModification"));
	}
	return Z_Registration_Info_UEnum_ESCCModification.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UEnum* StaticEnum<ESCCModification>()
{
	return ESCCModification_StaticEnum();
}
struct Z_Construct_UEnum_TypedElementFramework_ESCCModification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Added.Name", "ESCCModification::Added" },
		{ "Conflicted.Name", "ESCCModification::Conflicted" },
		{ "Modified.Name", "ESCCModification::Modified" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
		{ "Removed.Name", "ESCCModification::Removed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESCCModification::Modified", (int64)ESCCModification::Modified },
		{ "ESCCModification::Added", (int64)ESCCModification::Added },
		{ "ESCCModification::Removed", (int64)ESCCModification::Removed },
		{ "ESCCModification::Conflicted", (int64)ESCCModification::Conflicted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TypedElementFramework_ESCCModification_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	"ESCCModification",
	"ESCCModification",
	Z_Construct_UEnum_TypedElementFramework_ESCCModification_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TypedElementFramework_ESCCModification_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TypedElementFramework_ESCCModification_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TypedElementFramework_ESCCModification_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TypedElementFramework_ESCCModification()
{
	if (!Z_Registration_Info_UEnum_ESCCModification.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESCCModification.InnerSingleton, Z_Construct_UEnum_TypedElementFramework_ESCCModification_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESCCModification.InnerSingleton;
}
// End Enum ESCCModification

// Begin ScriptStruct FSCCStatusColumn
static_assert(std::is_polymorphic<FSCCStatusColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FSCCStatusColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCStatusColumn;
class UScriptStruct* FSCCStatusColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCStatusColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCStatusColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCStatusColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCStatusColumn"));
	}
	return Z_Registration_Info_UScriptStruct_SCCStatusColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCStatusColumn>()
{
	return FSCCStatusColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCStatusColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Revision Control Status" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modification_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Modification_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Modification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCStatusColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::NewProp_Modification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::NewProp_Modification = { "Modification", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSCCStatusColumn, Modification), Z_Construct_UEnum_TypedElementFramework_ESCCModification, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modification_MetaData), NewProp_Modification_MetaData) }; // 2338601580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::NewProp_Modification_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::NewProp_Modification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"SCCStatusColumn",
	Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::PropPointers),
	sizeof(FSCCStatusColumn),
	alignof(FSCCStatusColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCStatusColumn()
{
	if (!Z_Registration_Info_UScriptStruct_SCCStatusColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCStatusColumn.InnerSingleton, Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCStatusColumn.InnerSingleton;
}
// End ScriptStruct FSCCStatusColumn

// Begin ScriptStruct FSCCRevisionId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCRevisionId;
class UScriptStruct* FSCCRevisionId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCRevisionId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCRevisionId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCRevisionId, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCRevisionId"));
	}
	return Z_Registration_Info_UScriptStruct_SCCRevisionId.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCRevisionId>()
{
	return FSCCRevisionId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCRevisionId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCRevisionId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSCCRevisionId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Id, FSCCRevisionId), STRUCT_OFFSET(FSCCRevisionId, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSCCRevisionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSCCRevisionId_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCRevisionId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCRevisionId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"SCCRevisionId",
	Z_Construct_UScriptStruct_FSCCRevisionId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCRevisionId_Statics::PropPointers),
	sizeof(FSCCRevisionId),
	alignof(FSCCRevisionId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCRevisionId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCRevisionId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCRevisionId()
{
	if (!Z_Registration_Info_UScriptStruct_SCCRevisionId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCRevisionId.InnerSingleton, Z_Construct_UScriptStruct_FSCCRevisionId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCRevisionId.InnerSingleton;
}
// End ScriptStruct FSCCRevisionId

// Begin ScriptStruct FSCCRevisionIdColumn
static_assert(std::is_polymorphic<FSCCRevisionIdColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FSCCRevisionIdColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCRevisionIdColumn;
class UScriptStruct* FSCCRevisionIdColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCRevisionIdColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCRevisionIdColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCRevisionIdColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCRevisionIdColumn"));
	}
	return Z_Registration_Info_UScriptStruct_SCCRevisionIdColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCRevisionIdColumn>()
{
	return FSCCRevisionIdColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Revision ID" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevisionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RevisionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCRevisionIdColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::NewProp_RevisionId = { "RevisionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSCCRevisionIdColumn, RevisionId), Z_Construct_UScriptStruct_FSCCRevisionId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevisionId_MetaData), NewProp_RevisionId_MetaData) }; // 733909725
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::NewProp_RevisionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"SCCRevisionIdColumn",
	Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::PropPointers),
	sizeof(FSCCRevisionIdColumn),
	alignof(FSCCRevisionIdColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCRevisionIdColumn()
{
	if (!Z_Registration_Info_UScriptStruct_SCCRevisionIdColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCRevisionIdColumn.InnerSingleton, Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCRevisionIdColumn.InnerSingleton;
}
// End ScriptStruct FSCCRevisionIdColumn

// Begin ScriptStruct FSCCExternalRevisionIdColumn
static_assert(std::is_polymorphic<FSCCExternalRevisionIdColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FSCCExternalRevisionIdColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCExternalRevisionIdColumn;
class UScriptStruct* FSCCExternalRevisionIdColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCExternalRevisionIdColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCExternalRevisionIdColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCExternalRevisionIdColumn"));
	}
	return Z_Registration_Info_UScriptStruct_SCCExternalRevisionIdColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCExternalRevisionIdColumn>()
{
	return FSCCExternalRevisionIdColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Revision ID from server" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevisionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RevisionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCExternalRevisionIdColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::NewProp_RevisionId = { "RevisionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSCCExternalRevisionIdColumn, RevisionId), Z_Construct_UScriptStruct_FSCCRevisionId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevisionId_MetaData), NewProp_RevisionId_MetaData) }; // 733909725
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::NewProp_RevisionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"SCCExternalRevisionIdColumn",
	Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::PropPointers),
	sizeof(FSCCExternalRevisionIdColumn),
	alignof(FSCCExternalRevisionIdColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn()
{
	if (!Z_Registration_Info_UScriptStruct_SCCExternalRevisionIdColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCExternalRevisionIdColumn.InnerSingleton, Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCExternalRevisionIdColumn.InnerSingleton;
}
// End ScriptStruct FSCCExternalRevisionIdColumn

// Begin ScriptStruct FSCCUserInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCUserInfo;
class UScriptStruct* FSCCUserInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCUserInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCUserInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCUserInfo, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCUserInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SCCUserInfo.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCUserInfo>()
{
	return FSCCUserInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCUserInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCUserInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSCCUserInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSCCUserInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSCCUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSCCUserInfo_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCUserInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCUserInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"SCCUserInfo",
	Z_Construct_UScriptStruct_FSCCUserInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCUserInfo_Statics::PropPointers),
	sizeof(FSCCUserInfo),
	alignof(FSCCUserInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCUserInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCUserInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCUserInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SCCUserInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCUserInfo.InnerSingleton, Z_Construct_UScriptStruct_FSCCUserInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCUserInfo.InnerSingleton;
}
// End ScriptStruct FSCCUserInfo

// Begin ScriptStruct FSCCExternallyLockedColumn
static_assert(std::is_polymorphic<FSCCExternallyLockedColumn>() == std::is_polymorphic<FTypedElementDataStorageColumn>(), "USTRUCT FSCCExternallyLockedColumn cannot be polymorphic unless super FTypedElementDataStorageColumn is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SCCExternallyLockedColumn;
class UScriptStruct* FSCCExternallyLockedColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SCCExternallyLockedColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SCCExternallyLockedColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSCCExternallyLockedColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("SCCExternallyLockedColumn"));
	}
	return Z_Registration_Info_UScriptStruct_SCCExternallyLockedColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FSCCExternallyLockedColumn>()
{
	return FSCCExternallyLockedColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Locked by others" },
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedBy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Columns/TypedElementRevisionControlColumns.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSCCExternallyLockedColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::NewProp_LockedBy = { "LockedBy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSCCExternallyLockedColumn, LockedBy), Z_Construct_UScriptStruct_FSCCUserInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedBy_MetaData), NewProp_LockedBy_MetaData) }; // 86942221
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::NewProp_LockedBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	Z_Construct_UScriptStruct_FTypedElementDataStorageColumn,
	&NewStructOps,
	"SCCExternallyLockedColumn",
	Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::PropPointers),
	sizeof(FSCCExternallyLockedColumn),
	alignof(FSCCExternallyLockedColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSCCExternallyLockedColumn()
{
	if (!Z_Registration_Info_UScriptStruct_SCCExternallyLockedColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SCCExternallyLockedColumn.InnerSingleton, Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SCCExternallyLockedColumn.InnerSingleton;
}
// End ScriptStruct FSCCExternallyLockedColumn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESCCModification_StaticEnum, TEXT("ESCCModification"), &Z_Registration_Info_UEnum_ESCCModification, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2338601580U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSCCInChangelistTag::StaticStruct, Z_Construct_UScriptStruct_FSCCInChangelistTag_Statics::NewStructOps, TEXT("SCCInChangelistTag"), &Z_Registration_Info_UScriptStruct_SCCInChangelistTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCInChangelistTag), 1248002788U) },
		{ FSCCStagedTag::StaticStruct, Z_Construct_UScriptStruct_FSCCStagedTag_Statics::NewStructOps, TEXT("SCCStagedTag"), &Z_Registration_Info_UScriptStruct_SCCStagedTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCStagedTag), 2286767257U) },
		{ FSCCLockedTag::StaticStruct, Z_Construct_UScriptStruct_FSCCLockedTag_Statics::NewStructOps, TEXT("SCCLockedTag"), &Z_Registration_Info_UScriptStruct_SCCLockedTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCLockedTag), 3827816756U) },
		{ FSCCExternallyEditedTag::StaticStruct, Z_Construct_UScriptStruct_FSCCExternallyEditedTag_Statics::NewStructOps, TEXT("SCCExternallyEditedTag"), &Z_Registration_Info_UScriptStruct_SCCExternallyEditedTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCExternallyEditedTag), 1815270501U) },
		{ FSCCNotCurrentTag::StaticStruct, Z_Construct_UScriptStruct_FSCCNotCurrentTag_Statics::NewStructOps, TEXT("SCCNotCurrentTag"), &Z_Registration_Info_UScriptStruct_SCCNotCurrentTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCNotCurrentTag), 2521031947U) },
		{ FSCCStatusColumn::StaticStruct, Z_Construct_UScriptStruct_FSCCStatusColumn_Statics::NewStructOps, TEXT("SCCStatusColumn"), &Z_Registration_Info_UScriptStruct_SCCStatusColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCStatusColumn), 2929551133U) },
		{ FSCCRevisionId::StaticStruct, Z_Construct_UScriptStruct_FSCCRevisionId_Statics::NewStructOps, TEXT("SCCRevisionId"), &Z_Registration_Info_UScriptStruct_SCCRevisionId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCRevisionId), 733909725U) },
		{ FSCCRevisionIdColumn::StaticStruct, Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics::NewStructOps, TEXT("SCCRevisionIdColumn"), &Z_Registration_Info_UScriptStruct_SCCRevisionIdColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCRevisionIdColumn), 1602302412U) },
		{ FSCCExternalRevisionIdColumn::StaticStruct, Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics::NewStructOps, TEXT("SCCExternalRevisionIdColumn"), &Z_Registration_Info_UScriptStruct_SCCExternalRevisionIdColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCExternalRevisionIdColumn), 143718868U) },
		{ FSCCUserInfo::StaticStruct, Z_Construct_UScriptStruct_FSCCUserInfo_Statics::NewStructOps, TEXT("SCCUserInfo"), &Z_Registration_Info_UScriptStruct_SCCUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCUserInfo), 86942221U) },
		{ FSCCExternallyLockedColumn::StaticStruct, Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics::NewStructOps, TEXT("SCCExternallyLockedColumn"), &Z_Registration_Info_UScriptStruct_SCCExternallyLockedColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSCCExternallyLockedColumn), 3760491410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_1764605733(TEXT("/Script/TypedElementFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
