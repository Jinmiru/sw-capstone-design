// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/UObject/OverriddenPropertySet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverriddenPropertySet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FOverriddenPropertyNode();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FOverriddenPropertyNodeID();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FOverriddenPropertySet();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Enum EOverriddenPropertyOperation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOverriddenPropertyOperation;
static UEnum* EOverriddenPropertyOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOverriddenPropertyOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOverriddenPropertyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("EOverriddenPropertyOperation"));
	}
	return Z_Registration_Info_UEnum_EOverriddenPropertyOperation.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<EOverriddenPropertyOperation>()
{
	return EOverriddenPropertyOperation_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Comment", "/* everything has been overridden from this property down to every sub property/sub object*/" },
		{ "Add.Name", "EOverriddenPropertyOperation::Add" },
		{ "Add.ToolTip", "everything has been overridden from this property down to every sub property/sub object" },
		{ "Comment", "/*\n * Override operation type for each property node\n */" },
		{ "Modified.Comment", "/* no overridden operation was recorded on this property  */" },
		{ "Modified.Name", "EOverriddenPropertyOperation::Modified" },
		{ "Modified.ToolTip", "no overridden operation was recorded on this property" },
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
		{ "None.Name", "EOverriddenPropertyOperation::None" },
		{ "Remove.Comment", "/* this element was added in the container */" },
		{ "Remove.Name", "EOverriddenPropertyOperation::Remove" },
		{ "Remove.ToolTip", "this element was added in the container" },
		{ "Replace.Comment", "/* some sub property has recorded overridden operation */" },
		{ "Replace.Name", "EOverriddenPropertyOperation::Replace" },
		{ "Replace.ToolTip", "some sub property has recorded overridden operation" },
		{ "ToolTip", "* Override operation type for each property node" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOverriddenPropertyOperation::None", (int64)EOverriddenPropertyOperation::None },
		{ "EOverriddenPropertyOperation::Modified", (int64)EOverriddenPropertyOperation::Modified },
		{ "EOverriddenPropertyOperation::Replace", (int64)EOverriddenPropertyOperation::Replace },
		{ "EOverriddenPropertyOperation::Add", (int64)EOverriddenPropertyOperation::Add },
		{ "EOverriddenPropertyOperation::Remove", (int64)EOverriddenPropertyOperation::Remove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"EOverriddenPropertyOperation",
	"EOverriddenPropertyOperation",
	Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation()
{
	if (!Z_Registration_Info_UEnum_EOverriddenPropertyOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOverriddenPropertyOperation.InnerSingleton, Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOverriddenPropertyOperation.InnerSingleton;
}
// End Enum EOverriddenPropertyOperation

// Begin ScriptStruct FOverriddenPropertyNodeID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OverriddenPropertyNodeID;
class UScriptStruct* FOverriddenPropertyNodeID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OverriddenPropertyNodeID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OverriddenPropertyNodeID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverriddenPropertyNodeID, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("OverriddenPropertyNodeID"));
	}
	return Z_Registration_Info_UScriptStruct_OverriddenPropertyNodeID.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FOverriddenPropertyNodeID>()
{
	return FOverriddenPropertyNodeID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Path;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverriddenPropertyNodeID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverriddenPropertyNodeID, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverriddenPropertyNodeID, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"OverriddenPropertyNodeID",
	Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::PropPointers),
	sizeof(FOverriddenPropertyNodeID),
	alignof(FOverriddenPropertyNodeID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOverriddenPropertyNodeID()
{
	if (!Z_Registration_Info_UScriptStruct_OverriddenPropertyNodeID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OverriddenPropertyNodeID.InnerSingleton, Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OverriddenPropertyNodeID.InnerSingleton;
}
// End ScriptStruct FOverriddenPropertyNodeID

// Begin ScriptStruct FOverriddenPropertyNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OverriddenPropertyNode;
class UScriptStruct* FOverriddenPropertyNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OverriddenPropertyNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OverriddenPropertyNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverriddenPropertyNode, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("OverriddenPropertyNode"));
	}
	return Z_Registration_Info_UScriptStruct_OverriddenPropertyNode.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FOverriddenPropertyNode>()
{
	return FOverriddenPropertyNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n *************************************************************************************\n * Overridable serialization is experimental, not supported and use at your own risk *\n *************************************************************************************\n * Overridden property information node, there will be one per overriden property/subojects\n *\n */" },
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
		{ "ToolTip", "* Overridable serialization is experimental, not supported and use at your own risk *\n*************************************************************************************\n* Overridden property information node, there will be one per overriden property/subojects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubPropertyNodeKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubPropertyNodeKeys_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubPropertyNodeKeys_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SubPropertyNodeKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverriddenPropertyNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverriddenPropertyNode, NodeID), Z_Construct_UScriptStruct_FOverriddenPropertyNodeID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeID_MetaData), NewProp_NodeID_MetaData) }; // 2077550584
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverriddenPropertyNode, Operation), Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 58195323
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_SubPropertyNodeKeys_ValueProp = { "SubPropertyNodeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOverriddenPropertyNodeID, METADATA_PARAMS(0, nullptr) }; // 2077550584
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_SubPropertyNodeKeys_Key_KeyProp = { "SubPropertyNodeKeys_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOverriddenPropertyNodeID, METADATA_PARAMS(0, nullptr) }; // 2077550584
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_SubPropertyNodeKeys = { "SubPropertyNodeKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverriddenPropertyNode, SubPropertyNodeKeys), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubPropertyNodeKeys_MetaData), NewProp_SubPropertyNodeKeys_MetaData) }; // 2077550584 2077550584
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_NodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_SubPropertyNodeKeys_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_SubPropertyNodeKeys_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewProp_SubPropertyNodeKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"OverriddenPropertyNode",
	Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::PropPointers),
	sizeof(FOverriddenPropertyNode),
	alignof(FOverriddenPropertyNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOverriddenPropertyNode()
{
	if (!Z_Registration_Info_UScriptStruct_OverriddenPropertyNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OverriddenPropertyNode.InnerSingleton, Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OverriddenPropertyNode.InnerSingleton;
}
// End ScriptStruct FOverriddenPropertyNode

// Begin ScriptStruct FOverriddenPropertySet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OverriddenPropertySet;
class UScriptStruct* FOverriddenPropertySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OverriddenPropertySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OverriddenPropertySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverriddenPropertySet, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("OverriddenPropertySet"));
	}
	return Z_Registration_Info_UScriptStruct_OverriddenPropertySet.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FOverriddenPropertySet>()
{
	return FOverriddenPropertySet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n *************************************************************************************\n * Overridable serialization is experimental, not supported and use at your own risk *\n *************************************************************************************\n * Structure holding and tracking overridden properties of an UObject\n */" },
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
		{ "ToolTip", "* Overridable serialization is experimental, not supported and use at your own risk *\n*************************************************************************************\n* Structure holding and tracking overridden properties of an UObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenPropertyNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/OverriddenPropertySet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverriddenPropertyNodes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OverriddenPropertyNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverriddenPropertySet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverriddenPropertySet, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::NewProp_OverriddenPropertyNodes_ElementProp = { "OverriddenPropertyNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOverriddenPropertyNode, METADATA_PARAMS(0, nullptr) }; // 3354468272
static_assert(TModels_V<CGetTypeHashable, FOverriddenPropertyNode>, "The structure 'FOverriddenPropertyNode' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::NewProp_OverriddenPropertyNodes = { "OverriddenPropertyNodes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverriddenPropertySet, OverriddenPropertyNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverriddenPropertyNodes_MetaData), NewProp_OverriddenPropertyNodes_MetaData) }; // 3354468272
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::NewProp_OverriddenPropertyNodes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::NewProp_OverriddenPropertyNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"OverriddenPropertySet",
	Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::PropPointers),
	sizeof(FOverriddenPropertySet),
	alignof(FOverriddenPropertySet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOverriddenPropertySet()
{
	if (!Z_Registration_Info_UScriptStruct_OverriddenPropertySet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OverriddenPropertySet.InnerSingleton, Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OverriddenPropertySet.InnerSingleton;
}
// End ScriptStruct FOverriddenPropertySet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOverriddenPropertyOperation_StaticEnum, TEXT("EOverriddenPropertyOperation"), &Z_Registration_Info_UEnum_EOverriddenPropertyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 58195323U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOverriddenPropertyNodeID::StaticStruct, Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::NewStructOps, TEXT("OverriddenPropertyNodeID"), &Z_Registration_Info_UScriptStruct_OverriddenPropertyNodeID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOverriddenPropertyNodeID), 2077550584U) },
		{ FOverriddenPropertyNode::StaticStruct, Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewStructOps, TEXT("OverriddenPropertyNode"), &Z_Registration_Info_UScriptStruct_OverriddenPropertyNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOverriddenPropertyNode), 3354468272U) },
		{ FOverriddenPropertySet::StaticStruct, Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::NewStructOps, TEXT("OverriddenPropertySet"), &Z_Registration_Info_UScriptStruct_OverriddenPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOverriddenPropertySet), 2781226874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_4193294545(TEXT("/Script/CoreUObject"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
