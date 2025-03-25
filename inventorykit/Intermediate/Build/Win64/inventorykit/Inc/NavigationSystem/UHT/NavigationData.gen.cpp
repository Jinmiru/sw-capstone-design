// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UNavigationDataInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSupportedAreaData();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin ScriptStruct FSupportedAreaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SupportedAreaData;
class UScriptStruct* FSupportedAreaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SupportedAreaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SupportedAreaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportedAreaData, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("SupportedAreaData"));
	}
	return Z_Registration_Info_UScriptStruct_SupportedAreaData.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FSupportedAreaData>()
{
	return FSupportedAreaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSupportedAreaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaID_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AreaClassName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AreaID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportedAreaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName = { "AreaClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportedAreaData, AreaClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaClassName_MetaData), NewProp_AreaClassName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID = { "AreaID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportedAreaData, AreaID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaID_MetaData), NewProp_AreaID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportedAreaData, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaClass_MetaData), NewProp_AreaClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSupportedAreaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"SupportedAreaData",
	Z_Construct_UScriptStruct_FSupportedAreaData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::PropPointers),
	sizeof(FSupportedAreaData),
	alignof(FSupportedAreaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSupportedAreaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSupportedAreaData()
{
	if (!Z_Registration_Info_UScriptStruct_SupportedAreaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SupportedAreaData.InnerSingleton, Z_Construct_UScriptStruct_FSupportedAreaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SupportedAreaData.InnerSingleton;
}
// End ScriptStruct FSupportedAreaData

// Begin Enum ERuntimeGenerationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeGenerationType;
static UEnum* ERuntimeGenerationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ERuntimeGenerationType"));
	}
	return Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ERuntimeGenerationType>()
{
	return ERuntimeGenerationType_StaticEnum();
}
struct Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** \n *  Supported options for runtime navigation data generation\n */" },
		{ "Dynamic.Comment", "// Fully dynamic, supports geometry changes along with navigation modifiers\n" },
		{ "Dynamic.Name", "ERuntimeGenerationType::Dynamic" },
		{ "Dynamic.ToolTip", "Fully dynamic, supports geometry changes along with navigation modifiers" },
		{ "DynamicModifiersOnly.Comment", "// Supports only navigation modifiers updates\n" },
		{ "DynamicModifiersOnly.Name", "ERuntimeGenerationType::DynamicModifiersOnly" },
		{ "DynamicModifiersOnly.ToolTip", "Supports only navigation modifiers updates" },
		{ "LegacyGeneration.Comment", "// Only for legacy loading don't use it!\n" },
		{ "LegacyGeneration.Hidden", "" },
		{ "LegacyGeneration.Name", "ERuntimeGenerationType::LegacyGeneration" },
		{ "LegacyGeneration.ToolTip", "Only for legacy loading don't use it!" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "Static.Comment", "// No runtime generation, fully static navigation data\n" },
		{ "Static.Name", "ERuntimeGenerationType::Static" },
		{ "Static.ToolTip", "No runtime generation, fully static navigation data" },
		{ "ToolTip", "Supported options for runtime navigation data generation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERuntimeGenerationType::Static", (int64)ERuntimeGenerationType::Static },
		{ "ERuntimeGenerationType::DynamicModifiersOnly", (int64)ERuntimeGenerationType::DynamicModifiersOnly },
		{ "ERuntimeGenerationType::Dynamic", (int64)ERuntimeGenerationType::Dynamic },
		{ "ERuntimeGenerationType::LegacyGeneration", (int64)ERuntimeGenerationType::LegacyGeneration },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	"ERuntimeGenerationType",
	"ERuntimeGenerationType",
	Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType()
{
	if (!Z_Registration_Info_UEnum_ERuntimeGenerationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeGenerationType.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERuntimeGenerationType.InnerSingleton;
}
// End Enum ERuntimeGenerationType

// Begin Class ANavigationData
void ANavigationData::StaticRegisterNativesANavigationData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationData);
UClass* Z_Construct_UClass_ANavigationData_NoRegister()
{
	return ANavigationData::StaticClass();
}
struct Z_Construct_UClass_ANavigationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09Represents abstract Navigation Data (sub-classed as NavMesh, NavGraph, etc)\n *\x09Used as a common interface for all navigation types handled by NavigationSystem\n */" },
		{ "IncludePath", "NavigationData.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Represents abstract Navigation Data (sub-classed as NavMesh, NavGraph, etc)\nUsed as a common interface for all navigation types handled by NavigationSystem" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavDataConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDrawing_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** if set to true then this navigation data will be drawing itself when requested as part of \"show navigation\" */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "if set to true then this navigation data will be drawing itself when requested as part of \"show navigation\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceRebuildOnLoad_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** By default navigation will skip the first update after being successfully loaded\n\x09*  setting bForceRebuildOnLoad to false can override this behavior */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "By default navigation will skip the first update after being successfully loaded\nsetting bForceRebuildOnLoad to false can override this behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroyWhenNoNavigation_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Should this instance auto-destroy when there's no navigation system on\n\x09 *\x09world when it gets created/loaded */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Should this instance auto-destroy when there's no navigation system on\n    world when it gets created/loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeMainNavData_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** If set, navigation data can act as default one in navigation system's queries */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "If set, navigation data can act as default one in navigation system's queries" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanSpawnOnRebuild_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** If set, navigation data will be spawned in persistent level during rebuild if actor doesn't exist */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "If set, navigation data will be spawned in persistent level during rebuild if actor doesn't exist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildAtRuntime_MetaData[] = {
		{ "Comment", "/** If true, the NavMesh can be dynamically rebuilt at runtime. */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "If true, the NavMesh can be dynamically rebuilt at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeGeneration_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Navigation data runtime generation options */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Navigation data runtime generation options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedPathsTickInterval_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** all observed paths will be processed every ObservedPathsTickInterval seconds */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "all observed paths will be processed every ObservedPathsTickInterval seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[] = {
		{ "Comment", "/** Navigation data versioning. */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Navigation data versioning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAreas_MetaData[] = {
		{ "Comment", "/** serialized area class - ID mapping */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "serialized area class - ID mapping" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderingComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavDataConfig;
	static void NewProp_bEnableDrawing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDrawing;
	static void NewProp_bForceRebuildOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildOnLoad;
	static void NewProp_bAutoDestroyWhenNoNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroyWhenNoNavigation;
	static void NewProp_bCanBeMainNavData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeMainNavData;
	static void NewProp_bCanSpawnOnRebuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSpawnOnRebuild;
	static void NewProp_bRebuildAtRuntime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildAtRuntime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RuntimeGeneration_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RuntimeGeneration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObservedPathsTickInterval;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAreas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedAreas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp = { "RenderingComp", nullptr, (EPropertyFlags)0x0114000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationData, RenderingComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingComp_MetaData), NewProp_RenderingComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig = { "NavDataConfig", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationData, NavDataConfig), Z_Construct_UScriptStruct_FNavDataConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavDataConfig_MetaData), NewProp_NavDataConfig_MetaData) }; // 1949283299
void Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_SetBit(void* Obj)
{
	((ANavigationData*)Obj)->bEnableDrawing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing = { "bEnableDrawing", nullptr, (EPropertyFlags)0x0020080000002001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDrawing_MetaData), NewProp_bEnableDrawing_MetaData) };
void Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_SetBit(void* Obj)
{
	((ANavigationData*)Obj)->bForceRebuildOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad = { "bForceRebuildOnLoad", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceRebuildOnLoad_MetaData), NewProp_bForceRebuildOnLoad_MetaData) };
void Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation_SetBit(void* Obj)
{
	((ANavigationData*)Obj)->bAutoDestroyWhenNoNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation = { "bAutoDestroyWhenNoNavigation", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDestroyWhenNoNavigation_MetaData), NewProp_bAutoDestroyWhenNoNavigation_MetaData) };
void Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_SetBit(void* Obj)
{
	((ANavigationData*)Obj)->bCanBeMainNavData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData = { "bCanBeMainNavData", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeMainNavData_MetaData), NewProp_bCanBeMainNavData_MetaData) };
void Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_SetBit(void* Obj)
{
	((ANavigationData*)Obj)->bCanSpawnOnRebuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild = { "bCanSpawnOnRebuild", nullptr, (EPropertyFlags)0x00200c0000024001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanSpawnOnRebuild_MetaData), NewProp_bCanSpawnOnRebuild_MetaData) };
void Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_SetBit(void* Obj)
{
	((ANavigationData*)Obj)->bRebuildAtRuntime_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime = { "bRebuildAtRuntime", nullptr, (EPropertyFlags)0x0020080020004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildAtRuntime_MetaData), NewProp_bRebuildAtRuntime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration = { "RuntimeGeneration", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationData, RuntimeGeneration), Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeGeneration_MetaData), NewProp_RuntimeGeneration_MetaData) }; // 1536267143
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval = { "ObservedPathsTickInterval", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationData, ObservedPathsTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedPathsTickInterval_MetaData), NewProp_ObservedPathsTickInterval_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationData, DataVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataVersion_MetaData), NewProp_DataVersion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_Inner = { "SupportedAreas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSupportedAreaData, METADATA_PARAMS(0, nullptr) }; // 1345416055
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas = { "SupportedAreas", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationData, SupportedAreas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAreas_MetaData), NewProp_SupportedAreas_MetaData) }; // 1345416055
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavigationData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavigationData_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavigationDataInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationData, INavigationDataInterface), false },  // 3627406208
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationData_Statics::ClassParams = {
	&ANavigationData::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANavigationData_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A7u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavigationData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavigationData()
{
	if (!Z_Registration_Info_UClass_ANavigationData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationData.OuterSingleton, Z_Construct_UClass_ANavigationData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavigationData.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavigationData>()
{
	return ANavigationData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationData);
ANavigationData::~ANavigationData() {}
// End Class ANavigationData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERuntimeGenerationType_StaticEnum, TEXT("ERuntimeGenerationType"), &Z_Registration_Info_UEnum_ERuntimeGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1536267143U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSupportedAreaData::StaticStruct, Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewStructOps, TEXT("SupportedAreaData"), &Z_Registration_Info_UScriptStruct_SupportedAreaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSupportedAreaData), 1345416055U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationData, ANavigationData::StaticClass, TEXT("ANavigationData"), &Z_Registration_Info_UClass_ANavigationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationData), 1070207738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_803534326(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
