// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DamageEvents.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageEvents() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FDamageEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageEvent;
class UScriptStruct* FDamageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DamageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_DamageEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDamageEvent>()
{
	return FDamageEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDamageEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Event used by AActor::TakeDamage and related functions */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Event used by AActor::TakeDamage and related functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Comment", "/** Optional DamageType for this event.  If nullptr, UDamageType will be assumed. */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Optional DamageType for this event.  If nullptr, UDamageType will be assumed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDamageEvent_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageEvent, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEvent_Statics::NewProp_DamageTypeClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DamageEvent",
	Z_Construct_UScriptStruct_FDamageEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEvent_Statics::PropPointers),
	sizeof(FDamageEvent),
	alignof(FDamageEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent()
{
	if (!Z_Registration_Info_UScriptStruct_DamageEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageEvent.InnerSingleton, Z_Construct_UScriptStruct_FDamageEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageEvent.InnerSingleton;
}
// End ScriptStruct FDamageEvent

// Begin ScriptStruct FPointDamageEvent
static_assert(std::is_polymorphic<FPointDamageEvent>() == std::is_polymorphic<FDamageEvent>(), "USTRUCT FPointDamageEvent cannot be polymorphic unless super FDamageEvent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointDamageEvent;
class UScriptStruct* FPointDamageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointDamageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointDamageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointDamageEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PointDamageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_PointDamageEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPointDamageEvent>()
{
	return FPointDamageEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPointDamageEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Damage subclass that handles damage with a single impact location and source direction */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Damage subclass that handles damage with a single impact location and source direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Comment", "/** Actual damage done */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Actual damage done" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotDirection_MetaData[] = {
		{ "Comment", "/** Direction the shot came from. Should be normalized. */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Direction the shot came from. Should be normalized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
		{ "Comment", "/** Describes the trace/location that caused this damage */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Describes the trace/location that caused this damage" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointDamageEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointDamageEvent, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_ShotDirection = { "ShotDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointDamageEvent, ShotDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotDirection_MetaData), NewProp_ShotDirection_MetaData) }; // 1520846145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointDamageEvent, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointDamageEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_ShotDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_HitInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointDamageEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FDamageEvent,
	&NewStructOps,
	"PointDamageEvent",
	Z_Construct_UScriptStruct_FPointDamageEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::PropPointers),
	sizeof(FPointDamageEvent),
	alignof(FPointDamageEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointDamageEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent()
{
	if (!Z_Registration_Info_UScriptStruct_PointDamageEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointDamageEvent.InnerSingleton, Z_Construct_UScriptStruct_FPointDamageEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PointDamageEvent.InnerSingleton;
}
// End ScriptStruct FPointDamageEvent

// Begin ScriptStruct FRadialDamageParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialDamageParams;
class UScriptStruct* FRadialDamageParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialDamageParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialDamageParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialDamageParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RadialDamageParams"));
	}
	return Z_Registration_Info_UScriptStruct_RadialDamageParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRadialDamageParams>()
{
	return FRadialDamageParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRadialDamageParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters used to compute radial damage */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Parameters used to compute radial damage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "RadialDamageParams" },
		{ "Comment", "/** Max damage done */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Max damage done" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDamage_MetaData[] = {
		{ "Category", "RadialDamageParams" },
		{ "Comment", "/** Damage will not fall below this if within range */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Damage will not fall below this if within range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[] = {
		{ "Category", "RadialDamageParams" },
		{ "Comment", "/** Within InnerRadius, do max damage */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Within InnerRadius, do max damage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[] = {
		{ "Category", "RadialDamageParams" },
		{ "Comment", "/** Outside OuterRadius, do no damage */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Outside OuterRadius, do no damage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageFalloff_MetaData[] = {
		{ "Category", "RadialDamageParams" },
		{ "Comment", "/** Describes amount of exponential damage falloff */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Describes amount of exponential damage falloff" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageFalloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialDamageParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialDamageParams, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_MinimumDamage = { "MinimumDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialDamageParams, MinimumDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDamage_MetaData), NewProp_MinimumDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialDamageParams, InnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerRadius_MetaData), NewProp_InnerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialDamageParams, OuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterRadius_MetaData), NewProp_OuterRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_DamageFalloff = { "DamageFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialDamageParams, DamageFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageFalloff_MetaData), NewProp_DamageFalloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialDamageParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_MinimumDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_InnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_OuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_DamageFalloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RadialDamageParams",
	Z_Construct_UScriptStruct_FRadialDamageParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::PropPointers),
	sizeof(FRadialDamageParams),
	alignof(FRadialDamageParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRadialDamageParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageParams()
{
	if (!Z_Registration_Info_UScriptStruct_RadialDamageParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialDamageParams.InnerSingleton, Z_Construct_UScriptStruct_FRadialDamageParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RadialDamageParams.InnerSingleton;
}
// End ScriptStruct FRadialDamageParams

// Begin ScriptStruct FRadialDamageEvent
static_assert(std::is_polymorphic<FRadialDamageEvent>() == std::is_polymorphic<FDamageEvent>(), "USTRUCT FRadialDamageEvent cannot be polymorphic unless super FDamageEvent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialDamageEvent;
class UScriptStruct* FRadialDamageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialDamageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialDamageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialDamageEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RadialDamageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RadialDamageEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRadialDamageEvent>()
{
	return FRadialDamageEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRadialDamageEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Damage subclass that handles damage with a source location and falloff radius */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Damage subclass that handles damage with a source location and falloff radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Comment", "/** Static parameters describing damage falloff math */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Static parameters describing damage falloff math" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Comment", "/** Location of origin point */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Location of origin point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentHits_MetaData[] = {
		{ "Comment", "/** Hit reslts of specific impacts */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Hit reslts of specific impacts" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentHits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialDamageEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialDamageEvent, Params), Z_Construct_UScriptStruct_FRadialDamageParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 2220831063
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialDamageEvent, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits_Inner = { "ComponentHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits = { "ComponentHits", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadialDamageEvent, ComponentHits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentHits_MetaData), NewProp_ComponentHits_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FDamageEvent,
	&NewStructOps,
	"RadialDamageEvent",
	Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::PropPointers),
	sizeof(FRadialDamageEvent),
	alignof(FRadialDamageEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent()
{
	if (!Z_Registration_Info_UScriptStruct_RadialDamageEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialDamageEvent.InnerSingleton, Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RadialDamageEvent.InnerSingleton;
}
// End ScriptStruct FRadialDamageEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DamageEvents_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDamageEvent::StaticStruct, Z_Construct_UScriptStruct_FDamageEvent_Statics::NewStructOps, TEXT("DamageEvent"), &Z_Registration_Info_UScriptStruct_DamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageEvent), 3306819763U) },
		{ FPointDamageEvent::StaticStruct, Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewStructOps, TEXT("PointDamageEvent"), &Z_Registration_Info_UScriptStruct_PointDamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointDamageEvent), 3501468828U) },
		{ FRadialDamageParams::StaticStruct, Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewStructOps, TEXT("RadialDamageParams"), &Z_Registration_Info_UScriptStruct_RadialDamageParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialDamageParams), 2220831063U) },
		{ FRadialDamageEvent::StaticStruct, Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewStructOps, TEXT("RadialDamageEvent"), &Z_Registration_Info_UScriptStruct_RadialDamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialDamageEvent), 2955041376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DamageEvents_h_3613535486(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DamageEvents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DamageEvents_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
