// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosGameplayEventDispatcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosGameplayEventDispatcher() {}

// Begin Cross Module References
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosEventListenerComponent();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister();
CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBreakEventCallbackWrapper();
CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosHandlerSet();
CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper();
CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References

// Begin ScriptStruct FBreakEventCallbackWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper;
class UScriptStruct* FBreakEventCallbackWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBreakEventCallbackWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("BreakEventCallbackWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FBreakEventCallbackWrapper>()
{
	return FBreakEventCallbackWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** UStruct wrapper so we can store the TFunction in a TMap */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "UStruct wrapper so we can store the TFunction in a TMap" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBreakEventCallbackWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	nullptr,
	&NewStructOps,
	"BreakEventCallbackWrapper",
	nullptr,
	0,
	sizeof(FBreakEventCallbackWrapper),
	alignof(FBreakEventCallbackWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBreakEventCallbackWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.InnerSingleton, Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.InnerSingleton;
}
// End ScriptStruct FBreakEventCallbackWrapper

// Begin ScriptStruct FRemovalEventCallbackWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper;
class UScriptStruct* FRemovalEventCallbackWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("RemovalEventCallbackWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FRemovalEventCallbackWrapper>()
{
	return FRemovalEventCallbackWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** UStruct wrapper so we can store the TFunction in a TMap */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "UStruct wrapper so we can store the TFunction in a TMap" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemovalEventCallbackWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	nullptr,
	&NewStructOps,
	"RemovalEventCallbackWrapper",
	nullptr,
	0,
	sizeof(FRemovalEventCallbackWrapper),
	alignof(FRemovalEventCallbackWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.InnerSingleton, Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.InnerSingleton;
}
// End ScriptStruct FRemovalEventCallbackWrapper

// Begin ScriptStruct FCrumblingEventCallbackWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrumblingEventCallbackWrapper;
class UScriptStruct* FCrumblingEventCallbackWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrumblingEventCallbackWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrumblingEventCallbackWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("CrumblingEventCallbackWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_CrumblingEventCallbackWrapper.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FCrumblingEventCallbackWrapper>()
{
	return FCrumblingEventCallbackWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** UStruct wrapper so we can store the TFunction in a TMap */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "UStruct wrapper so we can store the TFunction in a TMap" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrumblingEventCallbackWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	nullptr,
	&NewStructOps,
	"CrumblingEventCallbackWrapper",
	nullptr,
	0,
	sizeof(FCrumblingEventCallbackWrapper),
	alignof(FCrumblingEventCallbackWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_CrumblingEventCallbackWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrumblingEventCallbackWrapper.InnerSingleton, Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CrumblingEventCallbackWrapper.InnerSingleton;
}
// End ScriptStruct FCrumblingEventCallbackWrapper

// Begin ScriptStruct FChaosHandlerSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosHandlerSet;
class UScriptStruct* FChaosHandlerSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosHandlerSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosHandlerSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosHandlerSet, (UObject*)Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosHandlerSet"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosHandlerSet.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosHandlerSet>()
{
	return FChaosHandlerSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosHandlerSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** UStruct wrapper so we can store the TSet in a TMap */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "UStruct wrapper so we can store the TSet in a TMap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaosHandlers_MetaData[] = {
		{ "Comment", "/** These should be IChaosNotifyHandlerInterface refs, but we can't store those here */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "These should be IChaosNotifyHandlerInterface refs, but we can't store those here" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChaosHandlers_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ChaosHandlers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosHandlerSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_ElementProp = { "ChaosHandlers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers = { "ChaosHandlers", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosHandlerSet, ChaosHandlers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaosHandlers_MetaData), NewProp_ChaosHandlers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	nullptr,
	&NewStructOps,
	"ChaosHandlerSet",
	Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::PropPointers),
	sizeof(FChaosHandlerSet),
	alignof(FChaosHandlerSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosHandlerSet()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosHandlerSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosHandlerSet.InnerSingleton, Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosHandlerSet.InnerSingleton;
}
// End ScriptStruct FChaosHandlerSet

// Begin Class UChaosGameplayEventDispatcher
void UChaosGameplayEventDispatcher::StaticRegisterNativesUChaosGameplayEventDispatcher()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosGameplayEventDispatcher);
UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister()
{
	return UChaosGameplayEventDispatcher::StaticClass();
}
struct Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEventRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakEventRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalEventRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrumblingEventRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionEventRegistrations_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionEventRegistrations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CollisionEventRegistrations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakEventRegistrations_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BreakEventRegistrations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BreakEventRegistrations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEventRegistrations_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemovalEventRegistrations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RemovalEventRegistrations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrumblingEventRegistrations_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrumblingEventRegistrations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CrumblingEventRegistrations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosGameplayEventDispatcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_ValueProp = { "CollisionEventRegistrations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FChaosHandlerSet, METADATA_PARAMS(0, nullptr) }; // 4174867193
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_Key_KeyProp = { "CollisionEventRegistrations_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations = { "CollisionEventRegistrations", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosGameplayEventDispatcher, CollisionEventRegistrations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEventRegistrations_MetaData), NewProp_CollisionEventRegistrations_MetaData) }; // 4174867193
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_ValueProp = { "BreakEventRegistrations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBreakEventCallbackWrapper, METADATA_PARAMS(0, nullptr) }; // 1937333888
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_Key_KeyProp = { "BreakEventRegistrations_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations = { "BreakEventRegistrations", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosGameplayEventDispatcher, BreakEventRegistrations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakEventRegistrations_MetaData), NewProp_BreakEventRegistrations_MetaData) }; // 1937333888
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_ValueProp = { "RemovalEventRegistrations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper, METADATA_PARAMS(0, nullptr) }; // 4016522846
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_Key_KeyProp = { "RemovalEventRegistrations_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations = { "RemovalEventRegistrations", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosGameplayEventDispatcher, RemovalEventRegistrations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalEventRegistrations_MetaData), NewProp_RemovalEventRegistrations_MetaData) }; // 4016522846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CrumblingEventRegistrations_ValueProp = { "CrumblingEventRegistrations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper, METADATA_PARAMS(0, nullptr) }; // 1069721851
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CrumblingEventRegistrations_Key_KeyProp = { "CrumblingEventRegistrations_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CrumblingEventRegistrations = { "CrumblingEventRegistrations", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosGameplayEventDispatcher, CrumblingEventRegistrations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrumblingEventRegistrations_MetaData), NewProp_CrumblingEventRegistrations_MetaData) }; // 1069721851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CrumblingEventRegistrations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CrumblingEventRegistrations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CrumblingEventRegistrations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosEventListenerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::ClassParams = {
	&UChaosGameplayEventDispatcher::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher()
{
	if (!Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.OuterSingleton, Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosGameplayEventDispatcher>()
{
	return UChaosGameplayEventDispatcher::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosGameplayEventDispatcher);
UChaosGameplayEventDispatcher::~UChaosGameplayEventDispatcher() {}
// End Class UChaosGameplayEventDispatcher

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBreakEventCallbackWrapper::StaticStruct, Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::NewStructOps, TEXT("BreakEventCallbackWrapper"), &Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBreakEventCallbackWrapper), 1937333888U) },
		{ FRemovalEventCallbackWrapper::StaticStruct, Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::NewStructOps, TEXT("RemovalEventCallbackWrapper"), &Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemovalEventCallbackWrapper), 4016522846U) },
		{ FCrumblingEventCallbackWrapper::StaticStruct, Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper_Statics::NewStructOps, TEXT("CrumblingEventCallbackWrapper"), &Z_Registration_Info_UScriptStruct_CrumblingEventCallbackWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrumblingEventCallbackWrapper), 1069721851U) },
		{ FChaosHandlerSet::StaticStruct, Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewStructOps, TEXT("ChaosHandlerSet"), &Z_Registration_Info_UScriptStruct_ChaosHandlerSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosHandlerSet), 4174867193U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosGameplayEventDispatcher, UChaosGameplayEventDispatcher::StaticClass, TEXT("UChaosGameplayEventDispatcher"), &Z_Registration_Info_UClass_UChaosGameplayEventDispatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosGameplayEventDispatcher), 3842592471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_1772913242(TEXT("/Script/ChaosSolverEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
