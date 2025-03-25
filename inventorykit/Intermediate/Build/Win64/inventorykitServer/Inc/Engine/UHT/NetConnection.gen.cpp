// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetConnection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChildConnection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlayer();
ENGINE_API UClass* Z_Construct_UClass_USimulatedClientNetConnection();
ENGINE_API UClass* Z_Construct_UClass_USimulatedClientNetConnection_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNetConnection
void UNetConnection::StaticRegisterNativesUNetConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetConnection);
UClass* Z_Construct_UClass_UNetConnection_NoRegister()
{
	return UNetConnection::StaticClass();
}
struct Z_Construct_UClass_UNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/NetConnection.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Comment", "/** child connections for secondary viewports */" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "child connections for secondary viewports" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Driver_MetaData[] = {
		{ "Comment", "/** Owning net driver */" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Owning net driver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageMapClass_MetaData[] = {
		{ "Comment", "/** The class name for the PackageMap to be loaded */" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "The class name for the PackageMap to be loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageMap_MetaData[] = {
		{ "Comment", "/** Package map between local and remote. (negotiates net serialization) */" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Package map between local and remote. (negotiates net serialization)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenChannels_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SentTemporaries_MetaData[] = {
		{ "Comment", "/** This actor is bNetTemporary, which means it should never be replicated after it's initial packet is complete */" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "This actor is bNetTemporary, which means it should never be replicated after it's initial packet is complete" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[] = {
		{ "Comment", "/** The actor that is currently being viewed/controlled by the owning controller */" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "The actor that is currently being viewed/controlled by the owning controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[] = {
		{ "Comment", "/** Reference to controlling actor (usually PlayerController) */" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Reference to controlling actor (usually PlayerController)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPacket_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalAck_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[] = {
		{ "Comment", "/** Net id of remote player on this connection. Only valid on client connections (server side).*/" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Net id of remote player on this connection. Only valid on client connections (server side)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastReceiveTime_MetaData[] = {
		{ "Comment", "// Internal.\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Internal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxChannelSize_MetaData[] = {
		{ "Comment", "// Channel table.\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Channel table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsToTick_MetaData[] = {
		{ "Comment", "/**\n\x09 * The channels that need ticking. This will be a subset of OpenChannels, only including\n\x09 * channels that need to process either dormancy or queued bunches. Should be a significant\n\x09 * optimization over ticking and calling virtual functions on the potentially hundreds of\n\x09 * OpenChannels every frame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "The channels that need ticking. This will be a subset of OpenChannels, only including\nchannels that need to process either dormancy or queued bunches. Should be a significant\noptimization over ticking and calling virtual functions on the potentially hundreds of\nOpenChannels every frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PackageMapClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PackageMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OpenChannels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SentTemporaries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SentTemporaries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPacket;
	static void NewProp_InternalAck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InternalAck;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastReceiveTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMaxChannelSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChannelsToTick_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelsToTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChildConnection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, Driver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Driver_MetaData), NewProp_Driver_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMapClass = { "PackageMapClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, PackageMapClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPackageMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageMapClass_MetaData), NewProp_PackageMapClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMap = { "PackageMap", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, PackageMap), Z_Construct_UClass_UPackageMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageMap_MetaData), NewProp_PackageMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels_Inner = { "OpenChannels", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels = { "OpenChannels", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, OpenChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenChannels_MetaData), NewProp_OpenChannels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries_Inner = { "SentTemporaries", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries = { "SentTemporaries", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, SentTemporaries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SentTemporaries_MetaData), NewProp_SentTemporaries_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewTarget_MetaData), NewProp_ViewTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningActor_MetaData), NewProp_OwningActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_MaxPacket = { "MaxPacket", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, MaxPacket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPacket_MetaData), NewProp_MaxPacket_MetaData) };
void Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck_SetBit(void* Obj)
{
	((UNetConnection*)Obj)->InternalAck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck = { "InternalAck", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNetConnection), &Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalAck_MetaData), NewProp_InternalAck_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerId_MetaData), NewProp_PlayerId_MetaData) }; // 3410776867
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_LastReceiveTime = { "LastReceiveTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, LastReceiveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastReceiveTime_MetaData), NewProp_LastReceiveTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_DefaultMaxChannelSize = { "DefaultMaxChannelSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, DefaultMaxChannelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaxChannelSize_MetaData), NewProp_DefaultMaxChannelSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick_Inner = { "ChannelsToTick", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick = { "ChannelsToTick", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetConnection, ChannelsToTick), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelsToTick_MetaData), NewProp_ChannelsToTick_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_Children,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_Driver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMapClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_ViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_OwningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_MaxPacket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_PlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_LastReceiveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_DefaultMaxChannelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetConnection_Statics::ClassParams = {
	&UNetConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetConnection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::PropPointers),
	0,
	0x000800ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetConnection()
{
	if (!Z_Registration_Info_UClass_UNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetConnection.OuterSingleton, Z_Construct_UClass_UNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetConnection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetConnection>()
{
	return UNetConnection::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNetConnection)
// End Class UNetConnection

// Begin Class USimulatedClientNetConnection
void USimulatedClientNetConnection::StaticRegisterNativesUSimulatedClientNetConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimulatedClientNetConnection);
UClass* Z_Construct_UClass_USimulatedClientNetConnection_NoRegister()
{
	return USimulatedClientNetConnection::StaticClass();
}
struct Z_Construct_UClass_USimulatedClientNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A fake connection that will absorb traffic and auto ack every packet. Useful for testing scaling. Use net.SimulateConnections command to add at runtime. */" },
		{ "IncludePath", "Engine/NetConnection.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "A fake connection that will absorb traffic and auto ack every packet. Useful for testing scaling. Use net.SimulateConnections command to add at runtime." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimulatedClientNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimulatedClientNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimulatedClientNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimulatedClientNetConnection_Statics::ClassParams = {
	&USimulatedClientNetConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimulatedClientNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_USimulatedClientNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimulatedClientNetConnection()
{
	if (!Z_Registration_Info_UClass_USimulatedClientNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimulatedClientNetConnection.OuterSingleton, Z_Construct_UClass_USimulatedClientNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimulatedClientNetConnection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USimulatedClientNetConnection>()
{
	return USimulatedClientNetConnection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimulatedClientNetConnection);
USimulatedClientNetConnection::~USimulatedClientNetConnection() {}
// End Class USimulatedClientNetConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetConnection, UNetConnection::StaticClass, TEXT("UNetConnection"), &Z_Registration_Info_UClass_UNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetConnection), 2670754833U) },
		{ Z_Construct_UClass_USimulatedClientNetConnection, USimulatedClientNetConnection::StaticClass, TEXT("USimulatedClientNetConnection"), &Z_Registration_Info_UClass_USimulatedClientNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimulatedClientNetConnection), 658579030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_540279143(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
