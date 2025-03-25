// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleWorldSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleDuplicateForPIEHelper();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleManager();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UContentBundleManager
void UContentBundleManager::StaticRegisterNativesUContentBundleManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleManager);
UClass* Z_Construct_UClass_UContentBundleManager_NoRegister()
{
	return UContentBundleManager::StaticClass();
}
struct Z_Construct_UClass_UContentBundleManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PIEDuplicateHelper_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PIEDuplicateHelper;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContentBundleManager_Statics::NewProp_PIEDuplicateHelper = { "PIEDuplicateHelper", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentBundleManager, PIEDuplicateHelper), Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PIEDuplicateHelper_MetaData), NewProp_PIEDuplicateHelper_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleManager_Statics::NewProp_PIEDuplicateHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleManager_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UContentBundleManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleManager_Statics::ClassParams = {
	&UContentBundleManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UContentBundleManager_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleManager_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentBundleManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentBundleManager()
{
	if (!Z_Registration_Info_UClass_UContentBundleManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleManager.OuterSingleton, Z_Construct_UClass_UContentBundleManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentBundleManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UContentBundleManager>()
{
	return UContentBundleManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleManager);
UContentBundleManager::~UContentBundleManager() {}
// End Class UContentBundleManager

// Begin Class UContentBundleDuplicateForPIEHelper
void UContentBundleDuplicateForPIEHelper::StaticRegisterNativesUContentBundleDuplicateForPIEHelper()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleDuplicateForPIEHelper);
UClass* Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_NoRegister()
{
	return UContentBundleDuplicateForPIEHelper::StaticClass();
}
struct Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingObjects_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingObjects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StreamingObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleDuplicateForPIEHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_ValueProp = { "StreamingObjects", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_Key_KeyProp = { "StreamingObjects_Key", nullptr, (EPropertyFlags)0x0100000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects = { "StreamingObjects", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentBundleDuplicateForPIEHelper, StreamingObjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingObjects_MetaData), NewProp_StreamingObjects_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::ClassParams = {
	&UContentBundleDuplicateForPIEHelper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::PropPointers), 0),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentBundleDuplicateForPIEHelper()
{
	if (!Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.OuterSingleton, Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UContentBundleDuplicateForPIEHelper>()
{
	return UContentBundleDuplicateForPIEHelper::StaticClass();
}
UContentBundleDuplicateForPIEHelper::UContentBundleDuplicateForPIEHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleDuplicateForPIEHelper);
UContentBundleDuplicateForPIEHelper::~UContentBundleDuplicateForPIEHelper() {}
// End Class UContentBundleDuplicateForPIEHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentBundleManager, UContentBundleManager::StaticClass, TEXT("UContentBundleManager"), &Z_Registration_Info_UClass_UContentBundleManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleManager), 1873837596U) },
		{ Z_Construct_UClass_UContentBundleDuplicateForPIEHelper, UContentBundleDuplicateForPIEHelper::StaticClass, TEXT("UContentBundleDuplicateForPIEHelper"), &Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleDuplicateForPIEHelper), 704355975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h_3793367094(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
