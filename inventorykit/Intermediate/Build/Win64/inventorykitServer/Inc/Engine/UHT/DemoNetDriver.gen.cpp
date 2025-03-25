// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoNetDriver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver();
ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMulticastRecordOptions();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FRollbackNetStartupActorInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo;
class UScriptStruct* FRollbackNetStartupActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RollbackNetStartupActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRollbackNetStartupActorInfo>()
{
	return FRollbackNetStartupActorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about net startup actors that need to be rolled back by being destroyed and re-created */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Information about net startup actors that need to be rolled back by being destroyed and re-created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Archetype_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Archetype;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjReferences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjReferences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRollbackNetStartupActorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype = { "Archetype", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRollbackNetStartupActorInfo, Archetype), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Archetype_MetaData), NewProp_Archetype_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_Inner = { "ObjReferences", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences = { "ObjReferences", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRollbackNetStartupActorInfo, ObjReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjReferences_MetaData), NewProp_ObjReferences_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RollbackNetStartupActorInfo",
	Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers),
	sizeof(FRollbackNetStartupActorInfo),
	alignof(FRollbackNetStartupActorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo.InnerSingleton;
}
// End ScriptStruct FRollbackNetStartupActorInfo

// Begin ScriptStruct FMulticastRecordOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MulticastRecordOptions;
class UScriptStruct* FMulticastRecordOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MulticastRecordOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MulticastRecordOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMulticastRecordOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MulticastRecordOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MulticastRecordOptions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMulticastRecordOptions>()
{
	return FMulticastRecordOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuncPathName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bServerSkip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClientSkip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FuncPathName;
	static void NewProp_bServerSkip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerSkip;
	static void NewProp_bClientSkip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientSkip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMulticastRecordOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName = { "FuncPathName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMulticastRecordOptions, FuncPathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuncPathName_MetaData), NewProp_FuncPathName_MetaData) };
void Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_SetBit(void* Obj)
{
	((FMulticastRecordOptions*)Obj)->bServerSkip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip = { "bServerSkip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMulticastRecordOptions), &Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bServerSkip_MetaData), NewProp_bServerSkip_MetaData) };
void Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_SetBit(void* Obj)
{
	((FMulticastRecordOptions*)Obj)->bClientSkip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip = { "bClientSkip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMulticastRecordOptions), &Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClientSkip_MetaData), NewProp_bClientSkip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MulticastRecordOptions",
	Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::PropPointers),
	sizeof(FMulticastRecordOptions),
	alignof(FMulticastRecordOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMulticastRecordOptions()
{
	if (!Z_Registration_Info_UScriptStruct_MulticastRecordOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MulticastRecordOptions.InnerSingleton, Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MulticastRecordOptions.InnerSingleton;
}
// End ScriptStruct FMulticastRecordOptions

// Begin Class UDemoNetDriver
void UDemoNetDriver::StaticRegisterNativesUDemoNetDriver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDemoNetDriver);
UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister()
{
	return UDemoNetDriver::StaticClass();
}
struct Z_Construct_UClass_UDemoNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simulated network driver for recording and playing back game sessions.\n */" },
		{ "IncludePath", "Engine/DemoNetDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simulated network driver for recording and playing back game sessions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollbackNetStartupActors_MetaData[] = {
		{ "Comment", "/** \n\x09 * Net startup actors that need to be rolled back during scrubbing by being destroyed and re-spawned \n\x09 * NOTE - DeletedNetStartupActors will take precedence here, and destroy the actor instead\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Net startup actors that need to be rolled back during scrubbing by being destroyed and re-spawned\nNOTE - DeletedNetStartupActors will take precedence here, and destroy the actor instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointSaveMaxMSPerFrame_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes.\n\x09 * See also demo.CheckpointSaveMaxMSPerFrameOverride.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes.\nSee also demo.CheckpointSaveMaxMSPerFrameOverride." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MulticastRecordOptions_MetaData[] = {
		{ "Comment", "/** Config data for multicast RPCs we might want to skip recording. */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Config data for multicast RPCs we might want to skip recording." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorControllers_MetaData[] = {
		{ "Comment", "/** An array of all the spectator controllers (the main one and all splitscreen ones) that currently exist */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "An array of all the spectator controllers (the main one and all splitscreen ones) that currently exist" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RollbackNetStartupActors_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RollbackNetStartupActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RollbackNetStartupActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckpointSaveMaxMSPerFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MulticastRecordOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MulticastRecordOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpectatorControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpectatorControllers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_ValueProp = { "RollbackNetStartupActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, METADATA_PARAMS(0, nullptr) }; // 4215847681
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_Key_KeyProp = { "RollbackNetStartupActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors = { "RollbackNetStartupActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDemoNetDriver, RollbackNetStartupActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollbackNetStartupActors_MetaData), NewProp_RollbackNetStartupActors_MetaData) }; // 4215847681
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame = { "CheckpointSaveMaxMSPerFrame", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDemoNetDriver, CheckpointSaveMaxMSPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointSaveMaxMSPerFrame_MetaData), NewProp_CheckpointSaveMaxMSPerFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_Inner = { "MulticastRecordOptions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMulticastRecordOptions, METADATA_PARAMS(0, nullptr) }; // 2271085656
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions = { "MulticastRecordOptions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDemoNetDriver, MulticastRecordOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MulticastRecordOptions_MetaData), NewProp_MulticastRecordOptions_MetaData) }; // 2271085656
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_Inner = { "SpectatorControllers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers = { "SpectatorControllers", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDemoNetDriver, SpectatorControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectatorControllers_MetaData), NewProp_SpectatorControllers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDemoNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDemoNetDriver_Statics::ClassParams = {
	&UDemoNetDriver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDemoNetDriver()
{
	if (!Z_Registration_Info_UClass_UDemoNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDemoNetDriver.OuterSingleton, Z_Construct_UClass_UDemoNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDemoNetDriver.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDemoNetDriver>()
{
	return UDemoNetDriver::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDemoNetDriver)
// End Class UDemoNetDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRollbackNetStartupActorInfo::StaticStruct, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewStructOps, TEXT("RollbackNetStartupActorInfo"), &Z_Registration_Info_UScriptStruct_RollbackNetStartupActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRollbackNetStartupActorInfo), 4215847681U) },
		{ FMulticastRecordOptions::StaticStruct, Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewStructOps, TEXT("MulticastRecordOptions"), &Z_Registration_Info_UScriptStruct_MulticastRecordOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMulticastRecordOptions), 2271085656U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDemoNetDriver, UDemoNetDriver::StaticClass, TEXT("UDemoNetDriver"), &Z_Registration_Info_UClass_UDemoNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDemoNetDriver), 2440546780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_978073620(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
