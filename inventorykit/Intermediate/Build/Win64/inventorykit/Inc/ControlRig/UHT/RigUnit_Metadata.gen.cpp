// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_Metadata.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Metadata() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigMetadataType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_GetMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_MetadataBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_SetMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatchFactory();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HasMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigDispatch_MetadataBase
static_assert(std::is_polymorphic<FRigDispatch_MetadataBase>() == std::is_polymorphic<FRigDispatchFactory>(), "USTRUCT FRigDispatch_MetadataBase cannot be polymorphic unless super FRigDispatchFactory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_MetadataBase;
class UScriptStruct* FRigDispatch_MetadataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_MetadataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_MetadataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_MetadataBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_MetadataBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_MetadataBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_MetadataBase>()
{
	return FRigDispatch_MetadataBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "Varying", "" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_MetadataBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigDispatchFactory,
	&NewStructOps,
	"RigDispatch_MetadataBase",
	nullptr,
	0,
	sizeof(FRigDispatch_MetadataBase),
	alignof(FRigDispatch_MetadataBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_MetadataBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_MetadataBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_MetadataBase.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_MetadataBase.InnerSingleton;
}
// End ScriptStruct FRigDispatch_MetadataBase

// Begin ScriptStruct FRigDispatch_GetMetadata
static_assert(std::is_polymorphic<FRigDispatch_GetMetadata>() == std::is_polymorphic<FRigDispatch_MetadataBase>(), "USTRUCT FRigDispatch_GetMetadata cannot be polymorphic unless super FRigDispatch_MetadataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_GetMetadata;
class UScriptStruct* FRigDispatch_GetMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_GetMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_GetMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_GetMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_GetMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_GetMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_GetMetadata>()
{
	return FRigDispatch_GetMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Sets some metadata for the provided item\n */" },
		{ "DisplayName", "Get Metadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "* Sets some metadata for the provided item" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_GetMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigDispatch_MetadataBase,
	&NewStructOps,
	"RigDispatch_GetMetadata",
	nullptr,
	0,
	sizeof(FRigDispatch_GetMetadata),
	alignof(FRigDispatch_GetMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_GetMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_GetMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_GetMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_GetMetadata.InnerSingleton;
}
// End ScriptStruct FRigDispatch_GetMetadata

// Begin ScriptStruct FRigDispatch_SetMetadata
static_assert(std::is_polymorphic<FRigDispatch_SetMetadata>() == std::is_polymorphic<FRigDispatch_MetadataBase>(), "USTRUCT FRigDispatch_SetMetadata cannot be polymorphic unless super FRigDispatch_MetadataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_SetMetadata;
class UScriptStruct* FRigDispatch_SetMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_SetMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_SetMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_SetMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_SetMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_SetMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_SetMetadata>()
{
	return FRigDispatch_SetMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Sets some metadata for the provided item\n */" },
		{ "DisplayName", "Set Metadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "* Sets some metadata for the provided item" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_SetMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigDispatch_MetadataBase,
	&NewStructOps,
	"RigDispatch_SetMetadata",
	nullptr,
	0,
	sizeof(FRigDispatch_SetMetadata),
	alignof(FRigDispatch_SetMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_SetMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_SetMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_SetMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_SetMetadata.InnerSingleton;
}
// End ScriptStruct FRigDispatch_SetMetadata

// Begin ScriptStruct FRigUnit_RemoveMetadata
static_assert(std::is_polymorphic<FRigUnit_RemoveMetadata>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_RemoveMetadata cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadata;
class UScriptStruct* FRigUnit_RemoveMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RemoveMetadata"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_RemoveMetadata_Execute;
		Arguments_FRigUnit_RemoveMetadata_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_RemoveMetadata_Execute.Emplace(TEXT("Name"), TEXT("FName"));
		Arguments_FRigUnit_RemoveMetadata_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_RemoveMetadata_Execute.Emplace(TEXT("Removed"), TEXT("bool"));
		Arguments_FRigUnit_RemoveMetadata_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RemoveMetadata::Execute"), &FRigUnit_RemoveMetadata::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadata.OuterSingleton, Arguments_FRigUnit_RemoveMetadata_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RemoveMetadata>()
{
	return FRigUnit_RemoveMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Removes an existing metadata filed from an item\n */" },
		{ "DisplayName", "Remove Metadata" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "DeleteMetadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Removes an existing metadata filed from an item" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to remove the metadata from \n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The item to remove the metadata from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the metadata to remove\n\x09 */" },
		{ "CustomWidget", "MetadataName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The name of the metadata to remove" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Removed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// True if the metadata has been removed\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the metadata has been removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static void NewProp_Removed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Removed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RemoveMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveMetadata, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveMetadata, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveMetadata, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
void Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_Removed_SetBit(void* Obj)
{
	((FRigUnit_RemoveMetadata*)Obj)->Removed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_Removed = { "Removed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_RemoveMetadata), &Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_Removed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Removed_MetaData), NewProp_Removed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveMetadata, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_Removed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewProp_CachedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_RemoveMetadata",
	Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::PropPointers),
	sizeof(FRigUnit_RemoveMetadata),
	alignof(FRigUnit_RemoveMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadata.InnerSingleton;
}
void FRigUnit_RemoveMetadata::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_RemoveMetadata::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Name,
		NameSpace,
		Removed,
		CachedIndex
	);
}
// End ScriptStruct FRigUnit_RemoveMetadata

// Begin ScriptStruct FRigUnit_RemoveAllMetadata
static_assert(std::is_polymorphic<FRigUnit_RemoveAllMetadata>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_RemoveAllMetadata cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RemoveAllMetadata;
class UScriptStruct* FRigUnit_RemoveAllMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RemoveAllMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RemoveAllMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RemoveAllMetadata"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_RemoveAllMetadata_Execute;
		Arguments_FRigUnit_RemoveAllMetadata_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_RemoveAllMetadata_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_RemoveAllMetadata_Execute.Emplace(TEXT("Removed"), TEXT("bool"));
		Arguments_FRigUnit_RemoveAllMetadata_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RemoveAllMetadata::Execute"), &FRigUnit_RemoveAllMetadata::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_RemoveAllMetadata.OuterSingleton, Arguments_FRigUnit_RemoveAllMetadata_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RemoveAllMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RemoveAllMetadata>()
{
	return FRigUnit_RemoveAllMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Removes an existing metadata filed from an item\n */" },
		{ "DisplayName", "Remove All Metadata" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "DeleteMetadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Removes an existing metadata filed from an item" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to remove the metadata from \n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The item to remove the metadata from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Removed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// True if any metadata has been removed\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "True if any metadata has been removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static void NewProp_Removed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Removed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RemoveAllMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveAllMetadata, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveAllMetadata, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
void Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_Removed_SetBit(void* Obj)
{
	((FRigUnit_RemoveAllMetadata*)Obj)->Removed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_Removed = { "Removed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_RemoveAllMetadata), &Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_Removed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Removed_MetaData), NewProp_Removed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveAllMetadata, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_Removed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewProp_CachedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_RemoveAllMetadata",
	Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::PropPointers),
	sizeof(FRigUnit_RemoveAllMetadata),
	alignof(FRigUnit_RemoveAllMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RemoveAllMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RemoveAllMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RemoveAllMetadata.InnerSingleton;
}
void FRigUnit_RemoveAllMetadata::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_RemoveAllMetadata::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		NameSpace,
		Removed,
		CachedIndex
	);
}
// End ScriptStruct FRigUnit_RemoveAllMetadata

// Begin ScriptStruct FRigUnit_HasMetadata
static_assert(std::is_polymorphic<FRigUnit_HasMetadata>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_HasMetadata cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HasMetadata;
class UScriptStruct* FRigUnit_HasMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HasMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HasMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HasMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HasMetadata"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HasMetadata_Execute;
		Arguments_FRigUnit_HasMetadata_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HasMetadata_Execute.Emplace(TEXT("Name"), TEXT("FName"));
		Arguments_FRigUnit_HasMetadata_Execute.Emplace(TEXT("Type"), TEXT("ERigMetadataType"));
		Arguments_FRigUnit_HasMetadata_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_HasMetadata_Execute.Emplace(TEXT("Found"), TEXT("bool"));
		Arguments_FRigUnit_HasMetadata_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HasMetadata::Execute"), &FRigUnit_HasMetadata::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HasMetadata.OuterSingleton, Arguments_FRigUnit_HasMetadata_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HasMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HasMetadata>()
{
	return FRigUnit_HasMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Returns true if a given item in the hierarchy has a specific set of metadata\n */" },
		{ "DisplayName", "Has Metadata" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "MetadataExists,HasKey,SupportsMetadata,FindMetadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Returns true if a given item in the hierarchy has a specific set of metadata" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to check the metadata for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The item to check the metadata for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the metadata to check\n\x09 */" },
		{ "CustomWidget", "MetadataName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The name of the metadata to check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The type of metadata to check for\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The type of metadata to check for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Found_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// True if the item has the metadata\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the item has the metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static void NewProp_Found_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Found;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HasMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadata, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadata, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadata, Type), Z_Construct_UEnum_ControlRig_ERigMetadataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1546994617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadata, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
void Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Found_SetBit(void* Obj)
{
	((FRigUnit_HasMetadata*)Obj)->Found = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Found = { "Found", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_HasMetadata), &Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Found_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Found_MetaData), NewProp_Found_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadata, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_Found,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewProp_CachedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_HasMetadata",
	Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::PropPointers),
	sizeof(FRigUnit_HasMetadata),
	alignof(FRigUnit_HasMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HasMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HasMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HasMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HasMetadata.InnerSingleton;
}
void FRigUnit_HasMetadata::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_HasMetadata::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Name,
		Type,
		NameSpace,
		Found,
		CachedIndex
	);
}
// End ScriptStruct FRigUnit_HasMetadata

// Begin ScriptStruct FRigUnit_FindItemsWithMetadata
static_assert(std::is_polymorphic<FRigUnit_FindItemsWithMetadata>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_FindItemsWithMetadata cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadata;
class UScriptStruct* FRigUnit_FindItemsWithMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FindItemsWithMetadata"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FindItemsWithMetadata_Execute;
		Arguments_FRigUnit_FindItemsWithMetadata_Execute.Emplace(TEXT("Name"), TEXT("FName"));
		Arguments_FRigUnit_FindItemsWithMetadata_Execute.Emplace(TEXT("Type"), TEXT("ERigMetadataType"));
		Arguments_FRigUnit_FindItemsWithMetadata_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_FindItemsWithMetadata_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FindItemsWithMetadata::Execute"), &FRigUnit_FindItemsWithMetadata::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadata.OuterSingleton, Arguments_FRigUnit_FindItemsWithMetadata_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FindItemsWithMetadata>()
{
	return FRigUnit_FindItemsWithMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Returns all items containing a specific set of metadata\n */" },
		{ "DisplayName", "Find Items with Metadata" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "MetadataExists,HasKey,SupportsMetadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Returns all items containing a specific set of metadata" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the metadata to find\n\x09 */" },
		{ "CustomWidget", "MetadataName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The name of the metadata to find" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The type of metadata to find\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The type of metadata to find" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The items containing the metadata\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "The items containing the metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FindItemsWithMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FindItemsWithMetadata, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FindItemsWithMetadata, Type), Z_Construct_UEnum_ControlRig_ERigMetadataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1546994617
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FindItemsWithMetadata, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FindItemsWithMetadata, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_FindItemsWithMetadata",
	Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::PropPointers),
	sizeof(FRigUnit_FindItemsWithMetadata),
	alignof(FRigUnit_FindItemsWithMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadata.InnerSingleton;
}
void FRigUnit_FindItemsWithMetadata::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FindItemsWithMetadata::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Name,
		Type,
		NameSpace,
		Items
	);
}
// End ScriptStruct FRigUnit_FindItemsWithMetadata

// Begin ScriptStruct FRigUnit_GetMetadataTags
static_assert(std::is_polymorphic<FRigUnit_GetMetadataTags>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetMetadataTags cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetMetadataTags;
class UScriptStruct* FRigUnit_GetMetadataTags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetMetadataTags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetMetadataTags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetMetadataTags"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetMetadataTags_Execute;
		Arguments_FRigUnit_GetMetadataTags_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetMetadataTags_Execute.Emplace(TEXT("Tags"), TEXT("TArray<FName>"));
		Arguments_FRigUnit_GetMetadataTags_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetMetadataTags::Execute"), &FRigUnit_GetMetadataTags::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetMetadataTags.OuterSingleton, Arguments_FRigUnit_GetMetadataTags_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetMetadataTags.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetMetadataTags>()
{
	return FRigUnit_GetMetadataTags::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Returns the metadata tags on an item\n */" },
		{ "DisplayName", "Get Tags" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "MetadataExists,HasKey,Tagging,FindTag" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Returns the metadata tags on an item" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to check the metadata for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The item to check the metadata for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the tag to check\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "The name of the tag to check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetMetadataTags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetMetadataTags, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetMetadataTags, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetMetadataTags, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::NewProp_CachedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetMetadataTags",
	Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::PropPointers),
	sizeof(FRigUnit_GetMetadataTags),
	alignof(FRigUnit_GetMetadataTags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetMetadataTags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetMetadataTags.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetMetadataTags.InnerSingleton;
}
void FRigUnit_GetMetadataTags::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetMetadataTags::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Tags,
		CachedIndex
	);
}
// End ScriptStruct FRigUnit_GetMetadataTags

// Begin ScriptStruct FRigUnit_SetMetadataTag
static_assert(std::is_polymorphic<FRigUnit_SetMetadataTag>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetMetadataTag cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTag;
class UScriptStruct* FRigUnit_SetMetadataTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMetadataTag"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetMetadataTag_Execute;
		Arguments_FRigUnit_SetMetadataTag_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetMetadataTag_Execute.Emplace(TEXT("Tag"), TEXT("FName"));
		Arguments_FRigUnit_SetMetadataTag_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_SetMetadataTag_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetMetadataTag::Execute"), &FRigUnit_SetMetadataTag::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTag.OuterSingleton, Arguments_FRigUnit_SetMetadataTag_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTag.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMetadataTag>()
{
	return FRigUnit_SetMetadataTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Sets a single tag on an item \n */" },
		{ "DisplayName", "Add Tag" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "MetadataExists,HasKey,Tagging,FindTag,SetTag" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Sets a single tag on an item" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to set the metadata for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The item to set the metadata for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the tag to set\n\x09 */" },
		{ "CustomWidget", "MetadataTagName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The name of the tag to set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMetadataTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMetadataTag, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMetadataTag, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMetadataTag, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMetadataTag, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewProp_CachedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetMetadataTag",
	Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::PropPointers),
	sizeof(FRigUnit_SetMetadataTag),
	alignof(FRigUnit_SetMetadataTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTag.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTag.InnerSingleton;
}
void FRigUnit_SetMetadataTag::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetMetadataTag::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Tag,
		NameSpace,
		CachedIndex
	);
}
// End ScriptStruct FRigUnit_SetMetadataTag

// Begin ScriptStruct FRigUnit_SetMetadataTagArray
static_assert(std::is_polymorphic<FRigUnit_SetMetadataTagArray>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetMetadataTagArray cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTagArray;
class UScriptStruct* FRigUnit_SetMetadataTagArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTagArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTagArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetMetadataTagArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetMetadataTagArray_Execute;
		Arguments_FRigUnit_SetMetadataTagArray_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetMetadataTagArray_Execute.Emplace(TEXT("Tags"), TEXT("TArray<FName>"));
		Arguments_FRigUnit_SetMetadataTagArray_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_SetMetadataTagArray_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetMetadataTagArray::Execute"), &FRigUnit_SetMetadataTagArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTagArray.OuterSingleton, Arguments_FRigUnit_SetMetadataTagArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTagArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetMetadataTagArray>()
{
	return FRigUnit_SetMetadataTagArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Sets multiple tags on an item \n */" },
		{ "DisplayName", "Add Multiple Tags" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "AddTags,MetadataExists,HasKey,Tagging,FindTag,SetTags" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Sets multiple tags on an item" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to set the metadata for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The item to set the metadata for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The tags to set for the item\n\x09 */" },
		{ "CustomWidget", "MetadataTagName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The tags to set for the item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetMetadataTagArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMetadataTagArray, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMetadataTagArray, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMetadataTagArray, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetMetadataTagArray, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewProp_CachedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetMetadataTagArray",
	Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::PropPointers),
	sizeof(FRigUnit_SetMetadataTagArray),
	alignof(FRigUnit_SetMetadataTagArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTagArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTagArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTagArray.InnerSingleton;
}
void FRigUnit_SetMetadataTagArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetMetadataTagArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FName> Tags_1_Array(Tags);
	StaticExecute(
		InExecuteContext,
		Item,
		Tags_1_Array,
		NameSpace,
		CachedIndex
	);
}
// End ScriptStruct FRigUnit_SetMetadataTagArray

// Begin ScriptStruct FRigUnit_RemoveMetadataTag
static_assert(std::is_polymorphic<FRigUnit_RemoveMetadataTag>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_RemoveMetadataTag cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadataTag;
class UScriptStruct* FRigUnit_RemoveMetadataTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadataTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadataTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RemoveMetadataTag"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_RemoveMetadataTag_Execute;
		Arguments_FRigUnit_RemoveMetadataTag_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_RemoveMetadataTag_Execute.Emplace(TEXT("Tag"), TEXT("FName"));
		Arguments_FRigUnit_RemoveMetadataTag_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_RemoveMetadataTag_Execute.Emplace(TEXT("Removed"), TEXT("bool"));
		Arguments_FRigUnit_RemoveMetadataTag_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RemoveMetadataTag::Execute"), &FRigUnit_RemoveMetadataTag::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadataTag.OuterSingleton, Arguments_FRigUnit_RemoveMetadataTag_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadataTag.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RemoveMetadataTag>()
{
	return FRigUnit_RemoveMetadataTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Removes a tag from an item \n */" },
		{ "DisplayName", "Remove Tag" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "DeleteTag" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Removes a tag from an item" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to set the metadata for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The item to set the metadata for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the tag to set\n\x09 */" },
		{ "CustomWidget", "MetadataTagName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The name of the tag to set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Removed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Returns true if the removal was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if the removal was successful" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static void NewProp_Removed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Removed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RemoveMetadataTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveMetadataTag, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveMetadataTag, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveMetadataTag, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
void Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_Removed_SetBit(void* Obj)
{
	((FRigUnit_RemoveMetadataTag*)Obj)->Removed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_Removed = { "Removed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_RemoveMetadataTag), &Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_Removed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Removed_MetaData), NewProp_Removed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_RemoveMetadataTag, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_Removed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewProp_CachedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_RemoveMetadataTag",
	Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::PropPointers),
	sizeof(FRigUnit_RemoveMetadataTag),
	alignof(FRigUnit_RemoveMetadataTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadataTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadataTag.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadataTag.InnerSingleton;
}
void FRigUnit_RemoveMetadataTag::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_RemoveMetadataTag::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Tag,
		NameSpace,
		Removed,
		CachedIndex
	);
}
// End ScriptStruct FRigUnit_RemoveMetadataTag

// Begin ScriptStruct FRigUnit_HasMetadataTag
static_assert(std::is_polymorphic<FRigUnit_HasMetadataTag>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_HasMetadataTag cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTag;
class UScriptStruct* FRigUnit_HasMetadataTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HasMetadataTag"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HasMetadataTag_Execute;
		Arguments_FRigUnit_HasMetadataTag_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HasMetadataTag_Execute.Emplace(TEXT("Tag"), TEXT("FName"));
		Arguments_FRigUnit_HasMetadataTag_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_HasMetadataTag_Execute.Emplace(TEXT("Found"), TEXT("bool"));
		Arguments_FRigUnit_HasMetadataTag_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HasMetadataTag::Execute"), &FRigUnit_HasMetadataTag::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTag.OuterSingleton, Arguments_FRigUnit_HasMetadataTag_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTag.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HasMetadataTag>()
{
	return FRigUnit_HasMetadataTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Returns true if a given item in the hierarchy has a specific tag stored in the metadata\n */" },
		{ "DisplayName", "Has Tag" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "MetadataExists,HasKey,Tagging,FindTag" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Returns true if a given item in the hierarchy has a specific tag stored in the metadata" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to check the metadata for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The item to check the metadata for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the tag to check\n\x09 */" },
		{ "CustomWidget", "MetadataTagName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The name of the tag to check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Found_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// True if the item has the metadata\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the item has the metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static void NewProp_Found_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Found;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HasMetadataTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadataTag, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadataTag, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadataTag, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
void Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_Found_SetBit(void* Obj)
{
	((FRigUnit_HasMetadataTag*)Obj)->Found = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_Found = { "Found", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_HasMetadataTag), &Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_Found_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Found_MetaData), NewProp_Found_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadataTag, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_Found,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewProp_CachedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_HasMetadataTag",
	Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::PropPointers),
	sizeof(FRigUnit_HasMetadataTag),
	alignof(FRigUnit_HasMetadataTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTag.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTag.InnerSingleton;
}
void FRigUnit_HasMetadataTag::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_HasMetadataTag::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Tag,
		NameSpace,
		Found,
		CachedIndex
	);
}
// End ScriptStruct FRigUnit_HasMetadataTag

// Begin ScriptStruct FRigUnit_HasMetadataTagArray
static_assert(std::is_polymorphic<FRigUnit_HasMetadataTagArray>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_HasMetadataTagArray cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTagArray;
class UScriptStruct* FRigUnit_HasMetadataTagArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTagArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTagArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HasMetadataTagArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HasMetadataTagArray_Execute;
		Arguments_FRigUnit_HasMetadataTagArray_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HasMetadataTagArray_Execute.Emplace(TEXT("Tags"), TEXT("TArray<FName>"));
		Arguments_FRigUnit_HasMetadataTagArray_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_HasMetadataTagArray_Execute.Emplace(TEXT("Found"), TEXT("bool"));
		Arguments_FRigUnit_HasMetadataTagArray_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HasMetadataTagArray::Execute"), &FRigUnit_HasMetadataTagArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTagArray.OuterSingleton, Arguments_FRigUnit_HasMetadataTagArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTagArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HasMetadataTagArray>()
{
	return FRigUnit_HasMetadataTagArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Returns true if a given item in the hierarchy has all of the provided tags\n */" },
		{ "DisplayName", "Has Multiple Tags" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "MetadataExists,HasKey,Tagging,FindTag" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Returns true if a given item in the hierarchy has all of the provided tags" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to check the metadata for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The item to check the metadata for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the tag to check\n\x09 */" },
		{ "CustomWidget", "MetadataTagName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The name of the tag to check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Found_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// True if the item has the metadata\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the item has the metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static void NewProp_Found_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Found;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HasMetadataTagArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadataTagArray, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadataTagArray, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadataTagArray, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
void Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_Found_SetBit(void* Obj)
{
	((FRigUnit_HasMetadataTagArray*)Obj)->Found = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_Found = { "Found", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_HasMetadataTagArray), &Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_Found_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Found_MetaData), NewProp_Found_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_HasMetadataTagArray, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_Found,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewProp_CachedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_HasMetadataTagArray",
	Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::PropPointers),
	sizeof(FRigUnit_HasMetadataTagArray),
	alignof(FRigUnit_HasMetadataTagArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTagArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTagArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTagArray.InnerSingleton;
}
void FRigUnit_HasMetadataTagArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_HasMetadataTagArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FName> Tags_1_Array(Tags);
	StaticExecute(
		InExecuteContext,
		Item,
		Tags_1_Array,
		NameSpace,
		Found,
		CachedIndex
	);
}
// End ScriptStruct FRigUnit_HasMetadataTagArray

// Begin ScriptStruct FRigUnit_FindItemsWithMetadataTag
static_assert(std::is_polymorphic<FRigUnit_FindItemsWithMetadataTag>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_FindItemsWithMetadataTag cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTag;
class UScriptStruct* FRigUnit_FindItemsWithMetadataTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FindItemsWithMetadataTag"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FindItemsWithMetadataTag_Execute;
		Arguments_FRigUnit_FindItemsWithMetadataTag_Execute.Emplace(TEXT("Tag"), TEXT("FName"));
		Arguments_FRigUnit_FindItemsWithMetadataTag_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_FindItemsWithMetadataTag_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FindItemsWithMetadataTag::Execute"), &FRigUnit_FindItemsWithMetadataTag::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTag.OuterSingleton, Arguments_FRigUnit_FindItemsWithMetadataTag_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTag.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FindItemsWithMetadataTag>()
{
	return FRigUnit_FindItemsWithMetadataTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Returns all items with a specific tag\n */" },
		{ "DisplayName", "Find Items with Tag" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "MetadataExists,HasKey,SupportsMetadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Returns all items with a specific tag" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the tag to find\n\x09 */" },
		{ "CustomWidget", "MetadataTagName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The name of the tag to find" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The items containing the metadata\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "The items containing the metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FindItemsWithMetadataTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FindItemsWithMetadataTag, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FindItemsWithMetadataTag, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FindItemsWithMetadataTag, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_FindItemsWithMetadataTag",
	Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::PropPointers),
	sizeof(FRigUnit_FindItemsWithMetadataTag),
	alignof(FRigUnit_FindItemsWithMetadataTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTag.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTag.InnerSingleton;
}
void FRigUnit_FindItemsWithMetadataTag::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FindItemsWithMetadataTag::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Tag,
		NameSpace,
		Items
	);
}
// End ScriptStruct FRigUnit_FindItemsWithMetadataTag

// Begin ScriptStruct FRigUnit_FindItemsWithMetadataTagArray
static_assert(std::is_polymorphic<FRigUnit_FindItemsWithMetadataTagArray>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_FindItemsWithMetadataTagArray cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTagArray;
class UScriptStruct* FRigUnit_FindItemsWithMetadataTagArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTagArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTagArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FindItemsWithMetadataTagArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FindItemsWithMetadataTagArray_Execute;
		Arguments_FRigUnit_FindItemsWithMetadataTagArray_Execute.Emplace(TEXT("Tags"), TEXT("TArray<FName>"));
		Arguments_FRigUnit_FindItemsWithMetadataTagArray_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_FindItemsWithMetadataTagArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FindItemsWithMetadataTagArray::Execute"), &FRigUnit_FindItemsWithMetadataTagArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTagArray.OuterSingleton, Arguments_FRigUnit_FindItemsWithMetadataTagArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTagArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FindItemsWithMetadataTagArray>()
{
	return FRigUnit_FindItemsWithMetadataTagArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Returns all items with a specific tag\n */" },
		{ "DisplayName", "Find Items with multiple Tags" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "MetadataExists,HasKey,SupportsMetadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Returns all items with a specific tag" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The tags to find\n\x09 */" },
		{ "CustomWidget", "MetadataTagName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The tags to find" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The items containing the metadata\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "The items containing the metadata" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FindItemsWithMetadataTagArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FindItemsWithMetadataTagArray, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FindItemsWithMetadataTagArray, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FindItemsWithMetadataTagArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_FindItemsWithMetadataTagArray",
	Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::PropPointers),
	sizeof(FRigUnit_FindItemsWithMetadataTagArray),
	alignof(FRigUnit_FindItemsWithMetadataTagArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTagArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTagArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTagArray.InnerSingleton;
}
void FRigUnit_FindItemsWithMetadataTagArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FindItemsWithMetadataTagArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FName> Tags_0_Array(Tags);
	StaticExecute(
		InExecuteContext,
		Tags_0_Array,
		NameSpace,
		Items
	);
}
// End ScriptStruct FRigUnit_FindItemsWithMetadataTagArray

// Begin ScriptStruct FRigUnit_FilterItemsByMetadataTags
static_assert(std::is_polymorphic<FRigUnit_FilterItemsByMetadataTags>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_FilterItemsByMetadataTags cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FilterItemsByMetadataTags;
class UScriptStruct* FRigUnit_FilterItemsByMetadataTags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FilterItemsByMetadataTags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FilterItemsByMetadataTags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FilterItemsByMetadataTags"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FilterItemsByMetadataTags_Execute;
		Arguments_FRigUnit_FilterItemsByMetadataTags_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_FilterItemsByMetadataTags_Execute.Emplace(TEXT("Tags"), TEXT("TArray<FName>"));
		Arguments_FRigUnit_FilterItemsByMetadataTags_Execute.Emplace(TEXT("NameSpace"), TEXT("ERigMetaDataNameSpace"));
		Arguments_FRigUnit_FilterItemsByMetadataTags_Execute.Emplace(TEXT("Inclusive"), TEXT("bool"));
		Arguments_FRigUnit_FilterItemsByMetadataTags_Execute.Emplace(TEXT("Result"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_FilterItemsByMetadataTags_Execute.Emplace(TEXT("CachedIndices"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FilterItemsByMetadataTags::Execute"), &FRigUnit_FilterItemsByMetadataTags::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FilterItemsByMetadataTags.OuterSingleton, Arguments_FRigUnit_FilterItemsByMetadataTags_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FilterItemsByMetadataTags.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FilterItemsByMetadataTags>()
{
	return FRigUnit_FilterItemsByMetadataTags::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Filters an item array by a list of tags\n */" },
		{ "DisplayName", "Filter Items by Tags" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "MetadataExists,HasKey,SupportsMetadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Filters an item array by a list of tags" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The items to filter\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The items to filter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The tags to find\n\x09 */" },
		{ "CustomWidget", "MetadataTagName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "The tags to find" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines in which namespace the metadata will be looked up\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Defines in which namespace the metadata will be looked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inclusive_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n     * If set to true only items with ALL of tags will be returned,\n     * if set to false items with ANY of the tags will be removed\n     */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "If set to true only items with ALL of tags will be returned,\nif set to false items with ANY of the tags will be removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The results of the filter\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "Output", "" },
		{ "ToolTip", "The results of the filter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndices_MetaData[] = {
		{ "Comment", "// Used to cache the internally used indices\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "Used to cache the internally used indices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameSpace;
	static void NewProp_Inclusive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Inclusive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FilterItemsByMetadataTags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FilterItemsByMetadataTags, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FilterItemsByMetadataTags, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_NameSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FilterItemsByMetadataTags, NameSpace), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) }; // 409500391
void Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Inclusive_SetBit(void* Obj)
{
	((FRigUnit_FilterItemsByMetadataTags*)Obj)->Inclusive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Inclusive = { "Inclusive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_FilterItemsByMetadataTags), &Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Inclusive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inclusive_MetaData), NewProp_Inclusive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FilterItemsByMetadataTags, Result), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_CachedIndices_Inner = { "CachedIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_CachedIndices = { "CachedIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FilterItemsByMetadataTags, CachedIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndices_MetaData), NewProp_CachedIndices_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_NameSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_NameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Inclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Result_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_CachedIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewProp_CachedIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_FilterItemsByMetadataTags",
	Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::PropPointers),
	sizeof(FRigUnit_FilterItemsByMetadataTags),
	alignof(FRigUnit_FilterItemsByMetadataTags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FilterItemsByMetadataTags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FilterItemsByMetadataTags.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FilterItemsByMetadataTags.InnerSingleton;
}
void FRigUnit_FilterItemsByMetadataTags::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FilterItemsByMetadataTags::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	TArrayView<const FName> Tags_1_Array(Tags);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Tags_1_Array,
		NameSpace,
		Inclusive,
		Result,
		CachedIndices
	);
}
// End ScriptStruct FRigUnit_FilterItemsByMetadataTags

// Begin ScriptStruct FRigDispatch_GetModuleMetadata
static_assert(std::is_polymorphic<FRigDispatch_GetModuleMetadata>() == std::is_polymorphic<FRigDispatch_GetMetadata>(), "USTRUCT FRigDispatch_GetModuleMetadata cannot be polymorphic unless super FRigDispatch_GetMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_GetModuleMetadata;
class UScriptStruct* FRigDispatch_GetModuleMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_GetModuleMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_GetModuleMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_GetModuleMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_GetModuleMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_GetModuleMetadata>()
{
	return FRigDispatch_GetModuleMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Returns some metadata on a given module\n */" },
		{ "DisplayName", "Get Module Metadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "* Returns some metadata on a given module" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_GetModuleMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigDispatch_GetMetadata,
	&NewStructOps,
	"RigDispatch_GetModuleMetadata",
	nullptr,
	0,
	sizeof(FRigDispatch_GetModuleMetadata),
	alignof(FRigDispatch_GetModuleMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_GetModuleMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_GetModuleMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_GetModuleMetadata.InnerSingleton;
}
// End ScriptStruct FRigDispatch_GetModuleMetadata

// Begin ScriptStruct FRigDispatch_SetModuleMetadata
static_assert(std::is_polymorphic<FRigDispatch_SetModuleMetadata>() == std::is_polymorphic<FRigDispatch_SetMetadata>(), "USTRUCT FRigDispatch_SetModuleMetadata cannot be polymorphic unless super FRigDispatch_SetMetadata is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_SetModuleMetadata;
class UScriptStruct* FRigDispatch_SetModuleMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_SetModuleMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_SetModuleMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_SetModuleMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_SetModuleMetadata.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_SetModuleMetadata>()
{
	return FRigDispatch_SetModuleMetadata::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Sets metadata on the module\n */" },
		{ "DisplayName", "Set Module Metadata" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_Metadata.h" },
		{ "ToolTip", "* Sets metadata on the module" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_SetModuleMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigDispatch_SetMetadata,
	&NewStructOps,
	"RigDispatch_SetModuleMetadata",
	nullptr,
	0,
	sizeof(FRigDispatch_SetModuleMetadata),
	alignof(FRigDispatch_SetModuleMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_SetModuleMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_SetModuleMetadata.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_SetModuleMetadata.InnerSingleton;
}
// End ScriptStruct FRigDispatch_SetModuleMetadata

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigDispatch_MetadataBase::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics::NewStructOps, TEXT("RigDispatch_MetadataBase"), &Z_Registration_Info_UScriptStruct_RigDispatch_MetadataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_MetadataBase), 1744662835U) },
		{ FRigDispatch_GetMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics::NewStructOps, TEXT("RigDispatch_GetMetadata"), &Z_Registration_Info_UScriptStruct_RigDispatch_GetMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_GetMetadata), 656736402U) },
		{ FRigDispatch_SetMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics::NewStructOps, TEXT("RigDispatch_SetMetadata"), &Z_Registration_Info_UScriptStruct_RigDispatch_SetMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_SetMetadata), 611082184U) },
		{ FRigUnit_RemoveMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics::NewStructOps, TEXT("RigUnit_RemoveMetadata"), &Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RemoveMetadata), 1078257627U) },
		{ FRigUnit_RemoveAllMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics::NewStructOps, TEXT("RigUnit_RemoveAllMetadata"), &Z_Registration_Info_UScriptStruct_RigUnit_RemoveAllMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RemoveAllMetadata), 2455027535U) },
		{ FRigUnit_HasMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics::NewStructOps, TEXT("RigUnit_HasMetadata"), &Z_Registration_Info_UScriptStruct_RigUnit_HasMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HasMetadata), 2421461739U) },
		{ FRigUnit_FindItemsWithMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics::NewStructOps, TEXT("RigUnit_FindItemsWithMetadata"), &Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FindItemsWithMetadata), 1027540558U) },
		{ FRigUnit_GetMetadataTags::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics::NewStructOps, TEXT("RigUnit_GetMetadataTags"), &Z_Registration_Info_UScriptStruct_RigUnit_GetMetadataTags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetMetadataTags), 1698595116U) },
		{ FRigUnit_SetMetadataTag::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics::NewStructOps, TEXT("RigUnit_SetMetadataTag"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMetadataTag), 251120353U) },
		{ FRigUnit_SetMetadataTagArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics::NewStructOps, TEXT("RigUnit_SetMetadataTagArray"), &Z_Registration_Info_UScriptStruct_RigUnit_SetMetadataTagArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetMetadataTagArray), 2867891775U) },
		{ FRigUnit_RemoveMetadataTag::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::NewStructOps, TEXT("RigUnit_RemoveMetadataTag"), &Z_Registration_Info_UScriptStruct_RigUnit_RemoveMetadataTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RemoveMetadataTag), 3581092663U) },
		{ FRigUnit_HasMetadataTag::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics::NewStructOps, TEXT("RigUnit_HasMetadataTag"), &Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HasMetadataTag), 1519682429U) },
		{ FRigUnit_HasMetadataTagArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics::NewStructOps, TEXT("RigUnit_HasMetadataTagArray"), &Z_Registration_Info_UScriptStruct_RigUnit_HasMetadataTagArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HasMetadataTagArray), 1497590415U) },
		{ FRigUnit_FindItemsWithMetadataTag::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics::NewStructOps, TEXT("RigUnit_FindItemsWithMetadataTag"), &Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FindItemsWithMetadataTag), 1100104219U) },
		{ FRigUnit_FindItemsWithMetadataTagArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics::NewStructOps, TEXT("RigUnit_FindItemsWithMetadataTagArray"), &Z_Registration_Info_UScriptStruct_RigUnit_FindItemsWithMetadataTagArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FindItemsWithMetadataTagArray), 2148846436U) },
		{ FRigUnit_FilterItemsByMetadataTags::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics::NewStructOps, TEXT("RigUnit_FilterItemsByMetadataTags"), &Z_Registration_Info_UScriptStruct_RigUnit_FilterItemsByMetadataTags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FilterItemsByMetadataTags), 4017787240U) },
		{ FRigDispatch_GetModuleMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata_Statics::NewStructOps, TEXT("RigDispatch_GetModuleMetadata"), &Z_Registration_Info_UScriptStruct_RigDispatch_GetModuleMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_GetModuleMetadata), 2533504988U) },
		{ FRigDispatch_SetModuleMetadata::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata_Statics::NewStructOps, TEXT("RigDispatch_SetModuleMetadata"), &Z_Registration_Info_UScriptStruct_RigDispatch_SetModuleMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_SetModuleMetadata), 1308293545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_835138859(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
