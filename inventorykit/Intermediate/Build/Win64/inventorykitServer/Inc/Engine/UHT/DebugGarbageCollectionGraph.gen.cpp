// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/DebugGarbageCollectionGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugGarbageCollectionGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDebugGarbageCollectionGraph();
ENGINE_API UClass* Z_Construct_UClass_UDebugGarbageCollectionGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDebugGarbageCollectionGraph
void UDebugGarbageCollectionGraph::StaticRegisterNativesUDebugGarbageCollectionGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugGarbageCollectionGraph);
UClass* Z_Construct_UClass_UDebugGarbageCollectionGraph_NoRegister()
{
	return UDebugGarbageCollectionGraph::StaticClass();
}
struct Z_Construct_UClass_UDebugGarbageCollectionGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DebugGarbageCollectionGraph.h" },
		{ "ModuleRelativePath", "Private/DebugGarbageCollectionGraph.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugGarbageCollectionGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDebugGarbageCollectionGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugGarbageCollectionGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugGarbageCollectionGraph_Statics::ClassParams = {
	&UDebugGarbageCollectionGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugGarbageCollectionGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UDebugGarbageCollectionGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDebugGarbageCollectionGraph()
{
	if (!Z_Registration_Info_UClass_UDebugGarbageCollectionGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugGarbageCollectionGraph.OuterSingleton, Z_Construct_UClass_UDebugGarbageCollectionGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDebugGarbageCollectionGraph.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDebugGarbageCollectionGraph>()
{
	return UDebugGarbageCollectionGraph::StaticClass();
}
UDebugGarbageCollectionGraph::UDebugGarbageCollectionGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugGarbageCollectionGraph);
UDebugGarbageCollectionGraph::~UDebugGarbageCollectionGraph() {}
// End Class UDebugGarbageCollectionGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDebugGarbageCollectionGraph, UDebugGarbageCollectionGraph::StaticClass, TEXT("UDebugGarbageCollectionGraph"), &Z_Registration_Info_UClass_UDebugGarbageCollectionGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugGarbageCollectionGraph), 3523196599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h_773154823(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_DebugGarbageCollectionGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
