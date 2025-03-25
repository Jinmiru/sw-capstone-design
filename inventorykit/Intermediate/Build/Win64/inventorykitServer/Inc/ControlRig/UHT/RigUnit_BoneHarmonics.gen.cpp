// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_BoneHarmonics() {}

// Begin Cross Module References
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_BoneHarmonics_BoneTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget;
class UScriptStruct* FRigUnit_BoneHarmonics_BoneTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BoneHarmonics_BoneTarget"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BoneHarmonics_BoneTarget>()
{
	return FRigUnit_BoneHarmonics_BoneTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the bone to drive\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The name of the bone to drive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The ratio of where the bone sits within the harmonics system.\n\x09 * Valid values reach from 0.0 to 1.0\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The ratio of where the bone sits within the harmonics system.\nValid values reach from 0.0 to 1.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BoneHarmonics_BoneTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics_BoneTarget, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics_BoneTarget, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Ratio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_BoneHarmonics_BoneTarget",
	Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::PropPointers),
	sizeof(FRigUnit_BoneHarmonics_BoneTarget),
	alignof(FRigUnit_BoneHarmonics_BoneTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.InnerSingleton;
}
// End ScriptStruct FRigUnit_BoneHarmonics_BoneTarget

// Begin ScriptStruct FRigUnit_Harmonics_TargetItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem;
class UScriptStruct* FRigUnit_Harmonics_TargetItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Harmonics_TargetItem"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Harmonics_TargetItem>()
{
	return FRigUnit_Harmonics_TargetItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the item to drive\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The name of the item to drive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The ratio of where the item sits within the harmonics system.\n\x09 * Valid values reach from 0.0 to 1.0\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The ratio of where the item sits within the harmonics system.\nValid values reach from 0.0 to 1.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Harmonics_TargetItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Harmonics_TargetItem, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Harmonics_TargetItem, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Ratio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_Harmonics_TargetItem",
	Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::PropPointers),
	sizeof(FRigUnit_Harmonics_TargetItem),
	alignof(FRigUnit_Harmonics_TargetItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.InnerSingleton;
}
// End ScriptStruct FRigUnit_Harmonics_TargetItem

// Begin ScriptStruct FRigUnit_BoneHarmonics_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData;
class UScriptStruct* FRigUnit_BoneHarmonics_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BoneHarmonics_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BoneHarmonics_WorkData>()
{
	return FRigUnit_BoneHarmonics_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BoneHarmonics_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedItems_MetaData), NewProp_CachedItems_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_WaveTime = { "WaveTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics_WorkData, WaveTime), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveTime_MetaData), NewProp_WaveTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_WaveTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_BoneHarmonics_WorkData",
	Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::PropPointers),
	sizeof(FRigUnit_BoneHarmonics_WorkData),
	alignof(FRigUnit_BoneHarmonics_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_BoneHarmonics_WorkData

// Begin ScriptStruct FRigUnit_BoneHarmonics
static_assert(std::is_polymorphic<FRigUnit_BoneHarmonics>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_BoneHarmonics cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics;
class UScriptStruct* FRigUnit_BoneHarmonics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BoneHarmonics"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_BoneHarmonics_Execute;
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("Bones"), TEXT("TArray<FRigUnit_BoneHarmonics_BoneTarget>"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("WaveSpeed"), TEXT("FVector"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("WaveFrequency"), TEXT("FVector"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("WaveAmplitude"), TEXT("FVector"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("WaveOffset"), TEXT("FVector"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("WaveNoise"), TEXT("FVector"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("WaveEase"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("WaveMinimum"), TEXT("float"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("WaveMaximum"), TEXT("float"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("RotationOrder"), TEXT("EEulerRotationOrder"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_BoneHarmonics_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_BoneHarmonics_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_BoneHarmonics::Execute"), &FRigUnit_BoneHarmonics::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.OuterSingleton, Arguments_FRigUnit_BoneHarmonics_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BoneHarmonics>()
{
	return FRigUnit_BoneHarmonics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Performs point based simulation\n */" },
		{ "Deprecated", "4.250000" },
		{ "DisplayName", "Harmonics" },
		{ "Keywords", "Sin,Wave" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "Performs point based simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The bones to drive. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The bones to drive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveSpeed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveFrequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveAmplitude_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The amplitude in degrees per axis */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The amplitude in degrees per axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveNoise_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveEase_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveFrequency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveAmplitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveNoise;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WaveEase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WaveEase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveMinimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveMaximum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BoneHarmonics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget, METADATA_PARAMS(0, nullptr) }; // 2656383067
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bones_MetaData), NewProp_Bones_MetaData) }; // 2656383067
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveSpeed = { "WaveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveSpeed_MetaData), NewProp_WaveSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveFrequency = { "WaveFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveFrequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveFrequency_MetaData), NewProp_WaveFrequency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveAmplitude = { "WaveAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveAmplitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveAmplitude_MetaData), NewProp_WaveAmplitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveOffset = { "WaveOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveOffset_MetaData), NewProp_WaveOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveNoise = { "WaveNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveNoise), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveNoise_MetaData), NewProp_WaveNoise_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase = { "WaveEase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveEase), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveEase_MetaData), NewProp_WaveEase_MetaData) }; // 3483435321
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMinimum = { "WaveMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveMinimum_MetaData), NewProp_WaveMinimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMaximum = { "WaveMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveMaximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveMaximum_MetaData), NewProp_WaveMaximum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrder_MetaData), NewProp_RotationOrder_MetaData) }; // 1031303920
void Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_BoneHarmonics*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_BoneHarmonics), &Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WorkData), Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 3269594909
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMaximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_BoneHarmonics",
	Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::PropPointers),
	sizeof(FRigUnit_BoneHarmonics),
	alignof(FRigUnit_BoneHarmonics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.InnerSingleton;
}
void FRigUnit_BoneHarmonics::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_BoneHarmonics::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_BoneHarmonics_BoneTarget> Bones_0_Array(Bones);
	StaticExecute(
		InExecuteContext,
		Bones_0_Array,
		WaveSpeed,
		WaveFrequency,
		WaveAmplitude,
		WaveOffset,
		WaveNoise,
		WaveEase,
		WaveMinimum,
		WaveMaximum,
		RotationOrder,
		bPropagateToChildren,
		WorkData
	);
}
// End ScriptStruct FRigUnit_BoneHarmonics

// Begin ScriptStruct FRigUnit_ItemHarmonics
static_assert(std::is_polymorphic<FRigUnit_ItemHarmonics>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ItemHarmonics cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics;
class UScriptStruct* FRigUnit_ItemHarmonics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemHarmonics"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemHarmonics_Execute;
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FRigUnit_Harmonics_TargetItem>"));
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("WaveSpeed"), TEXT("FVector"));
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("WaveFrequency"), TEXT("FVector"));
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("WaveAmplitude"), TEXT("FVector"));
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("WaveOffset"), TEXT("FVector"));
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("WaveNoise"), TEXT("FVector"));
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("WaveEase"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("WaveMinimum"), TEXT("float"));
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("WaveMaximum"), TEXT("float"));
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("RotationOrder"), TEXT("EEulerRotationOrder"));
		Arguments_FRigUnit_ItemHarmonics_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_BoneHarmonics_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemHarmonics::Execute"), &FRigUnit_ItemHarmonics::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.OuterSingleton, Arguments_FRigUnit_ItemHarmonics_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemHarmonics>()
{
	return FRigUnit_ItemHarmonics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n * Drives an array of items through a harmonics spectrum\n */" },
		{ "DisplayName", "Harmonics" },
		{ "Keywords", "Sin,Wave" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "Drives an array of items through a harmonics spectrum" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The items to drive. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The items to drive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveSpeed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveFrequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveAmplitude_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The amplitude in degrees per axis */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The amplitude in degrees per axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveNoise_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveEase_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveFrequency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveAmplitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveNoise;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WaveEase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WaveEase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveMinimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveMaximum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemHarmonics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem, METADATA_PARAMS(0, nullptr) }; // 1780826711
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targets_MetaData), NewProp_Targets_MetaData) }; // 1780826711
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveSpeed = { "WaveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveSpeed_MetaData), NewProp_WaveSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveFrequency = { "WaveFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveFrequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveFrequency_MetaData), NewProp_WaveFrequency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveAmplitude = { "WaveAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveAmplitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveAmplitude_MetaData), NewProp_WaveAmplitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveOffset = { "WaveOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveOffset_MetaData), NewProp_WaveOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveNoise = { "WaveNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveNoise), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveNoise_MetaData), NewProp_WaveNoise_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase = { "WaveEase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveEase), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveEase_MetaData), NewProp_WaveEase_MetaData) }; // 3483435321
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMinimum = { "WaveMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveMinimum_MetaData), NewProp_WaveMinimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMaximum = { "WaveMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveMaximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveMaximum_MetaData), NewProp_WaveMaximum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrder_MetaData), NewProp_RotationOrder_MetaData) }; // 1031303920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WorkData), Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 3269594909
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMaximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_ItemHarmonics",
	Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::PropPointers),
	sizeof(FRigUnit_ItemHarmonics),
	alignof(FRigUnit_ItemHarmonics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.InnerSingleton;
}
void FRigUnit_ItemHarmonics::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ItemHarmonics::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_Harmonics_TargetItem> Targets_0_Array(Targets);
	StaticExecute(
		InExecuteContext,
		Targets_0_Array,
		WaveSpeed,
		WaveFrequency,
		WaveAmplitude,
		WaveOffset,
		WaveNoise,
		WaveEase,
		WaveMinimum,
		WaveMaximum,
		RotationOrder,
		WorkData
	);
}
// End ScriptStruct FRigUnit_ItemHarmonics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_BoneHarmonics_BoneTarget::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewStructOps, TEXT("RigUnit_BoneHarmonics_BoneTarget"), &Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BoneHarmonics_BoneTarget), 2656383067U) },
		{ FRigUnit_Harmonics_TargetItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewStructOps, TEXT("RigUnit_Harmonics_TargetItem"), &Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Harmonics_TargetItem), 1780826711U) },
		{ FRigUnit_BoneHarmonics_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewStructOps, TEXT("RigUnit_BoneHarmonics_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BoneHarmonics_WorkData), 3269594909U) },
		{ FRigUnit_BoneHarmonics::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewStructOps, TEXT("RigUnit_BoneHarmonics"), &Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BoneHarmonics), 317360378U) },
		{ FRigUnit_ItemHarmonics::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewStructOps, TEXT("RigUnit_ItemHarmonics"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemHarmonics), 3088723412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_2228659456(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
