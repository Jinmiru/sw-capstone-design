// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionSource() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionAccumulateMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_JumpForce();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_RadialForce();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceStatus();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ERootMotionAccumulateMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionAccumulateMode;
static UEnum* ERootMotionAccumulateMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERootMotionAccumulateMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERootMotionAccumulateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionAccumulateMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionAccumulateMode"));
	}
	return Z_Registration_Info_UEnum_ERootMotionAccumulateMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERootMotionAccumulateMode>()
{
	return ERootMotionAccumulateMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Additive.Comment", "// Gets added on top of existing velocity\n" },
		{ "Additive.Name", "ERootMotionAccumulateMode::Additive" },
		{ "Additive.ToolTip", "Gets added on top of existing velocity" },
		{ "Comment", "/** \n * Enumeration for RootMotionSource accumulation mode\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "Override.Comment", "// Sets velocity to this value directly\n" },
		{ "Override.Name", "ERootMotionAccumulateMode::Override" },
		{ "Override.ToolTip", "Sets velocity to this value directly" },
		{ "ToolTip", "Enumeration for RootMotionSource accumulation mode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERootMotionAccumulateMode::Override", (int64)ERootMotionAccumulateMode::Override },
		{ "ERootMotionAccumulateMode::Additive", (int64)ERootMotionAccumulateMode::Additive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERootMotionAccumulateMode",
	"ERootMotionAccumulateMode",
	Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERootMotionAccumulateMode()
{
	if (!Z_Registration_Info_UEnum_ERootMotionAccumulateMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionAccumulateMode.InnerSingleton, Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERootMotionAccumulateMode.InnerSingleton;
}
// End Enum ERootMotionAccumulateMode

// Begin Enum ERootMotionSourceStatusFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionSourceStatusFlags;
static UEnum* ERootMotionSourceStatusFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERootMotionSourceStatusFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERootMotionSourceStatusFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionSourceStatusFlags"));
	}
	return Z_Registration_Info_UEnum_ERootMotionSourceStatusFlags.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERootMotionSourceStatusFlags>()
{
	return ERootMotionSourceStatusFlags_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** \n * Enumeration for RootMotionSource status flags\n */" },
		{ "Finished.Comment", "// Source has timed out or otherwise reached a state where it is considered \"done\"\n" },
		{ "Finished.Name", "ERootMotionSourceStatusFlags::Finished" },
		{ "Finished.ToolTip", "Source has timed out or otherwise reached a state where it is considered \"done\"" },
		{ "MarkedForRemoval.Comment", "// Source has been queued for removal, will be removed next PrepareRootMotion() by the SourceGroup\n" },
		{ "MarkedForRemoval.Name", "ERootMotionSourceStatusFlags::MarkedForRemoval" },
		{ "MarkedForRemoval.ToolTip", "Source has been queued for removal, will be removed next PrepareRootMotion() by the SourceGroup" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "Prepared.Comment", "// Source has been Prepared and can contribute to root motion \n" },
		{ "Prepared.Name", "ERootMotionSourceStatusFlags::Prepared" },
		{ "Prepared.ToolTip", "Source has been Prepared and can contribute to root motion" },
		{ "ToolTip", "Enumeration for RootMotionSource status flags" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERootMotionSourceStatusFlags::Prepared", (int64)ERootMotionSourceStatusFlags::Prepared },
		{ "ERootMotionSourceStatusFlags::Finished", (int64)ERootMotionSourceStatusFlags::Finished },
		{ "ERootMotionSourceStatusFlags::MarkedForRemoval", (int64)ERootMotionSourceStatusFlags::MarkedForRemoval },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERootMotionSourceStatusFlags",
	"ERootMotionSourceStatusFlags",
	Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags()
{
	if (!Z_Registration_Info_UEnum_ERootMotionSourceStatusFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionSourceStatusFlags.InnerSingleton, Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERootMotionSourceStatusFlags.InnerSingleton;
}
// End Enum ERootMotionSourceStatusFlags

// Begin Enum ERootMotionSourceSettingsFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionSourceSettingsFlags;
static UEnum* ERootMotionSourceSettingsFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERootMotionSourceSettingsFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERootMotionSourceSettingsFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionSourceSettingsFlags"));
	}
	return Z_Registration_Info_UEnum_ERootMotionSourceSettingsFlags.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERootMotionSourceSettingsFlags>()
{
	return ERootMotionSourceSettingsFlags_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** \n * Enumeration for RootMotionSource settings\n */" },
		{ "DisablePartialEndTick.Comment", "// If Duration of Source would end partway through the last tick it is active,\n// do not reduce SimulationTime. Disabling this is useful for sources that\n// are more about providing velocity (like jumps), vs. sources that need\n// the precision of partial ticks for say ending up at an exact location (MoveTo)\n" },
		{ "DisablePartialEndTick.Name", "ERootMotionSourceSettingsFlags::DisablePartialEndTick" },
		{ "DisablePartialEndTick.ToolTip", "If Duration of Source would end partway through the last tick it is active,\ndo not reduce SimulationTime. Disabling this is useful for sources that\nare more about providing velocity (like jumps), vs. sources that need\nthe precision of partial ticks for say ending up at an exact location (MoveTo)" },
		{ "IgnoreZAccumulate.Comment", "// Whether to ignore impact to Z when accumulating output to Velocity\n// Setting this flag on override sources provides the same behavior as\n// animation root motion\n" },
		{ "IgnoreZAccumulate.Name", "ERootMotionSourceSettingsFlags::IgnoreZAccumulate" },
		{ "IgnoreZAccumulate.ToolTip", "Whether to ignore impact to Z when accumulating output to Velocity\nSetting this flag on override sources provides the same behavior as\nanimation root motion" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Enumeration for RootMotionSource settings" },
		{ "UseSensitiveLiftoffCheck.Comment", "// Source will switch character to Falling mode with any \"Z up\" velocity added.\n// Use this for jump-like root motion. If not enabled, uses default jump impulse\n// detection (which keeps you stuck on ground in Walking fairly strongly)\n" },
		{ "UseSensitiveLiftoffCheck.Name", "ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck" },
		{ "UseSensitiveLiftoffCheck.ToolTip", "Source will switch character to Falling mode with any \"Z up\" velocity added.\nUse this for jump-like root motion. If not enabled, uses default jump impulse\ndetection (which keeps you stuck on ground in Walking fairly strongly)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck", (int64)ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck },
		{ "ERootMotionSourceSettingsFlags::DisablePartialEndTick", (int64)ERootMotionSourceSettingsFlags::DisablePartialEndTick },
		{ "ERootMotionSourceSettingsFlags::IgnoreZAccumulate", (int64)ERootMotionSourceSettingsFlags::IgnoreZAccumulate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERootMotionSourceSettingsFlags",
	"ERootMotionSourceSettingsFlags",
	Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags()
{
	if (!Z_Registration_Info_UEnum_ERootMotionSourceSettingsFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionSourceSettingsFlags.InnerSingleton, Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERootMotionSourceSettingsFlags.InnerSingleton;
}
// End Enum ERootMotionSourceSettingsFlags

// Begin ScriptStruct FRootMotionSourceStatus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSourceStatus;
class UScriptStruct* FRootMotionSourceStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSourceStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSourceStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceStatus, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSourceStatus"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSourceStatus.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSourceStatus>()
{
	return FRootMotionSourceStatus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Structure for RootMotionSource status flags \n * (used for convenience instead of having to manually manipulate flag bitfields)\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Structure for RootMotionSource status flags\n(used for convenience instead of having to manually manipulate flag bitfields)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSourceStatus, Flags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RootMotionSourceStatus",
	Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::PropPointers),
	sizeof(FRootMotionSourceStatus),
	alignof(FRootMotionSourceStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceStatus()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSourceStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSourceStatus.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSourceStatus.InnerSingleton;
}
// End ScriptStruct FRootMotionSourceStatus

// Begin ScriptStruct FRootMotionSourceSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSourceSettings;
class UScriptStruct* FRootMotionSourceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSourceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSourceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSourceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSourceSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSourceSettings>()
{
	return FRootMotionSourceSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Structure for RootMotionSource option flags \n * (used for convenience instead of having to manually manipulate flag bitfields)\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Structure for RootMotionSource option flags\n(used for convenience instead of having to manually manipulate flag bitfields)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSourceSettings, Flags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RootMotionSourceSettings",
	Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::PropPointers),
	sizeof(FRootMotionSourceSettings),
	alignof(FRootMotionSourceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSourceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSourceSettings.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSourceSettings.InnerSingleton;
}
// End ScriptStruct FRootMotionSourceSettings

// Begin Enum ERootMotionFinishVelocityMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionFinishVelocityMode;
static UEnum* ERootMotionFinishVelocityMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERootMotionFinishVelocityMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERootMotionFinishVelocityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionFinishVelocityMode"));
	}
	return Z_Registration_Info_UEnum_ERootMotionFinishVelocityMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERootMotionFinishVelocityMode>()
{
	return ERootMotionFinishVelocityMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClampVelocity.Comment", "// Clamp velocity magnitude to the specified value. Note that it will not clamp Z if negative (falling). it will clamp Z positive though. \n" },
		{ "ClampVelocity.Name", "ERootMotionFinishVelocityMode::ClampVelocity" },
		{ "ClampVelocity.ToolTip", "Clamp velocity magnitude to the specified value. Note that it will not clamp Z if negative (falling). it will clamp Z positive though." },
		{ "MaintainLastRootMotionVelocity.Comment", "// Maintain the last velocity root motion gave to the character\n" },
		{ "MaintainLastRootMotionVelocity.Name", "ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity" },
		{ "MaintainLastRootMotionVelocity.ToolTip", "Maintain the last velocity root motion gave to the character" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "SetVelocity.Comment", "// Set Velocity to the specified value (for example, 0,0,0 to stop the character)\n" },
		{ "SetVelocity.Name", "ERootMotionFinishVelocityMode::SetVelocity" },
		{ "SetVelocity.ToolTip", "Set Velocity to the specified value (for example, 0,0,0 to stop the character)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity", (int64)ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity },
		{ "ERootMotionFinishVelocityMode::SetVelocity", (int64)ERootMotionFinishVelocityMode::SetVelocity },
		{ "ERootMotionFinishVelocityMode::ClampVelocity", (int64)ERootMotionFinishVelocityMode::ClampVelocity },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERootMotionFinishVelocityMode",
	"ERootMotionFinishVelocityMode",
	Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode()
{
	if (!Z_Registration_Info_UEnum_ERootMotionFinishVelocityMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionFinishVelocityMode.InnerSingleton, Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERootMotionFinishVelocityMode.InnerSingleton;
}
// End Enum ERootMotionFinishVelocityMode

// Begin ScriptStruct FRootMotionFinishVelocitySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionFinishVelocitySettings;
class UScriptStruct* FRootMotionFinishVelocitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionFinishVelocitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionFinishVelocitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionFinishVelocitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionFinishVelocitySettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionFinishVelocitySettings>()
{
	return FRootMotionFinishVelocitySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Struct for RootMotion Finish Velocity options.\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Struct for RootMotion Finish Velocity options." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Comment", "// Mode, see ERootMotionFinishVelocityMode\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Mode, see ERootMotionFinishVelocityMode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetVelocity_MetaData[] = {
		{ "Comment", "// Set Velocity if Mode == SetVelocity\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Set Velocity if Mode == SetVelocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampVelocity_MetaData[] = {
		{ "Comment", "// Clamp Velocity if Move == ClampVelocity\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Clamp Velocity if Move == ClampVelocity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionFinishVelocitySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionFinishVelocitySettings, Mode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 754916493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_SetVelocity = { "SetVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionFinishVelocitySettings, SetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetVelocity_MetaData), NewProp_SetVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_ClampVelocity = { "ClampVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionFinishVelocitySettings, ClampVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampVelocity_MetaData), NewProp_ClampVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_SetVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_ClampVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RootMotionFinishVelocitySettings",
	Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::PropPointers),
	sizeof(FRootMotionFinishVelocitySettings),
	alignof(FRootMotionFinishVelocitySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionFinishVelocitySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionFinishVelocitySettings.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionFinishVelocitySettings.InnerSingleton;
}
// End ScriptStruct FRootMotionFinishVelocitySettings

// Begin ScriptStruct FRootMotionSource
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSource;
class UScriptStruct* FRootMotionSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource>()
{
	return FRootMotionSource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n*\x09Generalized source of Root Motion to a CharacterMovementComponent.\n*\x09\n*\x09Has priorities and different accumulation modes (override, additive, set, ignore).\n*\n*\x09RootMotionSources are accumulated from highest priority to lowest, once all values\n*\x09""are \"finalized\" (meaning no more accumulation to those values), root motion accumulation\n*\x09is finished. Having all of translation and rotation in a transform being overridden during\n*\x09root motion accumulation means that CharacterMovementComponent Phys*() functions no longer\n*\x09need to CalcVelocity() since it'll just get overridden anyway.\n*\n*\x09Some example source possibilities:\n*\x09\x09""Full Animation Root Motion (matching only form of root motion we've supported historically):\n*\x09\x09\x09- Overrides all translation axes or rotation or both\n*\x09\x09\x09- Very High priority so it gets applied first and since it is override no other\n*\x09\x09\x09  RootMotionSources have an influence that are lower priority \n*\x09\x09\x09- Scale on translation and/or rotation is set to 1 to match animation 1 for 1\n*\x09\x09\x09- Provides local space transform (character-orientation relative)\n*\n*\x09\x09\x09- End result: Same as before - overrides velocity/rotation to values in AnimMontage\n*\x09\x09\x09- But can now scale individual translation axes if desired, or instead of override\n*\x09\x09\x09  can use \"set\" to allow other additive sources of root motion to be applied on top\n*\x09\x09\x09  of the animation root motion (modify velocity to home root motion melee attacks, etc.)\n*\n*\x09\x09Jump pad volumes that work during animation root montage attacks\n*\x09\x09\x09- Constant velocity modification Z up, additive and high priority\n*\x09\x09\x09- Attack/melee animation root motion uses \"set\" instead of \"override\" to allow other sources\n*\x09\x09\x09- Animation root motion is applied, then the Z up additive of this source is so you are\n*\x09\x09\x09  affected by the jump pad\n*\n*\x09\x09""Attack/melee homing\n*\x09\x09\x09- Additive, lower priority so it gets applied after any animation/significant root motion\n*\x09\x09\x09- World space, sourced by logic modifying velocity to go towards nearby enemies\n*\x09\x09\x09- Could point to a UAbilityTask node from the GameplayAbilities system\n*\n*\x09\x09""Character movement controlled by splines/curves in-editor instead of requiring animation tweaks\n*\x09\x09\x09- Same as animation root motion but source from spline/curve data\n*\x09\n*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Generalized source of Root Motion to a CharacterMovementComponent.\n\nHas priorities and different accumulation modes (override, additive, set, ignore).\n\nRootMotionSources are accumulated from highest priority to lowest, once all values\nare \"finalized\" (meaning no more accumulation to those values), root motion accumulation\nis finished. Having all of translation and rotation in a transform being overridden during\nroot motion accumulation means that CharacterMovementComponent Phys*() functions no longer\nneed to CalcVelocity() since it'll just get overridden anyway.\n\nSome example source possibilities:\n        Full Animation Root Motion (matching only form of root motion we've supported historically):\n                - Overrides all translation axes or rotation or both\n                - Very High priority so it gets applied first and since it is override no other\n                  RootMotionSources have an influence that are lower priority\n                - Scale on translation and/or rotation is set to 1 to match animation 1 for 1\n                - Provides local space transform (character-orientation relative)\n\n                - End result: Same as before - overrides velocity/rotation to values in AnimMontage\n                - But can now scale individual translation axes if desired, or instead of override\n                  can use \"set\" to allow other additive sources of root motion to be applied on top\n                  of the animation root motion (modify velocity to home root motion melee attacks, etc.)\n\n        Jump pad volumes that work during animation root montage attacks\n                - Constant velocity modification Z up, additive and high priority\n                - Attack/melee animation root motion uses \"set\" instead of \"override\" to allow other sources\n                - Animation root motion is applied, then the Z up additive of this source is so you are\n                  affected by the jump pad\n\n        Attack/melee homing\n                - Additive, lower priority so it gets applied after any animation/significant root motion\n                - World space, sourced by logic modifying velocity to go towards nearby enemies\n                - Could point to a UAbilityTask node from the GameplayAbilities system\n\n        Character movement controlled by splines/curves in-editor instead of requiring animation tweaks\n                - Same as animation root motion but source from spline/curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Comment", "/** Priority of this source relative to other sources - higher number being the highest priority/first applied. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Priority of this source relative to other sources - higher number being the highest priority/first applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalID_MetaData[] = {
		{ "Comment", "/** ID local to this client or server instance. Used for matching up FRootMotionSources between SavedMoves\n\x09 *  and allow a mapping between server LocalIDs and client LocalIDs for correction/comparison */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "ID local to this client or server instance. Used for matching up FRootMotionSources between SavedMoves\nand allow a mapping between server LocalIDs and client LocalIDs for correction/comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulateMode_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Accumulation mode for this source (whether or not to additively apply this root motion or override completely)\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Accumulation mode for this source (whether or not to additively apply this root motion or override completely)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09This name allows us to find the source later so that we can end it. \n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "This name allows us to find the source later so that we can end it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Time this source should start (in character movement client time) \n\x09 *  This is used to handle cases of inconsistent tick times (ServerMoves ticking for 1 second when root motion should\n\x09 *  have only applied for the last 0.1 seconds, or root motion source ending halfway through a 0.5 second tick)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Time this source should start (in character movement client time)\nThis is used to handle cases of inconsistent tick times (ServerMoves ticking for 1 second when root motion should\nhave only applied for the last 0.1 seconds, or root motion source ending halfway through a 0.5 second tick)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Comment", "/** Time elapsed so far for this source */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Time elapsed so far for this source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTime_MetaData[] = {
		{ "Comment", "/** The last Time entry we had before the last SetTime() - used for simulated catchup */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "The last Time entry we had before the last SetTime() - used for simulated catchup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Comment", "/** The length of this root motion - < 0 for infinite (to be removed manually) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "The length of this root motion - < 0 for infinite (to be removed manually)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Comment", "/** Status of this source */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Status of this source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Comment", "/** Settings of this source */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Settings of this source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInLocalSpace_MetaData[] = {
		{ "Comment", "/** True when this RootMotionSource is contributing local space accumulation (false for world space) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "True when this RootMotionSource is contributing local space accumulation (false for world space)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionParams_MetaData[] = {
		{ "Comment", "/** Root Motion generated by this Source */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Root Motion generated by this Source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishVelocityParams_MetaData[] = {
		{ "Comment", "/** Finish Velocity Parameters */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Finish Velocity Parameters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Priority;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_LocalID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccumulateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccumulateMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstanceName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Status;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static void NewProp_bInLocalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLocalSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinishVelocityParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_LocalID = { "LocalID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, LocalID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalID_MetaData), NewProp_LocalID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode = { "AccumulateMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, AccumulateMode), Z_Construct_UEnum_Engine_ERootMotionAccumulateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulateMode_MetaData), NewProp_AccumulateMode_MetaData) }; // 3922657609
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, InstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceName_MetaData), NewProp_InstanceName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_PreviousTime = { "PreviousTime", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, PreviousTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousTime_MetaData), NewProp_PreviousTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, Status), Z_Construct_UScriptStruct_FRootMotionSourceStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 1473357417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, Settings), Z_Construct_UScriptStruct_FRootMotionSourceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1073484880
void Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace_SetBit(void* Obj)
{
	((FRootMotionSource*)Obj)->bInLocalSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace = { "bInLocalSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRootMotionSource), &Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInLocalSpace_MetaData), NewProp_bInLocalSpace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_RootMotionParams = { "RootMotionParams", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, RootMotionParams), Z_Construct_UScriptStruct_FRootMotionMovementParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMotionParams_MetaData), NewProp_RootMotionParams_MetaData) }; // 4025040720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_FinishVelocityParams = { "FinishVelocityParams", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource, FinishVelocityParams), Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishVelocityParams_MetaData), NewProp_FinishVelocityParams_MetaData) }; // 3069308697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_LocalID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_InstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_PreviousTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_RootMotionParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_FinishVelocityParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RootMotionSource",
	Z_Construct_UScriptStruct_FRootMotionSource_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::PropPointers),
	sizeof(FRootMotionSource),
	alignof(FRootMotionSource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionSource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSource.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource.InnerSingleton;
}
// End ScriptStruct FRootMotionSource

// Begin ScriptStruct FRootMotionSource_ConstantForce
static_assert(std::is_polymorphic<FRootMotionSource_ConstantForce>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FRootMotionSource_ConstantForce cannot be polymorphic unless super FRootMotionSource is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSource_ConstantForce;
class UScriptStruct* FRootMotionSource_ConstantForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource_ConstantForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSource_ConstantForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_ConstantForce"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource_ConstantForce.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource_ConstantForce>()
{
	return FRootMotionSource_ConstantForce::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** ConstantForce applies a fixed force to the target */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "ConstantForce applies a fixed force to the target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_ConstantForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_ConstantForce, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_ConstantForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthOverTime_MetaData), NewProp_StrengthOverTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_StrengthOverTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FRootMotionSource,
	&NewStructOps,
	"RootMotionSource_ConstantForce",
	Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::PropPointers),
	sizeof(FRootMotionSource_ConstantForce),
	alignof(FRootMotionSource_ConstantForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource_ConstantForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSource_ConstantForce.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource_ConstantForce.InnerSingleton;
}
// End ScriptStruct FRootMotionSource_ConstantForce

// Begin ScriptStruct FRootMotionSource_RadialForce
static_assert(std::is_polymorphic<FRootMotionSource_RadialForce>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FRootMotionSource_RadialForce cannot be polymorphic unless super FRootMotionSource is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSource_RadialForce;
class UScriptStruct* FRootMotionSource_RadialForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource_RadialForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSource_RadialForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_RadialForce"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource_RadialForce.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource_RadialForce>()
{
	return FRootMotionSource_RadialForce::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** RadialForce applies a force pulling or pushing away from a given world location to the target */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "RadialForce applies a force pulling or pushing away from a given world location to the target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPush_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoZForce_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthDistanceFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedWorldDirection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedWorldDirection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static void NewProp_bIsPush_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPush;
	static void NewProp_bNoZForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoZForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthDistanceFalloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
	static void NewProp_bUseFixedWorldDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedWorldDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedWorldDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_RadialForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_LocationActor = { "LocationActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, LocationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationActor_MetaData), NewProp_LocationActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush_SetBit(void* Obj)
{
	((FRootMotionSource_RadialForce*)Obj)->bIsPush = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush = { "bIsPush", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRootMotionSource_RadialForce), &Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPush_MetaData), NewProp_bIsPush_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce_SetBit(void* Obj)
{
	((FRootMotionSource_RadialForce*)Obj)->bNoZForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce = { "bNoZForce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRootMotionSource_RadialForce), &Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoZForce_MetaData), NewProp_bNoZForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthDistanceFalloff = { "StrengthDistanceFalloff", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, StrengthDistanceFalloff), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthDistanceFalloff_MetaData), NewProp_StrengthDistanceFalloff_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthOverTime_MetaData), NewProp_StrengthOverTime_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection_SetBit(void* Obj)
{
	((FRootMotionSource_RadialForce*)Obj)->bUseFixedWorldDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection = { "bUseFixedWorldDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRootMotionSource_RadialForce), &Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedWorldDirection_MetaData), NewProp_bUseFixedWorldDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_FixedWorldDirection = { "FixedWorldDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, FixedWorldDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedWorldDirection_MetaData), NewProp_FixedWorldDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_LocationActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthDistanceFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_FixedWorldDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FRootMotionSource,
	&NewStructOps,
	"RootMotionSource_RadialForce",
	Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::PropPointers),
	sizeof(FRootMotionSource_RadialForce),
	alignof(FRootMotionSource_RadialForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_RadialForce()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource_RadialForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSource_RadialForce.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource_RadialForce.InnerSingleton;
}
// End ScriptStruct FRootMotionSource_RadialForce

// Begin ScriptStruct FRootMotionSource_MoveToForce
static_assert(std::is_polymorphic<FRootMotionSource_MoveToForce>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FRootMotionSource_MoveToForce cannot be polymorphic unless super FRootMotionSource is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToForce;
class UScriptStruct* FRootMotionSource_MoveToForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_MoveToForce"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToForce.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource_MoveToForce>()
{
	return FRootMotionSource_MoveToForce::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** MoveToForce moves the target to a given fixed location in world space over the duration */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "MoveToForce moves the target to a given fixed location in world space over the duration" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpeedToExpected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static void NewProp_bRestrictSpeedToExpected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_MoveToForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_MoveToForce, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_MoveToForce, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit(void* Obj)
{
	((FRootMotionSource_MoveToForce*)Obj)->bRestrictSpeedToExpected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected = { "bRestrictSpeedToExpected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRootMotionSource_MoveToForce), &Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestrictSpeedToExpected_MetaData), NewProp_bRestrictSpeedToExpected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_MoveToForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOffsetCurve_MetaData), NewProp_PathOffsetCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_PathOffsetCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FRootMotionSource,
	&NewStructOps,
	"RootMotionSource_MoveToForce",
	Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::PropPointers),
	sizeof(FRootMotionSource_MoveToForce),
	alignof(FRootMotionSource_MoveToForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToForce.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToForce.InnerSingleton;
}
// End ScriptStruct FRootMotionSource_MoveToForce

// Begin ScriptStruct FRootMotionSource_MoveToDynamicForce
static_assert(std::is_polymorphic<FRootMotionSource_MoveToDynamicForce>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FRootMotionSource_MoveToDynamicForce cannot be polymorphic unless super FRootMotionSource is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToDynamicForce;
class UScriptStruct* FRootMotionSource_MoveToDynamicForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToDynamicForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToDynamicForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_MoveToDynamicForce"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToDynamicForce.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource_MoveToDynamicForce>()
{
	return FRootMotionSource_MoveToDynamicForce::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * MoveToDynamicForce moves the target to a given location in world space over the duration, where the end location\n * is dynamic and can change during the move (meant to be used for things like moving to a moving target)\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "MoveToDynamicForce moves the target to a given location in world space over the duration, where the end location\nis dynamic and can change during the move (meant to be used for things like moving to a moving target)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Comment", "// Dynamically-changing location of target, which may be altered while this movement is ongoing \n" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Dynamically-changing location of target, which may be altered while this movement is ongoing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpeedToExpected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeMappingCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static void NewProp_bRestrictSpeedToExpected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_MoveToDynamicForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_InitialTargetLocation = { "InitialTargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, InitialTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTargetLocation_MetaData), NewProp_InitialTargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit(void* Obj)
{
	((FRootMotionSource_MoveToDynamicForce*)Obj)->bRestrictSpeedToExpected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected = { "bRestrictSpeedToExpected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRootMotionSource_MoveToDynamicForce), &Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestrictSpeedToExpected_MetaData), NewProp_bRestrictSpeedToExpected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOffsetCurve_MetaData), NewProp_PathOffsetCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeMappingCurve_MetaData), NewProp_TimeMappingCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_InitialTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_PathOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TimeMappingCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FRootMotionSource,
	&NewStructOps,
	"RootMotionSource_MoveToDynamicForce",
	Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::PropPointers),
	sizeof(FRootMotionSource_MoveToDynamicForce),
	alignof(FRootMotionSource_MoveToDynamicForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToDynamicForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToDynamicForce.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToDynamicForce.InnerSingleton;
}
// End ScriptStruct FRootMotionSource_MoveToDynamicForce

// Begin ScriptStruct FRootMotionSource_JumpForce
static_assert(std::is_polymorphic<FRootMotionSource_JumpForce>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FRootMotionSource_JumpForce cannot be polymorphic unless super FRootMotionSource is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSource_JumpForce;
class UScriptStruct* FRootMotionSource_JumpForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource_JumpForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSource_JumpForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_JumpForce"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource_JumpForce.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource_JumpForce>()
{
	return FRootMotionSource_JumpForce::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** JumpForce moves the target in a jump-like manner (ends when landing, applied force is relative) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "JumpForce moves the target in a jump-like manner (ends when landing, applied force is relative)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableTimeout_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeMappingCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static void NewProp_bDisableTimeout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableTimeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_JumpForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_JumpForce, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_JumpForce, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_JumpForce, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout_SetBit(void* Obj)
{
	((FRootMotionSource_JumpForce*)Obj)->bDisableTimeout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout = { "bDisableTimeout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRootMotionSource_JumpForce), &Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableTimeout_MetaData), NewProp_bDisableTimeout_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_JumpForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOffsetCurve_MetaData), NewProp_PathOffsetCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSource_JumpForce, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeMappingCurve_MetaData), NewProp_TimeMappingCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_PathOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_TimeMappingCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FRootMotionSource,
	&NewStructOps,
	"RootMotionSource_JumpForce",
	Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::PropPointers),
	sizeof(FRootMotionSource_JumpForce),
	alignof(FRootMotionSource_JumpForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_JumpForce()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSource_JumpForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSource_JumpForce.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSource_JumpForce.InnerSingleton;
}
// End ScriptStruct FRootMotionSource_JumpForce

// Begin ScriptStruct FRootMotionSourceGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSourceGroup;
class UScriptStruct* FRootMotionSourceGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSourceGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSourceGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceGroup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSourceGroup"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSourceGroup.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSourceGroup>()
{
	return FRootMotionSourceGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Group of Root Motion Sources that are applied\n *\n **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Group of Root Motion Sources that are applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAdditiveSources_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Whether this group has additive root motion sources\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Whether this group has additive root motion sources" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasOverrideSources_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Whether this group has override root motion sources\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Whether this group has override root motion sources" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Whether this group has override root motion sources that have IgnoreZAccumulate flag\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Whether this group has override root motion sources that have IgnoreZAccumulate flag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAdditiveVelocityApplied_MetaData[] = {
		{ "Comment", "/** True when we had additive velocity applied last tick, checked to know if we should restore\n\x09 *  LastPreAdditiveVelocity before a Velocity computation */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "True when we had additive velocity applied last tick, checked to know if we should restore\nLastPreAdditiveVelocity before a Velocity computation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastAccumulatedSettings_MetaData[] = {
		{ "Comment", "/** Aggregate Settings of the last group of accumulated sources */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Aggregate Settings of the last group of accumulated sources" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPreAdditiveVelocity_MetaData[] = {
		{ "Comment", "/** Saved off pre-additive-applied Velocity, used for being able to reliably add/remove additive\n\x09 *  velocity from currently computed Velocity (otherwise we would be removing additive velocity\n\x09 *  that no longer exists, like if you run into a wall and your Velocity becomes 0 - subtracting\n\x09 *  the velocity that we added heading into the wall last tick would make you go backwards. With\n\x09 *  this method we override that resulting Velocity due to obstructions */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Saved off pre-additive-applied Velocity, used for being able to reliably add/remove additive\nvelocity from currently computed Velocity (otherwise we would be removing additive velocity\nthat no longer exists, like if you run into a wall and your Velocity becomes 0 - subtracting\nthe velocity that we added heading into the wall last tick would make you go backwards. With\nthis method we override that resulting Velocity due to obstructions" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasAdditiveSources_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAdditiveSources;
	static void NewProp_bHasOverrideSources_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOverrideSources;
	static void NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOverrideSourcesWithIgnoreZAccumulate;
	static void NewProp_bIsAdditiveVelocityApplied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdditiveVelocityApplied;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastAccumulatedSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastPreAdditiveVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources_SetBit(void* Obj)
{
	((FRootMotionSourceGroup*)Obj)->bHasAdditiveSources = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources = { "bHasAdditiveSources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRootMotionSourceGroup), &Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAdditiveSources_MetaData), NewProp_bHasAdditiveSources_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources_SetBit(void* Obj)
{
	((FRootMotionSourceGroup*)Obj)->bHasOverrideSources = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources = { "bHasOverrideSources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRootMotionSourceGroup), &Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasOverrideSources_MetaData), NewProp_bHasOverrideSources_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_SetBit(void* Obj)
{
	((FRootMotionSourceGroup*)Obj)->bHasOverrideSourcesWithIgnoreZAccumulate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate = { "bHasOverrideSourcesWithIgnoreZAccumulate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRootMotionSourceGroup), &Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_MetaData), NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_MetaData) };
void Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied_SetBit(void* Obj)
{
	((FRootMotionSourceGroup*)Obj)->bIsAdditiveVelocityApplied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied = { "bIsAdditiveVelocityApplied", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRootMotionSourceGroup), &Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAdditiveVelocityApplied_MetaData), NewProp_bIsAdditiveVelocityApplied_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastAccumulatedSettings = { "LastAccumulatedSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSourceGroup, LastAccumulatedSettings), Z_Construct_UScriptStruct_FRootMotionSourceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastAccumulatedSettings_MetaData), NewProp_LastAccumulatedSettings_MetaData) }; // 1073484880
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastPreAdditiveVelocity = { "LastPreAdditiveVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionSourceGroup, LastPreAdditiveVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPreAdditiveVelocity_MetaData), NewProp_LastPreAdditiveVelocity_MetaData) }; // 1191031901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastAccumulatedSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastPreAdditiveVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RootMotionSourceGroup",
	Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::PropPointers),
	sizeof(FRootMotionSourceGroup),
	alignof(FRootMotionSourceGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSourceGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSourceGroup.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSourceGroup.InnerSingleton;
}
// End ScriptStruct FRootMotionSourceGroup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERootMotionAccumulateMode_StaticEnum, TEXT("ERootMotionAccumulateMode"), &Z_Registration_Info_UEnum_ERootMotionAccumulateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3922657609U) },
		{ ERootMotionSourceStatusFlags_StaticEnum, TEXT("ERootMotionSourceStatusFlags"), &Z_Registration_Info_UEnum_ERootMotionSourceStatusFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1115266286U) },
		{ ERootMotionSourceSettingsFlags_StaticEnum, TEXT("ERootMotionSourceSettingsFlags"), &Z_Registration_Info_UEnum_ERootMotionSourceSettingsFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 740070862U) },
		{ ERootMotionFinishVelocityMode_StaticEnum, TEXT("ERootMotionFinishVelocityMode"), &Z_Registration_Info_UEnum_ERootMotionFinishVelocityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 754916493U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRootMotionSourceStatus::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::NewStructOps, TEXT("RootMotionSourceStatus"), &Z_Registration_Info_UScriptStruct_RootMotionSourceStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSourceStatus), 1473357417U) },
		{ FRootMotionSourceSettings::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::NewStructOps, TEXT("RootMotionSourceSettings"), &Z_Registration_Info_UScriptStruct_RootMotionSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSourceSettings), 1073484880U) },
		{ FRootMotionFinishVelocitySettings::StaticStruct, Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewStructOps, TEXT("RootMotionFinishVelocitySettings"), &Z_Registration_Info_UScriptStruct_RootMotionFinishVelocitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionFinishVelocitySettings), 3069308697U) },
		{ FRootMotionSource::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewStructOps, TEXT("RootMotionSource"), &Z_Registration_Info_UScriptStruct_RootMotionSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSource), 133542100U) },
		{ FRootMotionSource_ConstantForce::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewStructOps, TEXT("RootMotionSource_ConstantForce"), &Z_Registration_Info_UScriptStruct_RootMotionSource_ConstantForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSource_ConstantForce), 3424214604U) },
		{ FRootMotionSource_RadialForce::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewStructOps, TEXT("RootMotionSource_RadialForce"), &Z_Registration_Info_UScriptStruct_RootMotionSource_RadialForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSource_RadialForce), 2025057047U) },
		{ FRootMotionSource_MoveToForce::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewStructOps, TEXT("RootMotionSource_MoveToForce"), &Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSource_MoveToForce), 3726492277U) },
		{ FRootMotionSource_MoveToDynamicForce::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewStructOps, TEXT("RootMotionSource_MoveToDynamicForce"), &Z_Registration_Info_UScriptStruct_RootMotionSource_MoveToDynamicForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSource_MoveToDynamicForce), 2191729661U) },
		{ FRootMotionSource_JumpForce::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewStructOps, TEXT("RootMotionSource_JumpForce"), &Z_Registration_Info_UScriptStruct_RootMotionSource_JumpForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSource_JumpForce), 2019456587U) },
		{ FRootMotionSourceGroup::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewStructOps, TEXT("RootMotionSourceGroup"), &Z_Registration_Info_UScriptStruct_RootMotionSourceGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSourceGroup), 440215642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_3198385983(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_RootMotionSource_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
