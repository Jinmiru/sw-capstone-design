// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDataChannel_Islands.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannel_Islands() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_Islands();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_Islands_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Islands();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDCIsland();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagraDataChannel_IslandMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode;
static UEnum* ENiagraDataChannel_IslandMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagraDataChannel_IslandMode"));
	}
	return Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagraDataChannel_IslandMode>()
{
	return ENiagraDataChannel_IslandMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlignedStatic.Comment", "/** Islands are aligned to a grid and fixed to their MaxExtents. Avoids overlapping islands but can lead to larger than necessary islands. */" },
		{ "AlignedStatic.Name", "ENiagraDataChannel_IslandMode::AlignedStatic" },
		{ "AlignedStatic.ToolTip", "Islands are aligned to a grid and fixed to their MaxExtents. Avoids overlapping islands but can lead to larger than necessary islands." },
		{ "Dynamic.Comment", "/** Islands can exist a any location and will grow from their InitialExtents to their MaxExtents to fit data entering the channel data. Islands are as small as possible but can often overlap depending on the distribution of data entering the channel. */" },
		{ "Dynamic.Name", "ENiagraDataChannel_IslandMode::Dynamic" },
		{ "Dynamic.ToolTip", "Islands can exist a any location and will grow from their InitialExtents to their MaxExtents to fit data entering the channel data. Islands are as small as possible but can often overlap depending on the distribution of data entering the channel." },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagraDataChannel_IslandMode::AlignedStatic", (int64)ENiagraDataChannel_IslandMode::AlignedStatic },
		{ "ENiagraDataChannel_IslandMode::Dynamic", (int64)ENiagraDataChannel_IslandMode::Dynamic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagraDataChannel_IslandMode",
	"ENiagraDataChannel_IslandMode",
	Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode()
{
	if (!Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.InnerSingleton;
}
// End Enum ENiagraDataChannel_IslandMode

// Begin ScriptStruct FNDCIsland
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDCIsland;
class UScriptStruct* FNDCIsland::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDCIsland.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDCIsland.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDCIsland, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDCIsland"));
	}
	return Z_Registration_Info_UScriptStruct_NDCIsland.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDCIsland>()
{
	return FNDCIsland::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDCIsland_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a single data channel island. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Data for a single data channel island." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Comment", "/** The owning handler for this island. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "The owning handler for this island." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Comment", "/** Current bounds of this island. The bounds of any handler systems are modified to match these bounds. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Current bounds of this island. The bounds of any handler systems are modified to match these bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystems_MetaData[] = {
		{ "Comment", "/** Niagara components spawned for this island. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Niagara components spawned for this island." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraSystems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDCIsland>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDCIsland, Owner), Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDCIsland, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems_Inner = { "NiagaraSystems", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems = { "NiagaraSystems", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDCIsland, NiagaraSystems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystems_MetaData), NewProp_NiagaraSystems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDCIsland_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIsland_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDCIsland_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDCIsland",
	Z_Construct_UScriptStruct_FNDCIsland_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIsland_Statics::PropPointers),
	sizeof(FNDCIsland),
	alignof(FNDCIsland),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIsland_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDCIsland_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDCIsland()
{
	if (!Z_Registration_Info_UScriptStruct_NDCIsland.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDCIsland.InnerSingleton, Z_Construct_UScriptStruct_FNDCIsland_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDCIsland.InnerSingleton;
}
// End ScriptStruct FNDCIsland

// Begin ScriptStruct FNDCIslandDebugDrawSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings;
class UScriptStruct* FNDCIslandDebugDrawSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDCIslandDebugDrawSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDCIslandDebugDrawSettings>()
{
	return FNDCIslandDebugDrawSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Debug Drawing" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowIslandBounds_MetaData[] = {
		{ "Category", "Debug Drawing" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bShowIslandBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowIslandBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDCIslandDebugDrawSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FNDCIslandDebugDrawSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNDCIslandDebugDrawSettings), &Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds_SetBit(void* Obj)
{
	((FNDCIslandDebugDrawSettings*)Obj)->bShowIslandBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds = { "bShowIslandBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNDCIslandDebugDrawSettings), &Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowIslandBounds_MetaData), NewProp_bShowIslandBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDCIslandDebugDrawSettings",
	Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::PropPointers),
	sizeof(FNDCIslandDebugDrawSettings),
	alignof(FNDCIslandDebugDrawSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings()
{
	if (!Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.InnerSingleton, Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.InnerSingleton;
}
// End ScriptStruct FNDCIslandDebugDrawSettings

// Begin Class UNiagaraDataChannel_Islands
void UNiagaraDataChannel_Islands::StaticRegisterNativesUNiagaraDataChannel_Islands()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannel_Islands);
UClass* Z_Construct_UClass_UNiagaraDataChannel_Islands_NoRegister()
{
	return UNiagaraDataChannel_Islands::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\nData channel that will automatically sub-divide the world into discreet \"islands\" based on location.\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel_Islands.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "PrioritizeCategories", "Data Channel" },
		{ "ToolTip", "Data channel that will automatically sub-divide the world into discreet \"islands\" based on location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/** Controls how islands are placed and sized. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Controls how islands are placed and sized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialExtents_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/** Starting extents of the island's bounds. */" },
		{ "EditCondition", "Mode == ENiagraDataChannel_IslandMode::Dynamic" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Starting extents of the island's bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxExtents_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/** The maximum total extents of each island. If a new element would grow the bounds beyond this size then a new island is created. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "The maximum total extents of each island. If a new element would grow the bounds beyond this size then a new island is created." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerElementExtents_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/**\n\x09The extents for every element entered into this data channel.\n\x09We use this to pad the ends of islands to ensure that all data in an island will be covered.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "The extents for every element entered into this data channel.\nWe use this to pad the ends of islands to ensure that all data in an island will be covered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Systems_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/** \n\x09One or more Niagara Systems to spawn that will consume the data in this island.\n\x09""Each island will have an instance of these systems created.\n\x09These systems are intended to consume data for this whole island and generate effects that cover the whole island.\n\x09The actual bounds of each of these system instances will be set to the current total bounds of the island.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "One or more Niagara Systems to spawn that will consume the data in this island.\nEach island will have an instance of these systems created.\nThese systems are intended to consume data for this whole island and generate effects that cover the whole island.\nThe actual bounds of each of these system instances will be set to the current total bounds of the island." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IslandPoolSize_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/** How many pre-allocated islands to keep in the pool. Higher values will incur a larger standing memory cost but will reduce activation times for new islands. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "How many pre-allocated islands to keep in the pool. Higher values will incur a larger standing memory cost but will reduce activation times for new islands." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawSettings_MetaData[] = {
		{ "Category", "Debug Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemsInternal_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialExtents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxExtents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerElementExtents;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Systems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Systems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IslandPoolSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SystemsInternal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SystemsInternal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannel_Islands>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, Mode), Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2001620187
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_InitialExtents = { "InitialExtents", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, InitialExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialExtents_MetaData), NewProp_InitialExtents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_MaxExtents = { "MaxExtents", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, MaxExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxExtents_MetaData), NewProp_MaxExtents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_PerElementExtents = { "PerElementExtents", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, PerElementExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerElementExtents_MetaData), NewProp_PerElementExtents_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems_Inner = { "Systems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems = { "Systems", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, Systems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Systems_MetaData), NewProp_Systems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_IslandPoolSize = { "IslandPoolSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, IslandPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IslandPoolSize_MetaData), NewProp_IslandPoolSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_DebugDrawSettings = { "DebugDrawSettings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, DebugDrawSettings), Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawSettings_MetaData), NewProp_DebugDrawSettings_MetaData) }; // 2791085273
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal_Inner = { "SystemsInternal", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal = { "SystemsInternal", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, SystemsInternal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemsInternal_MetaData), NewProp_SystemsInternal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_InitialExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_MaxExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_PerElementExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_IslandPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_DebugDrawSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::ClassParams = {
	&UNiagaraDataChannel_Islands::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataChannel_Islands()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannel_Islands>()
{
	return UNiagaraDataChannel_Islands::StaticClass();
}
UNiagaraDataChannel_Islands::UNiagaraDataChannel_Islands(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannel_Islands);
UNiagaraDataChannel_Islands::~UNiagaraDataChannel_Islands() {}
// End Class UNiagaraDataChannel_Islands

// Begin Class UNiagaraDataChannelHandler_Islands
void UNiagaraDataChannelHandler_Islands::StaticRegisterNativesUNiagaraDataChannelHandler_Islands()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelHandler_Islands);
UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_NoRegister()
{
	return UNiagaraDataChannelHandler_Islands::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel_Islands.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveIslands_MetaData[] = {
		{ "Comment", "/** All currently active Islands for this channel. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "All currently active Islands for this channel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeIslands_MetaData[] = {
		{ "Comment", "/** All currently free Islands for this channel. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "All currently free Islands for this channel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IslandPool_MetaData[] = {
		{ "Comment", "/** Pool of all islands. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Pool of all islands." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveIslands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveIslands;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FreeIslands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FreeIslands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IslandPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IslandPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelHandler_Islands>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands_Inner = { "ActiveIslands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands = { "ActiveIslands", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelHandler_Islands, ActiveIslands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveIslands_MetaData), NewProp_ActiveIslands_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands_Inner = { "FreeIslands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands = { "FreeIslands", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelHandler_Islands, FreeIslands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeIslands_MetaData), NewProp_FreeIslands_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool_Inner = { "IslandPool", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDCIsland, METADATA_PARAMS(0, nullptr) }; // 3448118259
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool = { "IslandPool", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelHandler_Islands, IslandPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IslandPool_MetaData), NewProp_IslandPool_MetaData) }; // 3448118259
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataChannelHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::ClassParams = {
	&UNiagaraDataChannelHandler_Islands::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Islands()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelHandler_Islands>()
{
	return UNiagaraDataChannelHandler_Islands::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelHandler_Islands);
UNiagaraDataChannelHandler_Islands::~UNiagaraDataChannelHandler_Islands() {}
// End Class UNiagaraDataChannelHandler_Islands

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagraDataChannel_IslandMode_StaticEnum, TEXT("ENiagraDataChannel_IslandMode"), &Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2001620187U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDCIsland::StaticStruct, Z_Construct_UScriptStruct_FNDCIsland_Statics::NewStructOps, TEXT("NDCIsland"), &Z_Registration_Info_UScriptStruct_NDCIsland, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDCIsland), 3448118259U) },
		{ FNDCIslandDebugDrawSettings::StaticStruct, Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewStructOps, TEXT("NDCIslandDebugDrawSettings"), &Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDCIslandDebugDrawSettings), 2791085273U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannel_Islands, UNiagaraDataChannel_Islands::StaticClass, TEXT("UNiagaraDataChannel_Islands"), &Z_Registration_Info_UClass_UNiagaraDataChannel_Islands, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannel_Islands), 1613261850U) },
		{ Z_Construct_UClass_UNiagaraDataChannelHandler_Islands, UNiagaraDataChannelHandler_Islands::StaticClass, TEXT("UNiagaraDataChannelHandler_Islands"), &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelHandler_Islands), 2246593972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_3953145783(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
