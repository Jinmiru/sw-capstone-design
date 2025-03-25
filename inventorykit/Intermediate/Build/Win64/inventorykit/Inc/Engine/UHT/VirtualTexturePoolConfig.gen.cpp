// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VT/VirtualTexturePoolConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTexturePoolConfig() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexturePoolConfig();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexturePoolConfig_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FVirtualTextureSpacePoolConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig;
class UScriptStruct* FVirtualTextureSpacePoolConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VirtualTextureSpacePoolConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVirtualTextureSpacePoolConfig>()
{
	return FVirtualTextureSpacePoolConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Settings for a single virtual texture physical pool. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Settings for a single virtual texture physical pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Formats_MetaData[] = {
		{ "Category", "PoolConfig|Filter" },
		{ "Comment", "/** Formats of the layers in the physical pool. Leave empty to match any format. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Formats of the layers in the physical pool. Leave empty to match any format." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTileSize_MetaData[] = {
		{ "Category", "PoolConfig|Filter" },
		{ "Comment", "/** Minimum tile size to match (including tile border). */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Minimum tile size to match (including tile border)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTileSize_MetaData[] = {
		{ "Category", "PoolConfig|Filter" },
		{ "Comment", "/** Maximum tile size to match (including tile border). Set to 0 to match any tile size. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Maximum tile size to match (including tile border). Set to 0 to match any tile size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeInMegabyte_MetaData[] = {
		{ "Category", "PoolConfig" },
		{ "Comment", "/** Upper limit size in megabytes to allocate for the pool. The allocator will allocate as close as possible below this limit. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Upper limit size in megabytes to allocate for the pool. The allocator will allocate as close as possible below this limit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableResidencyMipMapBias_MetaData[] = {
		{ "Category", "PoolConfig" },
		{ "Comment", "/** Enable MipMapBias based on pool residency tracking. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Enable MipMapBias based on pool residency tracking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSizeScale_MetaData[] = {
		{ "Category", "PoolConfig|Scalabiity" },
		{ "Comment", "/** Allow the size to allocate for the pool to be scaled by scalability settings. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Allow the size to allocate for the pool to be scaled by scalability settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScaledSizeInMegabyte_MetaData[] = {
		{ "Category", "PoolConfig|Scalability" },
		{ "Comment", "/** Lower limit of size in megabytes to allocate for the pool after size scaling. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Lower limit of size in megabytes to allocate for the pool after size scaling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaledSizeInMegabyte_MetaData[] = {
		{ "Category", "PoolConfig|Scalability" },
		{ "Comment", "/** Upper limit of size in megabytes to allocate for the pool after size scaling. Set to 0 to ignore. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Upper limit of size in megabytes to allocate for the pool after size scaling. Set to 0 to ignore." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Formats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Formats;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinTileSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTileSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeInMegabyte;
	static void NewProp_bEnableResidencyMipMapBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableResidencyMipMapBias;
	static void NewProp_bAllowSizeScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSizeScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinScaledSizeInMegabyte;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxScaledSizeInMegabyte;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualTextureSpacePoolConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_Inner = { "Formats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(0, nullptr) }; // 2609309733
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats = { "Formats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, Formats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Formats_MetaData), NewProp_Formats_MetaData) }; // 2609309733
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize = { "MinTileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, MinTileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTileSize_MetaData), NewProp_MinTileSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize = { "MaxTileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, MaxTileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTileSize_MetaData), NewProp_MaxTileSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte = { "SizeInMegabyte", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, SizeInMegabyte), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeInMegabyte_MetaData), NewProp_SizeInMegabyte_MetaData) };
void Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias_SetBit(void* Obj)
{
	((FVirtualTextureSpacePoolConfig*)Obj)->bEnableResidencyMipMapBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias = { "bEnableResidencyMipMapBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVirtualTextureSpacePoolConfig), &Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableResidencyMipMapBias_MetaData), NewProp_bEnableResidencyMipMapBias_MetaData) };
void Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_SetBit(void* Obj)
{
	((FVirtualTextureSpacePoolConfig*)Obj)->bAllowSizeScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale = { "bAllowSizeScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVirtualTextureSpacePoolConfig), &Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSizeScale_MetaData), NewProp_bAllowSizeScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinScaledSizeInMegabyte = { "MinScaledSizeInMegabyte", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, MinScaledSizeInMegabyte), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScaledSizeInMegabyte_MetaData), NewProp_MinScaledSizeInMegabyte_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxScaledSizeInMegabyte = { "MaxScaledSizeInMegabyte", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, MaxScaledSizeInMegabyte), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxScaledSizeInMegabyte_MetaData), NewProp_MaxScaledSizeInMegabyte_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinScaledSizeInMegabyte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxScaledSizeInMegabyte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"VirtualTextureSpacePoolConfig",
	Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::PropPointers),
	sizeof(FVirtualTextureSpacePoolConfig),
	alignof(FVirtualTextureSpacePoolConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.InnerSingleton, Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.InnerSingleton;
}
// End ScriptStruct FVirtualTextureSpacePoolConfig

// Begin Class UVirtualTexturePoolConfig
void UVirtualTexturePoolConfig::StaticRegisterNativesUVirtualTexturePoolConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTexturePoolConfig);
UClass* Z_Construct_UClass_UVirtualTexturePoolConfig_NoRegister()
{
	return UVirtualTexturePoolConfig::StaticClass();
}
struct Z_Construct_UClass_UVirtualTexturePoolConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Configuration for virtual texture physical pool sizes. */" },
		{ "DisplayName", "Virtual Texture Pool" },
		{ "IncludePath", "VT/VirtualTexturePoolConfig.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Configuration for virtual texture physical pool sizes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSizeInMegabyte_MetaData[] = {
		{ "Category", "PoolConfig" },
		{ "Comment", "/** Upper size limit in megabytes for any pools not explicitly matched by a config entry in the Pools array. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Upper size limit in megabytes for any pools not explicitly matched by a config entry in the Pools array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPoolAutoGrowInEditor_MetaData[] = {
		{ "Category", "PoolConfig" },
		{ "Comment", "/** \n\x09 * Enable physical pools growing on oversubscription.\n\x09 * Each physical pool will grow to the maximum size so far requested.\n\x09 * This setting applies to the editor only. To have similar behavior in a cooked build use r.VT.PoolAutoGrow.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Enable physical pools growing on oversubscription.\nEach physical pool will grow to the maximum size so far requested.\nThis setting applies to the editor only. To have similar behavior in a cooked build use r.VT.PoolAutoGrow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pools_MetaData[] = {
		{ "Category", "PoolConfig" },
		{ "Comment", "/** \n\x09 * Serialized array of configs. \n\x09 * A virtual texture physical pool iterates these from last to first and uses the first matching config that it finds. \n\x09 */" },
		{ "DisplayName", "Fixed Pools" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "TitleProperty", "Formats" },
		{ "ToolTip", "Serialized array of configs.\nA virtual texture physical pool iterates these from last to first and uses the first matching config that it finds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientPools_MetaData[] = {
		{ "Category", "PoolConfig" },
		{ "Comment", "/** \n\x09 * Transient array of runtime detected configs used by the PoolAutoGrow system.\n\x09 * A virtual texture physical pool searches these to find a match before searching the configs in Pools.\n\x09 * These tracked configs can be copied to the serialized Pools as a good estimation of the fixed pool sizes that a cooked project needs.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "TitleProperty", "Formats" },
		{ "ToolTip", "Transient array of runtime detected configs used by the PoolAutoGrow system.\nA virtual texture physical pool searches these to find a match before searching the configs in Pools.\nThese tracked configs can be copied to the serialized Pools as a good estimation of the fixed pool sizes that a cooked project needs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultSizeInMegabyte;
	static void NewProp_bPoolAutoGrowInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPoolAutoGrowInEditor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pools;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransientPools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransientPools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTexturePoolConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte = { "DefaultSizeInMegabyte", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTexturePoolConfig, DefaultSizeInMegabyte), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSizeInMegabyte_MetaData), NewProp_DefaultSizeInMegabyte_MetaData) };
void Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_bPoolAutoGrowInEditor_SetBit(void* Obj)
{
	((UVirtualTexturePoolConfig*)Obj)->bPoolAutoGrowInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_bPoolAutoGrowInEditor = { "bPoolAutoGrowInEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualTexturePoolConfig), &Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_bPoolAutoGrowInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPoolAutoGrowInEditor_MetaData), NewProp_bPoolAutoGrowInEditor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_Inner = { "Pools", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig, METADATA_PARAMS(0, nullptr) }; // 3490039118
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools = { "Pools", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTexturePoolConfig, Pools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pools_MetaData), NewProp_Pools_MetaData) }; // 3490039118
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_TransientPools_Inner = { "TransientPools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig, METADATA_PARAMS(0, nullptr) }; // 3490039118
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_TransientPools = { "TransientPools", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTexturePoolConfig, TransientPools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientPools_MetaData), NewProp_TransientPools_MetaData) }; // 3490039118
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_bPoolAutoGrowInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_TransientPools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_TransientPools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::ClassParams = {
	&UVirtualTexturePoolConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVirtualTexturePoolConfig()
{
	if (!Z_Registration_Info_UClass_UVirtualTexturePoolConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTexturePoolConfig.OuterSingleton, Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVirtualTexturePoolConfig.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVirtualTexturePoolConfig>()
{
	return UVirtualTexturePoolConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTexturePoolConfig);
UVirtualTexturePoolConfig::~UVirtualTexturePoolConfig() {}
// End Class UVirtualTexturePoolConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVirtualTextureSpacePoolConfig::StaticStruct, Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewStructOps, TEXT("VirtualTextureSpacePoolConfig"), &Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualTextureSpacePoolConfig), 3490039118U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualTexturePoolConfig, UVirtualTexturePoolConfig::StaticClass, TEXT("UVirtualTexturePoolConfig"), &Z_Registration_Info_UClass_UVirtualTexturePoolConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTexturePoolConfig), 1781273690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_1086526382(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
