// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/NavigationData/NavigationDataChunkActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationDataChunkActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
ENGINE_API UClass* Z_Construct_UClass_ANavigationDataChunkActor();
ENGINE_API UClass* Z_Construct_UClass_ANavigationDataChunkActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APartitionActor();
ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ANavigationDataChunkActor
void ANavigationDataChunkActor::StaticRegisterNativesANavigationDataChunkActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationDataChunkActor);
UClass* Z_Construct_UClass_ANavigationDataChunkActor_NoRegister()
{
	return ANavigationDataChunkActor::StaticClass();
}
struct Z_Construct_UClass_ANavigationDataChunkActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/NavigationData/NavigationDataChunkActor.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/NavigationData/NavigationDataChunkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavDataChunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/NavigationData/NavigationDataChunkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataChunkActorBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/NavigationData/NavigationDataChunkActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavDataChunks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NavDataChunks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataChunkActorBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationDataChunkActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationDataChunkActor_Statics::NewProp_NavDataChunks_Inner = { "NavDataChunks", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNavigationDataChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavigationDataChunkActor_Statics::NewProp_NavDataChunks = { "NavDataChunks", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationDataChunkActor, NavDataChunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavDataChunks_MetaData), NewProp_NavDataChunks_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationDataChunkActor_Statics::NewProp_DataChunkActorBounds = { "DataChunkActorBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationDataChunkActor, DataChunkActorBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataChunkActorBounds_MetaData), NewProp_DataChunkActorBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationDataChunkActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationDataChunkActor_Statics::NewProp_NavDataChunks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationDataChunkActor_Statics::NewProp_NavDataChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationDataChunkActor_Statics::NewProp_DataChunkActorBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationDataChunkActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavigationDataChunkActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APartitionActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationDataChunkActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationDataChunkActor_Statics::ClassParams = {
	&ANavigationDataChunkActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANavigationDataChunkActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationDataChunkActor_Statics::PropPointers),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationDataChunkActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavigationDataChunkActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavigationDataChunkActor()
{
	if (!Z_Registration_Info_UClass_ANavigationDataChunkActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationDataChunkActor.OuterSingleton, Z_Construct_UClass_ANavigationDataChunkActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavigationDataChunkActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ANavigationDataChunkActor>()
{
	return ANavigationDataChunkActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationDataChunkActor);
ANavigationDataChunkActor::~ANavigationDataChunkActor() {}
// End Class ANavigationDataChunkActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationDataChunkActor, ANavigationDataChunkActor::StaticClass, TEXT("ANavigationDataChunkActor"), &Z_Registration_Info_UClass_ANavigationDataChunkActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationDataChunkActor), 3595591000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_789957097(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
