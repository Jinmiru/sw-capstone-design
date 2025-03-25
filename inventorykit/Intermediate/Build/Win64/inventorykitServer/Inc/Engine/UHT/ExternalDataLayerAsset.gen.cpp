// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ExternalDataLayerAsset.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ExternalDataLayerUID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalDataLayerAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerAsset();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerAsset_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExternalDataLayerUID();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UExternalDataLayerAsset
void UExternalDataLayerAsset::StaticRegisterNativesUExternalDataLayerAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExternalDataLayerAsset);
UClass* Z_Construct_UClass_UExternalDataLayerAsset_NoRegister()
{
	return UExternalDataLayerAsset::StaticClass();
}
struct Z_Construct_UClass_UExternalDataLayerAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldPartition/DataLayer/ExternalDataLayerAsset.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "DisplayName", "External Data Layer UID" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExternalDataLayerAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExternalDataLayerAsset_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0040040000220001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExternalDataLayerAsset, UID), Z_Construct_UScriptStruct_FExternalDataLayerUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UID_MetaData), NewProp_UID_MetaData) }; // 2233653624
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExternalDataLayerAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalDataLayerAsset_Statics::NewProp_UID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExternalDataLayerAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataLayerAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExternalDataLayerAsset_Statics::ClassParams = {
	&UExternalDataLayerAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExternalDataLayerAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerAsset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UExternalDataLayerAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExternalDataLayerAsset()
{
	if (!Z_Registration_Info_UClass_UExternalDataLayerAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExternalDataLayerAsset.OuterSingleton, Z_Construct_UClass_UExternalDataLayerAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExternalDataLayerAsset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UExternalDataLayerAsset>()
{
	return UExternalDataLayerAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalDataLayerAsset);
UExternalDataLayerAsset::~UExternalDataLayerAsset() {}
// End Class UExternalDataLayerAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExternalDataLayerAsset, UExternalDataLayerAsset::StaticClass, TEXT("UExternalDataLayerAsset"), &Z_Registration_Info_UClass_UExternalDataLayerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExternalDataLayerAsset), 3019286386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_2823232081(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
