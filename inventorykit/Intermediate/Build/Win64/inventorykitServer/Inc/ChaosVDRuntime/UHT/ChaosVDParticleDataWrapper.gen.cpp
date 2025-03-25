// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosVisualDebugger/Public/DataWrappers/ChaosVDParticleDataWrapper.h"
#include "Runtime/Experimental/ChaosVisualDebugger/Public/DataWrappers/ChaosVDCollisionDataWrappers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDParticleDataWrapper() {}

// Begin Cross Module References
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDConnectivityEdge();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleCluster();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleDynamics();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleMassProps();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleVelocities();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDShapeCollisionData();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDWrapperDataBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ChaosVDRuntime();
// End Cross Module References

// Begin Enum EChaosVDParticleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDParticleType;
static UEnum* EChaosVDParticleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDParticleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDParticleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDParticleType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDParticleType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDParticleType>()
{
	return EChaosVDParticleType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Clustered.Name", "EChaosVDParticleType::Clustered" },
		{ "GeometryCollection.Name", "EChaosVDParticleType::GeometryCollection" },
		{ "Kinematic.Name", "EChaosVDParticleType::Kinematic" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "Rigid.Name", "EChaosVDParticleType::Rigid" },
		{ "SkeletalMesh.Name", "EChaosVDParticleType::SkeletalMesh" },
		{ "Static.Name", "EChaosVDParticleType::Static" },
		{ "StaticMesh.Name", "EChaosVDParticleType::StaticMesh" },
		{ "Unknown.Name", "EChaosVDParticleType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDParticleType::Static", (int64)EChaosVDParticleType::Static },
		{ "EChaosVDParticleType::Kinematic", (int64)EChaosVDParticleType::Kinematic },
		{ "EChaosVDParticleType::Rigid", (int64)EChaosVDParticleType::Rigid },
		{ "EChaosVDParticleType::Clustered", (int64)EChaosVDParticleType::Clustered },
		{ "EChaosVDParticleType::StaticMesh", (int64)EChaosVDParticleType::StaticMesh },
		{ "EChaosVDParticleType::SkeletalMesh", (int64)EChaosVDParticleType::SkeletalMesh },
		{ "EChaosVDParticleType::GeometryCollection", (int64)EChaosVDParticleType::GeometryCollection },
		{ "EChaosVDParticleType::Unknown", (int64)EChaosVDParticleType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDParticleType",
	"EChaosVDParticleType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDParticleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDParticleType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDParticleType.InnerSingleton;
}
// End Enum EChaosVDParticleType

// Begin Enum EChaosVDSleepType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDSleepType;
static UEnum* EChaosVDSleepType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDSleepType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDSleepType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDSleepType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDSleepType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDSleepType>()
{
	return EChaosVDSleepType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MaterialSleep.Name", "EChaosVDSleepType::MaterialSleep" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "NeverSleep.Name", "EChaosVDSleepType::NeverSleep" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDSleepType::MaterialSleep", (int64)EChaosVDSleepType::MaterialSleep },
		{ "EChaosVDSleepType::NeverSleep", (int64)EChaosVDSleepType::NeverSleep },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDSleepType",
	"EChaosVDSleepType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDSleepType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDSleepType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDSleepType.InnerSingleton;
}
// End Enum EChaosVDSleepType

// Begin Enum EChaosVDObjectStateType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDObjectStateType;
static UEnum* EChaosVDObjectStateType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDObjectStateType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDObjectStateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDObjectStateType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDObjectStateType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDObjectStateType>()
{
	return EChaosVDObjectStateType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Count.Name", "EChaosVDObjectStateType::Count" },
		{ "Dynamic.Name", "EChaosVDObjectStateType::Dynamic" },
		{ "Kinematic.Name", "EChaosVDObjectStateType::Kinematic" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "Sleeping.Name", "EChaosVDObjectStateType::Sleeping" },
		{ "Static.Name", "EChaosVDObjectStateType::Static" },
		{ "Uninitialized.Name", "EChaosVDObjectStateType::Uninitialized" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDObjectStateType::Uninitialized", (int64)EChaosVDObjectStateType::Uninitialized },
		{ "EChaosVDObjectStateType::Sleeping", (int64)EChaosVDObjectStateType::Sleeping },
		{ "EChaosVDObjectStateType::Kinematic", (int64)EChaosVDObjectStateType::Kinematic },
		{ "EChaosVDObjectStateType::Static", (int64)EChaosVDObjectStateType::Static },
		{ "EChaosVDObjectStateType::Dynamic", (int64)EChaosVDObjectStateType::Dynamic },
		{ "EChaosVDObjectStateType::Count", (int64)EChaosVDObjectStateType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDObjectStateType",
	"EChaosVDObjectStateType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDObjectStateType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDObjectStateType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDObjectStateType.InnerSingleton;
}
// End Enum EChaosVDObjectStateType

// Begin ScriptStruct FChaosVDWrapperDataBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDWrapperDataBase;
class UScriptStruct* FChaosVDWrapperDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDWrapperDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDWrapperDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDWrapperDataBase, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDWrapperDataBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDWrapperDataBase.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDWrapperDataBase>()
{
	return FChaosVDWrapperDataBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct that declares the interface to be used for any ParticleData Viewer */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "ToolTip", "Base struct that declares the interface to be used for any ParticleData Viewer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidData_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasValidData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDWrapperDataBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::NewProp_bHasValidData_SetBit(void* Obj)
{
	((FChaosVDWrapperDataBase*)Obj)->bHasValidData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::NewProp_bHasValidData = { "bHasValidData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDWrapperDataBase), &Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::NewProp_bHasValidData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasValidData_MetaData), NewProp_bHasValidData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::NewProp_bHasValidData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	&NewStructOps,
	"ChaosVDWrapperDataBase",
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::PropPointers),
	sizeof(FChaosVDWrapperDataBase),
	alignof(FChaosVDWrapperDataBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDWrapperDataBase()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDWrapperDataBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDWrapperDataBase.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDWrapperDataBase.InnerSingleton;
}
// End ScriptStruct FChaosVDWrapperDataBase

// Begin ScriptStruct FChaosVDFRigidParticleControlFlags
static_assert(std::is_polymorphic<FChaosVDFRigidParticleControlFlags>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDFRigidParticleControlFlags cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDFRigidParticleControlFlags;
class UScriptStruct* FChaosVDFRigidParticleControlFlags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDFRigidParticleControlFlags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDFRigidParticleControlFlags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDFRigidParticleControlFlags"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDFRigidParticleControlFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDFRigidParticleControlFlags>()
{
	return FChaosVDFRigidParticleControlFlags::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGravityEnabled_MetaData[] = {
		{ "Category", "Particle Control Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCCDEnabled_MetaData[] = {
		{ "Category", "Particle Control Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOneWayInteractionEnabled_MetaData[] = {
		{ "Category", "Particle Control Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInertiaConditioningEnabled_MetaData[] = {
		{ "Category", "Particle Control Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityGroupIndex_MetaData[] = {
		{ "Category", "Particle Control Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMACDEnabled_MetaData[] = {
		{ "Category", "Particle Control Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bGravityEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGravityEnabled;
	static void NewProp_bCCDEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCCDEnabled;
	static void NewProp_bOneWayInteractionEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneWayInteractionEnabled;
	static void NewProp_bInertiaConditioningEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInertiaConditioningEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GravityGroupIndex;
	static void NewProp_bMACDEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMACDEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDFRigidParticleControlFlags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bGravityEnabled_SetBit(void* Obj)
{
	((FChaosVDFRigidParticleControlFlags*)Obj)->bGravityEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bGravityEnabled = { "bGravityEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDFRigidParticleControlFlags), &Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bGravityEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGravityEnabled_MetaData), NewProp_bGravityEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bCCDEnabled_SetBit(void* Obj)
{
	((FChaosVDFRigidParticleControlFlags*)Obj)->bCCDEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bCCDEnabled = { "bCCDEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDFRigidParticleControlFlags), &Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bCCDEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCCDEnabled_MetaData), NewProp_bCCDEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bOneWayInteractionEnabled_SetBit(void* Obj)
{
	((FChaosVDFRigidParticleControlFlags*)Obj)->bOneWayInteractionEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bOneWayInteractionEnabled = { "bOneWayInteractionEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDFRigidParticleControlFlags), &Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bOneWayInteractionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOneWayInteractionEnabled_MetaData), NewProp_bOneWayInteractionEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bInertiaConditioningEnabled_SetBit(void* Obj)
{
	((FChaosVDFRigidParticleControlFlags*)Obj)->bInertiaConditioningEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bInertiaConditioningEnabled = { "bInertiaConditioningEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDFRigidParticleControlFlags), &Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bInertiaConditioningEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInertiaConditioningEnabled_MetaData), NewProp_bInertiaConditioningEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_GravityGroupIndex = { "GravityGroupIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDFRigidParticleControlFlags, GravityGroupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityGroupIndex_MetaData), NewProp_GravityGroupIndex_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bMACDEnabled_SetBit(void* Obj)
{
	((FChaosVDFRigidParticleControlFlags*)Obj)->bMACDEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bMACDEnabled = { "bMACDEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDFRigidParticleControlFlags), &Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bMACDEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMACDEnabled_MetaData), NewProp_bMACDEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bGravityEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bCCDEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bOneWayInteractionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bInertiaConditioningEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_GravityGroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewProp_bMACDEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDFRigidParticleControlFlags",
	Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::PropPointers),
	sizeof(FChaosVDFRigidParticleControlFlags),
	alignof(FChaosVDFRigidParticleControlFlags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDFRigidParticleControlFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDFRigidParticleControlFlags.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDFRigidParticleControlFlags.InnerSingleton;
}
// End ScriptStruct FChaosVDFRigidParticleControlFlags

// Begin ScriptStruct FChaosVDParticlePositionRotation
static_assert(std::is_polymorphic<FChaosVDParticlePositionRotation>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDParticlePositionRotation cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDParticlePositionRotation;
class UScriptStruct* FChaosVDParticlePositionRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticlePositionRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDParticlePositionRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDParticlePositionRotation"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticlePositionRotation.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDParticlePositionRotation>()
{
	return FChaosVDParticlePositionRotation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simplified UStruct version of FParticlePositionRotation.\n * Used to be able to show the values in the editor and allow changes via the Property Editor.\n */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "ToolTip", "Simplified UStruct version of FParticlePositionRotation.\nUsed to be able to show the values in the editor and allow changes via the Property Editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MX_MetaData[] = {
		{ "Category", "Particle Velocities" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MR_MetaData[] = {
		{ "Category", "Particle Velocities" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MR;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDParticlePositionRotation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::NewProp_MX = { "MX", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticlePositionRotation, MX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MX_MetaData), NewProp_MX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::NewProp_MR = { "MR", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticlePositionRotation, MR), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MR_MetaData), NewProp_MR_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::NewProp_MX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::NewProp_MR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDParticlePositionRotation",
	Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::PropPointers),
	sizeof(FChaosVDParticlePositionRotation),
	alignof(FChaosVDParticlePositionRotation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticlePositionRotation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDParticlePositionRotation.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticlePositionRotation.InnerSingleton;
}
// End ScriptStruct FChaosVDParticlePositionRotation

// Begin ScriptStruct FChaosVDParticleVelocities
static_assert(std::is_polymorphic<FChaosVDParticleVelocities>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDParticleVelocities cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDParticleVelocities;
class UScriptStruct* FChaosVDParticleVelocities::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleVelocities.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDParticleVelocities.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleVelocities, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDParticleVelocities"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleVelocities.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDParticleVelocities>()
{
	return FChaosVDParticleVelocities::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simplified UStruct version of FParticleVelocities.\n * Used to be able to show the values in the editor and allow changes via the Property Editor.\n */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "ToolTip", "Simplified UStruct version of FParticleVelocities.\nUsed to be able to show the values in the editor and allow changes via the Property Editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MV_MetaData[] = {
		{ "Category", "Particle Velocities" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MW_MetaData[] = {
		{ "Category", "Particle Velocities" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MW;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDParticleVelocities>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::NewProp_MV = { "MV", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleVelocities, MV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MV_MetaData), NewProp_MV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::NewProp_MW = { "MW", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleVelocities, MW), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MW_MetaData), NewProp_MW_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::NewProp_MV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::NewProp_MW,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDParticleVelocities",
	Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::PropPointers),
	sizeof(FChaosVDParticleVelocities),
	alignof(FChaosVDParticleVelocities),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleVelocities()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleVelocities.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDParticleVelocities.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleVelocities.InnerSingleton;
}
// End ScriptStruct FChaosVDParticleVelocities

// Begin ScriptStruct FChaosVDParticleDynamics
static_assert(std::is_polymorphic<FChaosVDParticleDynamics>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDParticleDynamics cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamics;
class UScriptStruct* FChaosVDParticleDynamics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleDynamics, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDParticleDynamics"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamics.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDParticleDynamics>()
{
	return FChaosVDParticleDynamics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simplified UStruct version of FParticleDynamics.\n * Used to be able to show the values in the editor and allow changes via the Property Editor.\n */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "ToolTip", "Simplified UStruct version of FParticleDynamics.\nUsed to be able to show the values in the editor and allow changes via the Property Editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAcceleration_MetaData[] = {
		{ "Category", "Particle Dynamics" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAngularAcceleration_MetaData[] = {
		{ "Category", "Particle Dynamics" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MLinearImpulseVelocity_MetaData[] = {
		{ "Category", "Particle Dynamics" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAngularImpulseVelocity_MetaData[] = {
		{ "Category", "Particle Dynamics" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MAngularAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MLinearImpulseVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MAngularImpulseVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDParticleDynamics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::NewProp_MAcceleration = { "MAcceleration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamics, MAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAcceleration_MetaData), NewProp_MAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::NewProp_MAngularAcceleration = { "MAngularAcceleration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamics, MAngularAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAngularAcceleration_MetaData), NewProp_MAngularAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::NewProp_MLinearImpulseVelocity = { "MLinearImpulseVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamics, MLinearImpulseVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MLinearImpulseVelocity_MetaData), NewProp_MLinearImpulseVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::NewProp_MAngularImpulseVelocity = { "MAngularImpulseVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamics, MAngularImpulseVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAngularImpulseVelocity_MetaData), NewProp_MAngularImpulseVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::NewProp_MAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::NewProp_MAngularAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::NewProp_MLinearImpulseVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::NewProp_MAngularImpulseVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDParticleDynamics",
	Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::PropPointers),
	sizeof(FChaosVDParticleDynamics),
	alignof(FChaosVDParticleDynamics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleDynamics()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamics.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamics.InnerSingleton;
}
// End ScriptStruct FChaosVDParticleDynamics

// Begin ScriptStruct FChaosVDParticleMassProps
static_assert(std::is_polymorphic<FChaosVDParticleMassProps>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDParticleMassProps cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDParticleMassProps;
class UScriptStruct* FChaosVDParticleMassProps::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleMassProps.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDParticleMassProps.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleMassProps, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDParticleMassProps"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleMassProps.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDParticleMassProps>()
{
	return FChaosVDParticleMassProps::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simplified UStruct version of FParticleMassProps.\n * Used to be able to show the values in the editor and allow changes via the Property Editor.\n */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "ToolTip", "Simplified UStruct version of FParticleMassProps.\nUsed to be able to show the values in the editor and allow changes via the Property Editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MCenterOfMass_MetaData[] = {
		{ "Category", "Particle Mass Props" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MRotationOfMass_MetaData[] = {
		{ "Category", "Particle Mass Props" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MI_MetaData[] = {
		{ "Category", "Particle Mass Props" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MInvI_MetaData[] = {
		{ "Category", "Particle Mass Props" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MM_MetaData[] = {
		{ "Category", "Particle Mass Props" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MInvM_MetaData[] = {
		{ "Category", "Particle Mass Props" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MCenterOfMass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MRotationOfMass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MInvI;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MM;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MInvM;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDParticleMassProps>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MCenterOfMass = { "MCenterOfMass", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleMassProps, MCenterOfMass), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MCenterOfMass_MetaData), NewProp_MCenterOfMass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MRotationOfMass = { "MRotationOfMass", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleMassProps, MRotationOfMass), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MRotationOfMass_MetaData), NewProp_MRotationOfMass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MI = { "MI", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleMassProps, MI), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MI_MetaData), NewProp_MI_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MInvI = { "MInvI", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleMassProps, MInvI), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MInvI_MetaData), NewProp_MInvI_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MM = { "MM", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleMassProps, MM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MM_MetaData), NewProp_MM_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MInvM = { "MInvM", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleMassProps, MInvM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MInvM_MetaData), NewProp_MInvM_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MCenterOfMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MRotationOfMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MInvI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewProp_MInvM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDParticleMassProps",
	Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::PropPointers),
	sizeof(FChaosVDParticleMassProps),
	alignof(FChaosVDParticleMassProps),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleMassProps()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleMassProps.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDParticleMassProps.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleMassProps.InnerSingleton;
}
// End ScriptStruct FChaosVDParticleMassProps

// Begin ScriptStruct FChaosVDParticleDynamicMisc
static_assert(std::is_polymorphic<FChaosVDParticleDynamicMisc>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDParticleDynamicMisc cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamicMisc;
class UScriptStruct* FChaosVDParticleDynamicMisc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamicMisc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamicMisc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDParticleDynamicMisc"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamicMisc.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDParticleDynamicMisc>()
{
	return FChaosVDParticleDynamicMisc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simplified UStruct version of FParticleDynamicMisc.\n * Used to be able to show the values in the editor and allow changes via the Property Editor.\n */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "ToolTip", "Simplified UStruct version of FParticleDynamicMisc.\nUsed to be able to show the values in the editor and allow changes via the Property Editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAngularEtherDrag_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MMaxLinearSpeedSq_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MMaxAngularSpeedSq_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MInitialOverlapDepenetrationVelocity_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MSleepThresholdMultiplier_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MCollisionGroup_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MObjectState_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MSleepType_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MCollisionConstraintFlag_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MControlFlags_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "Category", "Particle Dynamic Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MAngularEtherDrag;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MMaxLinearSpeedSq;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MMaxAngularSpeedSq;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MInitialOverlapDepenetrationVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MSleepThresholdMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MCollisionGroup;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_MObjectState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MObjectState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MSleepType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MSleepType;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MCollisionConstraintFlag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MControlFlags;
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDParticleDynamicMisc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MAngularEtherDrag = { "MAngularEtherDrag", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamicMisc, MAngularEtherDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAngularEtherDrag_MetaData), NewProp_MAngularEtherDrag_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MMaxLinearSpeedSq = { "MMaxLinearSpeedSq", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamicMisc, MMaxLinearSpeedSq), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MMaxLinearSpeedSq_MetaData), NewProp_MMaxLinearSpeedSq_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MMaxAngularSpeedSq = { "MMaxAngularSpeedSq", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamicMisc, MMaxAngularSpeedSq), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MMaxAngularSpeedSq_MetaData), NewProp_MMaxAngularSpeedSq_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MInitialOverlapDepenetrationVelocity = { "MInitialOverlapDepenetrationVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamicMisc, MInitialOverlapDepenetrationVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MInitialOverlapDepenetrationVelocity_MetaData), NewProp_MInitialOverlapDepenetrationVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MSleepThresholdMultiplier = { "MSleepThresholdMultiplier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamicMisc, MSleepThresholdMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MSleepThresholdMultiplier_MetaData), NewProp_MSleepThresholdMultiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MCollisionGroup = { "MCollisionGroup", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamicMisc, MCollisionGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MCollisionGroup_MetaData), NewProp_MCollisionGroup_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MObjectState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MObjectState = { "MObjectState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamicMisc, MObjectState), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDObjectStateType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MObjectState_MetaData), NewProp_MObjectState_MetaData) }; // 2352754676
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MSleepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MSleepType = { "MSleepType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamicMisc, MSleepType), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSleepType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MSleepType_MetaData), NewProp_MSleepType_MetaData) }; // 444240007
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MCollisionConstraintFlag = { "MCollisionConstraintFlag", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamicMisc, MCollisionConstraintFlag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MCollisionConstraintFlag_MetaData), NewProp_MCollisionConstraintFlag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MControlFlags = { "MControlFlags", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDynamicMisc, MControlFlags), Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MControlFlags_MetaData), NewProp_MControlFlags_MetaData) }; // 3741098853
void Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((FChaosVDParticleDynamicMisc*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDParticleDynamicMisc), &Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MAngularEtherDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MMaxLinearSpeedSq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MMaxAngularSpeedSq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MInitialOverlapDepenetrationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MSleepThresholdMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MCollisionGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MObjectState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MObjectState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MSleepType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MSleepType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MCollisionConstraintFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_MControlFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewProp_bDisabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDParticleDynamicMisc",
	Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::PropPointers),
	sizeof(FChaosVDParticleDynamicMisc),
	alignof(FChaosVDParticleDynamicMisc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamicMisc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamicMisc.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamicMisc.InnerSingleton;
}
// End ScriptStruct FChaosVDParticleDynamicMisc

// Begin ScriptStruct FChaosVDConnectivityEdge
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDConnectivityEdge;
class UScriptStruct* FChaosVDConnectivityEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDConnectivityEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDConnectivityEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDConnectivityEdge, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDConnectivityEdge"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDConnectivityEdge.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDConnectivityEdge>()
{
	return FChaosVDConnectivityEdge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents the data of a connectivity Edge that CVD can use to reconstruct it during playback */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "ToolTip", "Represents the data of a connectivity Edge that CVD can use to reconstruct it during playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SiblingParticleID_MetaData[] = {
		{ "Category", "ConnectivityEdge" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strain_MetaData[] = {
		{ "Category", "ConnectivityEdge" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SiblingParticleID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDConnectivityEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::NewProp_SiblingParticleID = { "SiblingParticleID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConnectivityEdge, SiblingParticleID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SiblingParticleID_MetaData), NewProp_SiblingParticleID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::NewProp_Strain = { "Strain", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConnectivityEdge, Strain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strain_MetaData), NewProp_Strain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::NewProp_SiblingParticleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::NewProp_Strain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	&NewStructOps,
	"ChaosVDConnectivityEdge",
	Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::PropPointers),
	sizeof(FChaosVDConnectivityEdge),
	alignof(FChaosVDConnectivityEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDConnectivityEdge()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDConnectivityEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDConnectivityEdge.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDConnectivityEdge.InnerSingleton;
}
// End ScriptStruct FChaosVDConnectivityEdge

// Begin ScriptStruct FChaosVDParticleCluster
static_assert(std::is_polymorphic<FChaosVDParticleCluster>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDParticleCluster cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDParticleCluster;
class UScriptStruct* FChaosVDParticleCluster::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleCluster.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDParticleCluster.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleCluster, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDParticleCluster"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleCluster.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDParticleCluster>()
{
	return FChaosVDParticleCluster::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure contained data from a Clustered Particle.\n * Used to be able to show the values in the editor and allow changes via the Property Editor.\n */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "ToolTip", "Structure contained data from a Clustered Particle.\nUsed to be able to show the values in the editor and allow changes via the Property Editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentParticleID_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChildren_MetaData[] = {
		{ "Category", "Particle Cluster | Cluster Id" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildToParent_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGroupIndex_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInternalCluster_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionImpulse_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalStrains_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalStrains_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strain_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectivityEdges_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAnchored_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnbreakable_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsChildToParentLocked_MetaData[] = {
		{ "Category", "Particle Cluster" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentParticleID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildToParent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGroupIndex;
	static void NewProp_bInternalCluster_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInternalCluster;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExternalStrains;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InternalStrains;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectivityEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectivityEdges;
	static void NewProp_bIsAnchored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAnchored;
	static void NewProp_bUnbreakable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnbreakable;
	static void NewProp_bIsChildToParentLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChildToParentLocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDParticleCluster>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ParentParticleID = { "ParentParticleID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleCluster, ParentParticleID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentParticleID_MetaData), NewProp_ParentParticleID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_NumChildren = { "NumChildren", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleCluster, NumChildren), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChildren_MetaData), NewProp_NumChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ChildToParent = { "ChildToParent", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleCluster, ChildToParent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildToParent_MetaData), NewProp_ChildToParent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ClusterGroupIndex = { "ClusterGroupIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleCluster, ClusterGroupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterGroupIndex_MetaData), NewProp_ClusterGroupIndex_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bInternalCluster_SetBit(void* Obj)
{
	((FChaosVDParticleCluster*)Obj)->bInternalCluster = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bInternalCluster = { "bInternalCluster", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDParticleCluster), &Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bInternalCluster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInternalCluster_MetaData), NewProp_bInternalCluster_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_CollisionImpulse = { "CollisionImpulse", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleCluster, CollisionImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionImpulse_MetaData), NewProp_CollisionImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ExternalStrains = { "ExternalStrains", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleCluster, ExternalStrains), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalStrains_MetaData), NewProp_ExternalStrains_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_InternalStrains = { "InternalStrains", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleCluster, InternalStrains), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalStrains_MetaData), NewProp_InternalStrains_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_Strain = { "Strain", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleCluster, Strain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strain_MetaData), NewProp_Strain_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ConnectivityEdges_Inner = { "ConnectivityEdges", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosVDConnectivityEdge, METADATA_PARAMS(0, nullptr) }; // 3189596724
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ConnectivityEdges = { "ConnectivityEdges", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleCluster, ConnectivityEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectivityEdges_MetaData), NewProp_ConnectivityEdges_MetaData) }; // 3189596724
void Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bIsAnchored_SetBit(void* Obj)
{
	((FChaosVDParticleCluster*)Obj)->bIsAnchored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bIsAnchored = { "bIsAnchored", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDParticleCluster), &Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bIsAnchored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAnchored_MetaData), NewProp_bIsAnchored_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bUnbreakable_SetBit(void* Obj)
{
	((FChaosVDParticleCluster*)Obj)->bUnbreakable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bUnbreakable = { "bUnbreakable", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDParticleCluster), &Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bUnbreakable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnbreakable_MetaData), NewProp_bUnbreakable_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bIsChildToParentLocked_SetBit(void* Obj)
{
	((FChaosVDParticleCluster*)Obj)->bIsChildToParentLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bIsChildToParentLocked = { "bIsChildToParentLocked", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDParticleCluster), &Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bIsChildToParentLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsChildToParentLocked_MetaData), NewProp_bIsChildToParentLocked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ParentParticleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_NumChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ChildToParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ClusterGroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bInternalCluster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_CollisionImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ExternalStrains,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_InternalStrains,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_Strain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ConnectivityEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_ConnectivityEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bIsAnchored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bUnbreakable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewProp_bIsChildToParentLocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDParticleCluster",
	Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::PropPointers),
	sizeof(FChaosVDParticleCluster),
	alignof(FChaosVDParticleCluster),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleCluster()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleCluster.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDParticleCluster.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleCluster.InnerSingleton;
}
// End ScriptStruct FChaosVDParticleCluster

// Begin ScriptStruct FChaosVDParticleDataWrapper
static_assert(std::is_polymorphic<FChaosVDParticleDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDParticleDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDParticleDataWrapper;
class UScriptStruct* FChaosVDParticleDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDParticleDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDParticleDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDParticleDataWrapper>()
{
	return FChaosVDParticleDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Simplified UStruct version of FChaosVDParticleDataWrapper.\n * Used to be able to show the values in the editor and allow changes via the Property Editor.\n */" },
		{ "DisplayName", "Particle Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
		{ "ToolTip", "Simplified UStruct version of FChaosVDParticleDataWrapper.\nUsed to be able to show the values in the editor and allow changes via the Property Editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryHash_MetaData[] = {
		{ "Category", "Particle Non Frequent Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Particle Non Frequent Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[] = {
		{ "Category", "Particle Non Frequent Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverID_MetaData[] = {
		{ "Category", "Particle Non Frequent Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Particle Non Frequent Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticlePositionRotation_MetaData[] = {
		{ "Category", "Particle Position Rotation" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleVelocities_MetaData[] = {
		{ "Category", "Particle Particle Velocities" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDynamics_MetaData[] = {
		{ "Category", "Particle Particle Dynamics" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDynamicsMisc_MetaData[] = {
		{ "Category", "Particle Particle Dynamics Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleMassProps_MetaData[] = {
		{ "Category", "Particle Particle Mass Props" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleCluster_MetaData[] = {
		{ "Category", "Particle Cluster Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionDataPerShape_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDParticleDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GeometryHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SolverID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticlePositionRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleVelocities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleDynamics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleDynamicsMisc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleMassProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleCluster;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionDataPerShape_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionDataPerShape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDParticleDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_GeometryHash = { "GeometryHash", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, GeometryHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryHash_MetaData), NewProp_GeometryHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, ParticleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndex_MetaData), NewProp_ParticleIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_SolverID = { "SolverID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, SolverID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverID_MetaData), NewProp_SolverID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, Type), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDParticleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1517127229
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticlePositionRotation = { "ParticlePositionRotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, ParticlePositionRotation), Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticlePositionRotation_MetaData), NewProp_ParticlePositionRotation_MetaData) }; // 29643564
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleVelocities = { "ParticleVelocities", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, ParticleVelocities), Z_Construct_UScriptStruct_FChaosVDParticleVelocities, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleVelocities_MetaData), NewProp_ParticleVelocities_MetaData) }; // 3149559587
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleDynamics = { "ParticleDynamics", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, ParticleDynamics), Z_Construct_UScriptStruct_FChaosVDParticleDynamics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleDynamics_MetaData), NewProp_ParticleDynamics_MetaData) }; // 1787721892
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleDynamicsMisc = { "ParticleDynamicsMisc", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, ParticleDynamicsMisc), Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleDynamicsMisc_MetaData), NewProp_ParticleDynamicsMisc_MetaData) }; // 1836909232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleMassProps = { "ParticleMassProps", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, ParticleMassProps), Z_Construct_UScriptStruct_FChaosVDParticleMassProps, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleMassProps_MetaData), NewProp_ParticleMassProps_MetaData) }; // 67867567
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleCluster = { "ParticleCluster", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, ParticleCluster), Z_Construct_UScriptStruct_FChaosVDParticleCluster, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleCluster_MetaData), NewProp_ParticleCluster_MetaData) }; // 151174897
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_CollisionDataPerShape_Inner = { "CollisionDataPerShape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosVDShapeCollisionData, METADATA_PARAMS(0, nullptr) }; // 797452027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_CollisionDataPerShape = { "CollisionDataPerShape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticleDataWrapper, CollisionDataPerShape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionDataPerShape_MetaData), NewProp_CollisionDataPerShape_MetaData) }; // 797452027
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_GeometryHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_SolverID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticlePositionRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleVelocities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleDynamics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleDynamicsMisc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleMassProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_ParticleCluster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_CollisionDataPerShape_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewProp_CollisionDataPerShape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDParticleDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDParticleDataWrapper),
	alignof(FChaosVDParticleDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticleDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDParticleDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticleDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDParticleDataWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChaosVDParticleType_StaticEnum, TEXT("EChaosVDParticleType"), &Z_Registration_Info_UEnum_EChaosVDParticleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1517127229U) },
		{ EChaosVDSleepType_StaticEnum, TEXT("EChaosVDSleepType"), &Z_Registration_Info_UEnum_EChaosVDSleepType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 444240007U) },
		{ EChaosVDObjectStateType_StaticEnum, TEXT("EChaosVDObjectStateType"), &Z_Registration_Info_UEnum_EChaosVDObjectStateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2352754676U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosVDWrapperDataBase::StaticStruct, Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics::NewStructOps, TEXT("ChaosVDWrapperDataBase"), &Z_Registration_Info_UScriptStruct_ChaosVDWrapperDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDWrapperDataBase), 1318951833U) },
		{ FChaosVDFRigidParticleControlFlags::StaticStruct, Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics::NewStructOps, TEXT("ChaosVDFRigidParticleControlFlags"), &Z_Registration_Info_UScriptStruct_ChaosVDFRigidParticleControlFlags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDFRigidParticleControlFlags), 3741098853U) },
		{ FChaosVDParticlePositionRotation::StaticStruct, Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics::NewStructOps, TEXT("ChaosVDParticlePositionRotation"), &Z_Registration_Info_UScriptStruct_ChaosVDParticlePositionRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDParticlePositionRotation), 29643564U) },
		{ FChaosVDParticleVelocities::StaticStruct, Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics::NewStructOps, TEXT("ChaosVDParticleVelocities"), &Z_Registration_Info_UScriptStruct_ChaosVDParticleVelocities, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDParticleVelocities), 3149559587U) },
		{ FChaosVDParticleDynamics::StaticStruct, Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics::NewStructOps, TEXT("ChaosVDParticleDynamics"), &Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDParticleDynamics), 1787721892U) },
		{ FChaosVDParticleMassProps::StaticStruct, Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics::NewStructOps, TEXT("ChaosVDParticleMassProps"), &Z_Registration_Info_UScriptStruct_ChaosVDParticleMassProps, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDParticleMassProps), 67867567U) },
		{ FChaosVDParticleDynamicMisc::StaticStruct, Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics::NewStructOps, TEXT("ChaosVDParticleDynamicMisc"), &Z_Registration_Info_UScriptStruct_ChaosVDParticleDynamicMisc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDParticleDynamicMisc), 1836909232U) },
		{ FChaosVDConnectivityEdge::StaticStruct, Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics::NewStructOps, TEXT("ChaosVDConnectivityEdge"), &Z_Registration_Info_UScriptStruct_ChaosVDConnectivityEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDConnectivityEdge), 3189596724U) },
		{ FChaosVDParticleCluster::StaticStruct, Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics::NewStructOps, TEXT("ChaosVDParticleCluster"), &Z_Registration_Info_UScriptStruct_ChaosVDParticleCluster, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDParticleCluster), 151174897U) },
		{ FChaosVDParticleDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics::NewStructOps, TEXT("ChaosVDParticleDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDParticleDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDParticleDataWrapper), 1140738622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_249577689(TEXT("/Script/ChaosVDRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
