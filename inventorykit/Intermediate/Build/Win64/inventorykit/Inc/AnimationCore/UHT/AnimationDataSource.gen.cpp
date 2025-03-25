// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimationCore/Public/AnimationDataSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationDataSource() {}

// Begin Cross Module References
ANIMATIONCORE_API UClass* Z_Construct_UClass_UAnimationDataSourceRegistry();
ANIMATIONCORE_API UClass* Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References

// Begin Class UAnimationDataSourceRegistry
void UAnimationDataSourceRegistry::StaticRegisterNativesUAnimationDataSourceRegistry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationDataSourceRegistry);
UClass* Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister()
{
	return UAnimationDataSourceRegistry::StaticClass();
}
struct Z_Construct_UClass_UAnimationDataSourceRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationDataSource.h" },
		{ "ModuleRelativePath", "Public/AnimationDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSources_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationDataSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DataSources_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataSources_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DataSources;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationDataSourceRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_ValueProp = { "DataSources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_Key_KeyProp = { "DataSources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources = { "DataSources", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataSourceRegistry, DataSources), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSources_MetaData), NewProp_DataSources_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::ClassParams = {
	&UAnimationDataSourceRegistry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationDataSourceRegistry()
{
	if (!Z_Registration_Info_UClass_UAnimationDataSourceRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationDataSourceRegistry.OuterSingleton, Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationDataSourceRegistry.OuterSingleton;
}
template<> ANIMATIONCORE_API UClass* StaticClass<UAnimationDataSourceRegistry>()
{
	return UAnimationDataSourceRegistry::StaticClass();
}
UAnimationDataSourceRegistry::UAnimationDataSourceRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationDataSourceRegistry);
UAnimationDataSourceRegistry::~UAnimationDataSourceRegistry() {}
// End Class UAnimationDataSourceRegistry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationDataSourceRegistry, UAnimationDataSourceRegistry::StaticClass, TEXT("UAnimationDataSourceRegistry"), &Z_Registration_Info_UClass_UAnimationDataSourceRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationDataSourceRegistry), 3601220011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_1780156931(TEXT("/Script/AnimationCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
