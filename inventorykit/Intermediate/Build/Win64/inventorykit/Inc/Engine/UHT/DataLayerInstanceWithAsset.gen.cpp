// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerInstanceWithAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerInstanceWithAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDataLayerInstanceWithAsset
void UDataLayerInstanceWithAsset::StaticRegisterNativesUDataLayerInstanceWithAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerInstanceWithAsset);
UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister()
{
	return UDataLayerInstanceWithAsset::StaticClass();
}
struct Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Data Layer|Advanced Data Layer|Advanced" },
		{ "AutoExpandCategories", "Data Layer|Editor Data Layer|Advanced|Runtime Data Layer|Editor Data Layer|Advanced|Runtime" },
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerInstanceWithAsset.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstanceWithAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAsset_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "DisallowedClasses", "/Script/Engine.ExternalDataLayerAsset" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstanceWithAsset.h" },
		{ "NativeConstTemplateArg", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIncludedInActorFilterDefault_MetaData[] = {
		{ "Category", "Data Layer|Actor Filter" },
		{ "DisplayName", "Is Included" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstanceWithAsset.h" },
		{ "ToolTip", "Whether actors assigned to this DataLayer are included by default when used in a filter" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerAsset;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsIncludedInActorFilterDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIncludedInActorFilterDefault;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerInstanceWithAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_DataLayerAsset = { "DataLayerAsset", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerInstanceWithAsset, DataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerAsset_MetaData), NewProp_DataLayerAsset_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_bIsIncludedInActorFilterDefault_SetBit(void* Obj)
{
	((UDataLayerInstanceWithAsset*)Obj)->bIsIncludedInActorFilterDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_bIsIncludedInActorFilterDefault = { "bIsIncludedInActorFilterDefault", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDataLayerInstanceWithAsset), &Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_bIsIncludedInActorFilterDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIncludedInActorFilterDefault_MetaData), NewProp_bIsIncludedInActorFilterDefault_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_DataLayerAsset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::NewProp_bIsIncludedInActorFilterDefault,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataLayerInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::ClassParams = {
	&UDataLayerInstanceWithAsset::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::PropPointers),
	0,
	0x000804A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset()
{
	if (!Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.OuterSingleton, Z_Construct_UClass_UDataLayerInstanceWithAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLayerInstanceWithAsset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDataLayerInstanceWithAsset>()
{
	return UDataLayerInstanceWithAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerInstanceWithAsset);
UDataLayerInstanceWithAsset::~UDataLayerInstanceWithAsset() {}
// End Class UDataLayerInstanceWithAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerInstanceWithAsset, UDataLayerInstanceWithAsset::StaticClass, TEXT("UDataLayerInstanceWithAsset"), &Z_Registration_Info_UClass_UDataLayerInstanceWithAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerInstanceWithAsset), 791384983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_3532344217(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstanceWithAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
