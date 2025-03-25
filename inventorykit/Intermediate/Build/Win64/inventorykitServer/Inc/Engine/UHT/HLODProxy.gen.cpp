// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/HLODProxy.h"
#include "Runtime/Engine/Public/HLOD/HLODProxyMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UHLODProxy();
ENGINE_API UClass* Z_Construct_UClass_UHLODProxy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHLODProxyDesc_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODProxyMesh();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UHLODProxy
void UHLODProxy::StaticRegisterNativesUHLODProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODProxy);
UClass* Z_Construct_UClass_UHLODProxy_NoRegister()
{
	return UHLODProxy::StaticClass();
}
struct Z_Construct_UClass_UHLODProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** This asset acts as a proxy to a static mesh for ALODActors to display */" },
		{ "IncludePath", "Engine/HLODProxy.h" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "This asset acts as a proxy to a static mesh for ALODActors to display" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningMap_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "Comment", "/** Keep hold of the level in the editor to allow for package cleaning etc. */" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "Keep hold of the level in the editor to allow for package cleaning etc." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshes_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "Comment", "/** All the mesh proxies we contain */" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
		{ "ToolTip", "All the mesh proxies we contain" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODActors_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/HLODProxy.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OwningMap;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProxyMeshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HLODActors_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HLODActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HLODActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap = { "OwningMap", nullptr, (EPropertyFlags)0x0044000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODProxy, OwningMap), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningMap_MetaData), NewProp_OwningMap_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_Inner = { "ProxyMeshes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHLODProxyMesh, METADATA_PARAMS(0, nullptr) }; // 2794926992
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes = { "ProxyMeshes", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODProxy, ProxyMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyMeshes_MetaData), NewProp_ProxyMeshes_MetaData) }; // 2794926992
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_ValueProp = { "HLODActors", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHLODProxyMesh, METADATA_PARAMS(0, nullptr) }; // 2794926992
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_Key_KeyProp = { "HLODActors_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHLODProxyDesc_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors = { "HLODActors", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODProxy, HLODActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODActors_MetaData), NewProp_HLODActors_MetaData) }; // 2794926992
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODProxy_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_OwningMap,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_ProxyMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODProxy_Statics::NewProp_HLODActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHLODProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODProxy_Statics::ClassParams = {
	&UHLODProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHLODProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UHLODProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHLODProxy()
{
	if (!Z_Registration_Info_UClass_UHLODProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODProxy.OuterSingleton, Z_Construct_UClass_UHLODProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHLODProxy.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHLODProxy>()
{
	return UHLODProxy::StaticClass();
}
UHLODProxy::UHLODProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODProxy);
UHLODProxy::~UHLODProxy() {}
// End Class UHLODProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHLODProxy, UHLODProxy::StaticClass, TEXT("UHLODProxy"), &Z_Registration_Info_UClass_UHLODProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODProxy), 602134802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_366845342(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
