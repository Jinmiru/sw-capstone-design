// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectCountLimiter() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectCountLimiter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectCountLimiter_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizer();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig();
IRISCORE_API UEnum* Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Enum ENetObjectCountLimiterMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetObjectCountLimiterMode;
static UEnum* ENetObjectCountLimiterMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ENetObjectCountLimiterMode"));
	}
	return Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton;
}
template<> IRISCORE_API UEnum* StaticEnum<ENetObjectCountLimiterMode>()
{
	return ENetObjectCountLimiterMode_StaticEnum();
}
struct Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Fill.Comment", "/**\n\x09 * Each net update the N least recently replicated objects with modified properties will be allowed to be replicated.\n\x09 * This can cause an object to be replicated very often if it's modified a lot and nothing else is.\n\x09 */" },
		{ "Fill.Name", "ENetObjectCountLimiterMode::Fill" },
		{ "Fill.ToolTip", "Each net update the N least recently replicated objects with modified properties will be allowed to be replicated.\nThis can cause an object to be replicated very often if it's modified a lot and nothing else is." },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "RoundRobin.Comment", "/**\n\x09 * Each net update the next N, as configured, objects will be allowed to be replicated if they have modified properties.\n\x09 * This means that even if there are many objects that have modified properties none will be sent if the N objects that\n\x09 * are considered this frame haven't been modified.\n\x09 */" },
		{ "RoundRobin.Name", "ENetObjectCountLimiterMode::RoundRobin" },
		{ "RoundRobin.ToolTip", "Each net update the next N, as configured, objects will be allowed to be replicated if they have modified properties.\nThis means that even if there are many objects that have modified properties none will be sent if the N objects that\nare considered this frame haven't been modified." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENetObjectCountLimiterMode::RoundRobin", (int64)ENetObjectCountLimiterMode::RoundRobin },
		{ "ENetObjectCountLimiterMode::Fill", (int64)ENetObjectCountLimiterMode::Fill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	"ENetObjectCountLimiterMode",
	"ENetObjectCountLimiterMode",
	Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode()
{
	if (!Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.InnerSingleton, Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.InnerSingleton;
}
// End Enum ENetObjectCountLimiterMode

// Begin Class UNetObjectCountLimiterConfig
void UNetObjectCountLimiterConfig::StaticRegisterNativesUNetObjectCountLimiterConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectCountLimiterConfig);
UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig_NoRegister()
{
	return UNetObjectCountLimiterConfig::StaticClass();
}
struct Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//TODO $IRIS: Document class usage\n" },
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ToolTip", "TODO $IRIS: Document class usage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectCount_MetaData[] = {
		{ "Comment", "/**\n\x09 * How many objects to be considered for replication each frame.\n\x09 * With 2 at least 1 object that isn't owned by the connection will be considered.\n\x09 * If the prioritizer won't deal with objects that are owned by a specific connection\n\x09 * it's safe to set to 1.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ToolTip", "How many objects to be considered for replication each frame.\nWith 2 at least 1 object that isn't owned by the connection will be considered.\nIf the prioritizer won't deal with objects that are owned by a specific connection\nit's safe to set to 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Comment", "/**\n\x09  * Which priority to set for objects considered for replication.\n\x09  * Priority is accumulated for an object until it's replicated.\n\x09  * 1.0f is the threshold at which the object may be replicated.\n\x09  */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ToolTip", "Which priority to set for objects considered for replication.\nPriority is accumulated for an object until it's replicated.\n1.0f is the threshold at which the object may be replicated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningConnectionPriority_MetaData[] = {
		{ "Comment", "/**\n\x09 * The priority to set for a considered object if it's owned by the connection being prioritized for.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ToolTip", "The priority to set for a considered object if it's owned by the connection being prioritized for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOwnedObjectsFastLane_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether objects owned by the connection should always be considered for replication.\n\x09 * If so, such objects won't count against the MaxObjectCount.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ToolTip", "Whether objects owned by the connection should always be considered for replication.\nIf so, such objects won't count against the MaxObjectCount." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxObjectCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OwningConnectionPriority;
	static void NewProp_bEnableOwnedObjectsFastLane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOwnedObjectsFastLane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectCountLimiterConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectCountLimiterConfig, Mode), Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1891751526
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_MaxObjectCount = { "MaxObjectCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectCountLimiterConfig, MaxObjectCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxObjectCount_MetaData), NewProp_MaxObjectCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectCountLimiterConfig, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_OwningConnectionPriority = { "OwningConnectionPriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectCountLimiterConfig, OwningConnectionPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningConnectionPriority_MetaData), NewProp_OwningConnectionPriority_MetaData) };
void Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane_SetBit(void* Obj)
{
	((UNetObjectCountLimiterConfig*)Obj)->bEnableOwnedObjectsFastLane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane = { "bEnableOwnedObjectsFastLane", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNetObjectCountLimiterConfig), &Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOwnedObjectsFastLane_MetaData), NewProp_bEnableOwnedObjectsFastLane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_MaxObjectCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_OwningConnectionPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectPrioritizerConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::ClassParams = {
	&UNetObjectCountLimiterConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig()
{
	if (!Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton, Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectCountLimiterConfig>()
{
	return UNetObjectCountLimiterConfig::StaticClass();
}
UNetObjectCountLimiterConfig::UNetObjectCountLimiterConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectCountLimiterConfig);
UNetObjectCountLimiterConfig::~UNetObjectCountLimiterConfig() {}
// End Class UNetObjectCountLimiterConfig

// Begin Class UNetObjectCountLimiter
void UNetObjectCountLimiter::StaticRegisterNativesUNetObjectCountLimiter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectCountLimiter);
UClass* Z_Construct_UClass_UNetObjectCountLimiter_NoRegister()
{
	return UNetObjectCountLimiter::StaticClass();
}
struct Z_Construct_UClass_UNetObjectCountLimiter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectCountLimiter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectCountLimiter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectPrioritizer,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectCountLimiter_Statics::ClassParams = {
	&UNetObjectCountLimiter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectCountLimiter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectCountLimiter()
{
	if (!Z_Registration_Info_UClass_UNetObjectCountLimiter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectCountLimiter.OuterSingleton, Z_Construct_UClass_UNetObjectCountLimiter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectCountLimiter.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectCountLimiter>()
{
	return UNetObjectCountLimiter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectCountLimiter);
UNetObjectCountLimiter::~UNetObjectCountLimiter() {}
// End Class UNetObjectCountLimiter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENetObjectCountLimiterMode_StaticEnum, TEXT("ENetObjectCountLimiterMode"), &Z_Registration_Info_UEnum_ENetObjectCountLimiterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1891751526U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectCountLimiterConfig, UNetObjectCountLimiterConfig::StaticClass, TEXT("UNetObjectCountLimiterConfig"), &Z_Registration_Info_UClass_UNetObjectCountLimiterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectCountLimiterConfig), 404496757U) },
		{ Z_Construct_UClass_UNetObjectCountLimiter, UNetObjectCountLimiter::StaticClass, TEXT("UNetObjectCountLimiter"), &Z_Registration_Info_UClass_UNetObjectCountLimiter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectCountLimiter), 4009848936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_2176928778(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
