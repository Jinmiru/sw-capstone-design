// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/Localization/Public/LocalizationTargetTypes.h"
#include "Developer/Localization/Public/LocalizationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizationTargetTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTarget();
LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTarget_NoRegister();
LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTargetSet();
LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTargetSet_NoRegister();
LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot();
LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus();
LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy();
LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode();
LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_EPortableObjectFormat();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCultureStatistics();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextExcludePath();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFileExtension();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextIncludePath();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextSearchDirectory();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationCompilationSettings();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationExportingSettings();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyName();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern();
UPackage* Z_Construct_UPackage__Script_Localization();
// End Cross Module References

// Begin Enum ELocalizationTargetConflictStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocalizationTargetConflictStatus;
static UEnum* ELocalizationTargetConflictStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocalizationTargetConflictStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocalizationTargetConflictStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizationTargetConflictStatus"));
	}
	return Z_Registration_Info_UEnum_ELocalizationTargetConflictStatus.OuterSingleton;
}
template<> LOCALIZATION_API UEnum* StaticEnum<ELocalizationTargetConflictStatus>()
{
	return ELocalizationTargetConflictStatus_StaticEnum();
}
struct Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Clear.Comment", "/** The localization target is clear of conflicts. */" },
		{ "Clear.Name", "ELocalizationTargetConflictStatus::Clear" },
		{ "Clear.ToolTip", "The localization target is clear of conflicts." },
		{ "ConflictsPresent.Comment", "/** The are outstanding conflicts present in this localization target. */" },
		{ "ConflictsPresent.Name", "ELocalizationTargetConflictStatus::ConflictsPresent" },
		{ "ConflictsPresent.ToolTip", "The are outstanding conflicts present in this localization target." },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "Unknown.Comment", "/** The status of conflicts in this localization target could not be determined. */" },
		{ "Unknown.Name", "ELocalizationTargetConflictStatus::Unknown" },
		{ "Unknown.ToolTip", "The status of conflicts in this localization target could not be determined." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocalizationTargetConflictStatus::Unknown", (int64)ELocalizationTargetConflictStatus::Unknown },
		{ "ELocalizationTargetConflictStatus::ConflictsPresent", (int64)ELocalizationTargetConflictStatus::ConflictsPresent },
		{ "ELocalizationTargetConflictStatus::Clear", (int64)ELocalizationTargetConflictStatus::Clear },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	"ELocalizationTargetConflictStatus",
	"ELocalizationTargetConflictStatus",
	Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus()
{
	if (!Z_Registration_Info_UEnum_ELocalizationTargetConflictStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocalizationTargetConflictStatus.InnerSingleton, Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocalizationTargetConflictStatus.InnerSingleton;
}
// End Enum ELocalizationTargetConflictStatus

// Begin Enum ELocalizationGatherPathRoot
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocalizationGatherPathRoot;
static UEnum* ELocalizationGatherPathRoot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocalizationGatherPathRoot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocalizationGatherPathRoot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizationGatherPathRoot"));
	}
	return Z_Registration_Info_UEnum_ELocalizationGatherPathRoot.OuterSingleton;
}
template<> LOCALIZATION_API UEnum* StaticEnum<ELocalizationGatherPathRoot>()
{
	return ELocalizationGatherPathRoot_StaticEnum();
}
struct Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Automatically select Engine or Project based on which set the target belongs to */" },
		{ "Auto.Name", "ELocalizationGatherPathRoot::Auto" },
		{ "Auto.ToolTip", "Automatically select Engine or Project based on which set the target belongs to" },
		{ "Engine.Comment", "/** Path is relative to the Engine directory */" },
		{ "Engine.Name", "ELocalizationGatherPathRoot::Engine" },
		{ "Engine.ToolTip", "Path is relative to the Engine directory" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "Project.Comment", "/** Path is relative to the Project directory */" },
		{ "Project.Name", "ELocalizationGatherPathRoot::Project" },
		{ "Project.ToolTip", "Path is relative to the Project directory" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocalizationGatherPathRoot::Auto", (int64)ELocalizationGatherPathRoot::Auto },
		{ "ELocalizationGatherPathRoot::Engine", (int64)ELocalizationGatherPathRoot::Engine },
		{ "ELocalizationGatherPathRoot::Project", (int64)ELocalizationGatherPathRoot::Project },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	"ELocalizationGatherPathRoot",
	"ELocalizationGatherPathRoot",
	Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot()
{
	if (!Z_Registration_Info_UEnum_ELocalizationGatherPathRoot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocalizationGatherPathRoot.InnerSingleton, Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocalizationGatherPathRoot.InnerSingleton;
}
// End Enum ELocalizationGatherPathRoot

// Begin ScriptStruct FGatherTextSearchDirectory
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GatherTextSearchDirectory;
class UScriptStruct* FGatherTextSearchDirectory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextSearchDirectory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GatherTextSearchDirectory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextSearchDirectory, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextSearchDirectory"));
	}
	return Z_Registration_Info_UScriptStruct_GatherTextSearchDirectory.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextSearchDirectory>()
{
	return FGatherTextSearchDirectory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathRoot_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathRoot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathRoot;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextSearchDirectory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot = { "PathRoot", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextSearchDirectory, PathRoot), Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathRoot_MetaData), NewProp_PathRoot_MetaData) }; // 452449016
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextSearchDirectory, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_PathRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"GatherTextSearchDirectory",
	Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::PropPointers),
	sizeof(FGatherTextSearchDirectory),
	alignof(FGatherTextSearchDirectory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGatherTextSearchDirectory()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextSearchDirectory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GatherTextSearchDirectory.InnerSingleton, Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GatherTextSearchDirectory.InnerSingleton;
}
// End ScriptStruct FGatherTextSearchDirectory

// Begin ScriptStruct FGatherTextIncludePath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GatherTextIncludePath;
class UScriptStruct* FGatherTextIncludePath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextIncludePath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GatherTextIncludePath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextIncludePath, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextIncludePath"));
	}
	return Z_Registration_Info_UScriptStruct_GatherTextIncludePath.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextIncludePath>()
{
	return FGatherTextIncludePath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathRoot_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathRoot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathRoot;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Pattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextIncludePath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot = { "PathRoot", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextIncludePath, PathRoot), Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathRoot_MetaData), NewProp_PathRoot_MetaData) }; // 452449016
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextIncludePath, Pattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pattern_MetaData), NewProp_Pattern_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_PathRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewProp_Pattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"GatherTextIncludePath",
	Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::PropPointers),
	sizeof(FGatherTextIncludePath),
	alignof(FGatherTextIncludePath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGatherTextIncludePath()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextIncludePath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GatherTextIncludePath.InnerSingleton, Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GatherTextIncludePath.InnerSingleton;
}
// End ScriptStruct FGatherTextIncludePath

// Begin ScriptStruct FGatherTextExcludePath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GatherTextExcludePath;
class UScriptStruct* FGatherTextExcludePath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextExcludePath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GatherTextExcludePath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextExcludePath, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextExcludePath"));
	}
	return Z_Registration_Info_UScriptStruct_GatherTextExcludePath.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextExcludePath>()
{
	return FGatherTextExcludePath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathRoot_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathRoot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathRoot;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Pattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextExcludePath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot = { "PathRoot", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextExcludePath, PathRoot), Z_Construct_UEnum_Localization_ELocalizationGatherPathRoot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathRoot_MetaData), NewProp_PathRoot_MetaData) }; // 452449016
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextExcludePath, Pattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pattern_MetaData), NewProp_Pattern_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_PathRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewProp_Pattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"GatherTextExcludePath",
	Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::PropPointers),
	sizeof(FGatherTextExcludePath),
	alignof(FGatherTextExcludePath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGatherTextExcludePath()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextExcludePath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GatherTextExcludePath.InnerSingleton, Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GatherTextExcludePath.InnerSingleton;
}
// End ScriptStruct FGatherTextExcludePath

// Begin ScriptStruct FGatherTextFileExtension
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GatherTextFileExtension;
class UScriptStruct* FGatherTextFileExtension::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextFileExtension.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GatherTextFileExtension.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFileExtension, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFileExtension"));
	}
	return Z_Registration_Info_UScriptStruct_GatherTextFileExtension.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextFileExtension>()
{
	return FGatherTextFileExtension::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Pattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFileExtension>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFileExtension, Pattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pattern_MetaData), NewProp_Pattern_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::NewProp_Pattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"GatherTextFileExtension",
	Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::PropPointers),
	sizeof(FGatherTextFileExtension),
	alignof(FGatherTextFileExtension),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFileExtension()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextFileExtension.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GatherTextFileExtension.InnerSingleton, Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GatherTextFileExtension.InnerSingleton;
}
// End ScriptStruct FGatherTextFileExtension

// Begin ScriptStruct FGatherTextFromTextFilesConfiguration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GatherTextFromTextFilesConfiguration;
class UScriptStruct* FGatherTextFromTextFilesConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextFromTextFilesConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GatherTextFromTextFilesConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromTextFilesConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_GatherTextFromTextFilesConfiguration.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextFromTextFilesConfiguration>()
{
	return FGatherTextFromTextFilesConfiguration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/* If enabled, text from text files will be gathered according to this configuration. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, text from text files will be gathered according to this configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchDirectories_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* The paths of directories to be searched recursively for text files, specified relative to the project's root, which may be parsed for text to gather. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The paths of directories to be searched recursively for text files, specified relative to the project's root, which may be parsed for text to gather." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludePathWildcards_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Text files whose paths match these wildcard patterns will be excluded from gathering. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Text files whose paths match these wildcard patterns will be excluded from gathering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileExtensions_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Text files whose names match these wildcard patterns may be parsed for text to gather. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Text files whose names match these wildcard patterns may be parsed for text to gather." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldGatherFromEditorOnlyData_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* If enabled, data that is specified as editor-only may be processed for gathering. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, data that is specified as editor-only may be processed for gathering." },
	};
#endif // WITH_METADATA
	static void NewProp_IsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchDirectories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SearchDirectories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludePathWildcards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludePathWildcards;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileExtensions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FileExtensions;
	static void NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldGatherFromEditorOnlyData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFromTextFilesConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled_SetBit(void* Obj)
{
	((FGatherTextFromTextFilesConfiguration*)Obj)->IsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGatherTextFromTextFilesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEnabled_MetaData), NewProp_IsEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories_Inner = { "SearchDirectories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGatherTextSearchDirectory, METADATA_PARAMS(0, nullptr) }; // 1177181687
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories = { "SearchDirectories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromTextFilesConfiguration, SearchDirectories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchDirectories_MetaData), NewProp_SearchDirectories_MetaData) }; // 1177181687
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards_Inner = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGatherTextExcludePath, METADATA_PARAMS(0, nullptr) }; // 1063559509
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromTextFilesConfiguration, ExcludePathWildcards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludePathWildcards_MetaData), NewProp_ExcludePathWildcards_MetaData) }; // 1063559509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions_Inner = { "FileExtensions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGatherTextFileExtension, METADATA_PARAMS(0, nullptr) }; // 2707764385
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions = { "FileExtensions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromTextFilesConfiguration, FileExtensions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileExtensions_MetaData), NewProp_FileExtensions_MetaData) }; // 2707764385
void Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj)
{
	((FGatherTextFromTextFilesConfiguration*)Obj)->ShouldGatherFromEditorOnlyData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData = { "ShouldGatherFromEditorOnlyData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGatherTextFromTextFilesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldGatherFromEditorOnlyData_MetaData), NewProp_ShouldGatherFromEditorOnlyData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_IsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_SearchDirectories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ExcludePathWildcards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_FileExtensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"GatherTextFromTextFilesConfiguration",
	Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::PropPointers),
	sizeof(FGatherTextFromTextFilesConfiguration),
	alignof(FGatherTextFromTextFilesConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextFromTextFilesConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GatherTextFromTextFilesConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GatherTextFromTextFilesConfiguration.InnerSingleton;
}
// End ScriptStruct FGatherTextFromTextFilesConfiguration

// Begin ScriptStruct FGatherTextFromPackagesConfiguration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GatherTextFromPackagesConfiguration;
class UScriptStruct* FGatherTextFromPackagesConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextFromPackagesConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GatherTextFromPackagesConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromPackagesConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_GatherTextFromPackagesConfiguration.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextFromPackagesConfiguration>()
{
	return FGatherTextFromPackagesConfiguration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/* If enabled, text from packages will be gathered according to this configuration. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, text from packages will be gathered according to this configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludePathWildcards_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Packages whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Packages whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludePathWildcards_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Packages whose paths match these wildcard patterns will be excluded from gathering. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Packages whose paths match these wildcard patterns will be excluded from gathering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileExtensions_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Packages whose names match these wildcard patterns may be processed for text to gather. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Packages whose names match these wildcard patterns may be processed for text to gather." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collections_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Packages in these collections may be processed for gathering. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Packages in these collections may be processed for gathering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeClasses_MetaData[] = {
		{ "AllowAbstract", "True" },
		{ "Category", "Filter" },
		{ "Comment", "/* Classes that should be excluded from gathering. */" },
		{ "MetaClass", "/Script/CoreUObject.Object" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Classes that should be excluded from gathering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldExcludeDerivedClasses_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Should classes derived from those in the exclude classes list also be excluded from gathering? */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should classes derived from those in the exclude classes list also be excluded from gathering?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldGatherFromEditorOnlyData_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "Comment", "/* If enabled, data that is specified as editor-only may be processed for gathering. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, data that is specified as editor-only may be processed for gathering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipGatherCache_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "Comment", "/* Should we ignore the cached text in the package header and perform a full package load instead? */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should we ignore the cached text in the package header and perform a full package load instead?" },
	};
#endif // WITH_METADATA
	static void NewProp_IsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncludePathWildcards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludePathWildcards;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludePathWildcards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludePathWildcards;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileExtensions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FileExtensions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Collections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Collections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeClasses;
	static void NewProp_ShouldExcludeDerivedClasses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldExcludeDerivedClasses;
	static void NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldGatherFromEditorOnlyData;
	static void NewProp_SkipGatherCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipGatherCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFromPackagesConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled_SetBit(void* Obj)
{
	((FGatherTextFromPackagesConfiguration*)Obj)->IsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGatherTextFromPackagesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEnabled_MetaData), NewProp_IsEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards_Inner = { "IncludePathWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGatherTextIncludePath, METADATA_PARAMS(0, nullptr) }; // 2152847551
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards = { "IncludePathWildcards", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, IncludePathWildcards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludePathWildcards_MetaData), NewProp_IncludePathWildcards_MetaData) }; // 2152847551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards_Inner = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGatherTextExcludePath, METADATA_PARAMS(0, nullptr) }; // 1063559509
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, ExcludePathWildcards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludePathWildcards_MetaData), NewProp_ExcludePathWildcards_MetaData) }; // 1063559509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions_Inner = { "FileExtensions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGatherTextFileExtension, METADATA_PARAMS(0, nullptr) }; // 2707764385
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions = { "FileExtensions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, FileExtensions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileExtensions_MetaData), NewProp_FileExtensions_MetaData) }; // 2707764385
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections_Inner = { "Collections", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections = { "Collections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, Collections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collections_MetaData), NewProp_Collections_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludeClasses_Inner = { "ExcludeClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludeClasses = { "ExcludeClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, ExcludeClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeClasses_MetaData), NewProp_ExcludeClasses_MetaData) };
void Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldExcludeDerivedClasses_SetBit(void* Obj)
{
	((FGatherTextFromPackagesConfiguration*)Obj)->ShouldExcludeDerivedClasses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldExcludeDerivedClasses = { "ShouldExcludeDerivedClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGatherTextFromPackagesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldExcludeDerivedClasses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldExcludeDerivedClasses_MetaData), NewProp_ShouldExcludeDerivedClasses_MetaData) };
void Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj)
{
	((FGatherTextFromPackagesConfiguration*)Obj)->ShouldGatherFromEditorOnlyData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData = { "ShouldGatherFromEditorOnlyData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGatherTextFromPackagesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldGatherFromEditorOnlyData_MetaData), NewProp_ShouldGatherFromEditorOnlyData_MetaData) };
void Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache_SetBit(void* Obj)
{
	((FGatherTextFromPackagesConfiguration*)Obj)->SkipGatherCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache = { "SkipGatherCache", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGatherTextFromPackagesConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipGatherCache_MetaData), NewProp_SkipGatherCache_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_IncludePathWildcards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludePathWildcards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_FileExtensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_Collections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludeClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ExcludeClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldExcludeDerivedClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewProp_SkipGatherCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"GatherTextFromPackagesConfiguration",
	Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::PropPointers),
	sizeof(FGatherTextFromPackagesConfiguration),
	alignof(FGatherTextFromPackagesConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextFromPackagesConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GatherTextFromPackagesConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GatherTextFromPackagesConfiguration.InnerSingleton;
}
// End ScriptStruct FGatherTextFromPackagesConfiguration

// Begin ScriptStruct FMetaDataTextKeyPattern
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaDataTextKeyPattern;
class UScriptStruct* FMetaDataTextKeyPattern::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaDataTextKeyPattern.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaDataTextKeyPattern.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataTextKeyPattern"));
	}
	return Z_Registration_Info_UScriptStruct_MetaDataTextKeyPattern.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FMetaDataTextKeyPattern>()
{
	return FMetaDataTextKeyPattern::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Pattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaDataTextKeyPattern>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaDataTextKeyPattern, Pattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pattern_MetaData), NewProp_Pattern_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::NewProp_Pattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"MetaDataTextKeyPattern",
	Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::PropPointers),
	sizeof(FMetaDataTextKeyPattern),
	alignof(FMetaDataTextKeyPattern),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern()
{
	if (!Z_Registration_Info_UScriptStruct_MetaDataTextKeyPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaDataTextKeyPattern.InnerSingleton, Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaDataTextKeyPattern.InnerSingleton;
}
// End ScriptStruct FMetaDataTextKeyPattern

// Begin ScriptStruct FMetaDataKeyName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaDataKeyName;
class UScriptStruct* FMetaDataKeyName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaDataKeyName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaDataKeyName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataKeyName, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataKeyName"));
	}
	return Z_Registration_Info_UScriptStruct_MetaDataKeyName.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FMetaDataKeyName>()
{
	return FMetaDataKeyName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaDataKeyName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Name" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaDataKeyName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaDataKeyName, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"MetaDataKeyName",
	Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::PropPointers),
	sizeof(FMetaDataKeyName),
	alignof(FMetaDataKeyName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyName()
{
	if (!Z_Registration_Info_UScriptStruct_MetaDataKeyName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaDataKeyName.InnerSingleton, Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaDataKeyName.InnerSingleton;
}
// End ScriptStruct FMetaDataKeyName

// Begin ScriptStruct FMetaDataKeyGatherSpecification
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaDataKeyGatherSpecification;
class UScriptStruct* FMetaDataKeyGatherSpecification::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaDataKeyGatherSpecification.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaDataKeyGatherSpecification.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataKeyGatherSpecification"));
	}
	return Z_Registration_Info_UScriptStruct_MetaDataKeyGatherSpecification.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FMetaDataKeyGatherSpecification>()
{
	return FMetaDataKeyGatherSpecification::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataKey_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/*  The metadata key for which values will be gathered as text. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The metadata key for which values will be gathered as text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextNamespace_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/* The localization namespace in which the gathered text will be output. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The localization namespace in which the gathered text will be output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextKeyPattern_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/* The pattern which will be formatted to form the localization key for the metadata value gathered as text.\n\x09Placeholder - Description\n\x09{FieldPath} - The fully qualified name of the object upon which the metadata resides.\n\x09{MetaDataValue} - The value associated with the metadata key. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The pattern which will be formatted to form the localization key for the metadata value gathered as text.\n      Placeholder - Description\n      {FieldPath} - The fully qualified name of the object upon which the metadata resides.\n      {MetaDataValue} - The value associated with the metadata key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetaDataKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextNamespace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextKeyPattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaDataKeyGatherSpecification>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_MetaDataKey = { "MetaDataKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaDataKeyGatherSpecification, MetaDataKey), Z_Construct_UScriptStruct_FMetaDataKeyName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaDataKey_MetaData), NewProp_MetaDataKey_MetaData) }; // 2366470803
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextNamespace = { "TextNamespace", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaDataKeyGatherSpecification, TextNamespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextNamespace_MetaData), NewProp_TextNamespace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextKeyPattern = { "TextKeyPattern", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaDataKeyGatherSpecification, TextKeyPattern), Z_Construct_UScriptStruct_FMetaDataTextKeyPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextKeyPattern_MetaData), NewProp_TextKeyPattern_MetaData) }; // 2014810770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_MetaDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextNamespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewProp_TextKeyPattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"MetaDataKeyGatherSpecification",
	Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::PropPointers),
	sizeof(FMetaDataKeyGatherSpecification),
	alignof(FMetaDataKeyGatherSpecification),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification()
{
	if (!Z_Registration_Info_UScriptStruct_MetaDataKeyGatherSpecification.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaDataKeyGatherSpecification.InnerSingleton, Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaDataKeyGatherSpecification.InnerSingleton;
}
// End ScriptStruct FMetaDataKeyGatherSpecification

// Begin ScriptStruct FGatherTextFromMetaDataConfiguration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GatherTextFromMetaDataConfiguration;
class UScriptStruct* FGatherTextFromMetaDataConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextFromMetaDataConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GatherTextFromMetaDataConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromMetaDataConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_GatherTextFromMetaDataConfiguration.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FGatherTextFromMetaDataConfiguration>()
{
	return FGatherTextFromMetaDataConfiguration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/* If enabled, metadata will be gathered according to this configuration. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, metadata will be gathered according to this configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludePathWildcards_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Metadata from source files whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Metadata from source files whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludePathWildcards_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* Metadata from source files whose paths match these wildcard patterns will be excluded from gathering. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Metadata from source files whose paths match these wildcard patterns will be excluded from gathering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeySpecifications_MetaData[] = {
		{ "Category", "MetaData" },
		{ "Comment", "/* Specifications for how to gather text from specific metadata keys. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Specifications for how to gather text from specific metadata keys." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldTypesToInclude_MetaData[] = {
		{ "Category", "MetaData" },
		{ "Comment", "/** List of field types (eg, Property, Function, ScriptStruct, Enum, etc) that should be included in the gather, or empty to include everything. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "List of field types (eg, Property, Function, ScriptStruct, Enum, etc) that should be included in the gather, or empty to include everything." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldTypesToExclude_MetaData[] = {
		{ "Category", "MetaData" },
		{ "Comment", "/** List of field types (eg, Property, Function, ScriptStruct, Enum, etc) the should be excluded from the gather. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "List of field types (eg, Property, Function, ScriptStruct, Enum, etc) the should be excluded from the gather." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOwnerTypesToInclude_MetaData[] = {
		{ "Category", "MetaData" },
		{ "Comment", "/** List of field owner types (eg, MyClass, MyStruct, etc) that should have fields within them included in the gather, or empty to include everything. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "List of field owner types (eg, MyClass, MyStruct, etc) that should have fields within them included in the gather, or empty to include everything." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOwnerTypesToExclude_MetaData[] = {
		{ "Category", "MetaData" },
		{ "Comment", "/** List of field owner types (eg, MyClass, MyStruct, etc) that should have fields within them excluded from the gather. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "List of field owner types (eg, MyClass, MyStruct, etc) that should have fields within them excluded from the gather." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldGatherFromEditorOnlyData_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/* If enabled, data that is specified as editor-only may be processed for gathering. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "If enabled, data that is specified as editor-only may be processed for gathering." },
	};
#endif // WITH_METADATA
	static void NewProp_IsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncludePathWildcards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludePathWildcards;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludePathWildcards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludePathWildcards;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeySpecifications_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeySpecifications;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldTypesToInclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldTypesToInclude;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldTypesToExclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldTypesToExclude;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldOwnerTypesToInclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldOwnerTypesToInclude;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldOwnerTypesToExclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldOwnerTypesToExclude;
	static void NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldGatherFromEditorOnlyData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFromMetaDataConfiguration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled_SetBit(void* Obj)
{
	((FGatherTextFromMetaDataConfiguration*)Obj)->IsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGatherTextFromMetaDataConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEnabled_MetaData), NewProp_IsEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards_Inner = { "IncludePathWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGatherTextIncludePath, METADATA_PARAMS(0, nullptr) }; // 2152847551
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards = { "IncludePathWildcards", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, IncludePathWildcards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludePathWildcards_MetaData), NewProp_IncludePathWildcards_MetaData) }; // 2152847551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards_Inner = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGatherTextExcludePath, METADATA_PARAMS(0, nullptr) }; // 1063559509
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards = { "ExcludePathWildcards", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, ExcludePathWildcards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludePathWildcards_MetaData), NewProp_ExcludePathWildcards_MetaData) }; // 1063559509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications_Inner = { "KeySpecifications", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification, METADATA_PARAMS(0, nullptr) }; // 1978071294
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications = { "KeySpecifications", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, KeySpecifications), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeySpecifications_MetaData), NewProp_KeySpecifications_MetaData) }; // 1978071294
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldTypesToInclude_Inner = { "FieldTypesToInclude", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldTypesToInclude = { "FieldTypesToInclude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, FieldTypesToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldTypesToInclude_MetaData), NewProp_FieldTypesToInclude_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldTypesToExclude_Inner = { "FieldTypesToExclude", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldTypesToExclude = { "FieldTypesToExclude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, FieldTypesToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldTypesToExclude_MetaData), NewProp_FieldTypesToExclude_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldOwnerTypesToInclude_Inner = { "FieldOwnerTypesToInclude", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldOwnerTypesToInclude = { "FieldOwnerTypesToInclude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, FieldOwnerTypesToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOwnerTypesToInclude_MetaData), NewProp_FieldOwnerTypesToInclude_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldOwnerTypesToExclude_Inner = { "FieldOwnerTypesToExclude", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldOwnerTypesToExclude = { "FieldOwnerTypesToExclude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, FieldOwnerTypesToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOwnerTypesToExclude_MetaData), NewProp_FieldOwnerTypesToExclude_MetaData) };
void Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit(void* Obj)
{
	((FGatherTextFromMetaDataConfiguration*)Obj)->ShouldGatherFromEditorOnlyData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData = { "ShouldGatherFromEditorOnlyData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGatherTextFromMetaDataConfiguration), &Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldGatherFromEditorOnlyData_MetaData), NewProp_ShouldGatherFromEditorOnlyData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_IncludePathWildcards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ExcludePathWildcards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_KeySpecifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldTypesToInclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldTypesToInclude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldTypesToExclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldTypesToExclude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldOwnerTypesToInclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldOwnerTypesToInclude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldOwnerTypesToExclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_FieldOwnerTypesToExclude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewProp_ShouldGatherFromEditorOnlyData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"GatherTextFromMetaDataConfiguration",
	Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::PropPointers),
	sizeof(FGatherTextFromMetaDataConfiguration),
	alignof(FGatherTextFromMetaDataConfiguration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration()
{
	if (!Z_Registration_Info_UScriptStruct_GatherTextFromMetaDataConfiguration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GatherTextFromMetaDataConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GatherTextFromMetaDataConfiguration.InnerSingleton;
}
// End ScriptStruct FGatherTextFromMetaDataConfiguration

// Begin ScriptStruct FLocalizationExportingSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizationExportingSettings;
class UScriptStruct* FLocalizationExportingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationExportingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizationExportingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationExportingSettings, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationExportingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizationExportingSettings.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FLocalizationExportingSettings>()
{
	return FLocalizationExportingSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollapseMode_MetaData[] = {
		{ "Category", "Collapsing" },
		{ "Comment", "/* How should we collapse down text when exporting to PO? */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "How should we collapse down text when exporting to PO?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POFormat_MetaData[] = {
		{ "Category", "Format" },
		{ "Comment", "/* Which format of PO file should we use? */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Which format of PO file should we use?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldPersistCommentsOnExport_MetaData[] = {
		{ "Category", "Comments" },
		{ "Comment", "/* Should user comments in existing PO files be persisted after export? Useful if using a third party service that stores editor/translator notes in the PO format's comment fields. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should user comments in existing PO files be persisted after export? Useful if using a third party service that stores editor/translator notes in the PO format's comment fields." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldAddSourceLocationsAsComments_MetaData[] = {
		{ "Category", "Comments" },
		{ "Comment", "/* Should source locations be added to PO file entries as comments? Useful if a third party service doesn't expose PO file reference comments, which typically store the source location. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should source locations be added to PO file entries as comments? Useful if a third party service doesn't expose PO file reference comments, which typically store the source location." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollapseMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollapseMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_POFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_POFormat;
	static void NewProp_ShouldPersistCommentsOnExport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldPersistCommentsOnExport;
	static void NewProp_ShouldAddSourceLocationsAsComments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldAddSourceLocationsAsComments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationExportingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode = { "CollapseMode", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationExportingSettings, CollapseMode), Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollapseMode_MetaData), NewProp_CollapseMode_MetaData) }; // 1194005907
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_POFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_POFormat = { "POFormat", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationExportingSettings, POFormat), Z_Construct_UEnum_Localization_EPortableObjectFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POFormat_MetaData), NewProp_POFormat_MetaData) }; // 782644604
void Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport_SetBit(void* Obj)
{
	((FLocalizationExportingSettings*)Obj)->ShouldPersistCommentsOnExport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport = { "ShouldPersistCommentsOnExport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocalizationExportingSettings), &Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldPersistCommentsOnExport_MetaData), NewProp_ShouldPersistCommentsOnExport_MetaData) };
void Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments_SetBit(void* Obj)
{
	((FLocalizationExportingSettings*)Obj)->ShouldAddSourceLocationsAsComments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments = { "ShouldAddSourceLocationsAsComments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocalizationExportingSettings), &Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldAddSourceLocationsAsComments_MetaData), NewProp_ShouldAddSourceLocationsAsComments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_CollapseMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_POFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_POFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldPersistCommentsOnExport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewProp_ShouldAddSourceLocationsAsComments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"LocalizationExportingSettings",
	Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::PropPointers),
	sizeof(FLocalizationExportingSettings),
	alignof(FLocalizationExportingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizationExportingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationExportingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizationExportingSettings.InnerSingleton, Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizationExportingSettings.InnerSingleton;
}
// End ScriptStruct FLocalizationExportingSettings

// Begin ScriptStruct FLocalizationCompilationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizationCompilationSettings;
class UScriptStruct* FLocalizationCompilationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationCompilationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizationCompilationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationCompilationSettings, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationCompilationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizationCompilationSettings.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FLocalizationCompilationSettings>()
{
	return FLocalizationCompilationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipSourceCheck_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/* Should we skip the source check when compiling translations? This will allow translations whose source no longer matches the active source to still be used by the game at runtime. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should we skip the source check when compiling translations? This will allow translations whose source no longer matches the active source to still be used by the game at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidateFormatPatterns_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/* Should we validate that format patterns are valid for the culture being compiled (eg, detect invalid plural rules or broken syntax). */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should we validate that format patterns are valid for the culture being compiled (eg, detect invalid plural rules or broken syntax)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidateSafeWhitespace_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/* Should we validate that text doesn't contain any unsafe whitespace (leading or trailing whitespace) that could get lost during the translation process. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should we validate that text doesn't contain any unsafe whitespace (leading or trailing whitespace) that could get lost during the translation process." },
	};
#endif // WITH_METADATA
	static void NewProp_SkipSourceCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipSourceCheck;
	static void NewProp_ValidateFormatPatterns_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidateFormatPatterns;
	static void NewProp_ValidateSafeWhitespace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidateSafeWhitespace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationCompilationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck_SetBit(void* Obj)
{
	((FLocalizationCompilationSettings*)Obj)->SkipSourceCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck = { "SkipSourceCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocalizationCompilationSettings), &Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipSourceCheck_MetaData), NewProp_SkipSourceCheck_MetaData) };
void Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_ValidateFormatPatterns_SetBit(void* Obj)
{
	((FLocalizationCompilationSettings*)Obj)->ValidateFormatPatterns = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_ValidateFormatPatterns = { "ValidateFormatPatterns", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocalizationCompilationSettings), &Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_ValidateFormatPatterns_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidateFormatPatterns_MetaData), NewProp_ValidateFormatPatterns_MetaData) };
void Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_ValidateSafeWhitespace_SetBit(void* Obj)
{
	((FLocalizationCompilationSettings*)Obj)->ValidateSafeWhitespace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_ValidateSafeWhitespace = { "ValidateSafeWhitespace", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocalizationCompilationSettings), &Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_ValidateSafeWhitespace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidateSafeWhitespace_MetaData), NewProp_ValidateSafeWhitespace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_SkipSourceCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_ValidateFormatPatterns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewProp_ValidateSafeWhitespace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"LocalizationCompilationSettings",
	Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::PropPointers),
	sizeof(FLocalizationCompilationSettings),
	alignof(FLocalizationCompilationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizationCompilationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationCompilationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizationCompilationSettings.InnerSingleton, Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizationCompilationSettings.InnerSingleton;
}
// End ScriptStruct FLocalizationCompilationSettings

// Begin ScriptStruct FLocalizationImportDialogueSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizationImportDialogueSettings;
class UScriptStruct* FLocalizationImportDialogueSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationImportDialogueSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizationImportDialogueSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationImportDialogueSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizationImportDialogueSettings.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FLocalizationImportDialogueSettings>()
{
	return FLocalizationImportDialogueSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawAudioPath_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** Path to the folder to import the audio from. This folder is expected to contain culture sub-folders, which in turn contain the raw WAV files to import. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Path to the folder to import the audio from. This folder is expected to contain culture sub-folders, which in turn contain the raw WAV files to import." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedDialogueFolder_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** Folder in which to create the generated sound waves. This is relative to the root of the L10N culture folder (or the root content folder if importing native dialogue as source dialogue). */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Folder in which to create the generated sound waves. This is relative to the root of the L10N culture folder (or the root content folder if importing native dialogue as source dialogue)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportNativeAsSource_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/** Should the dialogue for the native culture be imported as if it were source audio? If false, the native culture dialogue will be imported as localized data for the native culture. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Should the dialogue for the native culture be imported as if it were source audio? If false, the native culture dialogue will be imported as localized data for the native culture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawAudioPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedDialogueFolder;
	static void NewProp_bImportNativeAsSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportNativeAsSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationImportDialogueSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_RawAudioPath = { "RawAudioPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationImportDialogueSettings, RawAudioPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawAudioPath_MetaData), NewProp_RawAudioPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_ImportedDialogueFolder = { "ImportedDialogueFolder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationImportDialogueSettings, ImportedDialogueFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedDialogueFolder_MetaData), NewProp_ImportedDialogueFolder_MetaData) };
void Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource_SetBit(void* Obj)
{
	((FLocalizationImportDialogueSettings*)Obj)->bImportNativeAsSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource = { "bImportNativeAsSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocalizationImportDialogueSettings), &Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportNativeAsSource_MetaData), NewProp_bImportNativeAsSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_RawAudioPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_ImportedDialogueFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewProp_bImportNativeAsSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"LocalizationImportDialogueSettings",
	Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::PropPointers),
	sizeof(FLocalizationImportDialogueSettings),
	alignof(FLocalizationImportDialogueSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationImportDialogueSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizationImportDialogueSettings.InnerSingleton, Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizationImportDialogueSettings.InnerSingleton;
}
// End ScriptStruct FLocalizationImportDialogueSettings

// Begin ScriptStruct FCultureStatistics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CultureStatistics;
class UScriptStruct* FCultureStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CultureStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CultureStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCultureStatistics, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("CultureStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_CultureStatistics.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FCultureStatistics>()
{
	return FCultureStatistics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCultureStatistics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureName_MetaData[] = {
		{ "Category", "Culture" },
		{ "Comment", "/* The ISO name for this culture. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The ISO name for this culture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WordCount_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/* The estimated number of words that have been localized for this culture. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The estimated number of words that have been localized for this culture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CultureName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_WordCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCultureStatistics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_CultureName = { "CultureName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCultureStatistics, CultureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureName_MetaData), NewProp_CultureName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_WordCount = { "WordCount", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCultureStatistics, WordCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WordCount_MetaData), NewProp_WordCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCultureStatistics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_CultureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewProp_WordCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCultureStatistics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCultureStatistics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"CultureStatistics",
	Z_Construct_UScriptStruct_FCultureStatistics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCultureStatistics_Statics::PropPointers),
	sizeof(FCultureStatistics),
	alignof(FCultureStatistics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCultureStatistics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCultureStatistics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCultureStatistics()
{
	if (!Z_Registration_Info_UScriptStruct_CultureStatistics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CultureStatistics.InnerSingleton, Z_Construct_UScriptStruct_FCultureStatistics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CultureStatistics.InnerSingleton;
}
// End ScriptStruct FCultureStatistics

// Begin Enum ELocalizationTargetLoadingPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocalizationTargetLoadingPolicy;
static UEnum* ELocalizationTargetLoadingPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocalizationTargetLoadingPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocalizationTargetLoadingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizationTargetLoadingPolicy"));
	}
	return Z_Registration_Info_UEnum_ELocalizationTargetLoadingPolicy.OuterSingleton;
}
template<> LOCALIZATION_API UEnum* StaticEnum<ELocalizationTargetLoadingPolicy>()
{
	return ELocalizationTargetLoadingPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** This target's localization data will always be loaded automatically. */" },
		{ "Always.Name", "ELocalizationTargetLoadingPolicy::Always" },
		{ "Always.ToolTip", "This target's localization data will always be loaded automatically." },
		{ "Editor.Comment", "/** This target's localization data will only be loaded when running the editor. Use if this target localizes the editor. */" },
		{ "Editor.Name", "ELocalizationTargetLoadingPolicy::Editor" },
		{ "Editor.ToolTip", "This target's localization data will only be loaded when running the editor. Use if this target localizes the editor." },
		{ "Game.Comment", "/** This target's localization data will only be loaded when running the game. Use if this target localizes your game. */" },
		{ "Game.Name", "ELocalizationTargetLoadingPolicy::Game" },
		{ "Game.ToolTip", "This target's localization data will only be loaded when running the game. Use if this target localizes your game." },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "Never.Comment", "/** This target's localization data will never be loaded automatically. */" },
		{ "Never.Name", "ELocalizationTargetLoadingPolicy::Never" },
		{ "Never.ToolTip", "This target's localization data will never be loaded automatically." },
		{ "PropertyNames.Comment", "/** This target's localization data will only be loaded if the editor is displaying localized property names. */" },
		{ "PropertyNames.Name", "ELocalizationTargetLoadingPolicy::PropertyNames" },
		{ "PropertyNames.ToolTip", "This target's localization data will only be loaded if the editor is displaying localized property names." },
		{ "ToolTips.Comment", "/** This target's localization data will only be loaded if the editor is displaying localized tool tips. */" },
		{ "ToolTips.Name", "ELocalizationTargetLoadingPolicy::ToolTips" },
		{ "ToolTips.ToolTip", "This target's localization data will only be loaded if the editor is displaying localized tool tips." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocalizationTargetLoadingPolicy::Never", (int64)ELocalizationTargetLoadingPolicy::Never },
		{ "ELocalizationTargetLoadingPolicy::Always", (int64)ELocalizationTargetLoadingPolicy::Always },
		{ "ELocalizationTargetLoadingPolicy::Editor", (int64)ELocalizationTargetLoadingPolicy::Editor },
		{ "ELocalizationTargetLoadingPolicy::Game", (int64)ELocalizationTargetLoadingPolicy::Game },
		{ "ELocalizationTargetLoadingPolicy::PropertyNames", (int64)ELocalizationTargetLoadingPolicy::PropertyNames },
		{ "ELocalizationTargetLoadingPolicy::ToolTips", (int64)ELocalizationTargetLoadingPolicy::ToolTips },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	"ELocalizationTargetLoadingPolicy",
	"ELocalizationTargetLoadingPolicy",
	Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy()
{
	if (!Z_Registration_Info_UEnum_ELocalizationTargetLoadingPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocalizationTargetLoadingPolicy.InnerSingleton, Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocalizationTargetLoadingPolicy.InnerSingleton;
}
// End Enum ELocalizationTargetLoadingPolicy

// Begin ScriptStruct FLocalizationTargetSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizationTargetSettings;
class UScriptStruct* FLocalizationTargetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationTargetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizationTargetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationTargetSettings, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationTargetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizationTargetSettings.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FLocalizationTargetSettings>()
{
	return FLocalizationTargetSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/* Unique name for the target. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Unique name for the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConflictStatus_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/* Whether the target has outstanding conflicts that require resolution. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Whether the target has outstanding conflicts that require resolution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDependencies_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "Comment", "/* Text present in these targets will not be duplicated in this target. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Text present in these targets will not be duplicated in this target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalManifestDependencies_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "Comment", "/* Text present in these manifests will not be duplicated in this target. */" },
		{ "FilePathFilter", "manifest" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Text present in these manifests will not be duplicated in this target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredModuleNames_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "Comment", "/* The names of modules which must be loaded when gathering text. Use to gather from packages or metadata sourced from a module that isn't the primary game module. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The names of modules which must be loaded when gathering text. Use to gather from packages or metadata sourced from a module that isn't the primary game module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GatherFromTextFiles_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "Comment", "/* Parameters for defining what text is gathered from text files and how. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Parameters for defining what text is gathered from text files and how." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GatherFromPackages_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "Comment", "/* Parameters for defining what text is gathered from packages and how. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Parameters for defining what text is gathered from packages and how." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GatherFromMetaData_MetaData[] = {
		{ "Category", "Gather Text" },
		{ "Comment", "/* Parameters for defining what text is gathered from metadata and how. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Parameters for defining what text is gathered from metadata and how." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportSettings_MetaData[] = {
		{ "Category", "Export Text" },
		{ "Comment", "/* Settings for exporting translations. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings for exporting translations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompileSettings_MetaData[] = {
		{ "Category", "Compile Text" },
		{ "Comment", "/* Settings for compiling translations. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings for compiling translations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportDialogueSettings_MetaData[] = {
		{ "Category", "Import Dialogue" },
		{ "Comment", "/* Settings for importing dialogue from WAV files. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings for importing dialogue from WAV files." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeCultureIndex_MetaData[] = {
		{ "Category", "Cultures" },
		{ "Comment", "/* The index of the native culture among the supported cultures. */" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "The index of the native culture among the supported cultures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedCulturesStatistics_MetaData[] = {
		{ "Category", "Cultures" },
		{ "Comment", "/* Cultures for which the source text is being localized for.*/" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ToolTip", "Cultures for which the source text is being localized for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConflictStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConflictStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetDependencies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalManifestDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalManifestDependencies;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredModuleNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredModuleNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GatherFromTextFiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GatherFromPackages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GatherFromMetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExportSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompileSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportDialogueSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NativeCultureIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedCulturesStatistics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedCulturesStatistics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationTargetSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus = { "ConflictStatus", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, ConflictStatus), Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConflictStatus_MetaData), NewProp_ConflictStatus_MetaData) }; // 3538082087
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies_Inner = { "TargetDependencies", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies = { "TargetDependencies", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, TargetDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDependencies_MetaData), NewProp_TargetDependencies_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies_Inner = { "AdditionalManifestDependencies", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies = { "AdditionalManifestDependencies", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, AdditionalManifestDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalManifestDependencies_MetaData), NewProp_AdditionalManifestDependencies_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames_Inner = { "RequiredModuleNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames = { "RequiredModuleNames", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, RequiredModuleNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredModuleNames_MetaData), NewProp_RequiredModuleNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromTextFiles = { "GatherFromTextFiles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, GatherFromTextFiles), Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GatherFromTextFiles_MetaData), NewProp_GatherFromTextFiles_MetaData) }; // 4057090173
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromPackages = { "GatherFromPackages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, GatherFromPackages), Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GatherFromPackages_MetaData), NewProp_GatherFromPackages_MetaData) }; // 398115091
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromMetaData = { "GatherFromMetaData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, GatherFromMetaData), Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GatherFromMetaData_MetaData), NewProp_GatherFromMetaData_MetaData) }; // 3455681698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ExportSettings = { "ExportSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, ExportSettings), Z_Construct_UScriptStruct_FLocalizationExportingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportSettings_MetaData), NewProp_ExportSettings_MetaData) }; // 1605666672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_CompileSettings = { "CompileSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, CompileSettings), Z_Construct_UScriptStruct_FLocalizationCompilationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompileSettings_MetaData), NewProp_CompileSettings_MetaData) }; // 2899483790
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ImportDialogueSettings = { "ImportDialogueSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, ImportDialogueSettings), Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportDialogueSettings_MetaData), NewProp_ImportDialogueSettings_MetaData) }; // 2385073503
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_NativeCultureIndex = { "NativeCultureIndex", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, NativeCultureIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeCultureIndex_MetaData), NewProp_NativeCultureIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics_Inner = { "SupportedCulturesStatistics", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCultureStatistics, METADATA_PARAMS(0, nullptr) }; // 3442142846
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics = { "SupportedCulturesStatistics", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizationTargetSettings, SupportedCulturesStatistics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedCulturesStatistics_MetaData), NewProp_SupportedCulturesStatistics_MetaData) }; // 3442142846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ConflictStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_TargetDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_AdditionalManifestDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_RequiredModuleNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromTextFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromPackages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_GatherFromMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ExportSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_CompileSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_ImportDialogueSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_NativeCultureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewProp_SupportedCulturesStatistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"LocalizationTargetSettings",
	Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::PropPointers),
	sizeof(FLocalizationTargetSettings),
	alignof(FLocalizationTargetSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationTargetSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizationTargetSettings.InnerSingleton, Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizationTargetSettings.InnerSingleton;
}
// End ScriptStruct FLocalizationTargetSettings

// Begin Class ULocalizationTarget
void ULocalizationTarget::StaticRegisterNativesULocalizationTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalizationTarget);
UClass* Z_Construct_UClass_ULocalizationTarget_NoRegister()
{
	return ULocalizationTarget::StaticClass();
}
struct Z_Construct_UClass_ULocalizationTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LocalizationTargetTypes.h" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizationTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalizationTarget_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalizationTarget, Settings), Z_Construct_UScriptStruct_FLocalizationTargetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 727971925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalizationTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationTarget_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULocalizationTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalizationTarget_Statics::ClassParams = {
	&ULocalizationTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULocalizationTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationTarget_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalizationTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalizationTarget()
{
	if (!Z_Registration_Info_UClass_ULocalizationTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalizationTarget.OuterSingleton, Z_Construct_UClass_ULocalizationTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalizationTarget.OuterSingleton;
}
template<> LOCALIZATION_API UClass* StaticClass<ULocalizationTarget>()
{
	return ULocalizationTarget::StaticClass();
}
ULocalizationTarget::ULocalizationTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationTarget);
ULocalizationTarget::~ULocalizationTarget() {}
// End Class ULocalizationTarget

// Begin Class ULocalizationTargetSet
void ULocalizationTargetSet::StaticRegisterNativesULocalizationTargetSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalizationTargetSet);
UClass* Z_Construct_UClass_ULocalizationTargetSet_NoRegister()
{
	return ULocalizationTargetSet::StaticClass();
}
struct Z_Construct_UClass_ULocalizationTargetSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LocalizationTargetTypes.h" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetObjects_MetaData[] = {
		{ "Category", "Targets" },
		{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizationTargetSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects_Inner = { "TargetObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULocalizationTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects = { "TargetObjects", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalizationTargetSet, TargetObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetObjects_MetaData), NewProp_TargetObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalizationTargetSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationTargetSet_Statics::NewProp_TargetObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationTargetSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULocalizationTargetSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationTargetSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalizationTargetSet_Statics::ClassParams = {
	&ULocalizationTargetSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULocalizationTargetSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationTargetSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationTargetSet_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalizationTargetSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalizationTargetSet()
{
	if (!Z_Registration_Info_UClass_ULocalizationTargetSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalizationTargetSet.OuterSingleton, Z_Construct_UClass_ULocalizationTargetSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalizationTargetSet.OuterSingleton;
}
template<> LOCALIZATION_API UClass* StaticClass<ULocalizationTargetSet>()
{
	return ULocalizationTargetSet::StaticClass();
}
ULocalizationTargetSet::ULocalizationTargetSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationTargetSet);
ULocalizationTargetSet::~ULocalizationTargetSet() {}
// End Class ULocalizationTargetSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationTargetTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocalizationTargetConflictStatus_StaticEnum, TEXT("ELocalizationTargetConflictStatus"), &Z_Registration_Info_UEnum_ELocalizationTargetConflictStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3538082087U) },
		{ ELocalizationGatherPathRoot_StaticEnum, TEXT("ELocalizationGatherPathRoot"), &Z_Registration_Info_UEnum_ELocalizationGatherPathRoot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 452449016U) },
		{ ELocalizationTargetLoadingPolicy_StaticEnum, TEXT("ELocalizationTargetLoadingPolicy"), &Z_Registration_Info_UEnum_ELocalizationTargetLoadingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 66571699U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGatherTextSearchDirectory::StaticStruct, Z_Construct_UScriptStruct_FGatherTextSearchDirectory_Statics::NewStructOps, TEXT("GatherTextSearchDirectory"), &Z_Registration_Info_UScriptStruct_GatherTextSearchDirectory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGatherTextSearchDirectory), 1177181687U) },
		{ FGatherTextIncludePath::StaticStruct, Z_Construct_UScriptStruct_FGatherTextIncludePath_Statics::NewStructOps, TEXT("GatherTextIncludePath"), &Z_Registration_Info_UScriptStruct_GatherTextIncludePath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGatherTextIncludePath), 2152847551U) },
		{ FGatherTextExcludePath::StaticStruct, Z_Construct_UScriptStruct_FGatherTextExcludePath_Statics::NewStructOps, TEXT("GatherTextExcludePath"), &Z_Registration_Info_UScriptStruct_GatherTextExcludePath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGatherTextExcludePath), 1063559509U) },
		{ FGatherTextFileExtension::StaticStruct, Z_Construct_UScriptStruct_FGatherTextFileExtension_Statics::NewStructOps, TEXT("GatherTextFileExtension"), &Z_Registration_Info_UScriptStruct_GatherTextFileExtension, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGatherTextFileExtension), 2707764385U) },
		{ FGatherTextFromTextFilesConfiguration::StaticStruct, Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_Statics::NewStructOps, TEXT("GatherTextFromTextFilesConfiguration"), &Z_Registration_Info_UScriptStruct_GatherTextFromTextFilesConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGatherTextFromTextFilesConfiguration), 4057090173U) },
		{ FGatherTextFromPackagesConfiguration::StaticStruct, Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_Statics::NewStructOps, TEXT("GatherTextFromPackagesConfiguration"), &Z_Registration_Info_UScriptStruct_GatherTextFromPackagesConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGatherTextFromPackagesConfiguration), 398115091U) },
		{ FMetaDataTextKeyPattern::StaticStruct, Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_Statics::NewStructOps, TEXT("MetaDataTextKeyPattern"), &Z_Registration_Info_UScriptStruct_MetaDataTextKeyPattern, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaDataTextKeyPattern), 2014810770U) },
		{ FMetaDataKeyName::StaticStruct, Z_Construct_UScriptStruct_FMetaDataKeyName_Statics::NewStructOps, TEXT("MetaDataKeyName"), &Z_Registration_Info_UScriptStruct_MetaDataKeyName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaDataKeyName), 2366470803U) },
		{ FMetaDataKeyGatherSpecification::StaticStruct, Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_Statics::NewStructOps, TEXT("MetaDataKeyGatherSpecification"), &Z_Registration_Info_UScriptStruct_MetaDataKeyGatherSpecification, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaDataKeyGatherSpecification), 1978071294U) },
		{ FGatherTextFromMetaDataConfiguration::StaticStruct, Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_Statics::NewStructOps, TEXT("GatherTextFromMetaDataConfiguration"), &Z_Registration_Info_UScriptStruct_GatherTextFromMetaDataConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGatherTextFromMetaDataConfiguration), 3455681698U) },
		{ FLocalizationExportingSettings::StaticStruct, Z_Construct_UScriptStruct_FLocalizationExportingSettings_Statics::NewStructOps, TEXT("LocalizationExportingSettings"), &Z_Registration_Info_UScriptStruct_LocalizationExportingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizationExportingSettings), 1605666672U) },
		{ FLocalizationCompilationSettings::StaticStruct, Z_Construct_UScriptStruct_FLocalizationCompilationSettings_Statics::NewStructOps, TEXT("LocalizationCompilationSettings"), &Z_Registration_Info_UScriptStruct_LocalizationCompilationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizationCompilationSettings), 2899483790U) },
		{ FLocalizationImportDialogueSettings::StaticStruct, Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_Statics::NewStructOps, TEXT("LocalizationImportDialogueSettings"), &Z_Registration_Info_UScriptStruct_LocalizationImportDialogueSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizationImportDialogueSettings), 2385073503U) },
		{ FCultureStatistics::StaticStruct, Z_Construct_UScriptStruct_FCultureStatistics_Statics::NewStructOps, TEXT("CultureStatistics"), &Z_Registration_Info_UScriptStruct_CultureStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCultureStatistics), 3442142846U) },
		{ FLocalizationTargetSettings::StaticStruct, Z_Construct_UScriptStruct_FLocalizationTargetSettings_Statics::NewStructOps, TEXT("LocalizationTargetSettings"), &Z_Registration_Info_UScriptStruct_LocalizationTargetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizationTargetSettings), 727971925U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocalizationTarget, ULocalizationTarget::StaticClass, TEXT("ULocalizationTarget"), &Z_Registration_Info_UClass_ULocalizationTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalizationTarget), 1979136369U) },
		{ Z_Construct_UClass_ULocalizationTargetSet, ULocalizationTargetSet::StaticClass, TEXT("ULocalizationTargetSet"), &Z_Registration_Info_UClass_ULocalizationTargetSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalizationTargetSet), 1684329698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationTargetTypes_h_3785338839(TEXT("/Script/Localization"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationTargetTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationTargetTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationTargetTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationTargetTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationTargetTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationTargetTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
