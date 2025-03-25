// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionEditorLoaderAdapter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorLoaderAdapter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionEditorLoaderAdapter
void UWorldPartitionEditorLoaderAdapter::StaticRegisterNativesUWorldPartitionEditorLoaderAdapter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionEditorLoaderAdapter);
UClass* Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_NoRegister()
{
	return UWorldPartitionEditorLoaderAdapter::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionEditorLoaderAdapter.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorLoaderAdapter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionEditorLoaderAdapter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister, (int32)VTABLE_OFFSET(UWorldPartitionEditorLoaderAdapter, IWorldPartitionActorLoaderInterface), false },  // 3483619770
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::ClassParams = {
	&UWorldPartitionEditorLoaderAdapter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.OuterSingleton, Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionEditorLoaderAdapter>()
{
	return UWorldPartitionEditorLoaderAdapter::StaticClass();
}
UWorldPartitionEditorLoaderAdapter::UWorldPartitionEditorLoaderAdapter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionEditorLoaderAdapter);
UWorldPartitionEditorLoaderAdapter::~UWorldPartitionEditorLoaderAdapter() {}
// End Class UWorldPartitionEditorLoaderAdapter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter, UWorldPartitionEditorLoaderAdapter::StaticClass, TEXT("UWorldPartitionEditorLoaderAdapter"), &Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionEditorLoaderAdapter), 3193130650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_1006212463(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
