// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleEngineSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UContentBundleEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleEngineSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleTypeFactory_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UContentBundleEngineSubsystem
void UContentBundleEngineSubsystem::StaticRegisterNativesUContentBundleEngineSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleEngineSubsystem);
UClass* Z_Construct_UClass_UContentBundleEngineSubsystem_NoRegister()
{
	return UContentBundleEngineSubsystem::StaticClass();
}
struct Z_Construct_UClass_UContentBundleEngineSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEngineSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBundleTypeFactoryClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEngineSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBundleTypeFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEngineSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ContentBundleTypeFactoryClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentBundleTypeFactory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleEngineSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::NewProp_ContentBundleTypeFactoryClass = { "ContentBundleTypeFactoryClass", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentBundleEngineSubsystem, ContentBundleTypeFactoryClass), Z_Construct_UClass_UContentBundleTypeFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBundleTypeFactoryClass_MetaData), NewProp_ContentBundleTypeFactoryClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::NewProp_ContentBundleTypeFactory = { "ContentBundleTypeFactory", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentBundleEngineSubsystem, ContentBundleTypeFactory), Z_Construct_UClass_UContentBundleTypeFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBundleTypeFactory_MetaData), NewProp_ContentBundleTypeFactory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::NewProp_ContentBundleTypeFactoryClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::NewProp_ContentBundleTypeFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::ClassParams = {
	&UContentBundleEngineSubsystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentBundleEngineSubsystem()
{
	if (!Z_Registration_Info_UClass_UContentBundleEngineSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleEngineSubsystem.OuterSingleton, Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentBundleEngineSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UContentBundleEngineSubsystem>()
{
	return UContentBundleEngineSubsystem::StaticClass();
}
UContentBundleEngineSubsystem::UContentBundleEngineSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleEngineSubsystem);
UContentBundleEngineSubsystem::~UContentBundleEngineSubsystem() {}
// End Class UContentBundleEngineSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentBundleEngineSubsystem, UContentBundleEngineSubsystem::StaticClass, TEXT("UContentBundleEngineSubsystem"), &Z_Registration_Info_UClass_UContentBundleEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleEngineSubsystem), 2297561286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_2572358824(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
