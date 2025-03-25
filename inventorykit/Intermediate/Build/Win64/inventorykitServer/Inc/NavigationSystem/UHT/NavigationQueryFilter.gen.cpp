// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationQueryFilter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterArea();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterFlags();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin ScriptStruct FNavigationFilterArea
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationFilterArea;
class UScriptStruct* FNavigationFilterArea::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationFilterArea.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationFilterArea.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationFilterArea, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavigationFilterArea"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationFilterArea.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavigationFilterArea>()
{
	return FNavigationFilterArea::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavigationFilterArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
		{ "Category", "Area" },
		{ "Comment", "/** navigation area class */" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "navigation area class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TravelCostOverride_MetaData[] = {
		{ "Category", "Area" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** override for travel cost */" },
		{ "EditCondition", "bOverrideTravelCost" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "override for travel cost" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnteringCostOverride_MetaData[] = {
		{ "Category", "Area" },
		{ "ClampMin", "0" },
		{ "Comment", "/** override for entering cost */" },
		{ "EditCondition", "bOverrideEnteringCost" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "override for entering cost" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExcluded_MetaData[] = {
		{ "Category", "Area" },
		{ "Comment", "/** mark as excluded */" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "mark as excluded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTravelCost_MetaData[] = {
		{ "Category", "Area" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideEnteringCost_MetaData[] = {
		{ "Category", "Area" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TravelCostOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnteringCostOverride;
	static void NewProp_bIsExcluded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExcluded;
	static void NewProp_bOverrideTravelCost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTravelCost;
	static void NewProp_bOverrideEnteringCost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideEnteringCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationFilterArea>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationFilterArea, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaClass_MetaData), NewProp_AreaClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride = { "TravelCostOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationFilterArea, TravelCostOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TravelCostOverride_MetaData), NewProp_TravelCostOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride = { "EnteringCostOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavigationFilterArea, EnteringCostOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnteringCostOverride_MetaData), NewProp_EnteringCostOverride_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_SetBit(void* Obj)
{
	((FNavigationFilterArea*)Obj)->bIsExcluded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded = { "bIsExcluded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterArea), &Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExcluded_MetaData), NewProp_bIsExcluded_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_SetBit(void* Obj)
{
	((FNavigationFilterArea*)Obj)->bOverrideTravelCost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost = { "bOverrideTravelCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterArea), &Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideTravelCost_MetaData), NewProp_bOverrideTravelCost_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_SetBit(void* Obj)
{
	((FNavigationFilterArea*)Obj)->bOverrideEnteringCost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost = { "bOverrideEnteringCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterArea), &Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideEnteringCost_MetaData), NewProp_bOverrideEnteringCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"NavigationFilterArea",
	Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::PropPointers),
	sizeof(FNavigationFilterArea),
	alignof(FNavigationFilterArea),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterArea()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationFilterArea.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationFilterArea.InnerSingleton, Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavigationFilterArea.InnerSingleton;
}
// End ScriptStruct FNavigationFilterArea

// Begin ScriptStruct FNavigationFilterFlags
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationFilterFlags;
class UScriptStruct* FNavigationFilterFlags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationFilterFlags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationFilterFlags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationFilterFlags, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavigationFilterFlags"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationFilterFlags.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavigationFilterFlags>()
{
	return FNavigationFilterFlags::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// \n// Use UNavigationSystemV1.DescribeFilterFlags() to setup user friendly names of flags\n// \n" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "Use UNavigationSystemV1.DescribeFilterFlags() to setup user friendly names of flags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag0_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag1_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag2_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag3_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag4_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag5_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag6_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag7_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag8_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag9_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag10_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag11_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag12_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag13_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag14_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag15_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNavFlag0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag0;
	static void NewProp_bNavFlag1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag1;
	static void NewProp_bNavFlag2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag2;
	static void NewProp_bNavFlag3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag3;
	static void NewProp_bNavFlag4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag4;
	static void NewProp_bNavFlag5_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag5;
	static void NewProp_bNavFlag6_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag6;
	static void NewProp_bNavFlag7_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag7;
	static void NewProp_bNavFlag8_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag8;
	static void NewProp_bNavFlag9_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag9;
	static void NewProp_bNavFlag10_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag10;
	static void NewProp_bNavFlag11_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag11;
	static void NewProp_bNavFlag12_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag12;
	static void NewProp_bNavFlag13_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag13;
	static void NewProp_bNavFlag14_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag14;
	static void NewProp_bNavFlag15_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag15;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationFilterFlags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0 = { "bNavFlag0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag0_MetaData), NewProp_bNavFlag0_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1 = { "bNavFlag1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag1_MetaData), NewProp_bNavFlag1_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2 = { "bNavFlag2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag2_MetaData), NewProp_bNavFlag2_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3 = { "bNavFlag3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag3_MetaData), NewProp_bNavFlag3_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4 = { "bNavFlag4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag4_MetaData), NewProp_bNavFlag4_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag5 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5 = { "bNavFlag5", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag5_MetaData), NewProp_bNavFlag5_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag6 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6 = { "bNavFlag6", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag6_MetaData), NewProp_bNavFlag6_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag7 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7 = { "bNavFlag7", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag7_MetaData), NewProp_bNavFlag7_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag8 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8 = { "bNavFlag8", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag8_MetaData), NewProp_bNavFlag8_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag9 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9 = { "bNavFlag9", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag9_MetaData), NewProp_bNavFlag9_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag10 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10 = { "bNavFlag10", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag10_MetaData), NewProp_bNavFlag10_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag11 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11 = { "bNavFlag11", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag11_MetaData), NewProp_bNavFlag11_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag12 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12 = { "bNavFlag12", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag12_MetaData), NewProp_bNavFlag12_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag13 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13 = { "bNavFlag13", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag13_MetaData), NewProp_bNavFlag13_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag14 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14 = { "bNavFlag14", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag14_MetaData), NewProp_bNavFlag14_MetaData) };
void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_SetBit(void* Obj)
{
	((FNavigationFilterFlags*)Obj)->bNavFlag15 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15 = { "bNavFlag15", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNavFlag15_MetaData), NewProp_bNavFlag15_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"NavigationFilterFlags",
	Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::PropPointers),
	sizeof(FNavigationFilterFlags),
	alignof(FNavigationFilterFlags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterFlags()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationFilterFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationFilterFlags.InnerSingleton, Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavigationFilterFlags.InnerSingleton;
}
// End ScriptStruct FNavigationFilterFlags

// Begin Class UNavigationQueryFilter
void UNavigationQueryFilter::StaticRegisterNativesUNavigationQueryFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationQueryFilter);
UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister()
{
	return UNavigationQueryFilter::StaticClass();
}
struct Z_Construct_UClass_UNavigationQueryFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class containing definition of a navigation query filter */" },
		{ "IncludePath", "NavFilters/NavigationQueryFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "Class containing definition of a navigation query filter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Areas_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** list of overrides for navigation areas */" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "list of overrides for navigation areas" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeFlags_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** required flags of navigation nodes */" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "required flags of navigation nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeFlags_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** forbidden flags of navigation nodes */" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "forbidden flags of navigation nodes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Areas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Areas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncludeFlags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationQueryFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_Inner = { "Areas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNavigationFilterArea, METADATA_PARAMS(0, nullptr) }; // 3508158026
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas = { "Areas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationQueryFilter, Areas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Areas_MetaData), NewProp_Areas_MetaData) }; // 3508158026
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags = { "IncludeFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationQueryFilter, IncludeFlags), Z_Construct_UScriptStruct_FNavigationFilterFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeFlags_MetaData), NewProp_IncludeFlags_MetaData) }; // 251876288
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags = { "ExcludeFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationQueryFilter, ExcludeFlags), Z_Construct_UScriptStruct_FNavigationFilterFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeFlags_MetaData), NewProp_ExcludeFlags_MetaData) }; // 251876288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationQueryFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationQueryFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationQueryFilter_Statics::ClassParams = {
	&UNavigationQueryFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavigationQueryFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationQueryFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationQueryFilter()
{
	if (!Z_Registration_Info_UClass_UNavigationQueryFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationQueryFilter.OuterSingleton, Z_Construct_UClass_UNavigationQueryFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationQueryFilter.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationQueryFilter>()
{
	return UNavigationQueryFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationQueryFilter);
UNavigationQueryFilter::~UNavigationQueryFilter() {}
// End Class UNavigationQueryFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavigationFilterArea::StaticStruct, Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewStructOps, TEXT("NavigationFilterArea"), &Z_Registration_Info_UScriptStruct_NavigationFilterArea, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationFilterArea), 3508158026U) },
		{ FNavigationFilterFlags::StaticStruct, Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewStructOps, TEXT("NavigationFilterFlags"), &Z_Registration_Info_UScriptStruct_NavigationFilterFlags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationFilterFlags), 251876288U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationQueryFilter, UNavigationQueryFilter::StaticClass, TEXT("UNavigationQueryFilter"), &Z_Registration_Info_UClass_UNavigationQueryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationQueryFilter), 4133113539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_1740266252(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
