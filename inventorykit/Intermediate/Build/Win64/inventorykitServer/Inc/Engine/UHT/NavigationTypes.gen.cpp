// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationOptionFlag();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationQueryResult();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavPathEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinkAuxiliaryId();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavLinkId();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ENavigationOptionFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationOptionFlag;
static UEnum* ENavigationOptionFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationOptionFlag, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavigationOptionFlag"));
	}
	return Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENavigationOptionFlag::Type>()
{
	return ENavigationOptionFlag_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Name", "ENavigationOptionFlag::Default" },
		{ "Disable.Comment", "// UHT was complaining when tried to use True as value instead of Enable\n" },
		{ "Disable.DisplayName", "No" },
		{ "Disable.Name", "ENavigationOptionFlag::Disable" },
		{ "Disable.ToolTip", "UHT was complaining when tried to use True as value instead of Enable" },
		{ "Enable.DisplayName", "Yes" },
		{ "Enable.Name", "ENavigationOptionFlag::Enable" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ENavigationOptionFlag::MAX" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavigationOptionFlag::Default", (int64)ENavigationOptionFlag::Default },
		{ "ENavigationOptionFlag::Enable", (int64)ENavigationOptionFlag::Enable },
		{ "ENavigationOptionFlag::Disable", (int64)ENavigationOptionFlag::Disable },
		{ "ENavigationOptionFlag::MAX", (int64)ENavigationOptionFlag::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENavigationOptionFlag",
	"ENavigationOptionFlag::Type",
	Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENavigationOptionFlag()
{
	if (!Z_Registration_Info_UEnum_ENavigationOptionFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationOptionFlag.InnerSingleton, Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavigationOptionFlag.InnerSingleton;
}
// End Enum ENavigationOptionFlag

// Begin Enum ENavDataGatheringModeConfig
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavDataGatheringModeConfig;
static UEnum* ENavDataGatheringModeConfig_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavDataGatheringModeConfig"));
	}
	return Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENavDataGatheringModeConfig>()
{
	return ENavDataGatheringModeConfig_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Instant.Name", "ENavDataGatheringModeConfig::Instant" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ENavDataGatheringModeConfig::Invalid" },
		{ "Lazy.Name", "ENavDataGatheringModeConfig::Lazy" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavDataGatheringModeConfig::Invalid", (int64)ENavDataGatheringModeConfig::Invalid },
		{ "ENavDataGatheringModeConfig::Instant", (int64)ENavDataGatheringModeConfig::Instant },
		{ "ENavDataGatheringModeConfig::Lazy", (int64)ENavDataGatheringModeConfig::Lazy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENavDataGatheringModeConfig",
	"ENavDataGatheringModeConfig",
	Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig()
{
	if (!Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.InnerSingleton, Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.InnerSingleton;
}
// End Enum ENavDataGatheringModeConfig

// Begin Enum ENavigationSortPendingTilesMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod;
static UEnum* ENavigationSortPendingTilesMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavigationSortPendingTilesMethod"));
	}
	return Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENavigationSortPendingTilesMethod>()
{
	return ENavigationSortPendingTilesMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "None.Name", "ENavigationSortPendingTilesMethod::None" },
		{ "SortByPriority.Name", "ENavigationSortPendingTilesMethod::SortByPriority" },
		{ "SortWithSeedLocations.Name", "ENavigationSortPendingTilesMethod::SortWithSeedLocations" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavigationSortPendingTilesMethod::SortWithSeedLocations", (int64)ENavigationSortPendingTilesMethod::SortWithSeedLocations },
		{ "ENavigationSortPendingTilesMethod::SortByPriority", (int64)ENavigationSortPendingTilesMethod::SortByPriority },
		{ "ENavigationSortPendingTilesMethod::None", (int64)ENavigationSortPendingTilesMethod::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENavigationSortPendingTilesMethod",
	"ENavigationSortPendingTilesMethod",
	Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod()
{
	if (!Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.InnerSingleton, Z_Construct_UEnum_Engine_ENavigationSortPendingTilesMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod.InnerSingleton;
}
// End Enum ENavigationSortPendingTilesMethod

// Begin ScriptStruct FNavLinkAuxiliaryId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavLinkAuxiliaryId;
class UScriptStruct* FNavLinkAuxiliaryId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinkAuxiliaryId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavLinkAuxiliaryId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkAuxiliaryId, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavLinkAuxiliaryId"));
	}
	return Z_Registration_Info_UScriptStruct_NavLinkAuxiliaryId.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavLinkAuxiliaryId>()
{
	return FNavLinkAuxiliaryId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * There should be one of these Ids generated and stored per Actor or Component that inherits from INavLinkCustomInterface. Primarily\n * its a way of differentiating between Components that inherit from INavLinkCustomInterface as the ActorInstanceGuid\n * alone can not do this.See UNavLinkCustomComponent as an example. For Level Instances these will be different for each component in an actor but repeated\n * in repeated Level Instances.FNavLinkId::GenerateUniqueId() uses this to make the UniqueId\n */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "* There should be one of these Ids generated and stored per Actor or Component that inherits from INavLinkCustomInterface. Primarily\n* its a way of differentiating between Components that inherit from INavLinkCustomInterface as the ActorInstanceGuid\n* alone can not do this.See UNavLinkCustomComponent as an example. For Level Instances these will be different for each component in an actor but repeated\n* in repeated Level Instances.FNavLinkId::GenerateUniqueId() uses this to make the UniqueId" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavLinkAuxiliaryId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkAuxiliaryId, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NavLinkAuxiliaryId",
	Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::PropPointers),
	sizeof(FNavLinkAuxiliaryId),
	alignof(FNavLinkAuxiliaryId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavLinkAuxiliaryId()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinkAuxiliaryId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavLinkAuxiliaryId.InnerSingleton, Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavLinkAuxiliaryId.InnerSingleton;
}
// End ScriptStruct FNavLinkAuxiliaryId

// Begin ScriptStruct FNavLinkId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavLinkId;
class UScriptStruct* FNavLinkId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinkId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavLinkId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkId, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavLinkId"));
	}
	return Z_Registration_Info_UScriptStruct_NavLinkId.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavLinkId>()
{
	return FNavLinkId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavLinkId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * NavLink Id type. Legacy Ids were generated using the incremental ID system which has been deprecated but will be supported for quite some time. The new system uses CityHash using GenerateUniqueId()\n * Only NavLinks generated this way should have the most significant bit of the id set to 1.\n */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "NavLink Id type. Legacy Ids were generated using the incremental ID system which has been deprecated but will be supported for quite some time. The new system uses CityHash using GenerateUniqueId()\nOnly NavLinks generated this way should have the most significant bit of the id set to 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavLinkId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FNavLinkId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavLinkId, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavLinkId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavLinkId_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavLinkId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NavLinkId",
	Z_Construct_UScriptStruct_FNavLinkId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkId_Statics::PropPointers),
	sizeof(FNavLinkId),
	alignof(FNavLinkId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavLinkId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavLinkId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavLinkId()
{
	if (!Z_Registration_Info_UScriptStruct_NavLinkId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavLinkId.InnerSingleton, Z_Construct_UScriptStruct_FNavLinkId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavLinkId.InnerSingleton;
}
// End ScriptStruct FNavLinkId

// Begin Enum ENavPathEvent
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavPathEvent;
static UEnum* ENavPathEvent_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavPathEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavPathEvent"));
	}
	return Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENavPathEvent::Type>()
{
	return ENavPathEvent_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENavPathEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cleared.Name", "ENavPathEvent::Cleared" },
		{ "Custom.Name", "ENavPathEvent::Custom" },
		{ "Invalidated.Name", "ENavPathEvent::Invalidated" },
		{ "MetaPathUpdate.Name", "ENavPathEvent::MetaPathUpdate" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "NewPath.Name", "ENavPathEvent::NewPath" },
		{ "RePathFailed.Name", "ENavPathEvent::RePathFailed" },
		{ "UpdatedDueToGoalMoved.Name", "ENavPathEvent::UpdatedDueToGoalMoved" },
		{ "UpdatedDueToNavigationChanged.Name", "ENavPathEvent::UpdatedDueToNavigationChanged" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavPathEvent::Cleared", (int64)ENavPathEvent::Cleared },
		{ "ENavPathEvent::NewPath", (int64)ENavPathEvent::NewPath },
		{ "ENavPathEvent::UpdatedDueToGoalMoved", (int64)ENavPathEvent::UpdatedDueToGoalMoved },
		{ "ENavPathEvent::UpdatedDueToNavigationChanged", (int64)ENavPathEvent::UpdatedDueToNavigationChanged },
		{ "ENavPathEvent::Invalidated", (int64)ENavPathEvent::Invalidated },
		{ "ENavPathEvent::RePathFailed", (int64)ENavPathEvent::RePathFailed },
		{ "ENavPathEvent::MetaPathUpdate", (int64)ENavPathEvent::MetaPathUpdate },
		{ "ENavPathEvent::Custom", (int64)ENavPathEvent::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavPathEvent_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENavPathEvent",
	"ENavPathEvent::Type",
	Z_Construct_UEnum_Engine_ENavPathEvent_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavPathEvent_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavPathEvent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENavPathEvent_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENavPathEvent()
{
	if (!Z_Registration_Info_UEnum_ENavPathEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavPathEvent.InnerSingleton, Z_Construct_UEnum_Engine_ENavPathEvent_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavPathEvent.InnerSingleton;
}
// End Enum ENavPathEvent

// Begin ScriptStruct FMovementProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovementProperties;
class UScriptStruct* FMovementProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovementProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovementProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MovementProperties"));
	}
	return Z_Registration_Info_UScriptStruct_MovementProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMovementProperties>()
{
	return FMovementProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovementProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Movement capabilities, determining available movement options for Pawns and used by AI for reachability tests. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Movement capabilities, determining available movement options for Pawns and used by AI for reachability tests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanCrouch_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** If true, this Pawn is capable of crouching. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of crouching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanJump_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** If true, this Pawn is capable of jumping. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of jumping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanWalk_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** If true, this Pawn is capable of walking or moving on the ground. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of walking or moving on the ground." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanSwim_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** If true, this Pawn is capable of swimming or moving through fluid volumes. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of swimming or moving through fluid volumes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanFly_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** If true, this Pawn is capable of flying. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of flying." },
	};
#endif // WITH_METADATA
	static void NewProp_bCanCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCrouch;
	static void NewProp_bCanJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanJump;
	static void NewProp_bCanWalk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWalk;
	static void NewProp_bCanSwim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSwim;
	static void NewProp_bCanFly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanFly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_SetBit(void* Obj)
{
	((FMovementProperties*)Obj)->bCanCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch = { "bCanCrouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanCrouch_MetaData), NewProp_bCanCrouch_MetaData) };
void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_SetBit(void* Obj)
{
	((FMovementProperties*)Obj)->bCanJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump = { "bCanJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanJump_MetaData), NewProp_bCanJump_MetaData) };
void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_SetBit(void* Obj)
{
	((FMovementProperties*)Obj)->bCanWalk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk = { "bCanWalk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanWalk_MetaData), NewProp_bCanWalk_MetaData) };
void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_SetBit(void* Obj)
{
	((FMovementProperties*)Obj)->bCanSwim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim = { "bCanSwim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanSwim_MetaData), NewProp_bCanSwim_MetaData) };
void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_SetBit(void* Obj)
{
	((FMovementProperties*)Obj)->bCanFly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly = { "bCanFly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanFly_MetaData), NewProp_bCanFly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MovementProperties",
	Z_Construct_UScriptStruct_FMovementProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::PropPointers),
	sizeof(FMovementProperties),
	alignof(FMovementProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties()
{
	if (!Z_Registration_Info_UScriptStruct_MovementProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovementProperties.InnerSingleton, Z_Construct_UScriptStruct_FMovementProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovementProperties.InnerSingleton;
}
// End ScriptStruct FMovementProperties

// Begin ScriptStruct FNavAgentProperties
static_assert(std::is_polymorphic<FNavAgentProperties>() == std::is_polymorphic<FMovementProperties>(), "USTRUCT FNavAgentProperties cannot be polymorphic unless super FMovementProperties is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavAgentProperties;
class UScriptStruct* FNavAgentProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavAgentProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavAgentProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavAgentProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavAgentProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NavAgentProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavAgentProperties>()
{
	return FNavAgentProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavAgentProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Properties of representation of an 'agent' (or Pawn) used by AI navigation/pathfinding. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Properties of representation of an 'agent' (or Pawn) used by AI navigation/pathfinding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** Radius of the capsule used for navigation/pathfinding. */" },
		{ "DisplayName", "Nav Agent Radius" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Radius of the capsule used for navigation/pathfinding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentHeight_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** Total height of the capsule used for navigation/pathfinding. */" },
		{ "DisplayName", "Nav Agent Height" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Total height of the capsule used for navigation/pathfinding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentStepHeight_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** Step height to use, or -1 for default value from navdata's config. */" },
		{ "DisplayName", "Nav Agent Step Height" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Step height to use, or -1 for default value from navdata's config." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavWalkingSearchHeightScale_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** Scale factor to apply to height of bounds when searching for navmesh to project to when nav walking */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Scale factor to apply to height of bounds when searching for navmesh to project to when nav walking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredNavData_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** Type of navigation data used by agent, null means \"any\" */" },
		{ "MetaClass", "/Script/NavigationSystem.NavigationData" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Type of navigation data used by agent, null means \"any\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentStepHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavWalkingSearchHeightScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredNavData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavAgentProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavAgentProperties, AgentRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentRadius_MetaData), NewProp_AgentRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight = { "AgentHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavAgentProperties, AgentHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentHeight_MetaData), NewProp_AgentHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight = { "AgentStepHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavAgentProperties, AgentStepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentStepHeight_MetaData), NewProp_AgentStepHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale = { "NavWalkingSearchHeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavAgentProperties, NavWalkingSearchHeightScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavWalkingSearchHeightScale_MetaData), NewProp_NavWalkingSearchHeightScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData = { "PreferredNavData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavAgentProperties, PreferredNavData), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredNavData_MetaData), NewProp_PreferredNavData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavAgentProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FMovementProperties,
	&NewStructOps,
	"NavAgentProperties",
	Z_Construct_UScriptStruct_FNavAgentProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::PropPointers),
	sizeof(FNavAgentProperties),
	alignof(FNavAgentProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavAgentProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties()
{
	if (!Z_Registration_Info_UScriptStruct_NavAgentProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavAgentProperties.InnerSingleton, Z_Construct_UScriptStruct_FNavAgentProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavAgentProperties.InnerSingleton;
}
// End ScriptStruct FNavAgentProperties

// Begin ScriptStruct FNavDataConfig
static_assert(std::is_polymorphic<FNavDataConfig>() == std::is_polymorphic<FNavAgentProperties>(), "USTRUCT FNavDataConfig cannot be polymorphic unless super FNavAgentProperties is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavDataConfig;
class UScriptStruct* FNavDataConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavDataConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavDataConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavDataConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavDataConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NavDataConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavDataConfig>()
{
	return FNavDataConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavDataConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Internal/debug name of this agent */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Internal/debug name of this agent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Color used to represent this agent in the editor and for debugging */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Color used to represent this agent in the editor and for debugging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQueryExtent_MetaData[] = {
		{ "Category", "Querying" },
		{ "Comment", "/** Rough size of this agent, used when projecting unto navigation mesh */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Rough size of this agent, used when projecting unto navigation mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavDataClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Class to use when spawning navigation data instance */" },
		{ "MetaClass", "/Script/NavigationSystem.NavigationData" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Class to use when spawning navigation data instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultQueryExtent;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NavDataClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavDataConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavDataConfig, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavDataConfig, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent = { "DefaultQueryExtent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavDataConfig, DefaultQueryExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultQueryExtent_MetaData), NewProp_DefaultQueryExtent_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavDataClass = { "NavDataClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavDataConfig, NavDataClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavDataClass_MetaData), NewProp_NavDataClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavDataConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavDataClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FNavAgentProperties,
	&NewStructOps,
	"NavDataConfig",
	Z_Construct_UScriptStruct_FNavDataConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::PropPointers),
	sizeof(FNavDataConfig),
	alignof(FNavDataConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavDataConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig()
{
	if (!Z_Registration_Info_UScriptStruct_NavDataConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavDataConfig.InnerSingleton, Z_Construct_UScriptStruct_FNavDataConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavDataConfig.InnerSingleton;
}
// End ScriptStruct FNavDataConfig

// Begin Enum ENavigationQueryResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationQueryResult;
static UEnum* ENavigationQueryResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationQueryResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavigationQueryResult"));
	}
	return Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENavigationQueryResult::Type>()
{
	return ENavigationQueryResult_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error.Name", "ENavigationQueryResult::Error" },
		{ "Fail.Name", "ENavigationQueryResult::Fail" },
		{ "Invalid.Name", "ENavigationQueryResult::Invalid" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "Success.Name", "ENavigationQueryResult::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavigationQueryResult::Invalid", (int64)ENavigationQueryResult::Invalid },
		{ "ENavigationQueryResult::Error", (int64)ENavigationQueryResult::Error },
		{ "ENavigationQueryResult::Fail", (int64)ENavigationQueryResult::Fail },
		{ "ENavigationQueryResult::Success", (int64)ENavigationQueryResult::Success },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENavigationQueryResult",
	"ENavigationQueryResult::Type",
	Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENavigationQueryResult()
{
	if (!Z_Registration_Info_UEnum_ENavigationQueryResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationQueryResult.InnerSingleton, Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavigationQueryResult.InnerSingleton;
}
// End Enum ENavigationQueryResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENavigationOptionFlag_StaticEnum, TEXT("ENavigationOptionFlag"), &Z_Registration_Info_UEnum_ENavigationOptionFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 364394336U) },
		{ ENavDataGatheringModeConfig_StaticEnum, TEXT("ENavDataGatheringModeConfig"), &Z_Registration_Info_UEnum_ENavDataGatheringModeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1049882523U) },
		{ ENavigationSortPendingTilesMethod_StaticEnum, TEXT("ENavigationSortPendingTilesMethod"), &Z_Registration_Info_UEnum_ENavigationSortPendingTilesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 860209548U) },
		{ ENavPathEvent_StaticEnum, TEXT("ENavPathEvent"), &Z_Registration_Info_UEnum_ENavPathEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4200685195U) },
		{ ENavigationQueryResult_StaticEnum, TEXT("ENavigationQueryResult"), &Z_Registration_Info_UEnum_ENavigationQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3897529641U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavLinkAuxiliaryId::StaticStruct, Z_Construct_UScriptStruct_FNavLinkAuxiliaryId_Statics::NewStructOps, TEXT("NavLinkAuxiliaryId"), &Z_Registration_Info_UScriptStruct_NavLinkAuxiliaryId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavLinkAuxiliaryId), 1303876147U) },
		{ FNavLinkId::StaticStruct, Z_Construct_UScriptStruct_FNavLinkId_Statics::NewStructOps, TEXT("NavLinkId"), &Z_Registration_Info_UScriptStruct_NavLinkId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavLinkId), 828782268U) },
		{ FMovementProperties::StaticStruct, Z_Construct_UScriptStruct_FMovementProperties_Statics::NewStructOps, TEXT("MovementProperties"), &Z_Registration_Info_UScriptStruct_MovementProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementProperties), 1560733430U) },
		{ FNavAgentProperties::StaticStruct, Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewStructOps, TEXT("NavAgentProperties"), &Z_Registration_Info_UScriptStruct_NavAgentProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavAgentProperties), 2797488484U) },
		{ FNavDataConfig::StaticStruct, Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewStructOps, TEXT("NavDataConfig"), &Z_Registration_Info_UScriptStruct_NavDataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavDataConfig), 1949283299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_3952730172(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
