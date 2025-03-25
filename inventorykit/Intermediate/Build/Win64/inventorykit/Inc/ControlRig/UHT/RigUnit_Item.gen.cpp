// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Execution/RigUnit_Item.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Item() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemEquals();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemExists();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemReplace();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemToName();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_ItemBase
static_assert(std::is_polymorphic<FRigUnit_ItemBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ItemBase cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemBase;
class UScriptStruct* FRigUnit_ItemBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemBase>()
{
	return FRigUnit_ItemBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "NodeColor", "0.7 0.05 0.5" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ItemBase",
	nullptr,
	0,
	sizeof(FRigUnit_ItemBase),
	alignof(FRigUnit_ItemBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.InnerSingleton;
}
// End ScriptStruct FRigUnit_ItemBase

// Begin ScriptStruct FRigUnit_ItemBaseMutable
static_assert(std::is_polymorphic<FRigUnit_ItemBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_ItemBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable;
class UScriptStruct* FRigUnit_ItemBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemBaseMutable>()
{
	return FRigUnit_ItemBaseMutable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "NodeColor", "0.7 0.05 0.5" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemBaseMutable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_ItemBaseMutable",
	nullptr,
	0,
	sizeof(FRigUnit_ItemBaseMutable),
	alignof(FRigUnit_ItemBaseMutable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.InnerSingleton;
}
// End ScriptStruct FRigUnit_ItemBaseMutable

// Begin ScriptStruct FRigUnit_ItemExists
static_assert(std::is_polymorphic<FRigUnit_ItemExists>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemExists cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemExists;
class UScriptStruct* FRigUnit_ItemExists::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemExists, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemExists"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemExists_Execute;
		Arguments_FRigUnit_ItemExists_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemExists_Execute.Emplace(TEXT("Exists"), TEXT("bool"));
		Arguments_FRigUnit_ItemExists_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemExists::Execute"), &FRigUnit_ItemExists::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.OuterSingleton, Arguments_FRigUnit_ItemExists_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemExists>()
{
	return FRigUnit_ItemExists::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true or false if a given item exists\n */" },
		{ "DisplayName", "Item Exists" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Returns true or false if a given item exists" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exists_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_Exists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Exists;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemExists>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemExists, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists_SetBit(void* Obj)
{
	((FRigUnit_ItemExists*)Obj)->Exists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists = { "Exists", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ItemExists), &Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exists_MetaData), NewProp_Exists_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemExists, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_CachedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_ItemBase,
	&NewStructOps,
	"RigUnit_ItemExists",
	Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::PropPointers),
	sizeof(FRigUnit_ItemExists),
	alignof(FRigUnit_ItemExists),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemExists()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.InnerSingleton;
}
void FRigUnit_ItemExists::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ItemExists::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Exists,
		CachedIndex
	);
}
// End ScriptStruct FRigUnit_ItemExists

// Begin ScriptStruct FRigUnit_ItemReplace
static_assert(std::is_polymorphic<FRigUnit_ItemReplace>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemReplace cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace;
class UScriptStruct* FRigUnit_ItemReplace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemReplace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemReplace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemReplace_Execute;
		Arguments_FRigUnit_ItemReplace_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemReplace_Execute.Emplace(TEXT("Old"), TEXT("FName"));
		Arguments_FRigUnit_ItemReplace_Execute.Emplace(TEXT("New"), TEXT("FName"));
		Arguments_FRigUnit_ItemReplace_Execute.Emplace(TEXT("Result"), TEXT("FRigElementKey"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemReplace::Execute"), &FRigUnit_ItemReplace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.OuterSingleton, Arguments_FRigUnit_ItemReplace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemReplace>()
{
	return FRigUnit_ItemReplace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Replaces the text within the name of the item\n */" },
		{ "DisplayName", "Item Replace" },
		{ "Keywords", "Replace,Name" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Replaces the text within the name of the item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Old;
	static const UECodeGen_Private::FNamePropertyParams NewProp_New;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemReplace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemReplace, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemReplace, Old), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Old_MetaData), NewProp_Old_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemReplace, New), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_New_MetaData), NewProp_New_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemReplace, Result), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Old,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_New,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_ItemBase,
	&NewStructOps,
	"RigUnit_ItemReplace",
	Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::PropPointers),
	sizeof(FRigUnit_ItemReplace),
	alignof(FRigUnit_ItemReplace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemReplace()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.InnerSingleton;
}
void FRigUnit_ItemReplace::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ItemReplace::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Old,
		New,
		Result
	);
}
// End ScriptStruct FRigUnit_ItemReplace

// Begin ScriptStruct FRigUnit_ItemEquals
static_assert(std::is_polymorphic<FRigUnit_ItemEquals>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemEquals cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals;
class UScriptStruct* FRigUnit_ItemEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemEquals, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemEquals_Execute;
		Arguments_FRigUnit_ItemEquals_Execute.Emplace(TEXT("A"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemEquals_Execute.Emplace(TEXT("B"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemEquals::Execute"), &FRigUnit_ItemEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.OuterSingleton, Arguments_FRigUnit_ItemEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemEquals>()
{
	return FRigUnit_ItemEquals::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns true if the two items are equal\n*/" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Item Equals" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Returns true if the two items are equal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemEquals>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemEquals, A), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemEquals, B), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigUnit_ItemEquals*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ItemEquals), &Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_ItemBase,
	&NewStructOps,
	"RigUnit_ItemEquals",
	Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::PropPointers),
	sizeof(FRigUnit_ItemEquals),
	alignof(FRigUnit_ItemEquals),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemEquals()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.InnerSingleton;
}
void FRigUnit_ItemEquals::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ItemEquals::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigUnit_ItemEquals

// Begin ScriptStruct FRigUnit_ItemNotEquals
static_assert(std::is_polymorphic<FRigUnit_ItemNotEquals>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemNotEquals cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals;
class UScriptStruct* FRigUnit_ItemNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemNotEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemNotEquals_Execute;
		Arguments_FRigUnit_ItemNotEquals_Execute.Emplace(TEXT("A"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemNotEquals_Execute.Emplace(TEXT("B"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemNotEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemNotEquals::Execute"), &FRigUnit_ItemNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.OuterSingleton, Arguments_FRigUnit_ItemNotEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemNotEquals>()
{
	return FRigUnit_ItemNotEquals::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns true if the two items are not equal\n*/" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Item Not Equals" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Returns true if the two items are not equal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemNotEquals>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemNotEquals, A), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemNotEquals, B), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigUnit_ItemNotEquals*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ItemNotEquals), &Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_ItemBase,
	&NewStructOps,
	"RigUnit_ItemNotEquals",
	Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::PropPointers),
	sizeof(FRigUnit_ItemNotEquals),
	alignof(FRigUnit_ItemNotEquals),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.InnerSingleton;
}
void FRigUnit_ItemNotEquals::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ItemNotEquals::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigUnit_ItemNotEquals

// Begin ScriptStruct FRigUnit_ItemTypeEquals
static_assert(std::is_polymorphic<FRigUnit_ItemTypeEquals>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemTypeEquals cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals;
class UScriptStruct* FRigUnit_ItemTypeEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemTypeEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemTypeEquals_Execute;
		Arguments_FRigUnit_ItemTypeEquals_Execute.Emplace(TEXT("A"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemTypeEquals_Execute.Emplace(TEXT("B"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemTypeEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemTypeEquals::Execute"), &FRigUnit_ItemTypeEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.OuterSingleton, Arguments_FRigUnit_ItemTypeEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemTypeEquals>()
{
	return FRigUnit_ItemTypeEquals::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns true if the two items' types are equal\n*/" },
		{ "DisplayName", "Item Type Equals" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Returns true if the two items' types are equal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemTypeEquals>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemTypeEquals, A), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemTypeEquals, B), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigUnit_ItemTypeEquals*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ItemTypeEquals), &Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_ItemBase,
	&NewStructOps,
	"RigUnit_ItemTypeEquals",
	Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::PropPointers),
	sizeof(FRigUnit_ItemTypeEquals),
	alignof(FRigUnit_ItemTypeEquals),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.InnerSingleton;
}
void FRigUnit_ItemTypeEquals::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ItemTypeEquals::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigUnit_ItemTypeEquals

// Begin ScriptStruct FRigUnit_ItemTypeNotEquals
static_assert(std::is_polymorphic<FRigUnit_ItemTypeNotEquals>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemTypeNotEquals cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals;
class UScriptStruct* FRigUnit_ItemTypeNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemTypeNotEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemTypeNotEquals_Execute;
		Arguments_FRigUnit_ItemTypeNotEquals_Execute.Emplace(TEXT("A"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemTypeNotEquals_Execute.Emplace(TEXT("B"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemTypeNotEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemTypeNotEquals::Execute"), &FRigUnit_ItemTypeNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.OuterSingleton, Arguments_FRigUnit_ItemTypeNotEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemTypeNotEquals>()
{
	return FRigUnit_ItemTypeNotEquals::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns true if the two items's types are not equal\n*/" },
		{ "DisplayName", "Item Type Not Equals" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Returns true if the two items's types are not equal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemTypeNotEquals>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemTypeNotEquals, A), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemTypeNotEquals, B), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigUnit_ItemTypeNotEquals*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ItemTypeNotEquals), &Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_ItemBase,
	&NewStructOps,
	"RigUnit_ItemTypeNotEquals",
	Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::PropPointers),
	sizeof(FRigUnit_ItemTypeNotEquals),
	alignof(FRigUnit_ItemTypeNotEquals),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.InnerSingleton;
}
void FRigUnit_ItemTypeNotEquals::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ItemTypeNotEquals::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}
// End ScriptStruct FRigUnit_ItemTypeNotEquals

// Begin ScriptStruct FRigUnit_ItemToName
static_assert(std::is_polymorphic<FRigUnit_ItemToName>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemToName cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemToName;
class UScriptStruct* FRigUnit_ItemToName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemToName, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemToName"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemToName_Execute;
		Arguments_FRigUnit_ItemToName_Execute.Emplace(TEXT("Value"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemToName_Execute.Emplace(TEXT("Result"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemToName::Execute"), &FRigUnit_ItemToName::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.OuterSingleton, Arguments_FRigUnit_ItemToName_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemToName>()
{
	return FRigUnit_ItemToName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Casts the provided item key to its name\n */" },
		{ "DisplayName", "To Name" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Casts the provided item key to its name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemToName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemToName, Value), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ItemToName, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_ItemBase,
	&NewStructOps,
	"RigUnit_ItemToName",
	Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::PropPointers),
	sizeof(FRigUnit_ItemToName),
	alignof(FRigUnit_ItemToName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemToName()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.InnerSingleton;
}
void FRigUnit_ItemToName::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ItemToName::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}
// End ScriptStruct FRigUnit_ItemToName

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_ItemBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::NewStructOps, TEXT("RigUnit_ItemBase"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemBase), 3979908763U) },
		{ FRigUnit_ItemBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::NewStructOps, TEXT("RigUnit_ItemBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemBaseMutable), 2607008627U) },
		{ FRigUnit_ItemExists::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewStructOps, TEXT("RigUnit_ItemExists"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemExists, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemExists), 2612342073U) },
		{ FRigUnit_ItemReplace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewStructOps, TEXT("RigUnit_ItemReplace"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemReplace), 2065222710U) },
		{ FRigUnit_ItemEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewStructOps, TEXT("RigUnit_ItemEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemEquals), 3962520557U) },
		{ FRigUnit_ItemNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewStructOps, TEXT("RigUnit_ItemNotEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemNotEquals), 1962703929U) },
		{ FRigUnit_ItemTypeEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewStructOps, TEXT("RigUnit_ItemTypeEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemTypeEquals), 2680408957U) },
		{ FRigUnit_ItemTypeNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewStructOps, TEXT("RigUnit_ItemTypeNotEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemTypeNotEquals), 3525704578U) },
		{ FRigUnit_ItemToName::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewStructOps, TEXT("RigUnit_ItemToName"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemToName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemToName), 1681019815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_3122072471(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
