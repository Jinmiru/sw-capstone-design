// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphReference();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FGraphReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphReference;
class UScriptStruct* FGraphReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GraphReference"));
	}
	return Z_Registration_Info_UScriptStruct_GraphReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGraphReference>()
{
	return FGraphReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGraphReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MacroGraph_MetaData[] = {
		{ "Comment", "// Reference to the actual graph\n" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Reference to the actual graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBlueprint_MetaData[] = {
		{ "Comment", "// The blueprint the graph is contained within\n" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "The blueprint the graph is contained within" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[] = {
		{ "Comment", "// The graph GUID so we can refind it if it has been renamed\n" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "The graph GUID so we can refind it if it has been renamed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MacroGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphBlueprint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph = { "MacroGraph", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphReference, MacroGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MacroGraph_MetaData), NewProp_MacroGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint = { "GraphBlueprint", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphReference, GraphBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBlueprint_MetaData), NewProp_GraphBlueprint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid = { "GraphGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphReference, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphGuid_MetaData), NewProp_GraphGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"GraphReference",
	Z_Construct_UScriptStruct_FGraphReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::PropPointers),
	sizeof(FGraphReference),
	alignof(FGraphReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGraphReference()
{
	if (!Z_Registration_Info_UScriptStruct_GraphReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphReference.InnerSingleton, Z_Construct_UScriptStruct_FGraphReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GraphReference.InnerSingleton;
}
// End ScriptStruct FGraphReference

// Begin Class UEdGraph
void UEdGraph::StaticRegisterNativesUEdGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph);
UClass* Z_Construct_UClass_UEdGraph_NoRegister()
{
	return UEdGraph::StaticClass();
}
struct Z_Construct_UClass_UEdGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraph.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[] = {
		{ "Comment", "/** The schema that this graph obeys */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "The schema that this graph obeys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Comment", "/** Set of all nodes in this graph */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Set of all nodes in this graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[] = {
		{ "Comment", "/** If true, graph can be edited by the user */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "If true, graph can be edited by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDeletion_MetaData[] = {
		{ "Comment", "/** \n\x09\x09If true, graph can be deleted from the whatever container it is in. For FunctionGraphs\n\x09\x09this flag is reset to false on load (unless the function is the construction script or\n\x09\x09""AnimGraph)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "If true, graph can be deleted from the whatever container it is in. For FunctionGraphs\nthis flag is reset to false on load (unless the function is the construction script or\nAnimGraph)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRenaming_MetaData[] = {
		{ "Comment", "/** If true, graph can be renamed; Note: Graph can also be renamed if bAllowDeletion is true currently */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "If true, graph can be renamed; Note: Graph can also be renamed if bAllowDeletion is true currently" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubGraphs_MetaData[] = {
		{ "Comment", "/** Child graphs that are a part of this graph; the separation is purely visual */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Child graphs that are a part of this graph; the separation is purely visual" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[] = {
		{ "Comment", "/** Guid for this graph */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Guid for this graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceGuid_MetaData[] = {
		{ "Comment", "/** Guid of interface graph this graph comes from (used for conforming) */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Guid of interface graph this graph comes from (used for conforming)" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Schema;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static void NewProp_bEditable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditable;
	static void NewProp_bAllowDeletion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDeletion;
	static void NewProp_bAllowRenaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRenaming;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubGraphs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterfaceGuid;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema = { "Schema", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraph, Schema), Z_Construct_UClass_UClass, Z_Construct_UClass_UEdGraphSchema_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Schema_MetaData), NewProp_Schema_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraph, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) };
void Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_SetBit(void* Obj)
{
	((UEdGraph*)Obj)->bEditable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable = { "bEditable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraph), &Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEditable_MetaData), NewProp_bEditable_MetaData) };
void Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_SetBit(void* Obj)
{
	((UEdGraph*)Obj)->bAllowDeletion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion = { "bAllowDeletion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraph), &Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDeletion_MetaData), NewProp_bAllowDeletion_MetaData) };
void Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_SetBit(void* Obj)
{
	((UEdGraph*)Obj)->bAllowRenaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming = { "bAllowRenaming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraph), &Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRenaming_MetaData), NewProp_bAllowRenaming_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_Inner = { "SubGraphs", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs = { "SubGraphs", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraph, SubGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubGraphs_MetaData), NewProp_SubGraphs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid = { "GraphGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraph, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphGuid_MetaData), NewProp_GraphGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid = { "InterfaceGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraph, InterfaceGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterfaceGuid_MetaData), NewProp_InterfaceGuid_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_Statics::ClassParams = {
	&UEdGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraph()
{
	if (!Z_Registration_Info_UClass_UEdGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph.OuterSingleton, Z_Construct_UClass_UEdGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraph.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEdGraph>()
{
	return UEdGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph);
UEdGraph::~UEdGraph() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FARCHIVE_SERIALIZER(UEdGraph)
#endif // WITH_EDITORONLY_DATA
// End Class UEdGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGraphReference::StaticStruct, Z_Construct_UScriptStruct_FGraphReference_Statics::NewStructOps, TEXT("GraphReference"), &Z_Registration_Info_UScriptStruct_GraphReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphReference), 473548070U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph, UEdGraph::StaticClass, TEXT("UEdGraph"), &Z_Registration_Info_UClass_UEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph), 2535997490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_1832865327(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
