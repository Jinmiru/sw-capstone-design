// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODSourceActors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODSourceActors() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActors();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActors_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionHLODSourceActors
void UWorldPartitionHLODSourceActors::StaticRegisterNativesUWorldPartitionHLODSourceActors()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionHLODSourceActors);
UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActors_NoRegister()
{
	return UWorldPartitionHLODSourceActors::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/HLOD/HLODSourceActors.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSourceActors.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSourceActors.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HLODLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionHLODSourceActors>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::NewProp_HLODLayer = { "HLODLayer", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionHLODSourceActors, HLODLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODLayer_MetaData), NewProp_HLODLayer_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::NewProp_HLODLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::ClassParams = {
	&UWorldPartitionHLODSourceActors::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::PropPointers), 0),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActors()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.OuterSingleton, Z_Construct_UClass_UWorldPartitionHLODSourceActors_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionHLODSourceActors>()
{
	return UWorldPartitionHLODSourceActors::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionHLODSourceActors);
UWorldPartitionHLODSourceActors::~UWorldPartitionHLODSourceActors() {}
// End Class UWorldPartitionHLODSourceActors

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionHLODSourceActors, UWorldPartitionHLODSourceActors::StaticClass, TEXT("UWorldPartitionHLODSourceActors"), &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionHLODSourceActors), 2326790800U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h_500837433(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSourceActors_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
