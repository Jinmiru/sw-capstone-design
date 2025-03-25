// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/DestructibleHLODComponent.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleHLODComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionDestructibleHLODComponent
void UWorldPartitionDestructibleHLODComponent::StaticRegisterNativesUWorldPartitionDestructibleHLODComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionDestructibleHLODComponent);
UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister()
{
	return UWorldPartitionDestructibleHLODComponent::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Tags Sockets ComponentTick ComponentReplication Activation Cooking Events AssetUserData Collision Trigger PhysicsVolume" },
		{ "IncludePath", "WorldPartition/HLOD/DestructibleHLODComponent.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleActors_MetaData[] = {
		{ "Comment", "// Name of the destructible actors from the source cell.\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
		{ "ToolTip", "Name of the destructible actors from the source cell." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DestructibleActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DestructibleActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionDestructibleHLODComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors_Inner = { "DestructibleActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors = { "DestructibleActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionDestructibleHLODComponent, DestructibleActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructibleActors_MetaData), NewProp_DestructibleActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::ClassParams = {
	&UWorldPartitionDestructibleHLODComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::PropPointers),
	0,
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.OuterSingleton, Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionDestructibleHLODComponent>()
{
	return UWorldPartitionDestructibleHLODComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionDestructibleHLODComponent);
UWorldPartitionDestructibleHLODComponent::~UWorldPartitionDestructibleHLODComponent() {}
// End Class UWorldPartitionDestructibleHLODComponent

// Begin ScriptStruct FWorldPartitionDestructibleHLODDamagedActorState
static_assert(std::is_polymorphic<FWorldPartitionDestructibleHLODDamagedActorState>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FWorldPartitionDestructibleHLODDamagedActorState cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState;
class UScriptStruct* FWorldPartitionDestructibleHLODDamagedActorState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionDestructibleHLODDamagedActorState"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionDestructibleHLODDamagedActorState>()
{
	return FWorldPartitionDestructibleHLODDamagedActorState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Entry for a damaged actor\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
		{ "ToolTip", "Entry for a damaged actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorHealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActorIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActorHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionDestructibleHLODDamagedActorState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorIndex = { "ActorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionDestructibleHLODDamagedActorState, ActorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorIndex_MetaData), NewProp_ActorIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorHealth = { "ActorHealth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionDestructibleHLODDamagedActorState, ActorHealth), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorHealth_MetaData), NewProp_ActorHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"WorldPartitionDestructibleHLODDamagedActorState",
	Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::PropPointers),
	sizeof(FWorldPartitionDestructibleHLODDamagedActorState),
	alignof(FWorldPartitionDestructibleHLODDamagedActorState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.InnerSingleton;
}
// End ScriptStruct FWorldPartitionDestructibleHLODDamagedActorState

// Begin ScriptStruct FWorldPartitionDestructibleHLODState
static_assert(std::is_polymorphic<FWorldPartitionDestructibleHLODState>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FWorldPartitionDestructibleHLODState cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState;
class UScriptStruct* FWorldPartitionDestructibleHLODState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionDestructibleHLODState"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionDestructibleHLODState>()
{
	return FWorldPartitionDestructibleHLODState::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FWorldPartitionDestructibleHLODState);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FWorldPartitionDestructibleHLODState);
#endif
struct Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Replicated state of the destructible HLOD\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
		{ "ToolTip", "Replicated state of the destructible HLOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamagedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DamagedActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionDestructibleHLODState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors_Inner = { "DamagedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState, METADATA_PARAMS(0, nullptr) }; // 3358595673
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors = { "DamagedActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionDestructibleHLODState, DamagedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagedActors_MetaData), NewProp_DamagedActors_MetaData) }; // 3358595673
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionDestructibleHLODState, OwnerComponent), Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"WorldPartitionDestructibleHLODState",
	Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::PropPointers),
	sizeof(FWorldPartitionDestructibleHLODState),
	alignof(FWorldPartitionDestructibleHLODState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.InnerSingleton;
}
// End ScriptStruct FWorldPartitionDestructibleHLODState

// Begin Class UWorldPartitionDestructibleHLODMeshComponent
void UWorldPartitionDestructibleHLODMeshComponent::StaticRegisterNativesUWorldPartitionDestructibleHLODMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionDestructibleHLODMeshComponent);
UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_NoRegister()
{
	return UWorldPartitionDestructibleHLODMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Tags Sockets ComponentTick ComponentReplication Activation Cooking Events AssetUserData Collision Trigger PhysicsVolume" },
		{ "IncludePath", "WorldPartition/HLOD/DestructibleHLODComponent.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleHLODMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleHLODState_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestructibleHLODMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestructibleHLODState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisibilityMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisibilityTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionDestructibleHLODMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODMaterial = { "DestructibleHLODMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionDestructibleHLODMeshComponent, DestructibleHLODMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructibleHLODMaterial_MetaData), NewProp_DestructibleHLODMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODState = { "DestructibleHLODState", nullptr, (EPropertyFlags)0x0040008000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionDestructibleHLODMeshComponent, DestructibleHLODState), Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructibleHLODState_MetaData), NewProp_DestructibleHLODState_MetaData) }; // 2362278394
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityMaterial = { "VisibilityMaterial", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionDestructibleHLODMeshComponent, VisibilityMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityMaterial_MetaData), NewProp_VisibilityMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityTexture = { "VisibilityTexture", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionDestructibleHLODMeshComponent, VisibilityTexture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityTexture_MetaData), NewProp_VisibilityTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::ClassParams = {
	&UWorldPartitionDestructibleHLODMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODMeshComponent.OuterSingleton, Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODMeshComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionDestructibleHLODMeshComponent>()
{
	return UWorldPartitionDestructibleHLODMeshComponent::StaticClass();
}
void UWorldPartitionDestructibleHLODMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_DestructibleHLODState(TEXT("DestructibleHLODState"));
	const bool bIsValid = true
		&& Name_DestructibleHLODState == ClassReps[(int32)ENetFields_Private::DestructibleHLODState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWorldPartitionDestructibleHLODMeshComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionDestructibleHLODMeshComponent);
UWorldPartitionDestructibleHLODMeshComponent::~UWorldPartitionDestructibleHLODMeshComponent() {}
// End Class UWorldPartitionDestructibleHLODMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldPartitionDestructibleHLODDamagedActorState::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewStructOps, TEXT("WorldPartitionDestructibleHLODDamagedActorState"), &Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionDestructibleHLODDamagedActorState), 3358595673U) },
		{ FWorldPartitionDestructibleHLODState::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewStructOps, TEXT("WorldPartitionDestructibleHLODState"), &Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionDestructibleHLODState), 2362278394U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent, UWorldPartitionDestructibleHLODComponent::StaticClass, TEXT("UWorldPartitionDestructibleHLODComponent"), &Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionDestructibleHLODComponent), 3116931932U) },
		{ Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent, UWorldPartitionDestructibleHLODMeshComponent::StaticClass, TEXT("UWorldPartitionDestructibleHLODMeshComponent"), &Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionDestructibleHLODMeshComponent), 3589952202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_1507089989(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
