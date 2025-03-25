// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleConstructionScript() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USCS_Node_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript();
ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USimpleConstructionScript
void USimpleConstructionScript::StaticRegisterNativesUSimpleConstructionScript()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleConstructionScript);
UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister()
{
	return USimpleConstructionScript::StaticClass();
}
struct Z_Construct_UClass_USimpleConstructionScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/SimpleConstructionScript.h" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[] = {
		{ "Comment", "/** Root nodes of the construction script */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "Root nodes of the construction script" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[] = {
		{ "Comment", "/** All nodes that exist in the hierarchy of this SimpleConstructionScript */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "All nodes that exist in the hierarchy of this SimpleConstructionScript" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRootNode_MetaData[] = {
		{ "Comment", "/** Default scene root node; used when no other nodes are available to use as the root */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "Default scene root node; used when no other nodes are available to use as the root" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) Root node of the construction script */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "(DEPRECATED) Root node of the construction script" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponentNodes_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) Actor Component based nodes are stored here.  They cannot be in the tree hierarchy */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "(DEPRECATED) Actor Component based nodes are stored here.  They cannot be in the tree hierarchy" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRootNode;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponentNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorComponentNodes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleConstructionScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleConstructionScript, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNodes_MetaData), NewProp_RootNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleConstructionScript, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllNodes_MetaData), NewProp_AllNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode = { "DefaultSceneRootNode", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleConstructionScript, DefaultSceneRootNode), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneRootNode_MetaData), NewProp_DefaultSceneRootNode_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleConstructionScript, RootNode_DEPRECATED), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNode_MetaData), NewProp_RootNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_Inner = { "ActorComponentNodes", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes = { "ActorComponentNodes", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleConstructionScript, ActorComponentNodes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponentNodes_MetaData), NewProp_ActorComponentNodes_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleConstructionScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleConstructionScript_Statics::ClassParams = {
	&USimpleConstructionScript::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleConstructionScript()
{
	if (!Z_Registration_Info_UClass_USimpleConstructionScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleConstructionScript.OuterSingleton, Z_Construct_UClass_USimpleConstructionScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleConstructionScript.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USimpleConstructionScript>()
{
	return USimpleConstructionScript::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleConstructionScript);
USimpleConstructionScript::~USimpleConstructionScript() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USimpleConstructionScript)
// End Class USimpleConstructionScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleConstructionScript, USimpleConstructionScript::StaticClass, TEXT("USimpleConstructionScript"), &Z_Registration_Info_UClass_USimpleConstructionScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleConstructionScript), 3944166021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_1536632321(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
