// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayDebugger/Public/GameplayDebuggerCategoryReplicator.h"
#include "Runtime/GameplayDebugger/Public/GameplayDebuggerTypes.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerCategoryReplicator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister();
GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData();
GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader();
GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams();
GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor();
GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack();
GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerShape();
GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync();
UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
// End Cross Module References

// Begin ScriptStruct FGameplayDebuggerDataPackRPCParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams;
class UScriptStruct* FGameplayDebuggerDataPackRPCParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerDataPackRPCParams"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerDataPackRPCParams>()
{
	return FGameplayDebuggerDataPackRPCParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Struct used to send the DataPackPackets as RPC`s instead of using the CustomDeltaNetSerializer.\n" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "Struct used to send the DataPackPackets as RPC`s instead of using the CustomDeltaNetSerializer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataPackIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataPackIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerDataPackRPCParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerDataPackRPCParams, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_DataPackIdx = { "DataPackIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerDataPackRPCParams, DataPackIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataPackIdx_MetaData), NewProp_DataPackIdx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerDataPackRPCParams, Header), Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) }; // 640471944
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerDataPackRPCParams, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_DataPackIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	nullptr,
	&NewStructOps,
	"GameplayDebuggerDataPackRPCParams",
	Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::PropPointers),
	sizeof(FGameplayDebuggerDataPackRPCParams),
	alignof(FGameplayDebuggerDataPackRPCParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams.InnerSingleton;
}
// End ScriptStruct FGameplayDebuggerDataPackRPCParams

// Begin ScriptStruct FGameplayDebuggerCategoryData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData;
class UScriptStruct* FGameplayDebuggerCategoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerCategoryData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerCategoryData>()
{
	return FGameplayDebuggerCategoryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataPacks_MetaData[] = {
		{ "Comment", "// Either replicated using the NetDeltaSerialize or alternatively as regular RPC`s\n" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "Either replicated using the NetDeltaSerialize or alternatively as regular RPC`s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextLines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Shapes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataPacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataPacks;
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerCategoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerCategoryData, CategoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryName_MetaData), NewProp_CategoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines_Inner = { "TextLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines = { "TextLines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerCategoryData, TextLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextLines_MetaData), NewProp_TextLines_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayDebuggerShape, METADATA_PARAMS(0, nullptr) }; // 3412822394
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerCategoryData, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shapes_MetaData), NewProp_Shapes_MetaData) }; // 3412822394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks_Inner = { "DataPacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayDebuggerDataPackHeader, METADATA_PARAMS(0, nullptr) }; // 640471944
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks = { "DataPacks", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerCategoryData, DataPacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataPacks_MetaData), NewProp_DataPacks_MetaData) }; // 640471944
void Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((FGameplayDebuggerCategoryData*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayDebuggerCategoryData), &Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_TextLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_Shapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_DataPacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	nullptr,
	&NewStructOps,
	"GameplayDebuggerCategoryData",
	Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::PropPointers),
	sizeof(FGameplayDebuggerCategoryData),
	alignof(FGameplayDebuggerCategoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData.InnerSingleton;
}
// End ScriptStruct FGameplayDebuggerCategoryData

// Begin ScriptStruct FGameplayDebuggerNetPack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack;
class UScriptStruct* FGameplayDebuggerNetPack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerNetPack"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerNetPack>()
{
	return FGameplayDebuggerNetPack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerNetPack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000080000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerNetPack, Owner), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData_Inner = { "SavedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData, METADATA_PARAMS(0, nullptr) }; // 505414037
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData = { "SavedData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerNetPack, SavedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedData_MetaData), NewProp_SavedData_MetaData) }; // 505414037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewProp_SavedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	nullptr,
	&NewStructOps,
	"GameplayDebuggerNetPack",
	Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::PropPointers),
	sizeof(FGameplayDebuggerNetPack),
	alignof(FGameplayDebuggerNetPack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack.InnerSingleton;
}
// End ScriptStruct FGameplayDebuggerNetPack

// Begin ScriptStruct FGameplayDebuggerDebugActor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor;
class UScriptStruct* FGameplayDebuggerDebugActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerDebugActor"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerDebugActor>()
{
	return FGameplayDebuggerDebugActor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_SyncCounter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerDebugActor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerDebugActor, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerDebugActor, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorName_MetaData), NewProp_ActorName_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter = { "SyncCounter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerDebugActor, SyncCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncCounter_MetaData), NewProp_SyncCounter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	nullptr,
	&NewStructOps,
	"GameplayDebuggerDebugActor",
	Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::PropPointers),
	sizeof(FGameplayDebuggerDebugActor),
	alignof(FGameplayDebuggerDebugActor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor.InnerSingleton;
}
// End ScriptStruct FGameplayDebuggerDebugActor

// Begin ScriptStruct FGameplayDebuggerVisLogSync
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync;
class UScriptStruct* FGameplayDebuggerVisLogSync::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerVisLogSync"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerVisLogSync>()
{
	return FGameplayDebuggerVisLogSync::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceIDs_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerVisLogSync>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs = { "DeviceIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayDebuggerVisLogSync, DeviceIDs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceIDs_MetaData), NewProp_DeviceIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	nullptr,
	&NewStructOps,
	"GameplayDebuggerVisLogSync",
	Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::PropPointers),
	sizeof(FGameplayDebuggerVisLogSync),
	alignof(FGameplayDebuggerVisLogSync),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync.InnerSingleton;
}
// End ScriptStruct FGameplayDebuggerVisLogSync

// Begin Class AGameplayDebuggerCategoryReplicator Function ClientDataPackPacket
struct GameplayDebuggerCategoryReplicator_eventClientDataPackPacket_Parms
{
	FGameplayDebuggerDataPackRPCParams Params;
};
static FName NAME_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket = FName(TEXT("ClientDataPackPacket"));
void AGameplayDebuggerCategoryReplicator::ClientDataPackPacket(FGameplayDebuggerDataPackRPCParams const& Params)
{
	GameplayDebuggerCategoryReplicator_eventClientDataPackPacket_Parms Parms;
	Parms.Params=Params;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket),&Parms);
}
struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** helper function for optionally sending DataPackPackets as RPC's */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "helper function for optionally sending DataPackPackets as RPC's" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventClientDataPackPacket_Parms, Params), Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 2836693189
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ClientDataPackPacket", nullptr, nullptr, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::PropPointers), sizeof(GameplayDebuggerCategoryReplicator_eventClientDataPackPacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayDebuggerCategoryReplicator_eventClientDataPackPacket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execClientDataPackPacket)
{
	P_GET_STRUCT(FGameplayDebuggerDataPackRPCParams,Z_Param_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientDataPackPacket_Implementation(Z_Param_Params);
	P_NATIVE_END;
}
// End Class AGameplayDebuggerCategoryReplicator Function ClientDataPackPacket

// Begin Class AGameplayDebuggerCategoryReplicator Function OnRep_ReplicatedData
struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "OnRep_ReplicatedData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execOnRep_ReplicatedData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReplicatedData();
	P_NATIVE_END;
}
// End Class AGameplayDebuggerCategoryReplicator Function OnRep_ReplicatedData

// Begin Class AGameplayDebuggerCategoryReplicator Function ServerResetViewPoint
static FName NAME_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint = FName(TEXT("ServerResetViewPoint"));
void AGameplayDebuggerCategoryReplicator::ServerResetViewPoint()
{
	ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint),NULL);
}
struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerResetViewPoint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerResetViewPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerResetViewPoint_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerResetViewPoint_Validate"));
		return;
	}
	P_THIS->ServerResetViewPoint_Implementation();
	P_NATIVE_END;
}
// End Class AGameplayDebuggerCategoryReplicator Function ServerResetViewPoint

// Begin Class AGameplayDebuggerCategoryReplicator Function ServerSendCategoryInputEvent
struct GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms
{
	int32 CategoryId;
	int32 HandlerId;
};
static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent = FName(TEXT("ServerSendCategoryInputEvent"));
void AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId)
{
	GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms Parms;
	Parms.CategoryId=CategoryId;
	Parms.HandlerId=HandlerId;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent),&Parms);
}
struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/** helper function for replicating input for category handlers */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "helper function for replicating input for category handlers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HandlerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms, CategoryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_HandlerId = { "HandlerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms, HandlerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_CategoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_HandlerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSendCategoryInputEvent", nullptr, nullptr, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::PropPointers), sizeof(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSendCategoryInputEvent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
	P_GET_PROPERTY(FIntProperty,Z_Param_HandlerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSendCategoryInputEvent_Validate(Z_Param_CategoryId,Z_Param_HandlerId))
	{
		RPC_ValidateFailed(TEXT("ServerSendCategoryInputEvent_Validate"));
		return;
	}
	P_THIS->ServerSendCategoryInputEvent_Implementation(Z_Param_CategoryId,Z_Param_HandlerId);
	P_NATIVE_END;
}
// End Class AGameplayDebuggerCategoryReplicator Function ServerSendCategoryInputEvent

// Begin Class AGameplayDebuggerCategoryReplicator Function ServerSendExtensionInputEvent
struct GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms
{
	int32 ExtensionId;
	int32 HandlerId;
};
static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent = FName(TEXT("ServerSendExtensionInputEvent"));
void AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId)
{
	GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms Parms;
	Parms.ExtensionId=ExtensionId;
	Parms.HandlerId=HandlerId;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent),&Parms);
}
struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/** helper function for replicating input for extension handlers */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "helper function for replicating input for extension handlers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExtensionId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HandlerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_ExtensionId = { "ExtensionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms, ExtensionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_HandlerId = { "HandlerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms, HandlerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_ExtensionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_HandlerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSendExtensionInputEvent", nullptr, nullptr, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::PropPointers), sizeof(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSendExtensionInputEvent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ExtensionId);
	P_GET_PROPERTY(FIntProperty,Z_Param_HandlerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSendExtensionInputEvent_Validate(Z_Param_ExtensionId,Z_Param_HandlerId))
	{
		RPC_ValidateFailed(TEXT("ServerSendExtensionInputEvent_Validate"));
		return;
	}
	P_THIS->ServerSendExtensionInputEvent_Implementation(Z_Param_ExtensionId,Z_Param_HandlerId);
	P_NATIVE_END;
}
// End Class AGameplayDebuggerCategoryReplicator Function ServerSendExtensionInputEvent

// Begin Class AGameplayDebuggerCategoryReplicator Function ServerSetCategoryEnabled
struct GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms
{
	int32 CategoryId;
	bool bEnable;
};
static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled = FName(TEXT("ServerSetCategoryEnabled"));
void AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int32 CategoryId, bool bEnable)
{
	GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms Parms;
	Parms.CategoryId=CategoryId;
	Parms.bEnable=bEnable ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled),&Parms);
}
struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryId;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms, CategoryId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_CategoryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetCategoryEnabled", nullptr, nullptr, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::PropPointers), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetCategoryEnabled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetCategoryEnabled_Validate(Z_Param_CategoryId,Z_Param_bEnable))
	{
		RPC_ValidateFailed(TEXT("ServerSetCategoryEnabled_Validate"));
		return;
	}
	P_THIS->ServerSetCategoryEnabled_Implementation(Z_Param_CategoryId,Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class AGameplayDebuggerCategoryReplicator Function ServerSetCategoryEnabled

// Begin Class AGameplayDebuggerCategoryReplicator Function ServerSetDebugActor
struct GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms
{
	AActor* Actor;
	bool bSelectInEditor;
};
static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor = FName(TEXT("ServerSetDebugActor"));
void AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(AActor* Actor, bool bSelectInEditor)
{
	GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms Parms;
	Parms.Actor=Actor;
	Parms.bSelectInEditor=bSelectInEditor ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor),&Parms);
}
struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_bSelectInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor_SetBit(void* Obj)
{
	((GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms*)Obj)->bSelectInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor = { "bSelectInEditor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms), &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetDebugActor", nullptr, nullptr, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::PropPointers), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetDebugActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_bSelectInEditor);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetDebugActor_Validate(Z_Param_Actor,Z_Param_bSelectInEditor))
	{
		RPC_ValidateFailed(TEXT("ServerSetDebugActor_Validate"));
		return;
	}
	P_THIS->ServerSetDebugActor_Implementation(Z_Param_Actor,Z_Param_bSelectInEditor);
	P_NATIVE_END;
}
// End Class AGameplayDebuggerCategoryReplicator Function ServerSetDebugActor

// Begin Class AGameplayDebuggerCategoryReplicator Function ServerSetEnabled
struct GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms
{
	bool bEnable;
};
static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled = FName(TEXT("ServerSetEnabled"));
void AGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool bEnable)
{
	GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms Parms;
	Parms.bEnable=bEnable ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled),&Parms);
}
struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms), &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetEnabled", nullptr, nullptr, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::PropPointers), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetEnabled)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetEnabled_Validate(Z_Param_bEnable))
	{
		RPC_ValidateFailed(TEXT("ServerSetEnabled_Validate"));
		return;
	}
	P_THIS->ServerSetEnabled_Implementation(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class AGameplayDebuggerCategoryReplicator Function ServerSetEnabled

// Begin Class AGameplayDebuggerCategoryReplicator Function ServerSetViewPoint
struct GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms
{
	FVector InViewLocation;
	FVector InViewDirection;
};
static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint = FName(TEXT("ServerSetViewPoint"));
void AGameplayDebuggerCategoryReplicator::ServerSetViewPoint(FVector const& InViewLocation, FVector const& InViewDirection)
{
	GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms Parms;
	Parms.InViewLocation=InViewLocation;
	Parms.InViewDirection=InViewDirection;
	ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint),&Parms);
}
struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InViewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InViewDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InViewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InViewDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewLocation = { "InViewLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms, InViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InViewLocation_MetaData), NewProp_InViewLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewDirection = { "InViewDirection", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms, InViewDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InViewDirection_MetaData), NewProp_InViewDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::NewProp_InViewDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetViewPoint", nullptr, nullptr, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::PropPointers), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameplayDebuggerCategoryReplicator_eventServerSetViewPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetViewPoint)
{
	P_GET_STRUCT(FVector,Z_Param_InViewLocation);
	P_GET_STRUCT(FVector,Z_Param_InViewDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetViewPoint_Validate(Z_Param_InViewLocation,Z_Param_InViewDirection))
	{
		RPC_ValidateFailed(TEXT("ServerSetViewPoint_Validate"));
		return;
	}
	P_THIS->ServerSetViewPoint_Implementation(Z_Param_InViewLocation,Z_Param_InViewDirection);
	P_NATIVE_END;
}
// End Class AGameplayDebuggerCategoryReplicator Function ServerSetViewPoint

// Begin Class AGameplayDebuggerCategoryReplicator
void AGameplayDebuggerCategoryReplicator::StaticRegisterNativesAGameplayDebuggerCategoryReplicator()
{
	UClass* Class = AGameplayDebuggerCategoryReplicator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientDataPackPacket", &AGameplayDebuggerCategoryReplicator::execClientDataPackPacket },
		{ "OnRep_ReplicatedData", &AGameplayDebuggerCategoryReplicator::execOnRep_ReplicatedData },
		{ "ServerResetViewPoint", &AGameplayDebuggerCategoryReplicator::execServerResetViewPoint },
		{ "ServerSendCategoryInputEvent", &AGameplayDebuggerCategoryReplicator::execServerSendCategoryInputEvent },
		{ "ServerSendExtensionInputEvent", &AGameplayDebuggerCategoryReplicator::execServerSendExtensionInputEvent },
		{ "ServerSetCategoryEnabled", &AGameplayDebuggerCategoryReplicator::execServerSetCategoryEnabled },
		{ "ServerSetDebugActor", &AGameplayDebuggerCategoryReplicator::execServerSetDebugActor },
		{ "ServerSetEnabled", &AGameplayDebuggerCategoryReplicator::execServerSetEnabled },
		{ "ServerSetViewPoint", &AGameplayDebuggerCategoryReplicator::execServerSetViewPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayDebuggerCategoryReplicator);
UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister()
{
	return AGameplayDebuggerCategoryReplicator::StaticClass();
}
struct Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerCategoryReplicator.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisLogSync_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComp_MetaData[] = {
		{ "Comment", "/** rendering component needs to attached to some actor, and this is as good as any */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "rendering component needs to attached to some actor, and this is as good as any" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPC;
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisLogSync;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderingComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ClientDataPackPacket, "ClientDataPackPacket" }, // 4076084986
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData, "OnRep_ReplicatedData" }, // 1293118834
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerResetViewPoint, "ServerResetViewPoint" }, // 3929051838
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent, "ServerSendCategoryInputEvent" }, // 3282046848
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent, "ServerSendExtensionInputEvent" }, // 4134822455
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled, "ServerSetCategoryEnabled" }, // 1706968907
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor, "ServerSetDebugActor" }, // 2677029749
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled, "ServerSetEnabled" }, // 2238867894
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetViewPoint, "ServerSetViewPoint" }, // 4115168190
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayDebuggerCategoryReplicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC = { "OwnerPC", nullptr, (EPropertyFlags)0x0124080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, OwnerPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPC_MetaData), NewProp_OwnerPC_MetaData) };
void Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((AGameplayDebuggerCategoryReplicator*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayDebuggerCategoryReplicator), &Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData = { "ReplicatedData", "OnRep_ReplicatedData", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, ReplicatedData), Z_Construct_UScriptStruct_FGameplayDebuggerNetPack, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedData_MetaData), NewProp_ReplicatedData_MetaData) }; // 3211418786
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor = { "DebugActor", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, DebugActor), Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugActor_MetaData), NewProp_DebugActor_MetaData) }; // 1887263638
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync = { "VisLogSync", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, VisLogSync), Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisLogSync_MetaData), NewProp_VisLogSync_MetaData) }; // 3352502775
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp = { "RenderingComp", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, RenderingComp), Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingComp_MetaData), NewProp_RenderingComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::ClassParams = {
	&AGameplayDebuggerCategoryReplicator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::PropPointers),
	0,
	0x048802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator()
{
	if (!Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.OuterSingleton, Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<AGameplayDebuggerCategoryReplicator>()
{
	return AGameplayDebuggerCategoryReplicator::StaticClass();
}
void AGameplayDebuggerCategoryReplicator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_OwnerPC(TEXT("OwnerPC"));
	static const FName Name_bIsEnabled(TEXT("bIsEnabled"));
	static const FName Name_ReplicatedData(TEXT("ReplicatedData"));
	static const FName Name_DebugActor(TEXT("DebugActor"));
	static const FName Name_VisLogSync(TEXT("VisLogSync"));
	const bool bIsValid = true
		&& Name_OwnerPC == ClassReps[(int32)ENetFields_Private::OwnerPC].Property->GetFName()
		&& Name_bIsEnabled == ClassReps[(int32)ENetFields_Private::bIsEnabled].Property->GetFName()
		&& Name_ReplicatedData == ClassReps[(int32)ENetFields_Private::ReplicatedData].Property->GetFName()
		&& Name_DebugActor == ClassReps[(int32)ENetFields_Private::DebugActor].Property->GetFName()
		&& Name_VisLogSync == ClassReps[(int32)ENetFields_Private::VisLogSync].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameplayDebuggerCategoryReplicator"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayDebuggerCategoryReplicator);
AGameplayDebuggerCategoryReplicator::~AGameplayDebuggerCategoryReplicator() {}
// End Class AGameplayDebuggerCategoryReplicator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayDebuggerDataPackRPCParams::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics::NewStructOps, TEXT("GameplayDebuggerDataPackRPCParams"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerDataPackRPCParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerDataPackRPCParams), 2836693189U) },
		{ FGameplayDebuggerCategoryData::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics::NewStructOps, TEXT("GameplayDebuggerCategoryData"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerCategoryData), 505414037U) },
		{ FGameplayDebuggerNetPack::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewStructOps, TEXT("GameplayDebuggerNetPack"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerNetPack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerNetPack), 3211418786U) },
		{ FGameplayDebuggerDebugActor::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewStructOps, TEXT("GameplayDebuggerDebugActor"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerDebugActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerDebugActor), 1887263638U) },
		{ FGameplayDebuggerVisLogSync::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewStructOps, TEXT("GameplayDebuggerVisLogSync"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerVisLogSync, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerVisLogSync), 3352502775U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, AGameplayDebuggerCategoryReplicator::StaticClass, TEXT("AGameplayDebuggerCategoryReplicator"), &Z_Registration_Info_UClass_AGameplayDebuggerCategoryReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayDebuggerCategoryReplicator), 3910169081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_3438323249(TEXT("/Script/GameplayDebugger"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
