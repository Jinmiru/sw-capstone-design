// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAssetBase() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References

// Begin Class UClothingAssetBase
void UClothingAssetBase::StaticRegisterNativesUClothingAssetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingAssetBase);
UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister()
{
	return UClothingAssetBase::StaticClass();
}
struct Z_Construct_UClass_UClothingAssetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An interface object for any clothing asset the engine can use.\n * Any clothing asset concrete object should derive from this.\n */" },
		{ "IncludePath", "ClothingAssetBase.h" },
		{ "ModuleRelativePath", "Public/ClothingAssetBase.h" },
		{ "ToolTip", "An interface object for any clothing asset the engine can use.\nAny clothing asset concrete object should derive from this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportedFilePath_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "// If this asset was imported from a file, this will be the original path\n" },
		{ "ModuleRelativePath", "Public/ClothingAssetBase.h" },
		{ "ToolTip", "If this asset was imported from a file, this will be the original path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[] = {
		{ "Comment", "/** Guid to identify this asset. Will be embedded into chunks that are created using this asset */" },
		{ "ModuleRelativePath", "Public/ClothingAssetBase.h" },
		{ "ToolTip", "Guid to identify this asset. Will be embedded into chunks that are created using this asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedFilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_ImportedFilePath = { "ImportedFilePath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothingAssetBase, ImportedFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportedFilePath_MetaData), NewProp_ImportedFilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothingAssetBase, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetGuid_MetaData), NewProp_AssetGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothingAssetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_ImportedFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_AssetGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClothingAssetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetBase_Statics::ClassParams = {
	&UClothingAssetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UClothingAssetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetBase_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothingAssetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothingAssetBase()
{
	if (!Z_Registration_Info_UClass_UClothingAssetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingAssetBase.OuterSingleton, Z_Construct_UClass_UClothingAssetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothingAssetBase.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingAssetBase>()
{
	return UClothingAssetBase::StaticClass();
}
UClothingAssetBase::UClothingAssetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetBase);
UClothingAssetBase::~UClothingAssetBase() {}
// End Class UClothingAssetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClothingAssetBase, UClothingAssetBase::StaticClass, TEXT("UClothingAssetBase"), &Z_Registration_Info_UClass_UClothingAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingAssetBase), 3685518786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h_2677956986(TEXT("/Script/ClothingSystemRuntimeInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
