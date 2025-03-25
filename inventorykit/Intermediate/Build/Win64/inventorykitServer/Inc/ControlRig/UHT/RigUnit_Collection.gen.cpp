// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Execution/RigUnit_Collection.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Collection() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionChain();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionChildren();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionCount();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionDifference();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionItems();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionLoop();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionReverse();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionUnion();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_CollectionBase
static_assert(std::is_polymorphic<FRigUnit_CollectionBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_CollectionBase cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionBase;
class UScriptStruct* FRigUnit_CollectionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionBase>()
{
	return FRigUnit_CollectionBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "NodeColor", "0.4627450108528137 1.0 0.3294120132923126" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_CollectionBase",
	nullptr,
	0,
	sizeof(FRigUnit_CollectionBase),
	alignof(FRigUnit_CollectionBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionBase.InnerSingleton;
}
// End ScriptStruct FRigUnit_CollectionBase

// Begin ScriptStruct FRigUnit_CollectionBaseMutable
static_assert(std::is_polymorphic<FRigUnit_CollectionBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_CollectionBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionBaseMutable;
class UScriptStruct* FRigUnit_CollectionBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionBaseMutable>()
{
	return FRigUnit_CollectionBaseMutable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "NodeColor", "0.4627450108528137 1.0 0.3294120132923126" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionBaseMutable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_CollectionBaseMutable",
	nullptr,
	0,
	sizeof(FRigUnit_CollectionBaseMutable),
	alignof(FRigUnit_CollectionBaseMutable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionBaseMutable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionBaseMutable.InnerSingleton;
}
// End ScriptStruct FRigUnit_CollectionBaseMutable

// Begin ScriptStruct FRigUnit_CollectionChain
static_assert(std::is_polymorphic<FRigUnit_CollectionChain>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionChain cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionChain;
class UScriptStruct* FRigUnit_CollectionChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionChain, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionChain"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionChain_Execute;
		Arguments_FRigUnit_CollectionChain_Execute.Emplace(TEXT("FirstItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_CollectionChain_Execute.Emplace(TEXT("LastItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_CollectionChain_Execute.Emplace(TEXT("Reverse"), TEXT("bool"));
		Arguments_FRigUnit_CollectionChain_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionChain::Execute"), &FRigUnit_CollectionChain::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionChain.OuterSingleton, Arguments_FRigUnit_CollectionChain_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionChain.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionChain>()
{
	return FRigUnit_CollectionChain::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Creates a collection based on a first and last item within a chain.\n * Chains can refer to bone chains or chains within a control hierarchy.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Item Chain" },
		{ "Keywords", "Bone,Joint,Collection" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Creates a collection based on a first and last item within a chain.\nChains can refer to bone chains or chains within a control hierarchy." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reverse_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastItem;
	static void NewProp_Reverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Reverse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionChain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewProp_FirstItem = { "FirstItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChain, FirstItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstItem_MetaData), NewProp_FirstItem_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewProp_LastItem = { "LastItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChain, LastItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastItem_MetaData), NewProp_LastItem_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewProp_Reverse_SetBit(void* Obj)
{
	((FRigUnit_CollectionChain*)Obj)->Reverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionChain), &Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewProp_Reverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reverse_MetaData), NewProp_Reverse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChain, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewProp_FirstItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewProp_LastItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewProp_Reverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionChain",
	Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::PropPointers),
	sizeof(FRigUnit_CollectionChain),
	alignof(FRigUnit_CollectionChain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionChain()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionChain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionChain.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionChain.InnerSingleton;
}
void FRigUnit_CollectionChain::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionChain::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		FirstItem,
		LastItem,
		Reverse,
		Collection
	);
}
// End ScriptStruct FRigUnit_CollectionChain

// Begin ScriptStruct FRigUnit_CollectionChainArray
static_assert(std::is_polymorphic<FRigUnit_CollectionChainArray>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionChainArray cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionChainArray;
class UScriptStruct* FRigUnit_CollectionChainArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionChainArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionChainArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionChainArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionChainArray_Execute;
		Arguments_FRigUnit_CollectionChainArray_Execute.Emplace(TEXT("FirstItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_CollectionChainArray_Execute.Emplace(TEXT("LastItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_CollectionChainArray_Execute.Emplace(TEXT("Reverse"), TEXT("bool"));
		Arguments_FRigUnit_CollectionChainArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionChainArray::Execute"), &FRigUnit_CollectionChainArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionChainArray.OuterSingleton, Arguments_FRigUnit_CollectionChainArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionChainArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionChainArray>()
{
	return FRigUnit_CollectionChainArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Creates an item array based on a first and last item within a chain.\n* Chains can refer to bone chains or chains within a control hierarchy.\n*/" },
		{ "Deprecated", "5.4" },
		{ "DisplayName", "Item Chain" },
		{ "Keywords", "Bone,Joint,Collection" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Creates an item array based on a first and last item within a chain.\nChains can refer to bone chains or chains within a control hierarchy." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reverse_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastItem;
	static void NewProp_Reverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Reverse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionChainArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_FirstItem = { "FirstItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChainArray, FirstItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstItem_MetaData), NewProp_FirstItem_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_LastItem = { "LastItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChainArray, LastItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastItem_MetaData), NewProp_LastItem_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_Reverse_SetBit(void* Obj)
{
	((FRigUnit_CollectionChainArray*)Obj)->Reverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionChainArray), &Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_Reverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reverse_MetaData), NewProp_Reverse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChainArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_FirstItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_LastItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_Reverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionChainArray",
	Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::PropPointers),
	sizeof(FRigUnit_CollectionChainArray),
	alignof(FRigUnit_CollectionChainArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionChainArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionChainArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionChainArray.InnerSingleton;
}
void FRigUnit_CollectionChainArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionChainArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		FirstItem,
		LastItem,
		Reverse,
		Items
	);
}
// End ScriptStruct FRigUnit_CollectionChainArray

// Begin ScriptStruct FRigUnit_CollectionNameSearch
static_assert(std::is_polymorphic<FRigUnit_CollectionNameSearch>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionNameSearch cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearch;
class UScriptStruct* FRigUnit_CollectionNameSearch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionNameSearch"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionNameSearch_Execute;
		Arguments_FRigUnit_CollectionNameSearch_Execute.Emplace(TEXT("PartialName"), TEXT("FName"));
		Arguments_FRigUnit_CollectionNameSearch_Execute.Emplace(TEXT("TypeToSearch"), TEXT("ERigElementType"));
		Arguments_FRigUnit_CollectionNameSearch_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionNameSearch::Execute"), &FRigUnit_CollectionNameSearch::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearch.OuterSingleton, Arguments_FRigUnit_CollectionNameSearch_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearch.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionNameSearch>()
{
	return FRigUnit_CollectionNameSearch::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Creates a collection based on a name search.\n * The name search is case sensitive.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Item Name Search" },
		{ "Keywords", "Bone,Joint,Collection,Filter" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Creates a collection based on a name search.\nThe name search is case sensitive." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartialName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeToSearch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PartialName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeToSearch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeToSearch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionNameSearch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::NewProp_PartialName = { "PartialName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionNameSearch, PartialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartialName_MetaData), NewProp_PartialName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::NewProp_TypeToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::NewProp_TypeToSearch = { "TypeToSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionNameSearch, TypeToSearch), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeToSearch_MetaData), NewProp_TypeToSearch_MetaData) }; // 1289171826
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionNameSearch, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::NewProp_PartialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::NewProp_TypeToSearch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::NewProp_TypeToSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionNameSearch",
	Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::PropPointers),
	sizeof(FRigUnit_CollectionNameSearch),
	alignof(FRigUnit_CollectionNameSearch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearch.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearch.InnerSingleton;
}
void FRigUnit_CollectionNameSearch::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionNameSearch::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		PartialName,
		TypeToSearch,
		Collection
	);
}
// End ScriptStruct FRigUnit_CollectionNameSearch

// Begin ScriptStruct FRigUnit_CollectionNameSearchArray
static_assert(std::is_polymorphic<FRigUnit_CollectionNameSearchArray>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionNameSearchArray cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearchArray;
class UScriptStruct* FRigUnit_CollectionNameSearchArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearchArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearchArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionNameSearchArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionNameSearchArray_Execute;
		Arguments_FRigUnit_CollectionNameSearchArray_Execute.Emplace(TEXT("PartialName"), TEXT("FName"));
		Arguments_FRigUnit_CollectionNameSearchArray_Execute.Emplace(TEXT("TypeToSearch"), TEXT("ERigElementType"));
		Arguments_FRigUnit_CollectionNameSearchArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionNameSearchArray::Execute"), &FRigUnit_CollectionNameSearchArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearchArray.OuterSingleton, Arguments_FRigUnit_CollectionNameSearchArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearchArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionNameSearchArray>()
{
	return FRigUnit_CollectionNameSearchArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Creates an item array based on a name search.\n* The name search is case sensitive.\n*/" },
		{ "DisplayName", "Item Name Search" },
		{ "Keywords", "Bone,Joint,Collection,Filter" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Creates an item array based on a name search.\nThe name search is case sensitive." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartialName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeToSearch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PartialName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeToSearch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeToSearch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionNameSearchArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewProp_PartialName = { "PartialName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionNameSearchArray, PartialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartialName_MetaData), NewProp_PartialName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewProp_TypeToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewProp_TypeToSearch = { "TypeToSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionNameSearchArray, TypeToSearch), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeToSearch_MetaData), NewProp_TypeToSearch_MetaData) }; // 1289171826
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionNameSearchArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewProp_PartialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewProp_TypeToSearch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewProp_TypeToSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionNameSearchArray",
	Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::PropPointers),
	sizeof(FRigUnit_CollectionNameSearchArray),
	alignof(FRigUnit_CollectionNameSearchArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearchArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearchArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearchArray.InnerSingleton;
}
void FRigUnit_CollectionNameSearchArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionNameSearchArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		PartialName,
		TypeToSearch,
		Items
	);
}
// End ScriptStruct FRigUnit_CollectionNameSearchArray

// Begin ScriptStruct FRigUnit_CollectionChildren
static_assert(std::is_polymorphic<FRigUnit_CollectionChildren>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionChildren cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildren;
class UScriptStruct* FRigUnit_CollectionChildren::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildren.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildren.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionChildren, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionChildren"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionChildren_Execute;
		Arguments_FRigUnit_CollectionChildren_Execute.Emplace(TEXT("Parent"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_CollectionChildren_Execute.Emplace(TEXT("bIncludeParent"), TEXT("bool"));
		Arguments_FRigUnit_CollectionChildren_Execute.Emplace(TEXT("bRecursive"), TEXT("bool"));
		Arguments_FRigUnit_CollectionChildren_Execute.Emplace(TEXT("TypeToSearch"), TEXT("ERigElementType"));
		Arguments_FRigUnit_CollectionChildren_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionChildren::Execute"), &FRigUnit_CollectionChildren::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildren.OuterSingleton, Arguments_FRigUnit_CollectionChildren_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildren.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionChildren>()
{
	return FRigUnit_CollectionChildren::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Creates a collection based on the direct or recursive children\n * of a provided parent item. Returns an empty collection for an invalid parent item.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Get Children" },
		{ "Keywords", "Bone,Joint,Collection,Filter,Parent" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Creates a collection based on the direct or recursive children\nof a provided parent item. Returns an empty collection for an invalid parent item." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeParent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeToSearch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
	static void NewProp_bIncludeParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeParent;
	static void NewProp_bRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeToSearch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeToSearch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionChildren>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChildren, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_bIncludeParent_SetBit(void* Obj)
{
	((FRigUnit_CollectionChildren*)Obj)->bIncludeParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_bIncludeParent = { "bIncludeParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionChildren), &Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_bIncludeParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeParent_MetaData), NewProp_bIncludeParent_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_bRecursive_SetBit(void* Obj)
{
	((FRigUnit_CollectionChildren*)Obj)->bRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionChildren), &Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecursive_MetaData), NewProp_bRecursive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_TypeToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_TypeToSearch = { "TypeToSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChildren, TypeToSearch), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeToSearch_MetaData), NewProp_TypeToSearch_MetaData) }; // 1289171826
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChildren, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_bIncludeParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_bRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_TypeToSearch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_TypeToSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionChildren",
	Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::PropPointers),
	sizeof(FRigUnit_CollectionChildren),
	alignof(FRigUnit_CollectionChildren),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionChildren()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildren.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildren.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildren.InnerSingleton;
}
void FRigUnit_CollectionChildren::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionChildren::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Parent,
		bIncludeParent,
		bRecursive,
		TypeToSearch,
		Collection
	);
}
// End ScriptStruct FRigUnit_CollectionChildren

// Begin ScriptStruct FRigUnit_CollectionChildrenArray
static_assert(std::is_polymorphic<FRigUnit_CollectionChildrenArray>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionChildrenArray cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildrenArray;
class UScriptStruct* FRigUnit_CollectionChildrenArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildrenArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildrenArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionChildrenArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionChildrenArray_Execute;
		Arguments_FRigUnit_CollectionChildrenArray_Execute.Emplace(TEXT("Parent"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_CollectionChildrenArray_Execute.Emplace(TEXT("bIncludeParent"), TEXT("bool"));
		Arguments_FRigUnit_CollectionChildrenArray_Execute.Emplace(TEXT("bRecursive"), TEXT("bool"));
		Arguments_FRigUnit_CollectionChildrenArray_Execute.Emplace(TEXT("TypeToSearch"), TEXT("ERigElementType"));
		Arguments_FRigUnit_CollectionChildrenArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionChildrenArray::Execute"), &FRigUnit_CollectionChildrenArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildrenArray.OuterSingleton, Arguments_FRigUnit_CollectionChildrenArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildrenArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionChildrenArray>()
{
	return FRigUnit_CollectionChildrenArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n* Creates an item array based on the direct or recursive children\n* of a provided parent item. Returns an empty array for an invalid parent item.\n*/" },
		{ "DisplayName", "Get Children" },
		{ "Keywords", "Bone,Joint,Collection,Filter,Parent" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Creates an item array based on the direct or recursive children\nof a provided parent item. Returns an empty array for an invalid parent item." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeParent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeToSearch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
	static void NewProp_bIncludeParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeParent;
	static void NewProp_bRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeToSearch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeToSearch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionChildrenArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChildrenArray, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_bIncludeParent_SetBit(void* Obj)
{
	((FRigUnit_CollectionChildrenArray*)Obj)->bIncludeParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_bIncludeParent = { "bIncludeParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionChildrenArray), &Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_bIncludeParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeParent_MetaData), NewProp_bIncludeParent_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_bRecursive_SetBit(void* Obj)
{
	((FRigUnit_CollectionChildrenArray*)Obj)->bRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionChildrenArray), &Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecursive_MetaData), NewProp_bRecursive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_TypeToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_TypeToSearch = { "TypeToSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChildrenArray, TypeToSearch), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeToSearch_MetaData), NewProp_TypeToSearch_MetaData) }; // 1289171826
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionChildrenArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_bIncludeParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_bRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_TypeToSearch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_TypeToSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionChildrenArray",
	Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::PropPointers),
	sizeof(FRigUnit_CollectionChildrenArray),
	alignof(FRigUnit_CollectionChildrenArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildrenArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildrenArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildrenArray.InnerSingleton;
}
void FRigUnit_CollectionChildrenArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionChildrenArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Parent,
		bIncludeParent,
		bRecursive,
		TypeToSearch,
		Items
	);
}
// End ScriptStruct FRigUnit_CollectionChildrenArray

// Begin ScriptStruct FRigUnit_CollectionGetAll
static_assert(std::is_polymorphic<FRigUnit_CollectionGetAll>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionGetAll cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetAll;
class UScriptStruct* FRigUnit_CollectionGetAll::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetAll.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetAll.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionGetAll"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionGetAll_Execute;
		Arguments_FRigUnit_CollectionGetAll_Execute.Emplace(TEXT("TypeToSearch"), TEXT("ERigElementType"));
		Arguments_FRigUnit_CollectionGetAll_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionGetAll::Execute"), &FRigUnit_CollectionGetAll::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetAll.OuterSingleton, Arguments_FRigUnit_CollectionGetAll_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetAll.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionGetAll>()
{
	return FRigUnit_CollectionGetAll::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n* Creates an item array for all elements given the filter.\n*/" },
		{ "DisplayName", "Get All" },
		{ "Keywords", "Bone,Joint,Collection,Filter,Parent" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Creates an item array for all elements given the filter." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeToSearch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeToSearch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeToSearch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionGetAll>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::NewProp_TypeToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::NewProp_TypeToSearch = { "TypeToSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionGetAll, TypeToSearch), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeToSearch_MetaData), NewProp_TypeToSearch_MetaData) }; // 1289171826
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionGetAll, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::NewProp_TypeToSearch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::NewProp_TypeToSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionGetAll",
	Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::PropPointers),
	sizeof(FRigUnit_CollectionGetAll),
	alignof(FRigUnit_CollectionGetAll),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetAll.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetAll.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetAll.InnerSingleton;
}
void FRigUnit_CollectionGetAll::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionGetAll::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		TypeToSearch,
		Items
	);
}
// End ScriptStruct FRigUnit_CollectionGetAll

// Begin ScriptStruct FRigUnit_CollectionReplaceItems
static_assert(std::is_polymorphic<FRigUnit_CollectionReplaceItems>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionReplaceItems cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItems;
class UScriptStruct* FRigUnit_CollectionReplaceItems::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItems.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItems.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionReplaceItems"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionReplaceItems_Execute;
		Arguments_FRigUnit_CollectionReplaceItems_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionReplaceItems_Execute.Emplace(TEXT("Old"), TEXT("FName"));
		Arguments_FRigUnit_CollectionReplaceItems_Execute.Emplace(TEXT("New"), TEXT("FName"));
		Arguments_FRigUnit_CollectionReplaceItems_Execute.Emplace(TEXT("RemoveInvalidItems"), TEXT("bool"));
		Arguments_FRigUnit_CollectionReplaceItems_Execute.Emplace(TEXT("bAllowDuplicates"), TEXT("bool"));
		Arguments_FRigUnit_CollectionReplaceItems_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionReplaceItems::Execute"), &FRigUnit_CollectionReplaceItems::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItems.OuterSingleton, Arguments_FRigUnit_CollectionReplaceItems_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItems.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionReplaceItems>()
{
	return FRigUnit_CollectionReplaceItems::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Replaces all names within the collection\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Replace Items" },
		{ "Keywords", "Replace,Find,Collection" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Replaces all names within the collection" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveInvalidItems_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDuplicates_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Old;
	static const UECodeGen_Private::FNamePropertyParams NewProp_New;
	static void NewProp_RemoveInvalidItems_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveInvalidItems;
	static void NewProp_bAllowDuplicates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDuplicates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionReplaceItems>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionReplaceItems, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1637116294
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionReplaceItems, Old), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Old_MetaData), NewProp_Old_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionReplaceItems, New), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_New_MetaData), NewProp_New_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_RemoveInvalidItems_SetBit(void* Obj)
{
	((FRigUnit_CollectionReplaceItems*)Obj)->RemoveInvalidItems = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_RemoveInvalidItems = { "RemoveInvalidItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionReplaceItems), &Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_RemoveInvalidItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveInvalidItems_MetaData), NewProp_RemoveInvalidItems_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_bAllowDuplicates_SetBit(void* Obj)
{
	((FRigUnit_CollectionReplaceItems*)Obj)->bAllowDuplicates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_bAllowDuplicates = { "bAllowDuplicates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionReplaceItems), &Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_bAllowDuplicates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDuplicates_MetaData), NewProp_bAllowDuplicates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionReplaceItems, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_Old,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_New,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_RemoveInvalidItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_bAllowDuplicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionReplaceItems",
	Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::PropPointers),
	sizeof(FRigUnit_CollectionReplaceItems),
	alignof(FRigUnit_CollectionReplaceItems),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItems.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItems.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItems.InnerSingleton;
}
void FRigUnit_CollectionReplaceItems::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionReplaceItems::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Items,
		Old,
		New,
		RemoveInvalidItems,
		bAllowDuplicates,
		Collection
	);
}
// End ScriptStruct FRigUnit_CollectionReplaceItems

// Begin ScriptStruct FRigUnit_CollectionReplaceItemsArray
static_assert(std::is_polymorphic<FRigUnit_CollectionReplaceItemsArray>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionReplaceItemsArray cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItemsArray;
class UScriptStruct* FRigUnit_CollectionReplaceItemsArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItemsArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItemsArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionReplaceItemsArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionReplaceItemsArray_Execute;
		Arguments_FRigUnit_CollectionReplaceItemsArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_CollectionReplaceItemsArray_Execute.Emplace(TEXT("Old"), TEXT("FName"));
		Arguments_FRigUnit_CollectionReplaceItemsArray_Execute.Emplace(TEXT("New"), TEXT("FName"));
		Arguments_FRigUnit_CollectionReplaceItemsArray_Execute.Emplace(TEXT("RemoveInvalidItems"), TEXT("bool"));
		Arguments_FRigUnit_CollectionReplaceItemsArray_Execute.Emplace(TEXT("bAllowDuplicates"), TEXT("bool"));
		Arguments_FRigUnit_CollectionReplaceItemsArray_Execute.Emplace(TEXT("Result"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionReplaceItemsArray::Execute"), &FRigUnit_CollectionReplaceItemsArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItemsArray.OuterSingleton, Arguments_FRigUnit_CollectionReplaceItemsArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItemsArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionReplaceItemsArray>()
{
	return FRigUnit_CollectionReplaceItemsArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Replaces all names within the item array\n*/" },
		{ "DisplayName", "Replace Items" },
		{ "Keywords", "Replace,Find,Collection" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Replaces all names within the item array" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveInvalidItems_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDuplicates_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Old;
	static const UECodeGen_Private::FNamePropertyParams NewProp_New;
	static void NewProp_RemoveInvalidItems_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveInvalidItems;
	static void NewProp_bAllowDuplicates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDuplicates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionReplaceItemsArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionReplaceItemsArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionReplaceItemsArray, Old), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Old_MetaData), NewProp_Old_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionReplaceItemsArray, New), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_New_MetaData), NewProp_New_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_RemoveInvalidItems_SetBit(void* Obj)
{
	((FRigUnit_CollectionReplaceItemsArray*)Obj)->RemoveInvalidItems = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_RemoveInvalidItems = { "RemoveInvalidItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionReplaceItemsArray), &Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_RemoveInvalidItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveInvalidItems_MetaData), NewProp_RemoveInvalidItems_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_bAllowDuplicates_SetBit(void* Obj)
{
	((FRigUnit_CollectionReplaceItemsArray*)Obj)->bAllowDuplicates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_bAllowDuplicates = { "bAllowDuplicates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionReplaceItemsArray), &Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_bAllowDuplicates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDuplicates_MetaData), NewProp_bAllowDuplicates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionReplaceItemsArray, Result), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_Old,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_New,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_RemoveInvalidItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_bAllowDuplicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_Result_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionReplaceItemsArray",
	Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::PropPointers),
	sizeof(FRigUnit_CollectionReplaceItemsArray),
	alignof(FRigUnit_CollectionReplaceItemsArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItemsArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItemsArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItemsArray.InnerSingleton;
}
void FRigUnit_CollectionReplaceItemsArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionReplaceItemsArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Old,
		New,
		RemoveInvalidItems,
		bAllowDuplicates,
		Result
	);
}
// End ScriptStruct FRigUnit_CollectionReplaceItemsArray

// Begin ScriptStruct FRigUnit_CollectionItems
static_assert(std::is_polymorphic<FRigUnit_CollectionItems>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionItems cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionItems;
class UScriptStruct* FRigUnit_CollectionItems::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionItems.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionItems.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionItems, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionItems"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionItems_Execute;
		Arguments_FRigUnit_CollectionItems_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_CollectionItems_Execute.Emplace(TEXT("bAllowDuplicates"), TEXT("bool"));
		Arguments_FRigUnit_CollectionItems_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionItems::Execute"), &FRigUnit_CollectionItems::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionItems.OuterSingleton, Arguments_FRigUnit_CollectionItems_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionItems.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionItems>()
{
	return FRigUnit_CollectionItems::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Items|Collections" },
		{ "Comment", "/**\n * Returns a collection provided a specific array of items.\n */" },
		{ "DisplayName", "Collection from Items" },
		{ "Keywords", "Collection,Array" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Returns a collection provided a specific array of items." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDuplicates_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static void NewProp_bAllowDuplicates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDuplicates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionItems>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionItems, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewProp_bAllowDuplicates_SetBit(void* Obj)
{
	((FRigUnit_CollectionItems*)Obj)->bAllowDuplicates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewProp_bAllowDuplicates = { "bAllowDuplicates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionItems), &Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewProp_bAllowDuplicates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDuplicates_MetaData), NewProp_bAllowDuplicates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionItems, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewProp_bAllowDuplicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionItems",
	Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::PropPointers),
	sizeof(FRigUnit_CollectionItems),
	alignof(FRigUnit_CollectionItems),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionItems()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionItems.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionItems.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionItems.InnerSingleton;
}
void FRigUnit_CollectionItems::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionItems::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		bAllowDuplicates,
		Collection
	);
}
// End ScriptStruct FRigUnit_CollectionItems

// Begin ScriptStruct FRigUnit_CollectionGetItems
static_assert(std::is_polymorphic<FRigUnit_CollectionGetItems>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionGetItems cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetItems;
class UScriptStruct* FRigUnit_CollectionGetItems::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetItems.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetItems.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionGetItems"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionGetItems_Execute;
		Arguments_FRigUnit_CollectionGetItems_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionGetItems_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionGetItems::Execute"), &FRigUnit_CollectionGetItems::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetItems.OuterSingleton, Arguments_FRigUnit_CollectionGetItems_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetItems.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionGetItems>()
{
	return FRigUnit_CollectionGetItems::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Items|Collections" },
		{ "Comment", "/**\n* Returns an array of items provided a collection\n*/" },
		{ "DisplayName", "Get Items from Collection" },
		{ "Keywords", "Collection,Array" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Returns an array of items provided a collection" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionGetItems>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionGetItems, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionGetItems, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionGetItems",
	Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::PropPointers),
	sizeof(FRigUnit_CollectionGetItems),
	alignof(FRigUnit_CollectionGetItems),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetItems.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetItems.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetItems.InnerSingleton;
}
void FRigUnit_CollectionGetItems::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionGetItems::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Collection,
		Items
	);
}
// End ScriptStruct FRigUnit_CollectionGetItems

// Begin ScriptStruct FRigUnit_CollectionGetParentIndices
static_assert(std::is_polymorphic<FRigUnit_CollectionGetParentIndices>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionGetParentIndices cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndices;
class UScriptStruct* FRigUnit_CollectionGetParentIndices::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndices.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndices.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionGetParentIndices"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionGetParentIndices_Execute;
		Arguments_FRigUnit_CollectionGetParentIndices_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionGetParentIndices_Execute.Emplace(TEXT("ParentIndices"), TEXT("TArray<int32>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionGetParentIndices::Execute"), &FRigUnit_CollectionGetParentIndices::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndices.OuterSingleton, Arguments_FRigUnit_CollectionGetParentIndices_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndices.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionGetParentIndices>()
{
	return FRigUnit_CollectionGetParentIndices::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns an array of relative parent indices for each item. Several options here\n * a) If an item has multiple parents the major parent (based on the weights) will be returned.\n * b) If an item has a parent that's not part of the collection INDEX_NONE will be returned.\n * c) If an item has a parent that's not part of the collection, but a grand parent is we'll use that index instead.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Get Parent Indices" },
		{ "Keywords", "Collection,Array" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Returns an array of relative parent indices for each item. Several options here\na) If an item has multiple parents the major parent (based on the weights) will be returned.\nb) If an item has a parent that's not part of the collection INDEX_NONE will be returned.\nc) If an item has a parent that's not part of the collection, but a grand parent is we'll use that index instead." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndices_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionGetParentIndices>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionGetParentIndices, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::NewProp_ParentIndices_Inner = { "ParentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::NewProp_ParentIndices = { "ParentIndices", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionGetParentIndices, ParentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndices_MetaData), NewProp_ParentIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::NewProp_ParentIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::NewProp_ParentIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionGetParentIndices",
	Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::PropPointers),
	sizeof(FRigUnit_CollectionGetParentIndices),
	alignof(FRigUnit_CollectionGetParentIndices),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndices.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndices.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndices.InnerSingleton;
}
void FRigUnit_CollectionGetParentIndices::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionGetParentIndices::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Collection,
		ParentIndices
	);
}
// End ScriptStruct FRigUnit_CollectionGetParentIndices

// Begin ScriptStruct FRigUnit_CollectionGetParentIndicesItemArray
static_assert(std::is_polymorphic<FRigUnit_CollectionGetParentIndicesItemArray>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionGetParentIndicesItemArray cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndicesItemArray;
class UScriptStruct* FRigUnit_CollectionGetParentIndicesItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndicesItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndicesItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionGetParentIndicesItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionGetParentIndicesItemArray_Execute;
		Arguments_FRigUnit_CollectionGetParentIndicesItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_CollectionGetParentIndicesItemArray_Execute.Emplace(TEXT("ParentIndices"), TEXT("TArray<int32>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionGetParentIndicesItemArray::Execute"), &FRigUnit_CollectionGetParentIndicesItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndicesItemArray.OuterSingleton, Arguments_FRigUnit_CollectionGetParentIndicesItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndicesItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionGetParentIndicesItemArray>()
{
	return FRigUnit_CollectionGetParentIndicesItemArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns an array of relative parent indices for each item. Several options here\n* a) If an item has multiple parents the major parent (based on the weights) will be returned.\n* b) If an item has a parent that's not part of the collection INDEX_NONE will be returned.\n* c) If an item has a parent that's not part of the collection, but a grand parent is we'll use that index instead.\n*/" },
		{ "DisplayName", "Get Parent Indices" },
		{ "Keywords", "Collection,Array" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Returns an array of relative parent indices for each item. Several options here\na) If an item has multiple parents the major parent (based on the weights) will be returned.\nb) If an item has a parent that's not part of the collection INDEX_NONE will be returned.\nc) If an item has a parent that's not part of the collection, but a grand parent is we'll use that index instead." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndices_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionGetParentIndicesItemArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionGetParentIndicesItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::NewProp_ParentIndices_Inner = { "ParentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::NewProp_ParentIndices = { "ParentIndices", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionGetParentIndicesItemArray, ParentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndices_MetaData), NewProp_ParentIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::NewProp_ParentIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::NewProp_ParentIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionGetParentIndicesItemArray",
	Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::PropPointers),
	sizeof(FRigUnit_CollectionGetParentIndicesItemArray),
	alignof(FRigUnit_CollectionGetParentIndicesItemArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndicesItemArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndicesItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndicesItemArray.InnerSingleton;
}
void FRigUnit_CollectionGetParentIndicesItemArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionGetParentIndicesItemArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		ParentIndices
	);
}
// End ScriptStruct FRigUnit_CollectionGetParentIndicesItemArray

// Begin ScriptStruct FRigUnit_CollectionUnion
static_assert(std::is_polymorphic<FRigUnit_CollectionUnion>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionUnion cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionUnion;
class UScriptStruct* FRigUnit_CollectionUnion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionUnion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionUnion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionUnion, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionUnion"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionUnion_Execute;
		Arguments_FRigUnit_CollectionUnion_Execute.Emplace(TEXT("A"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionUnion_Execute.Emplace(TEXT("B"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionUnion_Execute.Emplace(TEXT("bAllowDuplicates"), TEXT("bool"));
		Arguments_FRigUnit_CollectionUnion_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionUnion::Execute"), &FRigUnit_CollectionUnion::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionUnion.OuterSingleton, Arguments_FRigUnit_CollectionUnion_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionUnion.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionUnion>()
{
	return FRigUnit_CollectionUnion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the union of two provided collections\n * (the combination of all items from both A and B).\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Union" },
		{ "Keywords", "Combine,Add,Merge,Collection,Hierarchy" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Returns the union of two provided collections\n(the combination of all items from both A and B)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDuplicates_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_bAllowDuplicates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDuplicates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionUnion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionUnion, A), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionUnion, B), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1637116294
void Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewProp_bAllowDuplicates_SetBit(void* Obj)
{
	((FRigUnit_CollectionUnion*)Obj)->bAllowDuplicates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewProp_bAllowDuplicates = { "bAllowDuplicates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CollectionUnion), &Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewProp_bAllowDuplicates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDuplicates_MetaData), NewProp_bAllowDuplicates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionUnion, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewProp_bAllowDuplicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionUnion",
	Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::PropPointers),
	sizeof(FRigUnit_CollectionUnion),
	alignof(FRigUnit_CollectionUnion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionUnion()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionUnion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionUnion.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionUnion.InnerSingleton;
}
void FRigUnit_CollectionUnion::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionUnion::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		bAllowDuplicates,
		Collection
	);
}
// End ScriptStruct FRigUnit_CollectionUnion

// Begin ScriptStruct FRigUnit_CollectionIntersection
static_assert(std::is_polymorphic<FRigUnit_CollectionIntersection>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionIntersection cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionIntersection;
class UScriptStruct* FRigUnit_CollectionIntersection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionIntersection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionIntersection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionIntersection"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionIntersection_Execute;
		Arguments_FRigUnit_CollectionIntersection_Execute.Emplace(TEXT("A"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionIntersection_Execute.Emplace(TEXT("B"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionIntersection_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionIntersection::Execute"), &FRigUnit_CollectionIntersection::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionIntersection.OuterSingleton, Arguments_FRigUnit_CollectionIntersection_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionIntersection.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionIntersection>()
{
	return FRigUnit_CollectionIntersection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the intersection of two provided collections\n * (the items present in both A and B).\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Intersection" },
		{ "Keywords", "Combine,Merge,Collection,Hierarchy" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Returns the intersection of two provided collections\n(the items present in both A and B)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionIntersection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionIntersection, A), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionIntersection, B), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionIntersection, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionIntersection",
	Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::PropPointers),
	sizeof(FRigUnit_CollectionIntersection),
	alignof(FRigUnit_CollectionIntersection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionIntersection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionIntersection.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionIntersection.InnerSingleton;
}
void FRigUnit_CollectionIntersection::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionIntersection::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Collection
	);
}
// End ScriptStruct FRigUnit_CollectionIntersection

// Begin ScriptStruct FRigUnit_CollectionDifference
static_assert(std::is_polymorphic<FRigUnit_CollectionDifference>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionDifference cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionDifference;
class UScriptStruct* FRigUnit_CollectionDifference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionDifference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionDifference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionDifference, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionDifference"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionDifference_Execute;
		Arguments_FRigUnit_CollectionDifference_Execute.Emplace(TEXT("A"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionDifference_Execute.Emplace(TEXT("B"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionDifference_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionDifference::Execute"), &FRigUnit_CollectionDifference::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionDifference.OuterSingleton, Arguments_FRigUnit_CollectionDifference_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionDifference.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionDifference>()
{
	return FRigUnit_CollectionDifference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the difference between two collections\n * (the items present in A but not in B).\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Difference" },
		{ "Keywords", "Collection,Exclude,Subtract" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Returns the difference between two collections\n(the items present in A but not in B)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionDifference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionDifference, A), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionDifference, B), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionDifference, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionDifference",
	Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::PropPointers),
	sizeof(FRigUnit_CollectionDifference),
	alignof(FRigUnit_CollectionDifference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionDifference()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionDifference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionDifference.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionDifference.InnerSingleton;
}
void FRigUnit_CollectionDifference::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionDifference::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Collection
	);
}
// End ScriptStruct FRigUnit_CollectionDifference

// Begin ScriptStruct FRigUnit_CollectionReverse
static_assert(std::is_polymorphic<FRigUnit_CollectionReverse>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionReverse cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionReverse;
class UScriptStruct* FRigUnit_CollectionReverse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionReverse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionReverse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionReverse, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionReverse"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionReverse_Execute;
		Arguments_FRigUnit_CollectionReverse_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionReverse_Execute.Emplace(TEXT("Reversed"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionReverse::Execute"), &FRigUnit_CollectionReverse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionReverse.OuterSingleton, Arguments_FRigUnit_CollectionReverse_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionReverse.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionReverse>()
{
	return FRigUnit_CollectionReverse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the collection in reverse order\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Reverse" },
		{ "Keywords", "Direction,Order,Reverse" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Returns the collection in reverse order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reversed_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reversed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionReverse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionReverse, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::NewProp_Reversed = { "Reversed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionReverse, Reversed), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reversed_MetaData), NewProp_Reversed_MetaData) }; // 1637116294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::NewProp_Reversed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionReverse",
	Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::PropPointers),
	sizeof(FRigUnit_CollectionReverse),
	alignof(FRigUnit_CollectionReverse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionReverse()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionReverse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionReverse.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionReverse.InnerSingleton;
}
void FRigUnit_CollectionReverse::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionReverse::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Collection,
		Reversed
	);
}
// End ScriptStruct FRigUnit_CollectionReverse

// Begin ScriptStruct FRigUnit_CollectionCount
static_assert(std::is_polymorphic<FRigUnit_CollectionCount>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionCount cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionCount;
class UScriptStruct* FRigUnit_CollectionCount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionCount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionCount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionCount, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionCount"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionCount_Execute;
		Arguments_FRigUnit_CollectionCount_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionCount_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionCount::Execute"), &FRigUnit_CollectionCount::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionCount.OuterSingleton, Arguments_FRigUnit_CollectionCount_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionCount.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionCount>()
{
	return FRigUnit_CollectionCount::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the number of elements in a collection\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Count" },
		{ "Keywords", "Collection,Array,Count,Num,Length,Size" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Returns the number of elements in a collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionCount>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionCount, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionCount, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionCount",
	Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::PropPointers),
	sizeof(FRigUnit_CollectionCount),
	alignof(FRigUnit_CollectionCount),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionCount()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionCount.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionCount.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionCount.InnerSingleton;
}
void FRigUnit_CollectionCount::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionCount::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Collection,
		Count
	);
}
// End ScriptStruct FRigUnit_CollectionCount

// Begin ScriptStruct FRigUnit_CollectionItemAtIndex
static_assert(std::is_polymorphic<FRigUnit_CollectionItemAtIndex>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionItemAtIndex cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionItemAtIndex;
class UScriptStruct* FRigUnit_CollectionItemAtIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionItemAtIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionItemAtIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionItemAtIndex"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionItemAtIndex_Execute;
		Arguments_FRigUnit_CollectionItemAtIndex_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionItemAtIndex_Execute.Emplace(TEXT("Index"), TEXT("int32"));
		Arguments_FRigUnit_CollectionItemAtIndex_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionItemAtIndex::Execute"), &FRigUnit_CollectionItemAtIndex::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionItemAtIndex.OuterSingleton, Arguments_FRigUnit_CollectionItemAtIndex_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionItemAtIndex.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionItemAtIndex>()
{
	return FRigUnit_CollectionItemAtIndex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns a single item within a collection by index\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Item At Index" },
		{ "Keywords", "Item,GetIndex,AtIndex,At,ForIndex,[]" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Returns a single item within a collection by index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionItemAtIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionItemAtIndex, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionItemAtIndex, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionItemAtIndex, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionItemAtIndex",
	Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::PropPointers),
	sizeof(FRigUnit_CollectionItemAtIndex),
	alignof(FRigUnit_CollectionItemAtIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionItemAtIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionItemAtIndex.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionItemAtIndex.InnerSingleton;
}
void FRigUnit_CollectionItemAtIndex::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionItemAtIndex::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Collection,
		Index,
		Item
	);
}
// End ScriptStruct FRigUnit_CollectionItemAtIndex

// Begin ScriptStruct FRigUnit_CollectionLoop
static_assert(std::is_polymorphic<FRigUnit_CollectionLoop>() == std::is_polymorphic<FRigUnit_CollectionBaseMutable>(), "USTRUCT FRigUnit_CollectionLoop cannot be polymorphic unless super FRigUnit_CollectionBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionLoop;
class UScriptStruct* FRigUnit_CollectionLoop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionLoop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionLoop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionLoop, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionLoop"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionLoop_Execute;
		Arguments_FRigUnit_CollectionLoop_Execute.Emplace(TEXT("BlockToRun"), TEXT("FName"));
		Arguments_FRigUnit_CollectionLoop_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionLoop_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_CollectionLoop_Execute.Emplace(TEXT("Index"), TEXT("int32"));
		Arguments_FRigUnit_CollectionLoop_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigUnit_CollectionLoop_Execute.Emplace(TEXT("Ratio"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionLoop::Execute"), &FRigUnit_CollectionLoop::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionLoop.OuterSingleton, Arguments_FRigUnit_CollectionLoop_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionLoop.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionLoop>()
{
	return FRigUnit_CollectionLoop::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Given a collection of items, execute iteratively across all items in a given collection\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "For Each Item" },
		{ "Icon", "EditorStyle|GraphEditor.Macro.ForEach_16x" },
		{ "Keywords", "Collection,Loop,Iterate" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Given a collection of items, execute iteratively across all items in a given collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockToRun_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Singleton", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Ranging from 0.0 (first item) and 1.0 (last item)\n\x09 * This is useful to drive a consecutive node with a \n\x09 * curve or an ease to distribute a value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
		{ "Singleton", "" },
		{ "ToolTip", "Ranging from 0.0 (first item) and 1.0 (last item)\nThis is useful to drive a consecutive node with a\ncurve or an ease to distribute a value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BlockToRun;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Completed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionLoop>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_BlockToRun = { "BlockToRun", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionLoop, BlockToRun), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockToRun_MetaData), NewProp_BlockToRun_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionLoop, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionLoop, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionLoop, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionLoop, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionLoop, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionLoop, Completed), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 2294738602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_BlockToRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Ratio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewProp_Completed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable,
	&NewStructOps,
	"RigUnit_CollectionLoop",
	Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::PropPointers),
	sizeof(FRigUnit_CollectionLoop),
	alignof(FRigUnit_CollectionLoop),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionLoop()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionLoop.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionLoop.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionLoop.InnerSingleton;
}
void FRigUnit_CollectionLoop::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = Completed;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionLoop::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		BlockToRun,
		Collection,
		Item,
		Index,
		Count,
		Ratio
	);
}
// End ScriptStruct FRigUnit_CollectionLoop

// Begin ScriptStruct FRigUnit_CollectionAddItem
static_assert(std::is_polymorphic<FRigUnit_CollectionAddItem>() == std::is_polymorphic<FRigUnit_CollectionBase>(), "USTRUCT FRigUnit_CollectionAddItem cannot be polymorphic unless super FRigUnit_CollectionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CollectionAddItem;
class UScriptStruct* FRigUnit_CollectionAddItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionAddItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CollectionAddItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CollectionAddItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CollectionAddItem_Execute;
		Arguments_FRigUnit_CollectionAddItem_Execute.Emplace(TEXT("Collection"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CollectionAddItem_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_CollectionAddItem_Execute.Emplace(TEXT("Result"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CollectionAddItem::Execute"), &FRigUnit_CollectionAddItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CollectionAddItem.OuterSingleton, Arguments_FRigUnit_CollectionAddItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionAddItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CollectionAddItem>()
{
	return FRigUnit_CollectionAddItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Adds an element to an existing collection\n*/" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Add Item" },
		{ "Keywords", "Item,Add,Push,Insert" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "ToolTip", "Adds an element to an existing collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Collection.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CollectionAddItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionAddItem, Collection), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionAddItem, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CollectionAddItem, Result), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1637116294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_CollectionBase,
	&NewStructOps,
	"RigUnit_CollectionAddItem",
	Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::PropPointers),
	sizeof(FRigUnit_CollectionAddItem),
	alignof(FRigUnit_CollectionAddItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CollectionAddItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CollectionAddItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CollectionAddItem.InnerSingleton;
}
void FRigUnit_CollectionAddItem::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CollectionAddItem::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Collection,
		Item,
		Result
	);
}
// End ScriptStruct FRigUnit_CollectionAddItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_CollectionBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics::NewStructOps, TEXT("RigUnit_CollectionBase"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionBase), 1282338998U) },
		{ FRigUnit_CollectionBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics::NewStructOps, TEXT("RigUnit_CollectionBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionBaseMutable), 3242043845U) },
		{ FRigUnit_CollectionChain::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics::NewStructOps, TEXT("RigUnit_CollectionChain"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionChain), 1016128480U) },
		{ FRigUnit_CollectionChainArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics::NewStructOps, TEXT("RigUnit_CollectionChainArray"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionChainArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionChainArray), 96922677U) },
		{ FRigUnit_CollectionNameSearch::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::NewStructOps, TEXT("RigUnit_CollectionNameSearch"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionNameSearch), 3840833827U) },
		{ FRigUnit_CollectionNameSearchArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::NewStructOps, TEXT("RigUnit_CollectionNameSearchArray"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionNameSearchArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionNameSearchArray), 184252031U) },
		{ FRigUnit_CollectionChildren::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics::NewStructOps, TEXT("RigUnit_CollectionChildren"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildren, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionChildren), 276493287U) },
		{ FRigUnit_CollectionChildrenArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::NewStructOps, TEXT("RigUnit_CollectionChildrenArray"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionChildrenArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionChildrenArray), 2809661008U) },
		{ FRigUnit_CollectionGetAll::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics::NewStructOps, TEXT("RigUnit_CollectionGetAll"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetAll, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionGetAll), 1930565487U) },
		{ FRigUnit_CollectionReplaceItems::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::NewStructOps, TEXT("RigUnit_CollectionReplaceItems"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItems, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionReplaceItems), 375785962U) },
		{ FRigUnit_CollectionReplaceItemsArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics::NewStructOps, TEXT("RigUnit_CollectionReplaceItemsArray"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionReplaceItemsArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionReplaceItemsArray), 3074705167U) },
		{ FRigUnit_CollectionItems::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::NewStructOps, TEXT("RigUnit_CollectionItems"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionItems, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionItems), 1754216618U) },
		{ FRigUnit_CollectionGetItems::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics::NewStructOps, TEXT("RigUnit_CollectionGetItems"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetItems, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionGetItems), 2645739753U) },
		{ FRigUnit_CollectionGetParentIndices::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics::NewStructOps, TEXT("RigUnit_CollectionGetParentIndices"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndices, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionGetParentIndices), 2916491009U) },
		{ FRigUnit_CollectionGetParentIndicesItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics::NewStructOps, TEXT("RigUnit_CollectionGetParentIndicesItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionGetParentIndicesItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionGetParentIndicesItemArray), 2623815382U) },
		{ FRigUnit_CollectionUnion::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics::NewStructOps, TEXT("RigUnit_CollectionUnion"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionUnion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionUnion), 1606505399U) },
		{ FRigUnit_CollectionIntersection::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics::NewStructOps, TEXT("RigUnit_CollectionIntersection"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionIntersection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionIntersection), 2096298910U) },
		{ FRigUnit_CollectionDifference::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::NewStructOps, TEXT("RigUnit_CollectionDifference"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionDifference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionDifference), 3629178492U) },
		{ FRigUnit_CollectionReverse::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::NewStructOps, TEXT("RigUnit_CollectionReverse"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionReverse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionReverse), 2594343331U) },
		{ FRigUnit_CollectionCount::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics::NewStructOps, TEXT("RigUnit_CollectionCount"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionCount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionCount), 1101047531U) },
		{ FRigUnit_CollectionItemAtIndex::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::NewStructOps, TEXT("RigUnit_CollectionItemAtIndex"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionItemAtIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionItemAtIndex), 3263499002U) },
		{ FRigUnit_CollectionLoop::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics::NewStructOps, TEXT("RigUnit_CollectionLoop"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionLoop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionLoop), 3898832581U) },
		{ FRigUnit_CollectionAddItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics::NewStructOps, TEXT("RigUnit_CollectionAddItem"), &Z_Registration_Info_UScriptStruct_RigUnit_CollectionAddItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CollectionAddItem), 3750415507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_524545355(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
