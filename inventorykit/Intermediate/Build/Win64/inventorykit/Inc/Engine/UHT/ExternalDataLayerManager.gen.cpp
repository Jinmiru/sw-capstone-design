// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ExternalDataLayerManager.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartition.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalDataLayerManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerManager();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UExternalDataLayerManager
void UExternalDataLayerManager::StaticRegisterNativesUExternalDataLayerManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExternalDataLayerManager);
UClass* Z_Construct_UClass_UExternalDataLayerManager_NoRegister()
{
	return UExternalDataLayerManager::StaticClass();
}
struct Z_Construct_UClass_UExternalDataLayerManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/DataLayer/ExternalDataLayerManager.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalStreamingObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerManager.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InjectedExternalDataLayerAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerManager.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalStreamingObjects_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalStreamingObjects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExternalStreamingObjects;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InjectedExternalDataLayerAssets_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InjectedExternalDataLayerAssets;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExternalDataLayerManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExternalDataLayerManager_Statics::NewProp_ExternalStreamingObjects_ValueProp = { "ExternalStreamingObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExternalDataLayerManager_Statics::NewProp_ExternalStreamingObjects_Key_KeyProp = { "ExternalStreamingObjects_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UExternalDataLayerAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UExternalDataLayerManager_Statics::NewProp_ExternalStreamingObjects = { "ExternalStreamingObjects", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExternalDataLayerManager, ExternalStreamingObjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalStreamingObjects_MetaData), NewProp_ExternalStreamingObjects_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExternalDataLayerManager_Statics::NewProp_InjectedExternalDataLayerAssets_ElementProp = { "InjectedExternalDataLayerAssets", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UExternalDataLayerAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UExternalDataLayerManager_Statics::NewProp_InjectedExternalDataLayerAssets = { "InjectedExternalDataLayerAssets", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExternalDataLayerManager, InjectedExternalDataLayerAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InjectedExternalDataLayerAssets_MetaData), NewProp_InjectedExternalDataLayerAssets_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExternalDataLayerManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalDataLayerManager_Statics::NewProp_ExternalStreamingObjects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalDataLayerManager_Statics::NewProp_ExternalStreamingObjects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalDataLayerManager_Statics::NewProp_ExternalStreamingObjects,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalDataLayerManager_Statics::NewProp_InjectedExternalDataLayerAssets_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalDataLayerManager_Statics::NewProp_InjectedExternalDataLayerAssets,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExternalDataLayerManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExternalDataLayerManager_Statics::ClassParams = {
	&UExternalDataLayerManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExternalDataLayerManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UExternalDataLayerManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExternalDataLayerManager()
{
	if (!Z_Registration_Info_UClass_UExternalDataLayerManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExternalDataLayerManager.OuterSingleton, Z_Construct_UClass_UExternalDataLayerManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExternalDataLayerManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UExternalDataLayerManager>()
{
	return UExternalDataLayerManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalDataLayerManager);
UExternalDataLayerManager::~UExternalDataLayerManager() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UExternalDataLayerManager)
// End Class UExternalDataLayerManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExternalDataLayerManager, UExternalDataLayerManager::StaticClass, TEXT("UExternalDataLayerManager"), &Z_Registration_Info_UClass_UExternalDataLayerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExternalDataLayerManager), 1908989584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_3859498972(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
