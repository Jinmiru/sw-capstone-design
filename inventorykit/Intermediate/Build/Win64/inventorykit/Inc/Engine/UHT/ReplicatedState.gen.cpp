// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ReplicatedState.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedState() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERotatorQuantization();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorQuantization();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachment();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigidBodyState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EVectorQuantization
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorQuantization;
static UEnum* EVectorQuantization_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVectorQuantization.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVectorQuantization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVectorQuantization, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVectorQuantization"));
	}
	return Z_Registration_Info_UEnum_EVectorQuantization.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVectorQuantization>()
{
	return EVectorQuantization_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVectorQuantization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Describes rules for network replicating a vector efficiently */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "RoundOneDecimal.Comment", "/** Each vector component will be rounded, preserving one decimal place. */" },
		{ "RoundOneDecimal.Name", "EVectorQuantization::RoundOneDecimal" },
		{ "RoundOneDecimal.ToolTip", "Each vector component will be rounded, preserving one decimal place." },
		{ "RoundTwoDecimals.Comment", "/** Each vector component will be rounded, preserving two decimal places. */" },
		{ "RoundTwoDecimals.Name", "EVectorQuantization::RoundTwoDecimals" },
		{ "RoundTwoDecimals.ToolTip", "Each vector component will be rounded, preserving two decimal places." },
		{ "RoundWholeNumber.Comment", "/** Each vector component will be rounded to the nearest whole number. */" },
		{ "RoundWholeNumber.Name", "EVectorQuantization::RoundWholeNumber" },
		{ "RoundWholeNumber.ToolTip", "Each vector component will be rounded to the nearest whole number." },
		{ "ToolTip", "Describes rules for network replicating a vector efficiently" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVectorQuantization::RoundWholeNumber", (int64)EVectorQuantization::RoundWholeNumber },
		{ "EVectorQuantization::RoundOneDecimal", (int64)EVectorQuantization::RoundOneDecimal },
		{ "EVectorQuantization::RoundTwoDecimals", (int64)EVectorQuantization::RoundTwoDecimals },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVectorQuantization_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVectorQuantization",
	"EVectorQuantization",
	Z_Construct_UEnum_Engine_EVectorQuantization_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorQuantization_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorQuantization_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVectorQuantization_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVectorQuantization()
{
	if (!Z_Registration_Info_UEnum_EVectorQuantization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorQuantization.InnerSingleton, Z_Construct_UEnum_Engine_EVectorQuantization_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVectorQuantization.InnerSingleton;
}
// End Enum EVectorQuantization

// Begin Enum ERotatorQuantization
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotatorQuantization;
static UEnum* ERotatorQuantization_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERotatorQuantization.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERotatorQuantization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERotatorQuantization, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERotatorQuantization"));
	}
	return Z_Registration_Info_UEnum_ERotatorQuantization.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERotatorQuantization>()
{
	return ERotatorQuantization_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERotatorQuantization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ByteComponents.Comment", "/** The rotator will be compressed to 8 bits per component. */" },
		{ "ByteComponents.Name", "ERotatorQuantization::ByteComponents" },
		{ "ByteComponents.ToolTip", "The rotator will be compressed to 8 bits per component." },
		{ "Comment", "/** Describes rules for network replicating a vector efficiently */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ShortComponents.Comment", "/** The rotator will be compressed to 16 bits per component. */" },
		{ "ShortComponents.Name", "ERotatorQuantization::ShortComponents" },
		{ "ShortComponents.ToolTip", "The rotator will be compressed to 16 bits per component." },
		{ "ToolTip", "Describes rules for network replicating a vector efficiently" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERotatorQuantization::ByteComponents", (int64)ERotatorQuantization::ByteComponents },
		{ "ERotatorQuantization::ShortComponents", (int64)ERotatorQuantization::ShortComponents },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERotatorQuantization",
	"ERotatorQuantization",
	Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERotatorQuantization()
{
	if (!Z_Registration_Info_UEnum_ERotatorQuantization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotatorQuantization.InnerSingleton, Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERotatorQuantization.InnerSingleton;
}
// End Enum ERotatorQuantization

// Begin ScriptStruct FRepAttachment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepAttachment;
class UScriptStruct* FRepAttachment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepAttachment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepAttachment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepAttachment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RepAttachment"));
	}
	return Z_Registration_Info_UScriptStruct_RepAttachment.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRepAttachment>()
{
	return FRepAttachment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRepAttachment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Handles attachment replication to clients.  */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Handles attachment replication to clients." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[] = {
		{ "Comment", "/** Actor we are attached to, movement replication will not happen while AttachParent is non-nullptr */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Actor we are attached to, movement replication will not happen while AttachParent is non-nullptr" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Comment", "/** Location offset from attach parent */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Location offset from attach parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale3D_MetaData[] = {
		{ "Comment", "/** Scale relative to attach parent */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Scale relative to attach parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Comment", "/** Rotation offset from attach parent */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Rotation offset from attach parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocket_MetaData[] = {
		{ "Comment", "/** Specific socket we are attached to */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Specific socket we are attached to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachComponent_MetaData[] = {
		{ "Comment", "/** Specific component we are attached to */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Specific component we are attached to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale3D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepAttachment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepAttachment, AttachParent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachParent_MetaData), NewProp_AttachParent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepAttachment, LocationOffset), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) }; // 2552134291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RelativeScale3D = { "RelativeScale3D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepAttachment, RelativeScale3D), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeScale3D_MetaData), NewProp_RelativeScale3D_MetaData) }; // 2552134291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepAttachment, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepAttachment, AttachSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocket_MetaData), NewProp_AttachSocket_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachComponent = { "AttachComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepAttachment, AttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachComponent_MetaData), NewProp_AttachComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RelativeScale3D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepAttachment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RepAttachment",
	Z_Construct_UScriptStruct_FRepAttachment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::PropPointers),
	sizeof(FRepAttachment),
	alignof(FRepAttachment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRepAttachment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRepAttachment()
{
	if (!Z_Registration_Info_UScriptStruct_RepAttachment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepAttachment.InnerSingleton, Z_Construct_UScriptStruct_FRepAttachment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RepAttachment.InnerSingleton;
}
// End ScriptStruct FRepAttachment

// Begin ScriptStruct FRigidBodyState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigidBodyState;
class UScriptStruct* FRigidBodyState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigidBodyState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigidBodyState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigidBodyState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RigidBodyState"));
	}
	return Z_Registration_Info_UScriptStruct_RigidBodyState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRigidBodyState>()
{
	return FRigidBodyState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigidBodyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes the physical state of a rigid body. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Describes the physical state of a rigid body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinVel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngVel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinVel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngVel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigidBodyState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBodyState, Position), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) }; // 2552134291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Quaternion = { "Quaternion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBodyState, Quaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quaternion_MetaData), NewProp_Quaternion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_LinVel = { "LinVel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBodyState, LinVel), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinVel_MetaData), NewProp_LinVel_MetaData) }; // 2552134291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_AngVel = { "AngVel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBodyState, AngVel), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngVel_MetaData), NewProp_AngVel_MetaData) }; // 2552134291
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBodyState, Flags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigidBodyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Quaternion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_LinVel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_AngVel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RigidBodyState",
	Z_Construct_UScriptStruct_FRigidBodyState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyState_Statics::PropPointers),
	sizeof(FRigidBodyState),
	alignof(FRigidBodyState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigidBodyState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigidBodyState()
{
	if (!Z_Registration_Info_UScriptStruct_RigidBodyState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigidBodyState.InnerSingleton, Z_Construct_UScriptStruct_FRigidBodyState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigidBodyState.InnerSingleton;
}
// End ScriptStruct FRigidBodyState

// Begin ScriptStruct FRepMovement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepMovement;
class UScriptStruct* FRepMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepMovement, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RepMovement"));
	}
	return Z_Registration_Info_UScriptStruct_RepMovement.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRepMovement>()
{
	return FRepMovement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRepMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Replicated movement data of our RootComponent.\n  * Struct used for efficient replication as velocity and location are generally replicated together (this saves a repindex) \n  * and velocity.Z is commonly zero (most position replications are for walking pawns). \n  */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Replicated movement data of our RootComponent.\nStruct used for efficient replication as velocity and location are generally replicated together (this saves a repindex)\nand velocity.Z is commonly zero (most position replications are for walking pawns)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "Comment", "/** Velocity of component in world space */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Velocity of component in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Comment", "/** Velocity of rotation for component */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Velocity of rotation for component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Comment", "/** Location in world space */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Location in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Current rotation */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Current rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulatedPhysicSleep_MetaData[] = {
		{ "Comment", "/** If set, RootComponent should be sleeping. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "If set, RootComponent should be sleeping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepPhysics_MetaData[] = {
		{ "Comment", "/** If set, additional physic data (angular velocity) will be replicated. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "If set, additional physic data (angular velocity) will be replicated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFrame_MetaData[] = {
		{ "Comment", "/** Server physics step */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Server physics step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerPhysicsHandle_MetaData[] = {
		{ "Comment", "/** ID assigned by server used to ensure determinism by physics. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "ID assigned by server used to ensure determinism by physics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationQuantizationLevel_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Allows tuning the compression level for the replicated location vector. You should only need to change this from the default if you see visual artifacts. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Allows tuning the compression level for the replicated location vector. You should only need to change this from the default if you see visual artifacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityQuantizationLevel_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Allows tuning the compression level for the replicated velocity vectors. You should only need to change this from the default if you see visual artifacts. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Allows tuning the compression level for the replicated velocity vectors. You should only need to change this from the default if you see visual artifacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationQuantizationLevel_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Allows tuning the compression level for replicated rotation. You should only need to change this from the default if you see visual artifacts. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Allows tuning the compression level for replicated rotation. You should only need to change this from the default if you see visual artifacts." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_bSimulatedPhysicSleep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulatedPhysicSleep;
	static void NewProp_bRepPhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPhysicsHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationQuantizationLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationQuantizationLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityQuantizationLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityQuantizationLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationQuantizationLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationQuantizationLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepMovement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovement, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovement, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovement, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovement, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
void Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep_SetBit(void* Obj)
{
	((FRepMovement*)Obj)->bSimulatedPhysicSleep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep = { "bSimulatedPhysicSleep", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRepMovement), &Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulatedPhysicSleep_MetaData), NewProp_bSimulatedPhysicSleep_MetaData) };
void Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics_SetBit(void* Obj)
{
	((FRepMovement*)Obj)->bRepPhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics = { "bRepPhysics", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FRepMovement), &Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepPhysics_MetaData), NewProp_bRepPhysics_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerFrame = { "ServerFrame", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovement, ServerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFrame_MetaData), NewProp_ServerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerPhysicsHandle = { "ServerPhysicsHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovement, ServerPhysicsHandle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerPhysicsHandle_MetaData), NewProp_ServerPhysicsHandle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel = { "LocationQuantizationLevel", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovement, LocationQuantizationLevel), Z_Construct_UEnum_Engine_EVectorQuantization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationQuantizationLevel_MetaData), NewProp_LocationQuantizationLevel_MetaData) }; // 1495641083
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel = { "VelocityQuantizationLevel", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovement, VelocityQuantizationLevel), Z_Construct_UEnum_Engine_EVectorQuantization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityQuantizationLevel_MetaData), NewProp_VelocityQuantizationLevel_MetaData) }; // 1495641083
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel = { "RotationQuantizationLevel", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovement, RotationQuantizationLevel), Z_Construct_UEnum_Engine_ERotatorQuantization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationQuantizationLevel_MetaData), NewProp_RotationQuantizationLevel_MetaData) }; // 664589810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerPhysicsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepMovement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RepMovement",
	Z_Construct_UScriptStruct_FRepMovement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::PropPointers),
	sizeof(FRepMovement),
	alignof(FRepMovement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRepMovement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRepMovement()
{
	if (!Z_Registration_Info_UScriptStruct_RepMovement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepMovement.InnerSingleton, Z_Construct_UScriptStruct_FRepMovement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RepMovement.InnerSingleton;
}
// End ScriptStruct FRepMovement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVectorQuantization_StaticEnum, TEXT("EVectorQuantization"), &Z_Registration_Info_UEnum_EVectorQuantization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1495641083U) },
		{ ERotatorQuantization_StaticEnum, TEXT("ERotatorQuantization"), &Z_Registration_Info_UEnum_ERotatorQuantization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 664589810U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRepAttachment::StaticStruct, Z_Construct_UScriptStruct_FRepAttachment_Statics::NewStructOps, TEXT("RepAttachment"), &Z_Registration_Info_UScriptStruct_RepAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepAttachment), 1509821470U) },
		{ FRigidBodyState::StaticStruct, Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewStructOps, TEXT("RigidBodyState"), &Z_Registration_Info_UScriptStruct_RigidBodyState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigidBodyState), 1234720266U) },
		{ FRepMovement::StaticStruct, Z_Construct_UScriptStruct_FRepMovement_Statics::NewStructOps, TEXT("RepMovement"), &Z_Registration_Info_UScriptStruct_RepMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepMovement), 1102704118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_508973617(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
