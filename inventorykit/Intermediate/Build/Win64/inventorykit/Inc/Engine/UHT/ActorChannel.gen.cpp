// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ActorChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorChannel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorChannel();
ENGINE_API UClass* Z_Construct_UClass_UActorChannel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChannel();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UActorChannel
void UActorChannel::StaticRegisterNativesUActorChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorChannel);
UClass* Z_Construct_UClass_UActorChannel_NoRegister()
{
	return UActorChannel::StaticClass();
}
struct Z_Construct_UClass_UActorChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A channel for exchanging actor and its subobject's properties and RPCs.\n *\n * ActorChannel manages the creation and lifetime of a replicated actor. Actual replication of properties and RPCs\n * actually happens in FObjectReplicator now (see DataReplication.h).\n *\n * An ActorChannel bunch looks like this:\n *\n * +----------------------+---------------------------------------------------------------------------+\n * | SpawnInfo            | (Spawn Info) Initial bunch only                                           |\n * |  -Actor Class        |   -Created by ActorChannel                                                |\n * |  -Spawn Loc/Rot      |                                                                           |\n * | NetGUID assigns      |                                                                           |\n * |  -Actor NetGUID      |                                                                           |\n * |  -Component NetGUIDs |                                                                           |\n * +----------------------+---------------------------------------------------------------------------+\n * |                      |                                                                           |\n * +----------------------+---------------------------------------------------------------------------+\n * | NetGUID ObjRef       | (Content chunks) x number of replicating objects (Actor + any components) |\n * |                      |   -Each chunk created by its own FObjectReplicator instance.              |\n * +----------------------+---------------------------------------------------------------------------+\n * |                      |                                                                           |\n * | Properties...        |                                                                           |\n * |                      |                                                                           |\n * | RPCs...              |                                                                           |\n * |                      |                                                                           |\n * +----------------------+---------------------------------------------------------------------------+\n * | </End Tag>           |                                                                           |\n * +----------------------+---------------------------------------------------------------------------+\n */" },
		{ "IncludePath", "Engine/ActorChannel.h" },
		{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A channel for exchanging actor and its subobject's properties and RPCs.\n\nActorChannel manages the creation and lifetime of a replicated actor. Actual replication of properties and RPCs\nactually happens in FObjectReplicator now (see DataReplication.h).\n\nAn ActorChannel bunch looks like this:\n\n+----------------------+---------------------------------------------------------------------------+\n| SpawnInfo            | (Spawn Info) Initial bunch only                                           |\n|  -Actor Class        |   -Created by ActorChannel                                                |\n|  -Spawn Loc/Rot      |                                                                           |\n| NetGUID assigns      |                                                                           |\n|  -Actor NetGUID      |                                                                           |\n|  -Component NetGUIDs |                                                                           |\n+----------------------+---------------------------------------------------------------------------+\n|                      |                                                                           |\n+----------------------+---------------------------------------------------------------------------+\n| NetGUID ObjRef       | (Content chunks) x number of replicating objects (Actor + any components) |\n|                      |   -Each chunk created by its own FObjectReplicator instance.              |\n+----------------------+---------------------------------------------------------------------------+\n|                      |                                                                           |\n| Properties...        |                                                                           |\n|                      |                                                                           |\n| RPCs...              |                                                                           |\n|                      |                                                                           |\n+----------------------+---------------------------------------------------------------------------+\n| </End Tag>           |                                                                           |\n+----------------------+---------------------------------------------------------------------------+" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Comment", "// Variables.\n" },
		{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
		{ "ToolTip", "Variables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateSubObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreateSubObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CreateSubObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorChannel, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_Inner = { "CreateSubObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects = { "CreateSubObjects", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorChannel, CreateSubObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateSubObjects_MetaData), NewProp_CreateSubObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActorChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorChannel_Statics::ClassParams = {
	&UActorChannel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActorChannel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorChannel()
{
	if (!Z_Registration_Info_UClass_UActorChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorChannel.OuterSingleton, Z_Construct_UClass_UActorChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorChannel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UActorChannel>()
{
	return UActorChannel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorChannel);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UActorChannel)
// End Class UActorChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorChannel, UActorChannel::StaticClass, TEXT("UActorChannel"), &Z_Registration_Info_UClass_UActorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorChannel), 1305955738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_46218670(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
