// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosVisualDebugger/Public/DataWrappers/ChaosVDJointDataWrappers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDJointDataWrappers() {}

// Begin Cross Module References
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDJointConstraint();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDWrapperDataBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ChaosVDRuntime();
// End Cross Module References

// Begin Enum EChaosVDJointReSimType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDJointReSimType;
static UEnum* EChaosVDJointReSimType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointReSimType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDJointReSimType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDJointReSimType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDJointReSimType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointReSimType>()
{
	return EChaosVDJointReSimType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FullResim.Comment", "/** Fully re-run simulation and keep results (any forces must be applied again) */" },
		{ "FullResim.Name", "EChaosVDJointReSimType::FullResim" },
		{ "FullResim.ToolTip", "Fully re-run simulation and keep results (any forces must be applied again)" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
		{ "ResimAsFollower.Comment", "/** Use previous forces and snap to previous results regardless of variation - used to push other objects away */" },
		{ "ResimAsFollower.Name", "EChaosVDJointReSimType::ResimAsFollower" },
		{ "ResimAsFollower.ToolTip", "Use previous forces and snap to previous results regardless of variation - used to push other objects away" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDJointReSimType::FullResim", (int64)EChaosVDJointReSimType::FullResim },
		{ "EChaosVDJointReSimType::ResimAsFollower", (int64)EChaosVDJointReSimType::ResimAsFollower },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDJointReSimType",
	"EChaosVDJointReSimType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointReSimType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDJointReSimType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDJointReSimType.InnerSingleton;
}
// End Enum EChaosVDJointReSimType

// Begin Enum EChaosVDJointSyncType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDJointSyncType;
static UEnum* EChaosVDJointSyncType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointSyncType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDJointSyncType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDJointSyncType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDJointSyncType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointSyncType>()
{
	return EChaosVDJointSyncType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HardDesync.Comment", "/** Recorded data mismatches, must run collision detection again */" },
		{ "HardDesync.Name", "EChaosVDJointSyncType::HardDesync" },
		{ "HardDesync.ToolTip", "Recorded data mismatches, must run collision detection again" },
		{ "InSync.Comment", "/** In sync with recorded data */" },
		{ "InSync.Name", "EChaosVDJointSyncType::InSync" },
		{ "InSync.ToolTip", "In sync with recorded data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDJointSyncType::InSync", (int64)EChaosVDJointSyncType::InSync },
		{ "EChaosVDJointSyncType::HardDesync", (int64)EChaosVDJointSyncType::HardDesync },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDJointSyncType",
	"EChaosVDJointSyncType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointSyncType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDJointSyncType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDJointSyncType.InnerSingleton;
}
// End Enum EChaosVDJointSyncType

// Begin Enum EChaosVDJointStateFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDJointStateFlags;
static UEnum* EChaosVDJointStateFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointStateFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDJointStateFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDJointStateFlags"));
	}
	return Z_Registration_Info_UEnum_EChaosVDJointStateFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointStateFlags>()
{
	return EChaosVDJointStateFlags_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Breaking.Name", "EChaosVDJointStateFlags::Breaking" },
		{ "Broken.Name", "EChaosVDJointStateFlags::Broken" },
		{ "Disabled.Name", "EChaosVDJointStateFlags::Disabled" },
		{ "DriveTargetChanged.Name", "EChaosVDJointStateFlags::DriveTargetChanged" },
		{ "EnabledDuringResim.Name", "EChaosVDJointStateFlags::EnabledDuringResim" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
		{ "None.Name", "EChaosVDJointStateFlags::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDJointStateFlags::None", (int64)EChaosVDJointStateFlags::None },
		{ "EChaosVDJointStateFlags::Disabled", (int64)EChaosVDJointStateFlags::Disabled },
		{ "EChaosVDJointStateFlags::Broken", (int64)EChaosVDJointStateFlags::Broken },
		{ "EChaosVDJointStateFlags::Breaking", (int64)EChaosVDJointStateFlags::Breaking },
		{ "EChaosVDJointStateFlags::DriveTargetChanged", (int64)EChaosVDJointStateFlags::DriveTargetChanged },
		{ "EChaosVDJointStateFlags::EnabledDuringResim", (int64)EChaosVDJointStateFlags::EnabledDuringResim },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDJointStateFlags",
	"EChaosVDJointStateFlags",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointStateFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDJointStateFlags.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointStateFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDJointStateFlags.InnerSingleton;
}
// End Enum EChaosVDJointStateFlags

// Begin ScriptStruct FChaosVDJointStateDataWrapper
static_assert(std::is_polymorphic<FChaosVDJointStateDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDJointStateDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDJointStateDataWrapper;
class UScriptStruct* FChaosVDJointStateDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDJointStateDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDJointStateDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDJointStateDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDJointStateDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDJointStateDataWrapper>()
{
	return FChaosVDJointStateDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "Category", "JointState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBroken_MetaData[] = {
		{ "Category", "JointState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBreaking_MetaData[] = {
		{ "Category", "JointState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDriveTargetChanged_MetaData[] = {
		{ "Category", "JointState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledDuringResim_MetaData[] = {
		{ "Category", "JointState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearImpulse_MetaData[] = {
		{ "Category", "JointState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularImpulse_MetaData[] = {
		{ "Category", "JointState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResimType_MetaData[] = {
		{ "Category", "JointState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "Category", "JointState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static void NewProp_bBroken_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBroken;
	static void NewProp_bBreaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBreaking;
	static void NewProp_bDriveTargetChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDriveTargetChanged;
	static void NewProp_bEnabledDuringResim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledDuringResim;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularImpulse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResimType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResimType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SyncState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDJointStateDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((FChaosVDJointStateDataWrapper*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointStateDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bBroken_SetBit(void* Obj)
{
	((FChaosVDJointStateDataWrapper*)Obj)->bBroken = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bBroken = { "bBroken", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointStateDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bBroken_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBroken_MetaData), NewProp_bBroken_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bBreaking_SetBit(void* Obj)
{
	((FChaosVDJointStateDataWrapper*)Obj)->bBreaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bBreaking = { "bBreaking", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointStateDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bBreaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBreaking_MetaData), NewProp_bBreaking_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bDriveTargetChanged_SetBit(void* Obj)
{
	((FChaosVDJointStateDataWrapper*)Obj)->bDriveTargetChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bDriveTargetChanged = { "bDriveTargetChanged", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointStateDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bDriveTargetChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDriveTargetChanged_MetaData), NewProp_bDriveTargetChanged_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bEnabledDuringResim_SetBit(void* Obj)
{
	((FChaosVDJointStateDataWrapper*)Obj)->bEnabledDuringResim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bEnabledDuringResim = { "bEnabledDuringResim", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointStateDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bEnabledDuringResim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabledDuringResim_MetaData), NewProp_bEnabledDuringResim_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_LinearImpulse = { "LinearImpulse", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointStateDataWrapper, LinearImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearImpulse_MetaData), NewProp_LinearImpulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_AngularImpulse = { "AngularImpulse", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointStateDataWrapper, AngularImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularImpulse_MetaData), NewProp_AngularImpulse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_ResimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_ResimType = { "ResimType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointStateDataWrapper, ResimType), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointReSimType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResimType_MetaData), NewProp_ResimType_MetaData) }; // 876133987
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_SyncState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointStateDataWrapper, SyncState), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSyncType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 3105806767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bBroken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bBreaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bDriveTargetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_bEnabledDuringResim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_LinearImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_AngularImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_ResimType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_ResimType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_SyncState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewProp_SyncState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDJointStateDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDJointStateDataWrapper),
	alignof(FChaosVDJointStateDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDJointStateDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDJointStateDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDJointStateDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDJointStateDataWrapper

// Begin Enum EChaosVDJointSolverSettingsFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags;
static UEnum* EChaosVDJointSolverSettingsFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDJointSolverSettingsFlags"));
	}
	return Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointSolverSettingsFlags>()
{
	return EChaosVDJointSolverSettingsFlags_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EnableDrives.Name", "EChaosVDJointSolverSettingsFlags::EnableDrives" },
		{ "EnableSwingLimits.Name", "EChaosVDJointSolverSettingsFlags::EnableSwingLimits" },
		{ "EnableTwistLimits.Name", "EChaosVDJointSolverSettingsFlags::EnableTwistLimits" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
		{ "None.Name", "EChaosVDJointSolverSettingsFlags::None" },
		{ "SolvePositionLast.Name", "EChaosVDJointSolverSettingsFlags::SolvePositionLast" },
		{ "SortEnabled.Name", "EChaosVDJointSolverSettingsFlags::SortEnabled" },
		{ "UseLinearSolver.Name", "EChaosVDJointSolverSettingsFlags::UseLinearSolver" },
		{ "UsePositionBasedDrives.Name", "EChaosVDJointSolverSettingsFlags::UsePositionBasedDrives" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDJointSolverSettingsFlags::None", (int64)EChaosVDJointSolverSettingsFlags::None },
		{ "EChaosVDJointSolverSettingsFlags::UseLinearSolver", (int64)EChaosVDJointSolverSettingsFlags::UseLinearSolver },
		{ "EChaosVDJointSolverSettingsFlags::SortEnabled", (int64)EChaosVDJointSolverSettingsFlags::SortEnabled },
		{ "EChaosVDJointSolverSettingsFlags::SolvePositionLast", (int64)EChaosVDJointSolverSettingsFlags::SolvePositionLast },
		{ "EChaosVDJointSolverSettingsFlags::UsePositionBasedDrives", (int64)EChaosVDJointSolverSettingsFlags::UsePositionBasedDrives },
		{ "EChaosVDJointSolverSettingsFlags::EnableTwistLimits", (int64)EChaosVDJointSolverSettingsFlags::EnableTwistLimits },
		{ "EChaosVDJointSolverSettingsFlags::EnableSwingLimits", (int64)EChaosVDJointSolverSettingsFlags::EnableSwingLimits },
		{ "EChaosVDJointSolverSettingsFlags::EnableDrives", (int64)EChaosVDJointSolverSettingsFlags::EnableDrives },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDJointSolverSettingsFlags",
	"EChaosVDJointSolverSettingsFlags",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSolverSettingsFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags.InnerSingleton;
}
// End Enum EChaosVDJointSolverSettingsFlags

// Begin ScriptStruct FChaosVDJointSolverSettingsDataWrapper
static_assert(std::is_polymorphic<FChaosVDJointSolverSettingsDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDJointSolverSettingsDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDJointSolverSettingsDataWrapper;
class UScriptStruct* FChaosVDJointSolverSettingsDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDJointSolverSettingsDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDJointSolverSettingsDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDJointSolverSettingsDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDJointSolverSettingsDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDJointSolverSettingsDataWrapper>()
{
	return FChaosVDJointSolverSettingsDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingTwistAngleTolerance_MetaData[] = {
		{ "Category", "Tolerances" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionTolerance_MetaData[] = {
		{ "Category", "Tolerances" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleTolerance_MetaData[] = {
		{ "Category", "Tolerances" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinParentMassRatio_MetaData[] = {
		{ "Category", "Stability Control" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInertiaRatio_MetaData[] = {
		{ "Category", "Stability Control" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSolverStiffness_MetaData[] = {
		{ "Category", "Solver Stiffness" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSolverStiffness_MetaData[] = {
		{ "Category", "Solver Stiffness" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumIterationsAtMaxSolverStiffness_MetaData[] = {
		{ "Category", "Solver Stiffness" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumShockPropagationIterations_MetaData[] = {
		{ "Category", "Solver Stiffness" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLinearSolver_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSolvePositionLast_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePositionBasedDrives_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTwistLimits_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSwingLimits_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDrives_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearStiffnessOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistStiffnessOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingStiffnessOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearProjectionOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularProjectionOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShockPropagationOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveStiffnessOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveDampingOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveStiffnessOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveDampingOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftLinearStiffnessOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftLinearDampingOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftTwistStiffnessOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftTwistDampingOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSwingStiffnessOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSwingDampingOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SwingTwistAngleTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PositionTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngleTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinParentMassRatio;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxInertiaRatio;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinSolverStiffness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxSolverStiffness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterationsAtMaxSolverStiffness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumShockPropagationIterations;
	static void NewProp_bUseLinearSolver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLinearSolver;
	static void NewProp_bSortEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortEnabled;
	static void NewProp_bSolvePositionLast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolvePositionLast;
	static void NewProp_bUsePositionBasedDrives_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePositionBasedDrives;
	static void NewProp_bEnableTwistLimits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistLimits;
	static void NewProp_bEnableSwingLimits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingLimits;
	static void NewProp_bEnableDrives_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDrives;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearStiffnessOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TwistStiffnessOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SwingStiffnessOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearProjectionOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngularProjectionOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ShockPropagationOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearDriveStiffnessOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearDriveDampingOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngularDriveStiffnessOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngularDriveDampingOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftLinearStiffnessOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftLinearDampingOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftTwistStiffnessOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftTwistDampingOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftSwingStiffnessOverride;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftSwingDampingOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDJointSolverSettingsDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SwingTwistAngleTolerance = { "SwingTwistAngleTolerance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, SwingTwistAngleTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingTwistAngleTolerance_MetaData), NewProp_SwingTwistAngleTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_PositionTolerance = { "PositionTolerance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, PositionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionTolerance_MetaData), NewProp_PositionTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_AngleTolerance = { "AngleTolerance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, AngleTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleTolerance_MetaData), NewProp_AngleTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_MinParentMassRatio = { "MinParentMassRatio", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, MinParentMassRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinParentMassRatio_MetaData), NewProp_MinParentMassRatio_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_MaxInertiaRatio = { "MaxInertiaRatio", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, MaxInertiaRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInertiaRatio_MetaData), NewProp_MaxInertiaRatio_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_MinSolverStiffness = { "MinSolverStiffness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, MinSolverStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSolverStiffness_MetaData), NewProp_MinSolverStiffness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_MaxSolverStiffness = { "MaxSolverStiffness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, MaxSolverStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSolverStiffness_MetaData), NewProp_MaxSolverStiffness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_NumIterationsAtMaxSolverStiffness = { "NumIterationsAtMaxSolverStiffness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, NumIterationsAtMaxSolverStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumIterationsAtMaxSolverStiffness_MetaData), NewProp_NumIterationsAtMaxSolverStiffness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_NumShockPropagationIterations = { "NumShockPropagationIterations", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, NumShockPropagationIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumShockPropagationIterations_MetaData), NewProp_NumShockPropagationIterations_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bUseLinearSolver_SetBit(void* Obj)
{
	((FChaosVDJointSolverSettingsDataWrapper*)Obj)->bUseLinearSolver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bUseLinearSolver = { "bUseLinearSolver", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSolverSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bUseLinearSolver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLinearSolver_MetaData), NewProp_bUseLinearSolver_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bSortEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSolverSettingsDataWrapper*)Obj)->bSortEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bSortEnabled = { "bSortEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSolverSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bSortEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortEnabled_MetaData), NewProp_bSortEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bSolvePositionLast_SetBit(void* Obj)
{
	((FChaosVDJointSolverSettingsDataWrapper*)Obj)->bSolvePositionLast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bSolvePositionLast = { "bSolvePositionLast", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSolverSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bSolvePositionLast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSolvePositionLast_MetaData), NewProp_bSolvePositionLast_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bUsePositionBasedDrives_SetBit(void* Obj)
{
	((FChaosVDJointSolverSettingsDataWrapper*)Obj)->bUsePositionBasedDrives = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bUsePositionBasedDrives = { "bUsePositionBasedDrives", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSolverSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bUsePositionBasedDrives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePositionBasedDrives_MetaData), NewProp_bUsePositionBasedDrives_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableTwistLimits_SetBit(void* Obj)
{
	((FChaosVDJointSolverSettingsDataWrapper*)Obj)->bEnableTwistLimits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableTwistLimits = { "bEnableTwistLimits", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSolverSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableTwistLimits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTwistLimits_MetaData), NewProp_bEnableTwistLimits_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableSwingLimits_SetBit(void* Obj)
{
	((FChaosVDJointSolverSettingsDataWrapper*)Obj)->bEnableSwingLimits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableSwingLimits = { "bEnableSwingLimits", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSolverSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableSwingLimits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSwingLimits_MetaData), NewProp_bEnableSwingLimits_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableDrives_SetBit(void* Obj)
{
	((FChaosVDJointSolverSettingsDataWrapper*)Obj)->bEnableDrives = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableDrives = { "bEnableDrives", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSolverSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableDrives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDrives_MetaData), NewProp_bEnableDrives_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_LinearStiffnessOverride = { "LinearStiffnessOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, LinearStiffnessOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearStiffnessOverride_MetaData), NewProp_LinearStiffnessOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_TwistStiffnessOverride = { "TwistStiffnessOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, TwistStiffnessOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistStiffnessOverride_MetaData), NewProp_TwistStiffnessOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SwingStiffnessOverride = { "SwingStiffnessOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, SwingStiffnessOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingStiffnessOverride_MetaData), NewProp_SwingStiffnessOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_LinearProjectionOverride = { "LinearProjectionOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, LinearProjectionOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearProjectionOverride_MetaData), NewProp_LinearProjectionOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_AngularProjectionOverride = { "AngularProjectionOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, AngularProjectionOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularProjectionOverride_MetaData), NewProp_AngularProjectionOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_ShockPropagationOverride = { "ShockPropagationOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, ShockPropagationOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShockPropagationOverride_MetaData), NewProp_ShockPropagationOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_LinearDriveStiffnessOverride = { "LinearDriveStiffnessOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, LinearDriveStiffnessOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveStiffnessOverride_MetaData), NewProp_LinearDriveStiffnessOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_LinearDriveDampingOverride = { "LinearDriveDampingOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, LinearDriveDampingOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveDampingOverride_MetaData), NewProp_LinearDriveDampingOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_AngularDriveStiffnessOverride = { "AngularDriveStiffnessOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, AngularDriveStiffnessOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveStiffnessOverride_MetaData), NewProp_AngularDriveStiffnessOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_AngularDriveDampingOverride = { "AngularDriveDampingOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, AngularDriveDampingOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveDampingOverride_MetaData), NewProp_AngularDriveDampingOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftLinearStiffnessOverride = { "SoftLinearStiffnessOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, SoftLinearStiffnessOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftLinearStiffnessOverride_MetaData), NewProp_SoftLinearStiffnessOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftLinearDampingOverride = { "SoftLinearDampingOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, SoftLinearDampingOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftLinearDampingOverride_MetaData), NewProp_SoftLinearDampingOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftTwistStiffnessOverride = { "SoftTwistStiffnessOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, SoftTwistStiffnessOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftTwistStiffnessOverride_MetaData), NewProp_SoftTwistStiffnessOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftTwistDampingOverride = { "SoftTwistDampingOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, SoftTwistDampingOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftTwistDampingOverride_MetaData), NewProp_SoftTwistDampingOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftSwingStiffnessOverride = { "SoftSwingStiffnessOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, SoftSwingStiffnessOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSwingStiffnessOverride_MetaData), NewProp_SoftSwingStiffnessOverride_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftSwingDampingOverride = { "SoftSwingDampingOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSolverSettingsDataWrapper, SoftSwingDampingOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSwingDampingOverride_MetaData), NewProp_SoftSwingDampingOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SwingTwistAngleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_PositionTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_AngleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_MinParentMassRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_MaxInertiaRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_MinSolverStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_MaxSolverStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_NumIterationsAtMaxSolverStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_NumShockPropagationIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bUseLinearSolver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bSortEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bSolvePositionLast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bUsePositionBasedDrives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableTwistLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableSwingLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_bEnableDrives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_LinearStiffnessOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_TwistStiffnessOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SwingStiffnessOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_LinearProjectionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_AngularProjectionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_ShockPropagationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_LinearDriveStiffnessOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_LinearDriveDampingOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_AngularDriveStiffnessOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_AngularDriveDampingOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftLinearStiffnessOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftLinearDampingOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftTwistStiffnessOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftTwistDampingOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftSwingStiffnessOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewProp_SoftSwingDampingOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDJointSolverSettingsDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDJointSolverSettingsDataWrapper),
	alignof(FChaosVDJointSolverSettingsDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDJointSolverSettingsDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDJointSolverSettingsDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDJointSolverSettingsDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDJointSolverSettingsDataWrapper

// Begin Enum EChaosVDJointMotionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDJointMotionType;
static UEnum* EChaosVDJointMotionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointMotionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDJointMotionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDJointMotionType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDJointMotionType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointMotionType>()
{
	return EChaosVDJointMotionType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Free.Name", "EChaosVDJointMotionType::Free" },
		{ "Limited.Name", "EChaosVDJointMotionType::Limited" },
		{ "Locked.Name", "EChaosVDJointMotionType::Locked" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDJointMotionType::Free", (int64)EChaosVDJointMotionType::Free },
		{ "EChaosVDJointMotionType::Limited", (int64)EChaosVDJointMotionType::Limited },
		{ "EChaosVDJointMotionType::Locked", (int64)EChaosVDJointMotionType::Locked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDJointMotionType",
	"EChaosVDJointMotionType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointMotionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDJointMotionType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDJointMotionType.InnerSingleton;
}
// End Enum EChaosVDJointMotionType

// Begin Enum EChaosVDJointForceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDJointForceMode;
static UEnum* EChaosVDJointForceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointForceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDJointForceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDJointForceMode"));
	}
	return Z_Registration_Info_UEnum_EChaosVDJointForceMode.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointForceMode>()
{
	return EChaosVDJointForceMode_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Acceleration.Name", "EChaosVDJointForceMode::Acceleration" },
		{ "Force.Name", "EChaosVDJointForceMode::Force" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDJointForceMode::Acceleration", (int64)EChaosVDJointForceMode::Acceleration },
		{ "EChaosVDJointForceMode::Force", (int64)EChaosVDJointForceMode::Force },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDJointForceMode",
	"EChaosVDJointForceMode",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointForceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDJointForceMode.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDJointForceMode.InnerSingleton;
}
// End Enum EChaosVDJointForceMode

// Begin Enum EChaosVDPlasticityType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDPlasticityType;
static UEnum* EChaosVDPlasticityType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDPlasticityType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDPlasticityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDPlasticityType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDPlasticityType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDPlasticityType>()
{
	return EChaosVDPlasticityType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Free.Name", "EChaosVDPlasticityType::Free" },
		{ "Grow.Name", "EChaosVDPlasticityType::Grow" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
		{ "Shrink.Name", "EChaosVDPlasticityType::Shrink" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDPlasticityType::Free", (int64)EChaosVDPlasticityType::Free },
		{ "EChaosVDPlasticityType::Shrink", (int64)EChaosVDPlasticityType::Shrink },
		{ "EChaosVDPlasticityType::Grow", (int64)EChaosVDPlasticityType::Grow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDPlasticityType",
	"EChaosVDPlasticityType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDPlasticityType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDPlasticityType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDPlasticityType.InnerSingleton;
}
// End Enum EChaosVDPlasticityType

// Begin Enum EChaosVDJointSettingsFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags;
static UEnum* EChaosVDJointSettingsFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDJointSettingsFlags"));
	}
	return Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointSettingsFlags>()
{
	return EChaosVDJointSettingsFlags_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AngularSLerpPositionDriveEnabled.Name", "EChaosVDJointSettingsFlags::AngularSLerpPositionDriveEnabled" },
		{ "AngularSLerpVelocityDriveEnabled.Name", "EChaosVDJointSettingsFlags::AngularSLerpVelocityDriveEnabled" },
		{ "AngularSwingPositionDriveEnabled.Name", "EChaosVDJointSettingsFlags::AngularSwingPositionDriveEnabled" },
		{ "AngularSwingVelocityDriveEnabled.Name", "EChaosVDJointSettingsFlags::AngularSwingVelocityDriveEnabled" },
		{ "AngularTwistPositionDriveEnabled.Name", "EChaosVDJointSettingsFlags::AngularTwistPositionDriveEnabled" },
		{ "AngularTwistVelocityDriveEnabled.Name", "EChaosVDJointSettingsFlags::AngularTwistVelocityDriveEnabled" },
		{ "CollisionEnabled.Name", "EChaosVDJointSettingsFlags::CollisionEnabled" },
		{ "LinearPositionDriveEnable1.Name", "EChaosVDJointSettingsFlags::LinearPositionDriveEnable1" },
		{ "LinearPositionDriveEnable2.Name", "EChaosVDJointSettingsFlags::LinearPositionDriveEnable2" },
		{ "LinearPositionDriveEnabled0.Name", "EChaosVDJointSettingsFlags::LinearPositionDriveEnabled0" },
		{ "LinearVelocityDriveEnabled0.Name", "EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled0" },
		{ "LinearVelocityDriveEnabled1.Name", "EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled1" },
		{ "LinearVelocityDriveEnabled2.Name", "EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled2" },
		{ "MassConditioningEnabled.Name", "EChaosVDJointSettingsFlags::MassConditioningEnabled" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
		{ "None.Name", "EChaosVDJointSettingsFlags::None" },
		{ "SoftLinearLimitsEnabled.Name", "EChaosVDJointSettingsFlags::SoftLinearLimitsEnabled" },
		{ "SoftSwingLimitsEnabled.Name", "EChaosVDJointSettingsFlags::SoftSwingLimitsEnabled" },
		{ "SoftTwistLimitsEnabled.Name", "EChaosVDJointSettingsFlags::SoftTwistLimitsEnabled" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDJointSettingsFlags::None", (int64)EChaosVDJointSettingsFlags::None },
		{ "EChaosVDJointSettingsFlags::CollisionEnabled", (int64)EChaosVDJointSettingsFlags::CollisionEnabled },
		{ "EChaosVDJointSettingsFlags::MassConditioningEnabled", (int64)EChaosVDJointSettingsFlags::MassConditioningEnabled },
		{ "EChaosVDJointSettingsFlags::AngularSLerpPositionDriveEnabled", (int64)EChaosVDJointSettingsFlags::AngularSLerpPositionDriveEnabled },
		{ "EChaosVDJointSettingsFlags::AngularSLerpVelocityDriveEnabled", (int64)EChaosVDJointSettingsFlags::AngularSLerpVelocityDriveEnabled },
		{ "EChaosVDJointSettingsFlags::AngularTwistPositionDriveEnabled", (int64)EChaosVDJointSettingsFlags::AngularTwistPositionDriveEnabled },
		{ "EChaosVDJointSettingsFlags::AngularTwistVelocityDriveEnabled", (int64)EChaosVDJointSettingsFlags::AngularTwistVelocityDriveEnabled },
		{ "EChaosVDJointSettingsFlags::AngularSwingPositionDriveEnabled", (int64)EChaosVDJointSettingsFlags::AngularSwingPositionDriveEnabled },
		{ "EChaosVDJointSettingsFlags::AngularSwingVelocityDriveEnabled", (int64)EChaosVDJointSettingsFlags::AngularSwingVelocityDriveEnabled },
		{ "EChaosVDJointSettingsFlags::SoftLinearLimitsEnabled", (int64)EChaosVDJointSettingsFlags::SoftLinearLimitsEnabled },
		{ "EChaosVDJointSettingsFlags::SoftTwistLimitsEnabled", (int64)EChaosVDJointSettingsFlags::SoftTwistLimitsEnabled },
		{ "EChaosVDJointSettingsFlags::SoftSwingLimitsEnabled", (int64)EChaosVDJointSettingsFlags::SoftSwingLimitsEnabled },
		{ "EChaosVDJointSettingsFlags::LinearPositionDriveEnabled0", (int64)EChaosVDJointSettingsFlags::LinearPositionDriveEnabled0 },
		{ "EChaosVDJointSettingsFlags::LinearPositionDriveEnable1", (int64)EChaosVDJointSettingsFlags::LinearPositionDriveEnable1 },
		{ "EChaosVDJointSettingsFlags::LinearPositionDriveEnable2", (int64)EChaosVDJointSettingsFlags::LinearPositionDriveEnable2 },
		{ "EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled0", (int64)EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled0 },
		{ "EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled1", (int64)EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled1 },
		{ "EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled2", (int64)EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDJointSettingsFlags",
	"EChaosVDJointSettingsFlags",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags()
{
	if (!Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointSettingsFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags.InnerSingleton;
}
// End Enum EChaosVDJointSettingsFlags

// Begin ScriptStruct FChaosVDJointSettingsDataWrapper
static_assert(std::is_polymorphic<FChaosVDJointSettingsDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDJointSettingsDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDJointSettingsDataWrapper;
class UScriptStruct* FChaosVDJointSettingsDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDJointSettingsDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDJointSettingsDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDJointSettingsDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDJointSettingsDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDJointSettingsDataWrapper>()
{
	return FChaosVDJointSettingsDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectorTransforms_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearProjection_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularProjection_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShockPropagation_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistance_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportAngle_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentInvMassScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollisionEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMassConditioningEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoftLinearLimitsEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoftTwistLimitsEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoftSwingLimitsEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularSLerpPositionDriveEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularSLerpVelocityDriveEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularTwistPositionDriveEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularTwistVelocityDriveEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularSwingPositionDriveEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularSwingVelocityDriveEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearMotionTypes_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimit_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularMotionTypes_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularLimits_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearSoftForceMode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularSoftForceMode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftLinearStiffness_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftLinearDamping_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftTwistStiffness_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftTwistDamping_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSwingStiffness_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSwingDamping_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearRestitution_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistRestitution_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingRestitution_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearContactDistance_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistContactDistance_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingContactDistance_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDrivePositionTarget_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveVelocityTarget_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearPositionDriveEnabled0_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearPositionDriveEnabled1_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearPositionDriveEnabled2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearVelocityDriveEnabled0_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearVelocityDriveEnabled1_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearVelocityDriveEnabled2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveForceMode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveStiffness_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveDamping_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveMaxForce_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDrivePositionTarget_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveVelocityTarget_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveForceMode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveStiffness_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveDamping_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveMaxTorque_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearBreakForce_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearPlasticityLimit_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearPlasticityType_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearPlasticityInitialDistanceSquared_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularBreakTorque_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularPlasticityLimit_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactTransferScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectorTransforms;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearProjection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngularProjection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ShockPropagation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TeleportDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TeleportAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ParentInvMassScale;
	static void NewProp_bCollisionEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollisionEnabled;
	static void NewProp_bMassConditioningEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMassConditioningEnabled;
	static void NewProp_bSoftLinearLimitsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftLinearLimitsEnabled;
	static void NewProp_bSoftTwistLimitsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftTwistLimitsEnabled;
	static void NewProp_bSoftSwingLimitsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftSwingLimitsEnabled;
	static void NewProp_bAngularSLerpPositionDriveEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularSLerpPositionDriveEnabled;
	static void NewProp_bAngularSLerpVelocityDriveEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularSLerpVelocityDriveEnabled;
	static void NewProp_bAngularTwistPositionDriveEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularTwistPositionDriveEnabled;
	static void NewProp_bAngularTwistVelocityDriveEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularTwistVelocityDriveEnabled;
	static void NewProp_bAngularSwingPositionDriveEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularSwingPositionDriveEnabled;
	static void NewProp_bAngularSwingVelocityDriveEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularSwingVelocityDriveEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LinearMotionTypes_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearMotionTypes;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AngularMotionTypes_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularMotionTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularLimits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LinearSoftForceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearSoftForceMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AngularSoftForceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularSoftForceMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftLinearStiffness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftLinearDamping;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftTwistStiffness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftTwistDamping;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftSwingStiffness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SoftSwingDamping;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearRestitution;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TwistRestitution;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SwingRestitution;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearContactDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TwistContactDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SwingContactDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearDrivePositionTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearDriveVelocityTarget;
	static void NewProp_bLinearPositionDriveEnabled0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearPositionDriveEnabled0;
	static void NewProp_bLinearPositionDriveEnabled1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearPositionDriveEnabled1;
	static void NewProp_bLinearPositionDriveEnabled2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearPositionDriveEnabled2;
	static void NewProp_bLinearVelocityDriveEnabled0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearVelocityDriveEnabled0;
	static void NewProp_bLinearVelocityDriveEnabled1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearVelocityDriveEnabled1;
	static void NewProp_bLinearVelocityDriveEnabled2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearVelocityDriveEnabled2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LinearDriveForceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearDriveForceMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearDriveStiffness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearDriveDamping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearDriveMaxForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularDrivePositionTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularDriveVelocityTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AngularDriveForceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularDriveForceMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularDriveStiffness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularDriveDamping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularDriveMaxTorque;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearBreakForce;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearPlasticityLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LinearPlasticityType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearPlasticityType;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LinearPlasticityInitialDistanceSquared;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngularBreakTorque;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngularPlasticityLimit;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ContactTransferScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDJointSettingsDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_ConnectorTransforms = { "ConnectorTransforms", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ConnectorTransforms, FChaosVDJointSettingsDataWrapper), STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, ConnectorTransforms), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectorTransforms_MetaData), NewProp_ConnectorTransforms_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearProjection = { "LinearProjection", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearProjection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearProjection_MetaData), NewProp_LinearProjection_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularProjection = { "AngularProjection", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularProjection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularProjection_MetaData), NewProp_AngularProjection_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_ShockPropagation = { "ShockPropagation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, ShockPropagation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShockPropagation_MetaData), NewProp_ShockPropagation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_TeleportDistance = { "TeleportDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, TeleportDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportDistance_MetaData), NewProp_TeleportDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_TeleportAngle = { "TeleportAngle", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, TeleportAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportAngle_MetaData), NewProp_TeleportAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_ParentInvMassScale = { "ParentInvMassScale", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, ParentInvMassScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentInvMassScale_MetaData), NewProp_ParentInvMassScale_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bCollisionEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bCollisionEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bCollisionEnabled = { "bCollisionEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bCollisionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollisionEnabled_MetaData), NewProp_bCollisionEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bMassConditioningEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bMassConditioningEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bMassConditioningEnabled = { "bMassConditioningEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bMassConditioningEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMassConditioningEnabled_MetaData), NewProp_bMassConditioningEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftLinearLimitsEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bSoftLinearLimitsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftLinearLimitsEnabled = { "bSoftLinearLimitsEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftLinearLimitsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoftLinearLimitsEnabled_MetaData), NewProp_bSoftLinearLimitsEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftTwistLimitsEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bSoftTwistLimitsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftTwistLimitsEnabled = { "bSoftTwistLimitsEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftTwistLimitsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoftTwistLimitsEnabled_MetaData), NewProp_bSoftTwistLimitsEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftSwingLimitsEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bSoftSwingLimitsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftSwingLimitsEnabled = { "bSoftSwingLimitsEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftSwingLimitsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoftSwingLimitsEnabled_MetaData), NewProp_bSoftSwingLimitsEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSLerpPositionDriveEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bAngularSLerpPositionDriveEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSLerpPositionDriveEnabled = { "bAngularSLerpPositionDriveEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSLerpPositionDriveEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularSLerpPositionDriveEnabled_MetaData), NewProp_bAngularSLerpPositionDriveEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSLerpVelocityDriveEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bAngularSLerpVelocityDriveEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSLerpVelocityDriveEnabled = { "bAngularSLerpVelocityDriveEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSLerpVelocityDriveEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularSLerpVelocityDriveEnabled_MetaData), NewProp_bAngularSLerpVelocityDriveEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularTwistPositionDriveEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bAngularTwistPositionDriveEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularTwistPositionDriveEnabled = { "bAngularTwistPositionDriveEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularTwistPositionDriveEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularTwistPositionDriveEnabled_MetaData), NewProp_bAngularTwistPositionDriveEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularTwistVelocityDriveEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bAngularTwistVelocityDriveEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularTwistVelocityDriveEnabled = { "bAngularTwistVelocityDriveEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularTwistVelocityDriveEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularTwistVelocityDriveEnabled_MetaData), NewProp_bAngularTwistVelocityDriveEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSwingPositionDriveEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bAngularSwingPositionDriveEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSwingPositionDriveEnabled = { "bAngularSwingPositionDriveEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSwingPositionDriveEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularSwingPositionDriveEnabled_MetaData), NewProp_bAngularSwingPositionDriveEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSwingVelocityDriveEnabled_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bAngularSwingVelocityDriveEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSwingVelocityDriveEnabled = { "bAngularSwingVelocityDriveEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSwingVelocityDriveEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularSwingVelocityDriveEnabled_MetaData), NewProp_bAngularSwingVelocityDriveEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearMotionTypes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearMotionTypes = { "LinearMotionTypes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(LinearMotionTypes, FChaosVDJointSettingsDataWrapper), STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearMotionTypes), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearMotionTypes_MetaData), NewProp_LinearMotionTypes_MetaData) }; // 2924750010
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearLimit = { "LinearLimit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearLimit_MetaData), NewProp_LinearLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularMotionTypes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularMotionTypes = { "AngularMotionTypes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(AngularMotionTypes, FChaosVDJointSettingsDataWrapper), STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularMotionTypes), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointMotionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularMotionTypes_MetaData), NewProp_AngularMotionTypes_MetaData) }; // 2924750010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularLimits = { "AngularLimits", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularLimits_MetaData), NewProp_AngularLimits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearSoftForceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearSoftForceMode = { "LinearSoftForceMode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearSoftForceMode), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearSoftForceMode_MetaData), NewProp_LinearSoftForceMode_MetaData) }; // 1272403679
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularSoftForceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularSoftForceMode = { "AngularSoftForceMode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularSoftForceMode), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularSoftForceMode_MetaData), NewProp_AngularSoftForceMode_MetaData) }; // 1272403679
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftLinearStiffness = { "SoftLinearStiffness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, SoftLinearStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftLinearStiffness_MetaData), NewProp_SoftLinearStiffness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftLinearDamping = { "SoftLinearDamping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, SoftLinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftLinearDamping_MetaData), NewProp_SoftLinearDamping_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftTwistStiffness = { "SoftTwistStiffness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, SoftTwistStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftTwistStiffness_MetaData), NewProp_SoftTwistStiffness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftTwistDamping = { "SoftTwistDamping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, SoftTwistDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftTwistDamping_MetaData), NewProp_SoftTwistDamping_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftSwingStiffness = { "SoftSwingStiffness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, SoftSwingStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSwingStiffness_MetaData), NewProp_SoftSwingStiffness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftSwingDamping = { "SoftSwingDamping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, SoftSwingDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSwingDamping_MetaData), NewProp_SoftSwingDamping_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearRestitution = { "LinearRestitution", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearRestitution_MetaData), NewProp_LinearRestitution_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_TwistRestitution = { "TwistRestitution", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, TwistRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistRestitution_MetaData), NewProp_TwistRestitution_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SwingRestitution = { "SwingRestitution", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, SwingRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingRestitution_MetaData), NewProp_SwingRestitution_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearContactDistance = { "LinearContactDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearContactDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearContactDistance_MetaData), NewProp_LinearContactDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_TwistContactDistance = { "TwistContactDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, TwistContactDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistContactDistance_MetaData), NewProp_TwistContactDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SwingContactDistance = { "SwingContactDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, SwingContactDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingContactDistance_MetaData), NewProp_SwingContactDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDrivePositionTarget = { "LinearDrivePositionTarget", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearDrivePositionTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDrivePositionTarget_MetaData), NewProp_LinearDrivePositionTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveVelocityTarget = { "LinearDriveVelocityTarget", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearDriveVelocityTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveVelocityTarget_MetaData), NewProp_LinearDriveVelocityTarget_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled0_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bLinearPositionDriveEnabled0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled0 = { "bLinearPositionDriveEnabled0", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled0_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearPositionDriveEnabled0_MetaData), NewProp_bLinearPositionDriveEnabled0_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled1_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bLinearPositionDriveEnabled1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled1 = { "bLinearPositionDriveEnabled1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearPositionDriveEnabled1_MetaData), NewProp_bLinearPositionDriveEnabled1_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled2_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bLinearPositionDriveEnabled2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled2 = { "bLinearPositionDriveEnabled2", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearPositionDriveEnabled2_MetaData), NewProp_bLinearPositionDriveEnabled2_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled0_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bLinearVelocityDriveEnabled0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled0 = { "bLinearVelocityDriveEnabled0", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled0_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearVelocityDriveEnabled0_MetaData), NewProp_bLinearVelocityDriveEnabled0_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled1_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bLinearVelocityDriveEnabled1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled1 = { "bLinearVelocityDriveEnabled1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearVelocityDriveEnabled1_MetaData), NewProp_bLinearVelocityDriveEnabled1_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled2_SetBit(void* Obj)
{
	((FChaosVDJointSettingsDataWrapper*)Obj)->bLinearVelocityDriveEnabled2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled2 = { "bLinearVelocityDriveEnabled2", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDJointSettingsDataWrapper), &Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearVelocityDriveEnabled2_MetaData), NewProp_bLinearVelocityDriveEnabled2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveForceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveForceMode = { "LinearDriveForceMode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearDriveForceMode), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveForceMode_MetaData), NewProp_LinearDriveForceMode_MetaData) }; // 1272403679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveStiffness = { "LinearDriveStiffness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearDriveStiffness), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveStiffness_MetaData), NewProp_LinearDriveStiffness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveDamping = { "LinearDriveDamping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearDriveDamping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveDamping_MetaData), NewProp_LinearDriveDamping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveMaxForce = { "LinearDriveMaxForce", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearDriveMaxForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveMaxForce_MetaData), NewProp_LinearDriveMaxForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDrivePositionTarget = { "AngularDrivePositionTarget", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularDrivePositionTarget), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDrivePositionTarget_MetaData), NewProp_AngularDrivePositionTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveVelocityTarget = { "AngularDriveVelocityTarget", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularDriveVelocityTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveVelocityTarget_MetaData), NewProp_AngularDriveVelocityTarget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveForceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveForceMode = { "AngularDriveForceMode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularDriveForceMode), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDJointForceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveForceMode_MetaData), NewProp_AngularDriveForceMode_MetaData) }; // 1272403679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveStiffness = { "AngularDriveStiffness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularDriveStiffness), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveStiffness_MetaData), NewProp_AngularDriveStiffness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveDamping = { "AngularDriveDamping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularDriveDamping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveDamping_MetaData), NewProp_AngularDriveDamping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveMaxTorque = { "AngularDriveMaxTorque", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularDriveMaxTorque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveMaxTorque_MetaData), NewProp_AngularDriveMaxTorque_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearBreakForce = { "LinearBreakForce", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearBreakForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearBreakForce_MetaData), NewProp_LinearBreakForce_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearPlasticityLimit = { "LinearPlasticityLimit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearPlasticityLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearPlasticityLimit_MetaData), NewProp_LinearPlasticityLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearPlasticityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearPlasticityType = { "LinearPlasticityType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearPlasticityType), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDPlasticityType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearPlasticityType_MetaData), NewProp_LinearPlasticityType_MetaData) }; // 4246618362
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearPlasticityInitialDistanceSquared = { "LinearPlasticityInitialDistanceSquared", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, LinearPlasticityInitialDistanceSquared), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearPlasticityInitialDistanceSquared_MetaData), NewProp_LinearPlasticityInitialDistanceSquared_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularBreakTorque = { "AngularBreakTorque", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularBreakTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularBreakTorque_MetaData), NewProp_AngularBreakTorque_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularPlasticityLimit = { "AngularPlasticityLimit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, AngularPlasticityLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularPlasticityLimit_MetaData), NewProp_AngularPlasticityLimit_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_ContactTransferScale = { "ContactTransferScale", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointSettingsDataWrapper, ContactTransferScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactTransferScale_MetaData), NewProp_ContactTransferScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_ConnectorTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_ShockPropagation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_TeleportDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_TeleportAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_ParentInvMassScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bCollisionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bMassConditioningEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftLinearLimitsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftTwistLimitsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bSoftSwingLimitsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSLerpPositionDriveEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSLerpVelocityDriveEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularTwistPositionDriveEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularTwistVelocityDriveEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSwingPositionDriveEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bAngularSwingVelocityDriveEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearMotionTypes_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearMotionTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularMotionTypes_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularMotionTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearSoftForceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearSoftForceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularSoftForceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularSoftForceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftLinearStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftLinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftTwistStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftTwistDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftSwingStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SoftSwingDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_TwistRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SwingRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearContactDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_TwistContactDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_SwingContactDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDrivePositionTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveVelocityTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearPositionDriveEnabled2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_bLinearVelocityDriveEnabled2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveForceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveForceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearDriveMaxForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDrivePositionTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveVelocityTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveForceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveForceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularDriveMaxTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearBreakForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearPlasticityLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearPlasticityType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearPlasticityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_LinearPlasticityInitialDistanceSquared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularBreakTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_AngularPlasticityLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewProp_ContactTransferScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDJointSettingsDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDJointSettingsDataWrapper),
	alignof(FChaosVDJointSettingsDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDJointSettingsDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDJointSettingsDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDJointSettingsDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDJointSettingsDataWrapper

// Begin ScriptStruct FChaosVDJointConstraint
static_assert(std::is_polymorphic<FChaosVDJointConstraint>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDJointConstraint cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDJointConstraint;
class UScriptStruct* FChaosVDJointConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDJointConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDJointConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDJointConstraint, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDJointConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDJointConstraint.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDJointConstraint>()
{
	return FChaosVDJointConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintIndex_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointState_MetaData[] = {
		{ "Category", "JointState" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointSettings_MetaData[] = {
		{ "Category", "JointSettings" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDJointDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDJointConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::NewProp_ConstraintIndex = { "ConstraintIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointConstraint, ConstraintIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintIndex_MetaData), NewProp_ConstraintIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::NewProp_JointState = { "JointState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointConstraint, JointState), Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointState_MetaData), NewProp_JointState_MetaData) }; // 1225963863
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::NewProp_JointSettings = { "JointSettings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDJointConstraint, JointSettings), Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointSettings_MetaData), NewProp_JointSettings_MetaData) }; // 2568039498
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::NewProp_ConstraintIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::NewProp_JointState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::NewProp_JointSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDJointConstraint",
	Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::PropPointers),
	sizeof(FChaosVDJointConstraint),
	alignof(FChaosVDJointConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDJointConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDJointConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDJointConstraint.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDJointConstraint.InnerSingleton;
}
// End ScriptStruct FChaosVDJointConstraint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChaosVDJointReSimType_StaticEnum, TEXT("EChaosVDJointReSimType"), &Z_Registration_Info_UEnum_EChaosVDJointReSimType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 876133987U) },
		{ EChaosVDJointSyncType_StaticEnum, TEXT("EChaosVDJointSyncType"), &Z_Registration_Info_UEnum_EChaosVDJointSyncType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3105806767U) },
		{ EChaosVDJointStateFlags_StaticEnum, TEXT("EChaosVDJointStateFlags"), &Z_Registration_Info_UEnum_EChaosVDJointStateFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2742092661U) },
		{ EChaosVDJointSolverSettingsFlags_StaticEnum, TEXT("EChaosVDJointSolverSettingsFlags"), &Z_Registration_Info_UEnum_EChaosVDJointSolverSettingsFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1197115632U) },
		{ EChaosVDJointMotionType_StaticEnum, TEXT("EChaosVDJointMotionType"), &Z_Registration_Info_UEnum_EChaosVDJointMotionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2924750010U) },
		{ EChaosVDJointForceMode_StaticEnum, TEXT("EChaosVDJointForceMode"), &Z_Registration_Info_UEnum_EChaosVDJointForceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1272403679U) },
		{ EChaosVDPlasticityType_StaticEnum, TEXT("EChaosVDPlasticityType"), &Z_Registration_Info_UEnum_EChaosVDPlasticityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4246618362U) },
		{ EChaosVDJointSettingsFlags_StaticEnum, TEXT("EChaosVDJointSettingsFlags"), &Z_Registration_Info_UEnum_EChaosVDJointSettingsFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 429638550U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosVDJointStateDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics::NewStructOps, TEXT("ChaosVDJointStateDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDJointStateDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDJointStateDataWrapper), 1225963863U) },
		{ FChaosVDJointSolverSettingsDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics::NewStructOps, TEXT("ChaosVDJointSolverSettingsDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDJointSolverSettingsDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDJointSolverSettingsDataWrapper), 1639911770U) },
		{ FChaosVDJointSettingsDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics::NewStructOps, TEXT("ChaosVDJointSettingsDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDJointSettingsDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDJointSettingsDataWrapper), 2568039498U) },
		{ FChaosVDJointConstraint::StaticStruct, Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics::NewStructOps, TEXT("ChaosVDJointConstraint"), &Z_Registration_Info_UScriptStruct_ChaosVDJointConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDJointConstraint), 718768460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h_3662908677(TEXT("/Script/ChaosVDRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
