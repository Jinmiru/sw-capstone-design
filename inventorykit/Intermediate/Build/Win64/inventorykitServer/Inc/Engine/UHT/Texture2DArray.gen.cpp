// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Texture2DArray.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2DArray() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DArray();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DArray_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTexture2DArray
void UTexture2DArray::StaticRegisterNativesUTexture2DArray()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture2DArray);
UClass* Z_Construct_UClass_UTexture2DArray_NoRegister()
{
	return UTexture2DArray::StaticClass();
}
struct Z_Construct_UClass_UTexture2DArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/Texture2DArray.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The addressing mode to use for the X axis.*/" },
		{ "DisplayName", "Address X" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The addressing mode to use for the Y axis.*/" },
		{ "DisplayName", "Address Y" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressZ_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The addressing mode to use for the Z axis.*/" },
		{ "DisplayName", "Address Z" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "The addressing mode to use for the Z axis." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTextures_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** Add Textures*/" },
		{ "DisplayName", "Source Textures" },
		{ "EditCondition", "bSourceGeneratedFromSourceTexturesArray" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "RequiredAssetDataTags", "IsSourceValid=True" },
		{ "ToolTip", "Add Textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSourceGeneratedFromSourceTexturesArray_MetaData[] = {
		{ "Comment", "/** \n\x09* Is set to true if the source texture was generated from the SourceTextures array\n\x09* (which is not always the case, i.e. the source texture could be imported from a DDS file containing multiple slices).\n\x09* This transient property is used to control access to the SourceTextures array from UI using EditCondition mechanism\n\x09* (as any operation with the SourceTextures array would invalidate the originally imported source texture).\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DArray.h" },
		{ "ToolTip", "Is set to true if the source texture was generated from the SourceTextures array\n(which is not always the case, i.e. the source texture could be imported from a DDS file containing multiple slices).\nThis transient property is used to control access to the SourceTextures array from UI using EditCondition mechanism\n(as any operation with the SourceTextures array would invalidate the originally imported source texture)." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressZ;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceTextures;
	static void NewProp_bSourceGeneratedFromSourceTexturesArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSourceGeneratedFromSourceTexturesArray;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture2DArray, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture2DArray, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ = { "AddressZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture2DArray, AddressZ), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressZ_MetaData), NewProp_AddressZ_MetaData) }; // 2220430387
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_Inner = { "SourceTextures", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures = { "SourceTextures", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture2DArray, SourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTextures_MetaData), NewProp_SourceTextures_MetaData) };
void Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray_SetBit(void* Obj)
{
	((UTexture2DArray*)Obj)->bSourceGeneratedFromSourceTexturesArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray = { "bSourceGeneratedFromSourceTexturesArray", nullptr, (EPropertyFlags)0x0090000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTexture2DArray), &Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSourceGeneratedFromSourceTexturesArray_MetaData), NewProp_bSourceGeneratedFromSourceTexturesArray_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2DArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_AddressZ,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_SourceTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTexture2DArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DArray_Statics::ClassParams = {
	&UTexture2DArray::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTexture2DArray_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArray_Statics::Class_MetaDataParams), Z_Construct_UClass_UTexture2DArray_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTexture2DArray()
{
	if (!Z_Registration_Info_UClass_UTexture2DArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture2DArray.OuterSingleton, Z_Construct_UClass_UTexture2DArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTexture2DArray.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTexture2DArray>()
{
	return UTexture2DArray::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DArray);
UTexture2DArray::~UTexture2DArray() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2DArray)
// End Class UTexture2DArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTexture2DArray, UTexture2DArray::StaticClass, TEXT("UTexture2DArray"), &Z_Registration_Info_UClass_UTexture2DArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture2DArray), 2534211410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_928585300(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
