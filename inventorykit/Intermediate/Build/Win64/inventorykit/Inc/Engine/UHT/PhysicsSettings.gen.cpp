// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettings.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSettings() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosBufferMode();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosSolverTickMode();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosThreadingMode();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsSettings();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsSettings_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESettingsDOF();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESettingsLockedAxis();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBroadphaseSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceName();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsPredictionSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigidBodyErrorCorrection();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicsSettingsCore();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FPhysicalSurfaceName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicalSurfaceName;
class UScriptStruct* FPhysicalSurfaceName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalSurfaceName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicalSurfaceName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalSurfaceName, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PhysicalSurfaceName"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicalSurfaceName.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPhysicalSurfaceName>()
{
	return FPhysicalSurfaceName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that represents the name of physical surfaces.\n */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Structure that represents the name of physical surfaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalSurfaceName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalSurfaceName, Type), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 161619406
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalSurfaceName, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PhysicalSurfaceName",
	Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::PropPointers),
	sizeof(FPhysicalSurfaceName),
	alignof(FPhysicalSurfaceName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceName()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalSurfaceName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicalSurfaceName.InnerSingleton, Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicalSurfaceName.InnerSingleton;
}
// End ScriptStruct FPhysicalSurfaceName

// Begin ScriptStruct FChaosPhysicsSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosPhysicsSettings;
class UScriptStruct* FChaosPhysicsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosPhysicsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosPhysicsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosPhysicsSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ChaosPhysicsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosPhysicsSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChaosPhysicsSettings>()
{
	return FChaosPhysicsSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n  * Settings container for Chaos physics engine settings, accessed in Chaos through a setting provider interface.\n  * See: IChaosSettingsProvider\n  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Settings container for Chaos physics engine settings, accessed in Chaos through a setting provider interface.\nSee: IChaosSettingsProvider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultThreadingModel_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Default threading model to use on module initialisation. Can be switched at runtime using p.Chaos.ThreadingModel */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Default threading model to use on module initialisation. Can be switched at runtime using p.Chaos.ThreadingModel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DedicatedThreadTickMode_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** The framerate/timestep ticking mode when running with a dedicated thread */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "The framerate/timestep ticking mode when running with a dedicated thread" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DedicatedThreadBufferMode_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** The buffering mode to use when running with a dedicated thread */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "The buffering mode to use when running with a dedicated thread" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultThreadingModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultThreadingModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DedicatedThreadTickMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DedicatedThreadTickMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DedicatedThreadBufferMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DedicatedThreadBufferMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosPhysicsSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel = { "DefaultThreadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsSettings, DefaultThreadingModel), Z_Construct_UEnum_Chaos_EChaosThreadingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultThreadingModel_MetaData), NewProp_DefaultThreadingModel_MetaData) }; // 2490559148
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode = { "DedicatedThreadTickMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsSettings, DedicatedThreadTickMode), Z_Construct_UEnum_Chaos_EChaosSolverTickMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DedicatedThreadTickMode_MetaData), NewProp_DedicatedThreadTickMode_MetaData) }; // 3178789538
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode = { "DedicatedThreadBufferMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsSettings, DedicatedThreadBufferMode), Z_Construct_UEnum_Chaos_EChaosBufferMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DedicatedThreadBufferMode_MetaData), NewProp_DedicatedThreadBufferMode_MetaData) }; // 1941288426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DefaultThreadingModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadTickMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewProp_DedicatedThreadBufferMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ChaosPhysicsSettings",
	Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::PropPointers),
	sizeof(FChaosPhysicsSettings),
	alignof(FChaosPhysicsSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosPhysicsSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosPhysicsSettings.InnerSingleton, Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosPhysicsSettings.InnerSingleton;
}
// End ScriptStruct FChaosPhysicsSettings

// Begin Enum ESettingsDOF
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESettingsDOF;
static UEnum* ESettingsDOF_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESettingsDOF.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESettingsDOF.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsDOF, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESettingsDOF"));
	}
	return Z_Registration_Info_UEnum_ESettingsDOF.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESettingsDOF::Type>()
{
	return ESettingsDOF_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESettingsDOF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Full3D.Comment", "/** Allows for full 3D movement and rotation. */" },
		{ "Full3D.Name", "ESettingsDOF::Full3D" },
		{ "Full3D.ToolTip", "Allows for full 3D movement and rotation." },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "XYPlane.Comment", "/** Allows 2D movement along the X-Y plane. */" },
		{ "XYPlane.Name", "ESettingsDOF::XYPlane" },
		{ "XYPlane.ToolTip", "Allows 2D movement along the X-Y plane." },
		{ "XZPlane.Comment", "/** Allows 2D movement along the X-Z plane. */" },
		{ "XZPlane.Name", "ESettingsDOF::XZPlane" },
		{ "XZPlane.ToolTip", "Allows 2D movement along the X-Z plane." },
		{ "YZPlane.Comment", "/** Allows 2D movement along the Y-Z plane. */" },
		{ "YZPlane.Name", "ESettingsDOF::YZPlane" },
		{ "YZPlane.ToolTip", "Allows 2D movement along the Y-Z plane." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESettingsDOF::Full3D", (int64)ESettingsDOF::Full3D },
		{ "ESettingsDOF::YZPlane", (int64)ESettingsDOF::YZPlane },
		{ "ESettingsDOF::XZPlane", (int64)ESettingsDOF::XZPlane },
		{ "ESettingsDOF::XYPlane", (int64)ESettingsDOF::XYPlane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESettingsDOF_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESettingsDOF",
	"ESettingsDOF::Type",
	Z_Construct_UEnum_Engine_ESettingsDOF_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESettingsDOF_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESettingsDOF_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESettingsDOF_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESettingsDOF()
{
	if (!Z_Registration_Info_UEnum_ESettingsDOF.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESettingsDOF.InnerSingleton, Z_Construct_UEnum_Engine_ESettingsDOF_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESettingsDOF.InnerSingleton;
}
// End Enum ESettingsDOF

// Begin ScriptStruct FPhysicsPredictionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsPredictionSettings;
class UScriptStruct* FPhysicsPredictionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsPredictionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsPredictionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsPredictionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PhysicsPredictionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsPredictionSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPhysicsPredictionSettings>()
{
	return FPhysicsPredictionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Physics Prediction Settings */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Physics Prediction Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsPrediction_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Enable networked physics prediction (experimental)\n\x09* Note: If an AActor::PhysicsReplicationMode is set to use Resimulation this will allow physics to cache history which is required by resimulation replication.\n\x09* Note: This can also affect how physics is solved even when not using resimulation. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Enable networked physics prediction (experimental)\nNote: If an AActor::PhysicsReplicationMode is set to use Resimulation this will allow physics to cache history which is required by resimulation replication.\nNote: This can also affect how physics is solved even when not using resimulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsResimulation_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Forces the PlayerController to sync inputs as used in Physics Prediction.\n\x09* Only enable this if actively using a custom solution that needs this enabled for resimulation.\n\x09* This is automatically enabled when using the recommended NetworkPhysicsComponent on a pawn to handle Rewind / Resimulation. */" },
		{ "editcondition", "bEnablePhysicsPrediction" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Forces the PlayerController to sync inputs as used in Physics Prediction.\nOnly enable this if actively using a custom solution that needs this enabled for resimulation.\nThis is automatically enabled when using the recommended NetworkPhysicsComponent on a pawn to handle Rewind / Resimulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResimulationErrorThreshold_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Distance in centimeters before a state discrepancy triggers a resimulation */" },
		{ "editcondition", "bEnablePhysicsPrediction" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Distance in centimeters before a state discrepancy triggers a resimulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSupportedLatencyPrediction_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Amount of RTT (Round Trip Time) latency for the prediction to support in milliseconds. */" },
		{ "editcondition", "bEnablePhysicsPrediction" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Amount of RTT (Round Trip Time) latency for the prediction to support in milliseconds." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnablePhysicsPrediction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsPrediction;
	static void NewProp_bEnablePhysicsResimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsResimulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResimulationErrorThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSupportedLatencyPrediction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsPredictionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_bEnablePhysicsPrediction_SetBit(void* Obj)
{
	((FPhysicsPredictionSettings*)Obj)->bEnablePhysicsPrediction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_bEnablePhysicsPrediction = { "bEnablePhysicsPrediction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPhysicsPredictionSettings), &Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_bEnablePhysicsPrediction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePhysicsPrediction_MetaData), NewProp_bEnablePhysicsPrediction_MetaData) };
void Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_bEnablePhysicsResimulation_SetBit(void* Obj)
{
	((FPhysicsPredictionSettings*)Obj)->bEnablePhysicsResimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_bEnablePhysicsResimulation = { "bEnablePhysicsResimulation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPhysicsPredictionSettings), &Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_bEnablePhysicsResimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePhysicsResimulation_MetaData), NewProp_bEnablePhysicsResimulation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_ResimulationErrorThreshold = { "ResimulationErrorThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsPredictionSettings, ResimulationErrorThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResimulationErrorThreshold_MetaData), NewProp_ResimulationErrorThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_MaxSupportedLatencyPrediction = { "MaxSupportedLatencyPrediction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsPredictionSettings, MaxSupportedLatencyPrediction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSupportedLatencyPrediction_MetaData), NewProp_MaxSupportedLatencyPrediction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_bEnablePhysicsPrediction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_bEnablePhysicsResimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_ResimulationErrorThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewProp_MaxSupportedLatencyPrediction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PhysicsPredictionSettings",
	Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::PropPointers),
	sizeof(FPhysicsPredictionSettings),
	alignof(FPhysicsPredictionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicsPredictionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsPredictionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsPredictionSettings.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicsPredictionSettings.InnerSingleton;
}
// End ScriptStruct FPhysicsPredictionSettings

// Begin Enum ESettingsLockedAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESettingsLockedAxis;
static UEnum* ESettingsLockedAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESettingsLockedAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESettingsLockedAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsLockedAxis, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESettingsLockedAxis"));
	}
	return Z_Registration_Info_UEnum_ESettingsLockedAxis.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESettingsLockedAxis::Type>()
{
	return ESettingsLockedAxis_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESettingsLockedAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Comment", "/** Used for backwards compatibility. Indicates that we've updated into the new struct. */" },
		{ "Invalid.Name", "ESettingsLockedAxis::Invalid" },
		{ "Invalid.ToolTip", "Used for backwards compatibility. Indicates that we've updated into the new struct." },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "None.Comment", "/** No axis is locked. */" },
		{ "None.Name", "ESettingsLockedAxis::None" },
		{ "None.ToolTip", "No axis is locked." },
		{ "X.Comment", "/** Lock movement along the x-axis. */" },
		{ "X.Name", "ESettingsLockedAxis::X" },
		{ "X.ToolTip", "Lock movement along the x-axis." },
		{ "Y.Comment", "/** Lock movement along the y-axis. */" },
		{ "Y.Name", "ESettingsLockedAxis::Y" },
		{ "Y.ToolTip", "Lock movement along the y-axis." },
		{ "Z.Comment", "/** Lock movement along the z-axis. */" },
		{ "Z.Name", "ESettingsLockedAxis::Z" },
		{ "Z.ToolTip", "Lock movement along the z-axis." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESettingsLockedAxis::None", (int64)ESettingsLockedAxis::None },
		{ "ESettingsLockedAxis::X", (int64)ESettingsLockedAxis::X },
		{ "ESettingsLockedAxis::Y", (int64)ESettingsLockedAxis::Y },
		{ "ESettingsLockedAxis::Z", (int64)ESettingsLockedAxis::Z },
		{ "ESettingsLockedAxis::Invalid", (int64)ESettingsLockedAxis::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESettingsLockedAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESettingsLockedAxis",
	"ESettingsLockedAxis::Type",
	Z_Construct_UEnum_Engine_ESettingsLockedAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESettingsLockedAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESettingsLockedAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESettingsLockedAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESettingsLockedAxis()
{
	if (!Z_Registration_Info_UEnum_ESettingsLockedAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESettingsLockedAxis.InnerSingleton, Z_Construct_UEnum_Engine_ESettingsLockedAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESettingsLockedAxis.InnerSingleton;
}
// End Enum ESettingsLockedAxis

// Begin Class UPhysicsSettings Function GetPhysicsHistoryCount
struct Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics
{
	struct PhysicsSettings_eventGetPhysicsHistoryCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsSettings_eventGetPhysicsHistoryCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSettings, nullptr, "GetPhysicsHistoryCount", nullptr, nullptr, Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::PhysicsSettings_eventGetPhysicsHistoryCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::PhysicsSettings_eventGetPhysicsHistoryCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsSettings::execGetPhysicsHistoryCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPhysicsHistoryCount();
	P_NATIVE_END;
}
// End Class UPhysicsSettings Function GetPhysicsHistoryCount

// Begin Class UPhysicsSettings
void UPhysicsSettings::StaticRegisterNativesUPhysicsSettings()
{
	UClass* Class = UPhysicsSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPhysicsHistoryCount", &UPhysicsSettings::execGetPhysicsHistoryCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsSettings);
UClass* Z_Construct_UClass_UPhysicsSettings_NoRegister()
{
	return UPhysicsSettings::StaticClass();
}
struct Z_Construct_UClass_UPhysicsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default physics settings.\n */" },
		{ "DisplayName", "Physics" },
		{ "IncludePath", "PhysicsEngine/PhysicsSettings.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Default physics settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsPrediction_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Settings for Networked Physics Prediction, experimental. */" },
		{ "DisplayName", "Physics Prediction (Experimental)" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Settings for Networked Physics Prediction, experimental." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicErrorCorrection_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Error correction data for replicating simulated physics (rigid bodies) */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Error correction data for replicating simulated physics (rigid bodies)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDegreesOfFreedom_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Useful for constraining all objects in the world, for example if you are making a 2D game using 3D environments.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Useful for constraining all objects in the world, for example if you are making a 2D game using 3D environments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressFaceRemapTable_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09*  If true, the internal physx face to UE face mapping will not be generated. This is a memory optimization available if you do not rely on face indices returned by scene queries. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, the internal physx face to UE face mapping will not be generated. This is a memory optimization available if you do not rely on face indices returned by scene queries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportUVFromHitResults_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** If true, store extra information to allow FindCollisionUV to derive UV info from a line trace hit result, using the FindCollisionUV utility */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Support UV From Hit Results" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, store extra information to allow FindCollisionUV to derive UV info from a line trace hit result, using the FindCollisionUV utility" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableActiveActors_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09* If true, physx will not update unreal with any bodies that have moved during the simulation. This should only be used if you have no physx simulation or you are manually updating the unreal data via polling physx.  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, physx will not update unreal with any bodies that have moved during the simulation. This should only be used if you have no physx simulation or you are manually updating the unreal data via polling physx." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableKinematicStaticPairs_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Whether to disable generating KS pairs, enabling this makes switching between dynamic and static slower for actors - but speeds up contact generation by early rejecting these pairs*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to disable generating KS pairs, enabling this makes switching between dynamic and static slower for actors - but speeds up contact generation by early rejecting these pairs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableKinematicKinematicPairs_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Whether to disable generating KK pairs, enabling this speeds up contact generation, however it is required when using APEX destruction. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to disable generating KK pairs, enabling this speeds up contact generation, however it is required when using APEX destruction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCCD_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09*  If true CCD will be ignored. This is an optimization when CCD is never used which removes the need for physx to check it internally. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true CCD will be ignored. This is an optimization when CCD is never used which removes the need for physx to check it internally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimPhysicsMinDeltaTime_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Min Delta Time below which anim dynamics and rigidbody nodes will not simulate. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Min Delta Time below which anim dynamics and rigidbody nodes will not simulate." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateAnimPhysicsAfterReset_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Whether to simulate anim physics nodes in the tick where they're reset. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to simulate anim physics nodes in the tick where they're reset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPhysicsDeltaTime_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "0.0001" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Min Physics Delta Time; the simulation will not step if the delta time is below this value */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Min Physics Delta Time; the simulation will not step if the delta time is below this value" },
		{ "UIMax", "0.0001" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPhysicsDeltaTime_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0013" },
		{ "Comment", "/** Max Physics Delta Time to be clamped. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max Physics Delta Time to be clamped." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0013" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubstepping_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** Whether to substep the physics simulation. This feature is still experimental. Certain functionality might not work correctly*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to substep the physics simulation. This feature is still experimental. Certain functionality might not work correctly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubsteppingAsync_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** Whether to substep the async physics simulation. This feature is still experimental. Certain functionality might not work correctly*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to substep the async physics simulation. This feature is still experimental. Certain functionality might not work correctly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTickPhysicsAsync_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** Whether to tick physics simulation on an async thread. This feature is still experimental. Certain functionality might not work correctly*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to tick physics simulation on an async thread. This feature is still experimental. Certain functionality might not work correctly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncFixedTimeStepSize_MetaData[] = {
		{ "Category", "Framerate" },
		{ "Comment", "/** If using async, the time step size to tick at. This feature is still experimental. Certain functionality might not work correctly*/" },
		{ "editcondition", "bTickPhysicsAsync" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If using async, the time step size to tick at. This feature is still experimental. Certain functionality might not work correctly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSubstepDeltaTime_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0013" },
		{ "Comment", "/** Max delta time (in seconds) for an individual simulation substep. */" },
		{ "editcondition", "bSubStepping" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max delta time (in seconds) for an individual simulation substep." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0013" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSubsteps_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Max number of substeps for physics simulation. */" },
		{ "editcondition", "bSubstepping" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max number of substeps for physics simulation." },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncSceneSmoothingFactor_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Physics delta time smoothing factor for sync scene. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Physics delta time smoothing factor for sync scene." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialAverageFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0013" },
		{ "Comment", "/** Physics delta time initial average. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Physics delta time initial average." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0013" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysXTreeRebuildRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The number of frames it takes to rebuild the PhysX scene query AABB tree. The bigger the number, the smaller fetchResults takes per frame, but the more the tree deteriorates until a new tree is built */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "The number of frames it takes to rebuild the PhysX scene query AABB tree. The bigger the number, the smaller fetchResults takes per frame, but the more the tree deteriorates until a new tree is built" },
		{ "UIMin", "4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurfaces_MetaData[] = {
		{ "Category", "PhysicalSurfaces" },
		{ "Comment", "// PhysicalMaterial Surface Types\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "PhysicalMaterial Surface Types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBroadphaseSettings_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "Comment", "/** If we want to Enable MPB or not globally. This is then overridden by project settings if not enabled. **/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If we want to Enable MPB or not globally. This is then overridden by project settings if not enabled. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDeltaVelocityForHitEvents_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Minimum velocity delta required on a collinding object for Chaos to send a hit event */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Minimum velocity delta required on a collinding object for Chaos to send a hit event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaosSettings_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Chaos physics engine settings */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Chaos physics engine settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsPrediction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicErrorCorrection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockedAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultDegreesOfFreedom;
	static void NewProp_bSuppressFaceRemapTable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressFaceRemapTable;
	static void NewProp_bSupportUVFromHitResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportUVFromHitResults;
	static void NewProp_bDisableActiveActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableActiveActors;
	static void NewProp_bDisableKinematicStaticPairs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableKinematicStaticPairs;
	static void NewProp_bDisableKinematicKinematicPairs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableKinematicKinematicPairs;
	static void NewProp_bDisableCCD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCCD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPhysicsMinDeltaTime;
	static void NewProp_bSimulateAnimPhysicsAfterReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateAnimPhysicsAfterReset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPhysicsDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPhysicsDeltaTime;
	static void NewProp_bSubstepping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubstepping;
	static void NewProp_bSubsteppingAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubsteppingAsync;
	static void NewProp_bTickPhysicsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickPhysicsAsync;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AsyncFixedTimeStepSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSubstepDeltaTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSubsteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SyncSceneSmoothingFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialAverageFrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PhysXTreeRebuildRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalSurfaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalSurfaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBroadphaseSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDeltaVelocityForHitEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChaosSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsSettings_GetPhysicsHistoryCount, "GetPhysicsHistoryCount" }, // 2128230118
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicsPrediction = { "PhysicsPrediction", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, PhysicsPrediction), Z_Construct_UScriptStruct_FPhysicsPredictionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsPrediction_MetaData), NewProp_PhysicsPrediction_MetaData) }; // 2130358
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection = { "PhysicErrorCorrection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, PhysicErrorCorrection), Z_Construct_UScriptStruct_FRigidBodyErrorCorrection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicErrorCorrection_MetaData), NewProp_PhysicErrorCorrection_MetaData) }; // 3692834603
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis = { "LockedAxis", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, LockedAxis_DEPRECATED), Z_Construct_UEnum_Engine_ESettingsLockedAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedAxis_MetaData), NewProp_LockedAxis_MetaData) }; // 3228237849
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom = { "DefaultDegreesOfFreedom", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, DefaultDegreesOfFreedom), Z_Construct_UEnum_Engine_ESettingsDOF, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDegreesOfFreedom_MetaData), NewProp_DefaultDegreesOfFreedom_MetaData) }; // 729754677
void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_SetBit(void* Obj)
{
	((UPhysicsSettings*)Obj)->bSuppressFaceRemapTable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable = { "bSuppressFaceRemapTable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressFaceRemapTable_MetaData), NewProp_bSuppressFaceRemapTable_MetaData) };
void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_SetBit(void* Obj)
{
	((UPhysicsSettings*)Obj)->bSupportUVFromHitResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults = { "bSupportUVFromHitResults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportUVFromHitResults_MetaData), NewProp_bSupportUVFromHitResults_MetaData) };
void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_SetBit(void* Obj)
{
	((UPhysicsSettings*)Obj)->bDisableActiveActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors = { "bDisableActiveActors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableActiveActors_MetaData), NewProp_bDisableActiveActors_MetaData) };
void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_SetBit(void* Obj)
{
	((UPhysicsSettings*)Obj)->bDisableKinematicStaticPairs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs = { "bDisableKinematicStaticPairs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableKinematicStaticPairs_MetaData), NewProp_bDisableKinematicStaticPairs_MetaData) };
void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_SetBit(void* Obj)
{
	((UPhysicsSettings*)Obj)->bDisableKinematicKinematicPairs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs = { "bDisableKinematicKinematicPairs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableKinematicKinematicPairs_MetaData), NewProp_bDisableKinematicKinematicPairs_MetaData) };
void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_SetBit(void* Obj)
{
	((UPhysicsSettings*)Obj)->bDisableCCD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD = { "bDisableCCD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableCCD_MetaData), NewProp_bDisableCCD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AnimPhysicsMinDeltaTime = { "AnimPhysicsMinDeltaTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, AnimPhysicsMinDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimPhysicsMinDeltaTime_MetaData), NewProp_AnimPhysicsMinDeltaTime_MetaData) };
void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset_SetBit(void* Obj)
{
	((UPhysicsSettings*)Obj)->bSimulateAnimPhysicsAfterReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset = { "bSimulateAnimPhysicsAfterReset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulateAnimPhysicsAfterReset_MetaData), NewProp_bSimulateAnimPhysicsAfterReset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinPhysicsDeltaTime = { "MinPhysicsDeltaTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, MinPhysicsDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPhysicsDeltaTime_MetaData), NewProp_MinPhysicsDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime = { "MaxPhysicsDeltaTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, MaxPhysicsDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPhysicsDeltaTime_MetaData), NewProp_MaxPhysicsDeltaTime_MetaData) };
void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_SetBit(void* Obj)
{
	((UPhysicsSettings*)Obj)->bSubstepping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping = { "bSubstepping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubstepping_MetaData), NewProp_bSubstepping_MetaData) };
void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_SetBit(void* Obj)
{
	((UPhysicsSettings*)Obj)->bSubsteppingAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync = { "bSubsteppingAsync", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubsteppingAsync_MetaData), NewProp_bSubsteppingAsync_MetaData) };
void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bTickPhysicsAsync_SetBit(void* Obj)
{
	((UPhysicsSettings*)Obj)->bTickPhysicsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bTickPhysicsAsync = { "bTickPhysicsAsync", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bTickPhysicsAsync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTickPhysicsAsync_MetaData), NewProp_bTickPhysicsAsync_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AsyncFixedTimeStepSize = { "AsyncFixedTimeStepSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, AsyncFixedTimeStepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncFixedTimeStepSize_MetaData), NewProp_AsyncFixedTimeStepSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime = { "MaxSubstepDeltaTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, MaxSubstepDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSubstepDeltaTime_MetaData), NewProp_MaxSubstepDeltaTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps = { "MaxSubsteps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, MaxSubsteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSubsteps_MetaData), NewProp_MaxSubsteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor = { "SyncSceneSmoothingFactor", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, SyncSceneSmoothingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncSceneSmoothingFactor_MetaData), NewProp_SyncSceneSmoothingFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate = { "InitialAverageFrameRate", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, InitialAverageFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialAverageFrameRate_MetaData), NewProp_InitialAverageFrameRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate = { "PhysXTreeRebuildRate", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, PhysXTreeRebuildRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysXTreeRebuildRate_MetaData), NewProp_PhysXTreeRebuildRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_Inner = { "PhysicalSurfaces", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhysicalSurfaceName, METADATA_PARAMS(0, nullptr) }; // 1219220887
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces = { "PhysicalSurfaces", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, PhysicalSurfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalSurfaces_MetaData), NewProp_PhysicalSurfaces_MetaData) }; // 1219220887
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings = { "DefaultBroadphaseSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, DefaultBroadphaseSettings), Z_Construct_UScriptStruct_FBroadphaseSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBroadphaseSettings_MetaData), NewProp_DefaultBroadphaseSettings_MetaData) }; // 4099812613
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinDeltaVelocityForHitEvents = { "MinDeltaVelocityForHitEvents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, MinDeltaVelocityForHitEvents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDeltaVelocityForHitEvents_MetaData), NewProp_MinDeltaVelocityForHitEvents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ChaosSettings = { "ChaosSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSettings, ChaosSettings), Z_Construct_UScriptStruct_FChaosPhysicsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaosSettings_MetaData), NewProp_ChaosSettings_MetaData) }; // 2012818398
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicsPrediction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AnimPhysicsMinDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateAnimPhysicsAfterReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinPhysicsDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bTickPhysicsAsync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AsyncFixedTimeStepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinDeltaVelocityForHitEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ChaosSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicsSettingsCore,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsSettings_Statics::ClassParams = {
	&UPhysicsSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPhysicsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsSettings()
{
	if (!Z_Registration_Info_UClass_UPhysicsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsSettings.OuterSingleton, Z_Construct_UClass_UPhysicsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicsSettings>()
{
	return UPhysicsSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsSettings);
UPhysicsSettings::~UPhysicsSettings() {}
// End Class UPhysicsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESettingsDOF_StaticEnum, TEXT("ESettingsDOF"), &Z_Registration_Info_UEnum_ESettingsDOF, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 729754677U) },
		{ ESettingsLockedAxis_StaticEnum, TEXT("ESettingsLockedAxis"), &Z_Registration_Info_UEnum_ESettingsLockedAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3228237849U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhysicalSurfaceName::StaticStruct, Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewStructOps, TEXT("PhysicalSurfaceName"), &Z_Registration_Info_UScriptStruct_PhysicalSurfaceName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicalSurfaceName), 1219220887U) },
		{ FChaosPhysicsSettings::StaticStruct, Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics::NewStructOps, TEXT("ChaosPhysicsSettings"), &Z_Registration_Info_UScriptStruct_ChaosPhysicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosPhysicsSettings), 2012818398U) },
		{ FPhysicsPredictionSettings::StaticStruct, Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics::NewStructOps, TEXT("PhysicsPredictionSettings"), &Z_Registration_Info_UScriptStruct_PhysicsPredictionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsPredictionSettings), 2130358U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsSettings, UPhysicsSettings::StaticClass, TEXT("UPhysicsSettings"), &Z_Registration_Info_UClass_UPhysicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsSettings), 3055293188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_1362238285(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
