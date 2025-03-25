// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialMask() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask();
ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPhysicalMaterialMask
void UPhysicalMaterialMask::StaticRegisterNativesUPhysicalMaterialMask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicalMaterialMask);
UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister()
{
	return UPhysicalMaterialMask::StaticClass();
}
struct Z_Construct_UClass_UPhysicalMaterialMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Physical material masks are used to map multiple physical materials to a single rendering material\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "Physical material masks are used to map multiple physical materials to a single rendering material" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskTexture_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Mask input texture, square aspect ratio recommended. Recognized mask colors include: white, black, red, green, yellow, cyan, turquoise, and magenta. */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "Mask input texture, square aspect ratio recommended. Recognized mask colors include: white, black, red, green, yellow, cyan, turquoise, and magenta." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelIndex_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** StaticMesh UV channel index to use when performing lookups with this mask. */" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "StaticMesh UV channel index to use when performing lookups with this mask." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterialMask.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskTexture;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterialMask, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture = { "MaskTexture", nullptr, (EPropertyFlags)0x0114000800020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterialMask, MaskTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskTexture_MetaData), NewProp_MaskTexture_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterialMask, UVChannelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelIndex_MetaData), NewProp_UVChannelIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterialMask, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterialMask, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterialMask_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_MaskTexture,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_UVChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMask_Statics::NewProp_AddressY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicalMaterialMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialMask_Statics::ClassParams = {
	&UPhysicalMaterialMask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicalMaterialMask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::PropPointers),
	0,
	0x008820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMask_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicalMaterialMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicalMaterialMask()
{
	if (!Z_Registration_Info_UClass_UPhysicalMaterialMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicalMaterialMask.OuterSingleton, Z_Construct_UClass_UPhysicalMaterialMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicalMaterialMask.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicalMaterialMask>()
{
	return UPhysicalMaterialMask::StaticClass();
}
// End Class UPhysicalMaterialMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicalMaterialMask, UPhysicalMaterialMask::StaticClass, TEXT("UPhysicalMaterialMask"), &Z_Registration_Info_UClass_UPhysicalMaterialMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicalMaterialMask), 1789560793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_3579724306(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicalMaterials_PhysicalMaterialMask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
