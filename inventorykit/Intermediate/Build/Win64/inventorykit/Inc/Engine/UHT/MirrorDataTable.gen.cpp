// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/MirrorDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorDataTable() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
ENGINE_API UClass* Z_Construct_UClass_UDataTable();
ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable();
ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMirrorRowType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMirrorFindReplaceExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMirrorTableRow();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMirrorRowType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorRowType;
static UEnum* EMirrorRowType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMirrorRowType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMirrorRowType"));
	}
	return Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMirrorRowType::Type>()
{
	return EMirrorRowType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMirrorRowType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimationNotify.Name", "EMirrorRowType::AnimationNotify" },
		{ "Bone.Name", "EMirrorRowType::Bone" },
		{ "Comment", "/** Type referenced by a row in the mirror data table */" },
		{ "Curve.Name", "EMirrorRowType::Curve" },
		{ "Custom.Name", "EMirrorRowType::Custom" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
		{ "SyncMarker.Name", "EMirrorRowType::SyncMarker" },
		{ "ToolTip", "Type referenced by a row in the mirror data table" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMirrorRowType::Bone", (int64)EMirrorRowType::Bone },
		{ "EMirrorRowType::AnimationNotify", (int64)EMirrorRowType::AnimationNotify },
		{ "EMirrorRowType::Curve", (int64)EMirrorRowType::Curve },
		{ "EMirrorRowType::SyncMarker", (int64)EMirrorRowType::SyncMarker },
		{ "EMirrorRowType::Custom", (int64)EMirrorRowType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMirrorRowType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMirrorRowType",
	"EMirrorRowType::Type",
	Z_Construct_UEnum_Engine_EMirrorRowType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMirrorRowType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMirrorRowType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMirrorRowType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMirrorRowType()
{
	if (!Z_Registration_Info_UEnum_EMirrorRowType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorRowType.InnerSingleton, Z_Construct_UEnum_Engine_EMirrorRowType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMirrorRowType.InnerSingleton;
}
// End Enum EMirrorRowType

// Begin Enum EMirrorFindReplaceMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorFindReplaceMethod;
static UEnum* EMirrorFindReplaceMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMirrorFindReplaceMethod"));
	}
	return Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMirrorFindReplaceMethod::Type>()
{
	return EMirrorFindReplaceMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Find and Replace Method for FMirrorFindReplaceExpression. */" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
		{ "Prefix.Comment", "/** Only find and replace matching strings at the start of the name  */" },
		{ "Prefix.Name", "EMirrorFindReplaceMethod::Prefix" },
		{ "Prefix.ToolTip", "Only find and replace matching strings at the start of the name" },
		{ "RegularExpression.Comment", "/** Use regular expressions for find and replace, including support for captures $1 - $10 */" },
		{ "RegularExpression.Name", "EMirrorFindReplaceMethod::RegularExpression" },
		{ "RegularExpression.ToolTip", "Use regular expressions for find and replace, including support for captures $1 - $10" },
		{ "Suffix.Comment", "/** Only find and replace matching strings at the end of the name  */" },
		{ "Suffix.Name", "EMirrorFindReplaceMethod::Suffix" },
		{ "Suffix.ToolTip", "Only find and replace matching strings at the end of the name" },
		{ "ToolTip", "Find and Replace Method for FMirrorFindReplaceExpression." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMirrorFindReplaceMethod::Prefix", (int64)EMirrorFindReplaceMethod::Prefix },
		{ "EMirrorFindReplaceMethod::Suffix", (int64)EMirrorFindReplaceMethod::Suffix },
		{ "EMirrorFindReplaceMethod::RegularExpression", (int64)EMirrorFindReplaceMethod::RegularExpression },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMirrorFindReplaceMethod",
	"EMirrorFindReplaceMethod::Type",
	Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod()
{
	if (!Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.InnerSingleton, Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.InnerSingleton;
}
// End Enum EMirrorFindReplaceMethod

// Begin ScriptStruct FMirrorTableRow
static_assert(std::is_polymorphic<FMirrorTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMirrorTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MirrorTableRow;
class UScriptStruct* FMirrorTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MirrorTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MirrorTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMirrorTableRow, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MirrorTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_MirrorTableRow.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMirrorTableRow>()
{
	return FMirrorTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMirrorTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**  Base Mirror Table containing all data required by the animation mirroring system. */" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
		{ "ToolTip", "Base Mirror Table containing all data required by the animation mirroring system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirroredName_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorEntryType_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MirroredName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorEntryType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMirrorTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMirrorTableRow, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirroredName = { "MirroredName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMirrorTableRow, MirroredName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirroredName_MetaData), NewProp_MirroredName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirrorEntryType = { "MirrorEntryType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMirrorTableRow, MirrorEntryType), Z_Construct_UEnum_Engine_EMirrorRowType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorEntryType_MetaData), NewProp_MirrorEntryType_MetaData) }; // 74619958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMirrorTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirroredName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewProp_MirrorEntryType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMirrorTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MirrorTableRow",
	Z_Construct_UScriptStruct_FMirrorTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::PropPointers),
	sizeof(FMirrorTableRow),
	alignof(FMirrorTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMirrorTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMirrorTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_MirrorTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MirrorTableRow.InnerSingleton, Z_Construct_UScriptStruct_FMirrorTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MirrorTableRow.InnerSingleton;
}
// End ScriptStruct FMirrorTableRow

// Begin ScriptStruct FMirrorFindReplaceExpression
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression;
class UScriptStruct* FMirrorFindReplaceExpression::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MirrorFindReplaceExpression"));
	}
	return Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMirrorFindReplaceExpression>()
{
	return FMirrorFindReplaceExpression::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Find and Replace expressions used to generate mirror tables*/" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
		{ "ToolTip", "Find and Replace expressions used to generate mirror tables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FindExpression_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceExpression_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FindReplaceMethod_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FindExpression;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReplaceExpression;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FindReplaceMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMirrorFindReplaceExpression>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindExpression = { "FindExpression", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMirrorFindReplaceExpression, FindExpression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FindExpression_MetaData), NewProp_FindExpression_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_ReplaceExpression = { "ReplaceExpression", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMirrorFindReplaceExpression, ReplaceExpression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplaceExpression_MetaData), NewProp_ReplaceExpression_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindReplaceMethod = { "FindReplaceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMirrorFindReplaceExpression, FindReplaceMethod), Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FindReplaceMethod_MetaData), NewProp_FindReplaceMethod_MetaData) }; // 1789798695
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindExpression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_ReplaceExpression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewProp_FindReplaceMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MirrorFindReplaceExpression",
	Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::PropPointers),
	sizeof(FMirrorFindReplaceExpression),
	alignof(FMirrorFindReplaceExpression),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMirrorFindReplaceExpression()
{
	if (!Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.InnerSingleton, Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression.InnerSingleton;
}
// End ScriptStruct FMirrorFindReplaceExpression

// Begin Class UMirrorDataTable
void UMirrorDataTable::StaticRegisterNativesUMirrorDataTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorDataTable);
UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister()
{
	return UMirrorDataTable::StaticClass();
}
struct Z_Construct_UClass_UMirrorDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* AutoExpandCategories = \"MirrorDataTable,ImportOptions\"*/" },
		{ "HideCategories", "ImportOptions ImportSource" },
		{ "IncludePath", "Animation/MirrorDataTable.h" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AutoExpandCategories = \"MirrorDataTable,ImportOptions\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorFindReplaceExpressions_MetaData[] = {
		{ "Category", "CreateTable" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorRootMotion_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Classes/Animation/MirrorDataTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorFindReplaceExpressions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MirrorFindReplaceExpressions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
	static void NewProp_bMirrorRootMotion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorRootMotion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorDataTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions_Inner = { "MirrorFindReplaceExpressions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMirrorFindReplaceExpression, METADATA_PARAMS(0, nullptr) }; // 3197240219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions = { "MirrorFindReplaceExpressions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorDataTable, MirrorFindReplaceExpressions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorFindReplaceExpressions_MetaData), NewProp_MirrorFindReplaceExpressions_MetaData) }; // 3197240219
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorDataTable, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorAxis_MetaData), NewProp_MirrorAxis_MetaData) }; // 342925220
void Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_bMirrorRootMotion_SetBit(void* Obj)
{
	((UMirrorDataTable*)Obj)->bMirrorRootMotion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_bMirrorRootMotion = { "bMirrorRootMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMirrorDataTable), &Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_bMirrorRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirrorRootMotion_MetaData), NewProp_bMirrorRootMotion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0114010000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorDataTable, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorFindReplaceExpressions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_MirrorAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_bMirrorRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_Skeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMirrorDataTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataTable,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorDataTable_Statics::ClassParams = {
	&UMirrorDataTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMirrorDataTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTable_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UMirrorDataTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMirrorDataTable()
{
	if (!Z_Registration_Info_UClass_UMirrorDataTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorDataTable.OuterSingleton, Z_Construct_UClass_UMirrorDataTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMirrorDataTable.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMirrorDataTable>()
{
	return UMirrorDataTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorDataTable);
UMirrorDataTable::~UMirrorDataTable() {}
// End Class UMirrorDataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMirrorRowType_StaticEnum, TEXT("EMirrorRowType"), &Z_Registration_Info_UEnum_EMirrorRowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 74619958U) },
		{ EMirrorFindReplaceMethod_StaticEnum, TEXT("EMirrorFindReplaceMethod"), &Z_Registration_Info_UEnum_EMirrorFindReplaceMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1789798695U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMirrorTableRow::StaticStruct, Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewStructOps, TEXT("MirrorTableRow"), &Z_Registration_Info_UScriptStruct_MirrorTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMirrorTableRow), 299950636U) },
		{ FMirrorFindReplaceExpression::StaticStruct, Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewStructOps, TEXT("MirrorFindReplaceExpression"), &Z_Registration_Info_UScriptStruct_MirrorFindReplaceExpression, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMirrorFindReplaceExpression), 3197240219U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMirrorDataTable, UMirrorDataTable::StaticClass, TEXT("UMirrorDataTable"), &Z_Registration_Info_UClass_UMirrorDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorDataTable), 811183194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_1689559627(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
