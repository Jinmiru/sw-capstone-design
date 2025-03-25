// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/AnimationHierarchy.h"
#include "Runtime/AnimationCore/Public/Constraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationHierarchy() {}

// Begin Cross Module References
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationHierarchy();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintNodeData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FConstraintNodeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintNodeData;
class UScriptStruct* FConstraintNodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintNodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintNodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintNodeData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ConstraintNodeData"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintNodeData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FConstraintNodeData>()
{
	return FConstraintNodeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintNodeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/AnimationHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeParent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/AnimationHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/AnimationHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/AnimationHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/AnimationHierarchy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LinkedNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintNodeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewProp_RelativeParent = { "RelativeParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintNodeData, RelativeParent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeParent_MetaData), NewProp_RelativeParent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewProp_ConstraintOffset = { "ConstraintOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintNodeData, ConstraintOffset), Z_Construct_UScriptStruct_FConstraintOffset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintOffset_MetaData), NewProp_ConstraintOffset_MetaData) }; // 586411464
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewProp_LinkedNode = { "LinkedNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintNodeData, LinkedNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedNode_MetaData), NewProp_LinkedNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransformConstraint, METADATA_PARAMS(0, nullptr) }; // 1933630244
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintNodeData, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) }; // 1933630244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintNodeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewProp_RelativeParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewProp_ConstraintOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewProp_LinkedNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewProp_Constraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewProp_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintNodeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintNodeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ConstraintNodeData",
	Z_Construct_UScriptStruct_FConstraintNodeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintNodeData_Statics::PropPointers),
	sizeof(FConstraintNodeData),
	alignof(FConstraintNodeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintNodeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintNodeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintNodeData()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintNodeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintNodeData.InnerSingleton, Z_Construct_UScriptStruct_FConstraintNodeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintNodeData.InnerSingleton;
}
// End ScriptStruct FConstraintNodeData

// Begin ScriptStruct FAnimationHierarchy
static_assert(std::is_polymorphic<FAnimationHierarchy>() == std::is_polymorphic<FNodeHierarchyWithUserData>(), "USTRUCT FAnimationHierarchy cannot be polymorphic unless super FNodeHierarchyWithUserData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationHierarchy;
class UScriptStruct* FAnimationHierarchy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationHierarchy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationHierarchy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationHierarchy, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("AnimationHierarchy"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationHierarchy.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FAnimationHierarchy>()
{
	return FAnimationHierarchy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationHierarchy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/AnimationHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/AnimationHierarchy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationHierarchy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintNodeData, METADATA_PARAMS(0, nullptr) }; // 3407536397
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationHierarchy, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserData_MetaData), NewProp_UserData_MetaData) }; // 3407536397
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::NewProp_UserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::NewProp_UserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FNodeHierarchyWithUserData,
	&NewStructOps,
	"AnimationHierarchy",
	Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::PropPointers),
	sizeof(FAnimationHierarchy),
	alignof(FAnimationHierarchy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationHierarchy()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationHierarchy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationHierarchy.InnerSingleton, Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationHierarchy.InnerSingleton;
}
// End ScriptStruct FAnimationHierarchy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AnimationHierarchy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConstraintNodeData::StaticStruct, Z_Construct_UScriptStruct_FConstraintNodeData_Statics::NewStructOps, TEXT("ConstraintNodeData"), &Z_Registration_Info_UScriptStruct_ConstraintNodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintNodeData), 3407536397U) },
		{ FAnimationHierarchy::StaticStruct, Z_Construct_UScriptStruct_FAnimationHierarchy_Statics::NewStructOps, TEXT("AnimationHierarchy"), &Z_Registration_Info_UScriptStruct_AnimationHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationHierarchy), 4118446741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AnimationHierarchy_h_293959976(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AnimationHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AnimationHierarchy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
