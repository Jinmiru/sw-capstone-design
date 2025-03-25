// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODSourceActorsFromLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODSourceActorsFromLevel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActors();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionHLODSourceActorsFromLevel
void UWorldPartitionHLODSourceActorsFromLevel::StaticRegisterNativesUWorldPartitionHLODSourceActorsFromLevel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionHLODSourceActorsFromLevel);
UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_NoRegister()
{
	return UWorldPartitionHLODSourceActorsFromLevel::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/HLOD/HLODSourceActorsFromLevel.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSourceActorsFromLevel.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSourceActorsFromLevel.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionHLODSourceActorsFromLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::NewProp_SourceLevel = { "SourceLevel", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionHLODSourceActorsFromLevel, SourceLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLevel_MetaData), NewProp_SourceLevel_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::NewProp_SourceLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionHLODSourceActors,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::ClassParams = {
	&UWorldPartitionHLODSourceActorsFromLevel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.OuterSingleton, Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionHLODSourceActorsFromLevel>()
{
	return UWorldPartitionHLODSourceActorsFromLevel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionHLODSourceActorsFromLevel);
UWorldPartitionHLODSourceActorsFromLevel::~UWorldPartitionHLODSourceActorsFromLevel() {}
// End Class UWorldPartitionHLODSourceActorsFromLevel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionHLODSourceActorsFromLevel, UWorldPartitionHLODSourceActorsFromLevel::StaticClass, TEXT("UWorldPartitionHLODSourceActorsFromLevel"), &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionHLODSourceActorsFromLevel), 1705534195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h_850795307(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActorsFromLevel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
