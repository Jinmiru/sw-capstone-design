// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerInstancePrivate.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/WorldDataLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerInstancePrivate() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstancePrivate();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstancePrivate_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDataLayerInstancePrivate
void UDataLayerInstancePrivate::StaticRegisterNativesUDataLayerInstancePrivate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerInstancePrivate);
UClass* Z_Construct_UClass_UDataLayerInstancePrivate_NoRegister()
{
	return UDataLayerInstancePrivate::StaticClass();
}
struct Z_Construct_UClass_UDataLayerInstancePrivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Data Layer|Advanced" },
		{ "AutoExpandCategories", "Data Layer|Editor Data Layer|Editor Data Layer|Advanced|Runtime" },
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerInstancePrivate.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstancePrivate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstancePrivate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAsset_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstancePrivate.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIncludedInActorFilterDefault_MetaData[] = {
		{ "Category", "Actor Filter" },
		{ "DisplayName", "Is Included" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstancePrivate.h" },
		{ "ToolTip", "Whether actors assigned to this DataLayer are included by default when used in a filter" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShortName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerAsset;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsIncludedInActorFilterDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIncludedInActorFilterDefault;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerInstancePrivate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataLayerInstancePrivate_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerInstancePrivate, ShortName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortName_MetaData), NewProp_ShortName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataLayerInstancePrivate_Statics::NewProp_DataLayerAsset = { "DataLayerAsset", nullptr, (EPropertyFlags)0x01460000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerInstancePrivate, DataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerAsset_MetaData), NewProp_DataLayerAsset_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UDataLayerInstancePrivate_Statics::NewProp_bIsIncludedInActorFilterDefault_SetBit(void* Obj)
{
	((UDataLayerInstancePrivate*)Obj)->bIsIncludedInActorFilterDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstancePrivate_Statics::NewProp_bIsIncludedInActorFilterDefault = { "bIsIncludedInActorFilterDefault", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDataLayerInstancePrivate), &Z_Construct_UClass_UDataLayerInstancePrivate_Statics::NewProp_bIsIncludedInActorFilterDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIncludedInActorFilterDefault_MetaData), NewProp_bIsIncludedInActorFilterDefault_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerInstancePrivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstancePrivate_Statics::NewProp_ShortName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstancePrivate_Statics::NewProp_DataLayerAsset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstancePrivate_Statics::NewProp_bIsIncludedInActorFilterDefault,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstancePrivate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataLayerInstancePrivate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataLayerInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstancePrivate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerInstancePrivate_Statics::ClassParams = {
	&UDataLayerInstancePrivate::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataLayerInstancePrivate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstancePrivate_Statics::PropPointers),
	0,
	0x008804A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstancePrivate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLayerInstancePrivate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataLayerInstancePrivate()
{
	if (!Z_Registration_Info_UClass_UDataLayerInstancePrivate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerInstancePrivate.OuterSingleton, Z_Construct_UClass_UDataLayerInstancePrivate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLayerInstancePrivate.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDataLayerInstancePrivate>()
{
	return UDataLayerInstancePrivate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerInstancePrivate);
UDataLayerInstancePrivate::~UDataLayerInstancePrivate() {}
// End Class UDataLayerInstancePrivate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerInstancePrivate, UDataLayerInstancePrivate::StaticClass, TEXT("UDataLayerInstancePrivate"), &Z_Registration_Info_UClass_UDataLayerInstancePrivate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerInstancePrivate), 2029560428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h_2004523548(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstancePrivate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
