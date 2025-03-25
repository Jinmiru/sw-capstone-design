// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/MeshDrawCommandStatsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDrawCommandStatsSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UMeshDrawCommandStatsSettings();
ENGINE_API UClass* Z_Construct_UClass_UMeshDrawCommandStatsSettings_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FMeshDrawCommandStatsBudget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudget;
class UScriptStruct* FMeshDrawCommandStatsBudget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshDrawCommandStatsBudget"));
	}
	return Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudget.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshDrawCommandStatsBudget>()
{
	return FMeshDrawCommandStatsBudget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Description of a stat category used in the MeshDrawCommandStats system. */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "Description of a stat category used in the MeshDrawCommandStats system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Category name. */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "Category name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedStatNames_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Stat names that will match this category name. */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "Stat names that will match this category name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveBudget_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** The category primitive budget. This is the maximum triangles expected, post-culling, summed across all passes. */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "The category primitive budget. This is the maximum triangles expected, post-culling, summed across all passes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** The collection which contains this budget. */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "The collection which contains this budget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Passes_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Which passes contribute to this budget. */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "Which passes contribute to this budget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LinkedStatNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedStatNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveBudget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Passes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Passes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshDrawCommandStatsBudget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshDrawCommandStatsBudget, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_LinkedStatNames_Inner = { "LinkedStatNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_LinkedStatNames = { "LinkedStatNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshDrawCommandStatsBudget, LinkedStatNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedStatNames_MetaData), NewProp_LinkedStatNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_PrimitiveBudget = { "PrimitiveBudget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshDrawCommandStatsBudget, PrimitiveBudget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveBudget_MetaData), NewProp_PrimitiveBudget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshDrawCommandStatsBudget, Collection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_Passes_Inner = { "Passes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_Passes = { "Passes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshDrawCommandStatsBudget, Passes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Passes_MetaData), NewProp_Passes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_LinkedStatNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_LinkedStatNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_PrimitiveBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_Passes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewProp_Passes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MeshDrawCommandStatsBudget",
	Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::PropPointers),
	sizeof(FMeshDrawCommandStatsBudget),
	alignof(FMeshDrawCommandStatsBudget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget()
{
	if (!Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudget.InnerSingleton, Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudget.InnerSingleton;
}
// End ScriptStruct FMeshDrawCommandStatsBudget

// Begin ScriptStruct FMeshDrawCommandStatsBudgetTotals
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudgetTotals;
class UScriptStruct* FMeshDrawCommandStatsBudgetTotals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudgetTotals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudgetTotals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshDrawCommandStatsBudgetTotals"));
	}
	return Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudgetTotals.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshDrawCommandStatsBudgetTotals>()
{
	return FMeshDrawCommandStatsBudgetTotals::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Budget totals for each MeshDrawCommandStats collection. */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "Budget totals for each MeshDrawCommandStats collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveBudget_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** The total amount of primitives budgeted for this collection. */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "The total amount of primitives budgeted for this collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** The collection this applies to. */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "The collection this applies to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveBudget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshDrawCommandStatsBudgetTotals>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::NewProp_PrimitiveBudget = { "PrimitiveBudget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshDrawCommandStatsBudgetTotals, PrimitiveBudget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveBudget_MetaData), NewProp_PrimitiveBudget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshDrawCommandStatsBudgetTotals, Collection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::NewProp_PrimitiveBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MeshDrawCommandStatsBudgetTotals",
	Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::PropPointers),
	sizeof(FMeshDrawCommandStatsBudgetTotals),
	alignof(FMeshDrawCommandStatsBudgetTotals),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals()
{
	if (!Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudgetTotals.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudgetTotals.InnerSingleton, Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudgetTotals.InnerSingleton;
}
// End ScriptStruct FMeshDrawCommandStatsBudgetTotals

// Begin Class UMeshDrawCommandStatsSettings
void UMeshDrawCommandStatsSettings::StaticRegisterNativesUMeshDrawCommandStatsSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshDrawCommandStatsSettings);
UClass* Z_Construct_UClass_UMeshDrawCommandStatsSettings_NoRegister()
{
	return UMeshDrawCommandStatsSettings::StaticClass();
}
struct Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** User settings used by the MeshDrawCommandStats system. */" },
		{ "DisplayName", "Mesh Stats" },
		{ "IncludePath", "MeshDrawCommandStatsSettings.h" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "User settings used by the MeshDrawCommandStats system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Budgets_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Budgets used by r.MeshDrawCommands.Stats */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "Budgets used by r.MeshDrawCommands.Stats" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BudgetTotals_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** The total primitive budget for a collection. */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "The total primitive budget for a collection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionForCsvProfiler_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/** Which collection to export to CSV */" },
		{ "ModuleRelativePath", "Public/MeshDrawCommandStatsSettings.h" },
		{ "ToolTip", "Which collection to export to CSV" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Budgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Budgets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BudgetTotals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BudgetTotals;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollectionForCsvProfiler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshDrawCommandStatsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::NewProp_Budgets_Inner = { "Budgets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget, METADATA_PARAMS(0, nullptr) }; // 1836255477
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::NewProp_Budgets = { "Budgets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDrawCommandStatsSettings, Budgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Budgets_MetaData), NewProp_Budgets_MetaData) }; // 1836255477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::NewProp_BudgetTotals_Inner = { "BudgetTotals", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals, METADATA_PARAMS(0, nullptr) }; // 786484578
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::NewProp_BudgetTotals = { "BudgetTotals", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDrawCommandStatsSettings, BudgetTotals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BudgetTotals_MetaData), NewProp_BudgetTotals_MetaData) }; // 786484578
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::NewProp_CollectionForCsvProfiler = { "CollectionForCsvProfiler", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDrawCommandStatsSettings, CollectionForCsvProfiler), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionForCsvProfiler_MetaData), NewProp_CollectionForCsvProfiler_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::NewProp_Budgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::NewProp_Budgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::NewProp_BudgetTotals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::NewProp_BudgetTotals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::NewProp_CollectionForCsvProfiler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::ClassParams = {
	&UMeshDrawCommandStatsSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::PropPointers),
	0,
	0x001080A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshDrawCommandStatsSettings()
{
	if (!Z_Registration_Info_UClass_UMeshDrawCommandStatsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshDrawCommandStatsSettings.OuterSingleton, Z_Construct_UClass_UMeshDrawCommandStatsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshDrawCommandStatsSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMeshDrawCommandStatsSettings>()
{
	return UMeshDrawCommandStatsSettings::StaticClass();
}
UMeshDrawCommandStatsSettings::UMeshDrawCommandStatsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshDrawCommandStatsSettings);
UMeshDrawCommandStatsSettings::~UMeshDrawCommandStatsSettings() {}
// End Class UMeshDrawCommandStatsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeshDrawCommandStatsBudget::StaticStruct, Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudget_Statics::NewStructOps, TEXT("MeshDrawCommandStatsBudget"), &Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshDrawCommandStatsBudget), 1836255477U) },
		{ FMeshDrawCommandStatsBudgetTotals::StaticStruct, Z_Construct_UScriptStruct_FMeshDrawCommandStatsBudgetTotals_Statics::NewStructOps, TEXT("MeshDrawCommandStatsBudgetTotals"), &Z_Registration_Info_UScriptStruct_MeshDrawCommandStatsBudgetTotals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshDrawCommandStatsBudgetTotals), 786484578U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshDrawCommandStatsSettings, UMeshDrawCommandStatsSettings::StaticClass, TEXT("UMeshDrawCommandStatsSettings"), &Z_Registration_Info_UClass_UMeshDrawCommandStatsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshDrawCommandStatsSettings), 738032942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_808342387(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MeshDrawCommandStatsSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
