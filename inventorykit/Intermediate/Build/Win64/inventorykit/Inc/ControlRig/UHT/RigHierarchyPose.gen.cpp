// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigHierarchyPose.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyPose() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPose();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPoseElement();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigPoseElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigPoseElement;
class UScriptStruct* FRigPoseElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigPoseElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigPoseElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigPoseElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigPoseElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigPoseElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigPoseElement>()
{
	return FRigPoseElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigPoseElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredEulerAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveParent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredEulerAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveParent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigPoseElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPoseElement, Index), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_GlobalTransform = { "GlobalTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPoseElement, GlobalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalTransform_MetaData), NewProp_GlobalTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPoseElement, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalTransform_MetaData), NewProp_LocalTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_PreferredEulerAngle = { "PreferredEulerAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPoseElement, PreferredEulerAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredEulerAngle_MetaData), NewProp_PreferredEulerAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_ActiveParent = { "ActiveParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPoseElement, ActiveParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveParent_MetaData), NewProp_ActiveParent_MetaData) }; // 1447557315
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPoseElement, CurveValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveValue_MetaData), NewProp_CurveValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigPoseElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_GlobalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_LocalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_PreferredEulerAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_ActiveParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_CurveValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPoseElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigPoseElement",
	Z_Construct_UScriptStruct_FRigPoseElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPoseElement_Statics::PropPointers),
	sizeof(FRigPoseElement),
	alignof(FRigPoseElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPoseElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigPoseElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigPoseElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigPoseElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigPoseElement.InnerSingleton, Z_Construct_UScriptStruct_FRigPoseElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigPoseElement.InnerSingleton;
}
// End ScriptStruct FRigPoseElement

// Begin ScriptStruct FRigPose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigPose;
class UScriptStruct* FRigPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigPose, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigPose"));
	}
	return Z_Registration_Info_UScriptStruct_RigPose.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigPose>()
{
	return FRigPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyTopologyVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Elements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HierarchyTopologyVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PoseHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigPoseElement, METADATA_PARAMS(0, nullptr) }; // 3381949347
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPose, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elements_MetaData), NewProp_Elements_MetaData) }; // 3381949347
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_HierarchyTopologyVersion = { "HierarchyTopologyVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPose, HierarchyTopologyVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HierarchyTopologyVersion_MetaData), NewProp_HierarchyTopologyVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_PoseHash = { "PoseHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPose, PoseHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseHash_MetaData), NewProp_PoseHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_HierarchyTopologyVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_PoseHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigPose",
	Z_Construct_UScriptStruct_FRigPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPose_Statics::PropPointers),
	sizeof(FRigPose),
	alignof(FRigPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigPose()
{
	if (!Z_Registration_Info_UScriptStruct_RigPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigPose.InnerSingleton, Z_Construct_UScriptStruct_FRigPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigPose.InnerSingleton;
}
// End ScriptStruct FRigPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigPoseElement::StaticStruct, Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewStructOps, TEXT("RigPoseElement"), &Z_Registration_Info_UScriptStruct_RigPoseElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigPoseElement), 3381949347U) },
		{ FRigPose::StaticStruct, Z_Construct_UScriptStruct_FRigPose_Statics::NewStructOps, TEXT("RigPose"), &Z_Registration_Info_UScriptStruct_RigPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigPose), 269917463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h_695919680(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
