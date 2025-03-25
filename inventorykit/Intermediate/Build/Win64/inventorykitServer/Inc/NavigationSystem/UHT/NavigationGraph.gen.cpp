// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavGraph/NavigationGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraph();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraph_NoRegister();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavGraphEdge();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavGraphNode();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin ScriptStruct FNavGraphEdge
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavGraphEdge;
class UScriptStruct* FNavGraphEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavGraphEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavGraphEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavGraphEdge, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavGraphEdge"));
	}
	return Z_Registration_Info_UScriptStruct_NavGraphEdge.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavGraphEdge>()
{
	return FNavGraphEdge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavGraphEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraph.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavGraphEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavGraphEdge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"NavGraphEdge",
	nullptr,
	0,
	sizeof(FNavGraphEdge),
	alignof(FNavGraphEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavGraphEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavGraphEdge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavGraphEdge()
{
	if (!Z_Registration_Info_UScriptStruct_NavGraphEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavGraphEdge.InnerSingleton, Z_Construct_UScriptStruct_FNavGraphEdge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavGraphEdge.InnerSingleton;
}
// End ScriptStruct FNavGraphEdge

// Begin ScriptStruct FNavGraphNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavGraphNode;
class UScriptStruct* FNavGraphNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavGraphNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavGraphNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavGraphNode, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavGraphNode"));
	}
	return Z_Registration_Info_UScriptStruct_NavGraphNode.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavGraphNode>()
{
	return FNavGraphNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Comment", "/** Who's this node referring to? This will most commonly point to an actor or a component */" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraph.h" },
		{ "ToolTip", "Who's this node referring to? This will most commonly point to an actor or a component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavGraphNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNavGraphNode_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNavGraphNode, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavGraphNode_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavGraphNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavGraphNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	nullptr,
	&NewStructOps,
	"NavGraphNode",
	Z_Construct_UScriptStruct_FNavGraphNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavGraphNode_Statics::PropPointers),
	sizeof(FNavGraphNode),
	alignof(FNavGraphNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavGraphNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavGraphNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavGraphNode()
{
	if (!Z_Registration_Info_UScriptStruct_NavGraphNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavGraphNode.InnerSingleton, Z_Construct_UScriptStruct_FNavGraphNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavGraphNode.InnerSingleton;
}
// End ScriptStruct FNavGraphNode

// Begin Class ANavigationGraph
void ANavigationGraph::StaticRegisterNativesANavigationGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationGraph);
UClass* Z_Construct_UClass_ANavigationGraph_NoRegister()
{
	return ANavigationGraph::StaticClass();
}
struct Z_Construct_UClass_ANavigationGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** currently abstract since it's not full implemented */" },
		{ "IncludePath", "NavGraph/NavigationGraph.h" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraph.h" },
		{ "ToolTip", "currently abstract since it's not full implemented" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANavigationGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANavigationData,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationGraph_Statics::ClassParams = {
	&ANavigationGraph::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A7u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavigationGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavigationGraph()
{
	if (!Z_Registration_Info_UClass_ANavigationGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationGraph.OuterSingleton, Z_Construct_UClass_ANavigationGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavigationGraph.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavigationGraph>()
{
	return ANavigationGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationGraph);
ANavigationGraph::~ANavigationGraph() {}
// End Class ANavigationGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavGraphEdge::StaticStruct, Z_Construct_UScriptStruct_FNavGraphEdge_Statics::NewStructOps, TEXT("NavGraphEdge"), &Z_Registration_Info_UScriptStruct_NavGraphEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavGraphEdge), 3218521852U) },
		{ FNavGraphNode::StaticStruct, Z_Construct_UScriptStruct_FNavGraphNode_Statics::NewStructOps, TEXT("NavGraphNode"), &Z_Registration_Info_UScriptStruct_NavGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavGraphNode), 648619321U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationGraph, ANavigationGraph::StaticClass, TEXT("ANavigationGraph"), &Z_Registration_Info_UClass_ANavigationGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationGraph), 3995877505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_682143853(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
