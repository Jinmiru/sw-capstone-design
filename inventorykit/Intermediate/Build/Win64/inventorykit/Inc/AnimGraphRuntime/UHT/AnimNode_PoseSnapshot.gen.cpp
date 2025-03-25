// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseSnapshot() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum ESnapshotSourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapshotSourceMode;
static UEnum* ESnapshotSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESnapshotSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESnapshotSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESnapshotSourceMode"));
	}
	return Z_Registration_Info_UEnum_ESnapshotSourceMode.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESnapshotSourceMode>()
{
	return ESnapshotSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** How to access the snapshot */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseSnapshot.h" },
		{ "NamedSnapshot.Comment", "/** \n\x09 * Refer to an internal snapshot by name (previously stored with SavePoseSnapshot). \n\x09 * This can be more efficient than access via pin.\n\x09 */" },
		{ "NamedSnapshot.Name", "ESnapshotSourceMode::NamedSnapshot" },
		{ "NamedSnapshot.ToolTip", "Refer to an internal snapshot by name (previously stored with SavePoseSnapshot).\nThis can be more efficient than access via pin." },
		{ "SnapshotPin.Comment", "/** \n\x09 * Use a snapshot variable (previously populated using SnapshotPose).\n\x09 * This is more flexible and allows poses to be modified and managed externally to the animation blueprint.\n\x09 */" },
		{ "SnapshotPin.Name", "ESnapshotSourceMode::SnapshotPin" },
		{ "SnapshotPin.ToolTip", "Use a snapshot variable (previously populated using SnapshotPose).\nThis is more flexible and allows poses to be modified and managed externally to the animation blueprint." },
		{ "ToolTip", "How to access the snapshot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESnapshotSourceMode::NamedSnapshot", (int64)ESnapshotSourceMode::NamedSnapshot },
		{ "ESnapshotSourceMode::SnapshotPin", (int64)ESnapshotSourceMode::SnapshotPin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"ESnapshotSourceMode",
	"ESnapshotSourceMode",
	Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode()
{
	if (!Z_Registration_Info_UEnum_ESnapshotSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapshotSourceMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESnapshotSourceMode.InnerSingleton;
}
// End Enum ESnapshotSourceMode

// Begin ScriptStruct FAnimNode_PoseSnapshot
static_assert(std::is_polymorphic<FAnimNode_PoseSnapshot>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_PoseSnapshot cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PoseSnapshot;
class UScriptStruct* FAnimNode_PoseSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PoseSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_PoseSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseSnapshot.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_PoseSnapshot>()
{
	return FAnimNode_PoseSnapshot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Provide a snapshot pose, either from the internal named pose cache or via a supplied snapshot */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseSnapshot.h" },
		{ "ToolTip", "Provide a snapshot pose, either from the internal named pose cache or via a supplied snapshot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** The name of the snapshot previously stored with SavePoseSnapshot */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseSnapshot.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The name of the snapshot previously stored with SavePoseSnapshot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** Snapshot to use. This should be populated at first by calling SnapshotPose */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseSnapshot.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Snapshot to use. This should be populated at first by calling SnapshotPose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** How to access the snapshot */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseSnapshot.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How to access the snapshot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseSnapshot, SnapshotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotName_MetaData), NewProp_SnapshotName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseSnapshot, Snapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Snapshot_MetaData), NewProp_Snapshot_MetaData) }; // 2619874508
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseSnapshot, Mode), Z_Construct_UEnum_AnimGraphRuntime_ESnapshotSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2824277633
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::NewProp_SnapshotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::NewProp_Snapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_PoseSnapshot",
	Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::PropPointers),
	sizeof(FAnimNode_PoseSnapshot),
	alignof(FAnimNode_PoseSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PoseSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseSnapshot.InnerSingleton;
}
// End ScriptStruct FAnimNode_PoseSnapshot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseSnapshot_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESnapshotSourceMode_StaticEnum, TEXT("ESnapshotSourceMode"), &Z_Registration_Info_UEnum_ESnapshotSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2824277633U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_PoseSnapshot::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PoseSnapshot_Statics::NewStructOps, TEXT("AnimNode_PoseSnapshot"), &Z_Registration_Info_UScriptStruct_AnimNode_PoseSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PoseSnapshot), 1127685972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseSnapshot_h_3261886702(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseSnapshot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseSnapshot_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseSnapshot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseSnapshot_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
