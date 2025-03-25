// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleEditor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleUnsavedActorMonitor();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleUnsavedActorMonitor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UContentBundleUnsavedActorMonitor
void UContentBundleUnsavedActorMonitor::StaticRegisterNativesUContentBundleUnsavedActorMonitor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleUnsavedActorMonitor);
UClass* Z_Construct_UClass_UContentBundleUnsavedActorMonitor_NoRegister()
{
	return UContentBundleUnsavedActorMonitor::StaticClass();
}
struct Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleEditor.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEditor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnsavedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEditor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UnsavedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnsavedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleUnsavedActorMonitor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors_Inner = { "UnsavedActors", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors = { "UnsavedActors", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentBundleUnsavedActorMonitor, UnsavedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnsavedActors_MetaData), NewProp_UnsavedActors_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::ClassParams = {
	&UContentBundleUnsavedActorMonitor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::PropPointers), 0),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentBundleUnsavedActorMonitor()
{
	if (!Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.OuterSingleton, Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UContentBundleUnsavedActorMonitor>()
{
	return UContentBundleUnsavedActorMonitor::StaticClass();
}
UContentBundleUnsavedActorMonitor::UContentBundleUnsavedActorMonitor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleUnsavedActorMonitor);
// End Class UContentBundleUnsavedActorMonitor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentBundleUnsavedActorMonitor, UContentBundleUnsavedActorMonitor::StaticClass, TEXT("UContentBundleUnsavedActorMonitor"), &Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleUnsavedActorMonitor), 3938587447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_3257892257(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
