// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "Runtime/AnimationCore/Public/CCDIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_CCDIK() {}

// Begin Cross Module References
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCCDIKChainLink();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_CCDIK_RotationLimit
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit;
class UScriptStruct* FRigUnit_CCDIK_RotationLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIK_RotationLimit"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIK_RotationLimit>()
{
	return FRigUnit_CCDIK_RotationLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the bone to apply the rotation limit to.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The name of the bone to apply the rotation limit to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The limit of the rotation in degrees.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The limit of the rotation in degrees." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIK_RotationLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK_RotationLimit, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK_RotationLimit, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_CCDIK_RotationLimit",
	Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::PropPointers),
	sizeof(FRigUnit_CCDIK_RotationLimit),
	alignof(FRigUnit_CCDIK_RotationLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.InnerSingleton;
}
// End ScriptStruct FRigUnit_CCDIK_RotationLimit

// Begin ScriptStruct FRigUnit_CCDIK_RotationLimitPerItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem;
class UScriptStruct* FRigUnit_CCDIK_RotationLimitPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIK_RotationLimitPerItem"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIK_RotationLimitPerItem>()
{
	return FRigUnit_CCDIK_RotationLimitPerItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the item to apply the rotation limit to.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The name of the item to apply the rotation limit to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The limit of the rotation in degrees.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The limit of the rotation in degrees." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIK_RotationLimitPerItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK_RotationLimitPerItem, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK_RotationLimitPerItem, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_CCDIK_RotationLimitPerItem",
	Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::PropPointers),
	sizeof(FRigUnit_CCDIK_RotationLimitPerItem),
	alignof(FRigUnit_CCDIK_RotationLimitPerItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.InnerSingleton;
}
// End ScriptStruct FRigUnit_CCDIK_RotationLimitPerItem

// Begin ScriptStruct FRigUnit_CCDIK_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData;
class UScriptStruct* FRigUnit_CCDIK_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIK_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIK_WorkData>()
{
	return FRigUnit_CCDIK_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chain_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimitIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimitsPerItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedEffector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Chain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Chain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RotationLimitIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimitIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationLimitsPerItem_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimitsPerItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedEffector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIK_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain_Inner = { "Chain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCCDIKChainLink, METADATA_PARAMS(0, nullptr) }; // 2813682736
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain = { "Chain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK_WorkData, Chain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chain_MetaData), NewProp_Chain_MetaData) }; // 2813682736
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedItems_MetaData), NewProp_CachedItems_MetaData) }; // 2782416853
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex_Inner = { "RotationLimitIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex = { "RotationLimitIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK_WorkData, RotationLimitIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationLimitIndex_MetaData), NewProp_RotationLimitIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem_Inner = { "RotationLimitsPerItem", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem = { "RotationLimitsPerItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK_WorkData, RotationLimitsPerItem), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationLimitsPerItem_MetaData), NewProp_RotationLimitsPerItem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedEffector = { "CachedEffector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK_WorkData, CachedEffector), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedEffector_MetaData), NewProp_CachedEffector_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedEffector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_CCDIK_WorkData",
	Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::PropPointers),
	sizeof(FRigUnit_CCDIK_WorkData),
	alignof(FRigUnit_CCDIK_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_CCDIK_WorkData

// Begin ScriptStruct FRigUnit_CCDIK
static_assert(std::is_polymorphic<FRigUnit_CCDIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_CCDIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIK;
class UScriptStruct* FRigUnit_CCDIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIK, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CCDIK_Execute;
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("StartBone"), TEXT("FName"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("EffectorBone"), TEXT("FName"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("EffectorTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("Precision"), TEXT("float"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("MaxIterations"), TEXT("int32"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("bStartFromTail"), TEXT("bool"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("BaseRotationLimit"), TEXT("float"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("RotationLimits"), TEXT("TArray<FRigUnit_CCDIK_RotationLimit>"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_CCDIK_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CCDIK::Execute"), &FRigUnit_CCDIK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.OuterSingleton, Arguments_FRigUnit_CCDIK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIK>()
{
	return FRigUnit_CCDIK::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The CCID solver can solve N-Bone chains using \n * the Cyclic Coordinate Descent Inverse Kinematics algorithm.\n * For now this node supports single effector chains only.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "CCDIK" },
		{ "Keywords", "N-Bone,IK" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The CCID solver can solve N-Bone chains using\nthe Cyclic Coordinate Descent Inverse Kinematics algorithm.\nFor now this node supports single effector chains only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The first bone in the chain to solve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The first bone in the chain to solve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The last bone in the chain to solve - the effector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The last bone in the chain to solve - the effector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector in global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The transform of the effector in global space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The precision to use for the fabrik solver\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromTail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the direction of the solvers is flipped.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true the direction of the solvers is flipped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotationLimit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The general rotation limit to be applied to bones\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The general rotation limit to be applied to bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimits_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines the limits of rotation per bone.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "Defines the limits of rotation per bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EffectorBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static void NewProp_bStartFromTail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromTail;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRotationLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimits;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIK>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK, StartBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartBone_MetaData), NewProp_StartBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorBone = { "EffectorBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK, EffectorBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorBone_MetaData), NewProp_EffectorBone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorTransform_MetaData), NewProp_EffectorTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK, Precision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Precision_MetaData), NewProp_Precision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail_SetBit(void* Obj)
{
	((FRigUnit_CCDIK*)Obj)->bStartFromTail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail = { "bStartFromTail", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CCDIK), &Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartFromTail_MetaData), NewProp_bStartFromTail_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_BaseRotationLimit = { "BaseRotationLimit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK, BaseRotationLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRotationLimit_MetaData), NewProp_BaseRotationLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits_Inner = { "RotationLimits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit, METADATA_PARAMS(0, nullptr) }; // 3725215025
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits = { "RotationLimits", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK, RotationLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationLimits_MetaData), NewProp_RotationLimits_MetaData) }; // 3725215025
void Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_CCDIK*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CCDIK), &Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIK, WorkData), Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 383826024
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_StartBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Precision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_BaseRotationLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_CCDIK",
	Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::PropPointers),
	sizeof(FRigUnit_CCDIK),
	alignof(FRigUnit_CCDIK),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.InnerSingleton;
}
void FRigUnit_CCDIK::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CCDIK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_CCDIK_RotationLimit> RotationLimits_8_Array(RotationLimits);
	StaticExecute(
		InExecuteContext,
		StartBone,
		EffectorBone,
		EffectorTransform,
		Precision,
		Weight,
		MaxIterations,
		bStartFromTail,
		BaseRotationLimit,
		RotationLimits_8_Array,
		bPropagateToChildren,
		WorkData
	);
}
// End ScriptStruct FRigUnit_CCDIK

// Begin ScriptStruct FRigUnit_CCDIKPerItem
static_assert(std::is_polymorphic<FRigUnit_CCDIKPerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_CCDIKPerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem;
class UScriptStruct* FRigUnit_CCDIKPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIKPerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CCDIKPerItem_Execute;
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("EffectorTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("Precision"), TEXT("float"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("MaxIterations"), TEXT("int32"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("bStartFromTail"), TEXT("bool"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("BaseRotationLimit"), TEXT("float"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("RotationLimits"), TEXT("TArray<FRigUnit_CCDIK_RotationLimitPerItem>"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_CCDIK_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CCDIKPerItem::Execute"), &FRigUnit_CCDIKPerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.OuterSingleton, Arguments_FRigUnit_CCDIKPerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIKPerItem>()
{
	return FRigUnit_CCDIKPerItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The CCID solver can solve N-Bone chains using \n * the Cyclic Coordinate Descent Inverse Kinematics algorithm.\n * For now this node supports single effector chains only.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "CCDIK" },
		{ "Keywords", "N-Bone,IK" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The CCID solver can solve N-Bone chains using\nthe Cyclic Coordinate Descent Inverse Kinematics algorithm.\nFor now this node supports single effector chains only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The chain to use\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The chain to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector in global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The transform of the effector in global space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The precision to use for the fabrik solver\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromTail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the direction of the solvers is flipped.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true the direction of the solvers is flipped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotationLimit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The general rotation limit to be applied to bones\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The general rotation limit to be applied to bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimits_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines the limits of rotation per bone.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "Defines the limits of rotation per bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static void NewProp_bStartFromTail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromTail;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRotationLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimits;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIKPerItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorTransform_MetaData), NewProp_EffectorTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, Precision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Precision_MetaData), NewProp_Precision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail_SetBit(void* Obj)
{
	((FRigUnit_CCDIKPerItem*)Obj)->bStartFromTail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail = { "bStartFromTail", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CCDIKPerItem), &Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartFromTail_MetaData), NewProp_bStartFromTail_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_BaseRotationLimit = { "BaseRotationLimit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, BaseRotationLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRotationLimit_MetaData), NewProp_BaseRotationLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits_Inner = { "RotationLimits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem, METADATA_PARAMS(0, nullptr) }; // 466532815
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits = { "RotationLimits", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, RotationLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationLimits_MetaData), NewProp_RotationLimits_MetaData) }; // 466532815
void Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_CCDIKPerItem*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CCDIKPerItem), &Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, WorkData), Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 383826024
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_EffectorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Precision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_BaseRotationLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_CCDIKPerItem",
	Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::PropPointers),
	sizeof(FRigUnit_CCDIKPerItem),
	alignof(FRigUnit_CCDIKPerItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.InnerSingleton;
}
void FRigUnit_CCDIKPerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CCDIKPerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits_7_Array(RotationLimits);
	StaticExecute(
		InExecuteContext,
		Items,
		EffectorTransform,
		Precision,
		Weight,
		MaxIterations,
		bStartFromTail,
		BaseRotationLimit,
		RotationLimits_7_Array,
		bPropagateToChildren,
		WorkData
	);
}
// End ScriptStruct FRigUnit_CCDIKPerItem

// Begin ScriptStruct FRigUnit_CCDIKItemArray
static_assert(std::is_polymorphic<FRigUnit_CCDIKItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_CCDIKItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray;
class UScriptStruct* FRigUnit_CCDIKItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIKItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CCDIKItemArray_Execute;
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("EffectorTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("Precision"), TEXT("float"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("MaxIterations"), TEXT("int32"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("bStartFromTail"), TEXT("bool"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("BaseRotationLimit"), TEXT("float"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("RotationLimits"), TEXT("TArray<FRigUnit_CCDIK_RotationLimitPerItem>"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_CCDIK_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CCDIKItemArray::Execute"), &FRigUnit_CCDIKItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.OuterSingleton, Arguments_FRigUnit_CCDIKItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIKItemArray>()
{
	return FRigUnit_CCDIKItemArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The CCID solver can solve N-Bone chains using \n * the Cyclic Coordinate Descent Inverse Kinematics algorithm.\n * For now this node supports single effector chains only.\n */" },
		{ "DisplayName", "CCDIK" },
		{ "Keywords", "N-Bone,IK" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "NodeColor", "0 1 1" },
		{ "ToolTip", "The CCID solver can solve N-Bone chains using\nthe Cyclic Coordinate Descent Inverse Kinematics algorithm.\nFor now this node supports single effector chains only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The chain to use\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The chain to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector in global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The transform of the effector in global space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The precision to use for the fabrik solver\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromTail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the direction of the solvers is flipped.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true the direction of the solvers is flipped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotationLimit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The general rotation limit to be applied to bones\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The general rotation limit to be applied to bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimits_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines the limits of rotation per bone.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "Defines the limits of rotation per bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static void NewProp_bStartFromTail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromTail;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRotationLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimits;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIKItemArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorTransform_MetaData), NewProp_EffectorTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, Precision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Precision_MetaData), NewProp_Precision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail_SetBit(void* Obj)
{
	((FRigUnit_CCDIKItemArray*)Obj)->bStartFromTail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail = { "bStartFromTail", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CCDIKItemArray), &Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartFromTail_MetaData), NewProp_bStartFromTail_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_BaseRotationLimit = { "BaseRotationLimit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, BaseRotationLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseRotationLimit_MetaData), NewProp_BaseRotationLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits_Inner = { "RotationLimits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem, METADATA_PARAMS(0, nullptr) }; // 466532815
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits = { "RotationLimits", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, RotationLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationLimits_MetaData), NewProp_RotationLimits_MetaData) }; // 466532815
void Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_CCDIKItemArray*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CCDIKItemArray), &Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, WorkData), Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 383826024
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_EffectorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Precision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_BaseRotationLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_CCDIKItemArray",
	Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::PropPointers),
	sizeof(FRigUnit_CCDIKItemArray),
	alignof(FRigUnit_CCDIKItemArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.InnerSingleton;
}
void FRigUnit_CCDIKItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CCDIKItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits_7_Array(RotationLimits);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		EffectorTransform,
		Precision,
		Weight,
		MaxIterations,
		bStartFromTail,
		BaseRotationLimit,
		RotationLimits_7_Array,
		bPropagateToChildren,
		WorkData
	);
}
// End ScriptStruct FRigUnit_CCDIKItemArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_CCDIK_RotationLimit::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewStructOps, TEXT("RigUnit_CCDIK_RotationLimit"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIK_RotationLimit), 3725215025U) },
		{ FRigUnit_CCDIK_RotationLimitPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewStructOps, TEXT("RigUnit_CCDIK_RotationLimitPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIK_RotationLimitPerItem), 466532815U) },
		{ FRigUnit_CCDIK_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewStructOps, TEXT("RigUnit_CCDIK_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIK_WorkData), 383826024U) },
		{ FRigUnit_CCDIK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewStructOps, TEXT("RigUnit_CCDIK"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIK), 3463579866U) },
		{ FRigUnit_CCDIKPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewStructOps, TEXT("RigUnit_CCDIKPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIKPerItem), 2851562821U) },
		{ FRigUnit_CCDIKItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewStructOps, TEXT("RigUnit_CCDIKItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIKItemArray), 3364696128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_3913481988(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
