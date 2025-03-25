// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureCubeArray.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureCubeArray() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureCubeArray();
ENGINE_API UClass* Z_Construct_UClass_UTextureCubeArray_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextureCubeArray
void UTextureCubeArray::StaticRegisterNativesUTextureCubeArray()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureCubeArray);
UClass* Z_Construct_UClass_UTextureCubeArray_NoRegister()
{
	return UTextureCubeArray::StaticClass();
}
struct Z_Construct_UClass_UTextureCubeArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/TextureCubeArray.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureCubeArray.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTextures_MetaData[] = {
		{ "Category", "SourceCube" },
		{ "Comment", "/** Add Textures*/" },
		{ "DisplayName", "Source Textures" },
		{ "EditCondition", "bSourceGeneratedFromSourceTexturesArray" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/TextureCubeArray.h" },
		{ "RequiredAssetDataTags", "IsSourceValid=True" },
		{ "ToolTip", "Add Textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSourceGeneratedFromSourceTexturesArray_MetaData[] = {
		{ "Comment", "/**\n\x09* Is set to true if the source texture was generated from the SourceTextures array\n\x09* (which is not always the case, i.e. the source texture could be imported from a DDS file containing multiple cubemaps).\n\x09* This transient property is used to control access to the SourceTextures array from UI using EditCondition mechanism\n\x09* (as any operation with the SourceTextures array would invalidate the originally imported source texture).\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureCubeArray.h" },
		{ "ToolTip", "Is set to true if the source texture was generated from the SourceTextures array\n(which is not always the case, i.e. the source texture could be imported from a DDS file containing multiple cubemaps).\nThis transient property is used to control access to the SourceTextures array from UI using EditCondition mechanism\n(as any operation with the SourceTextures array would invalidate the originally imported source texture)." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceTextures;
	static void NewProp_bSourceGeneratedFromSourceTexturesArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSourceGeneratedFromSourceTexturesArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureCubeArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures_Inner = { "SourceTextures", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures = { "SourceTextures", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureCubeArray, SourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTextures_MetaData), NewProp_SourceTextures_MetaData) };
void Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray_SetBit(void* Obj)
{
	((UTextureCubeArray*)Obj)->bSourceGeneratedFromSourceTexturesArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray = { "bSourceGeneratedFromSourceTexturesArray", nullptr, (EPropertyFlags)0x0090000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTextureCubeArray), &Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSourceGeneratedFromSourceTexturesArray_MetaData), NewProp_bSourceGeneratedFromSourceTexturesArray_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureCubeArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_SourceTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureCubeArray_Statics::NewProp_bSourceGeneratedFromSourceTexturesArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArray_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UTextureCubeArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureCubeArray_Statics::ClassParams = {
	&UTextureCubeArray::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UTextureCubeArray_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArray_Statics::PropPointers), 0),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArray_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureCubeArray_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureCubeArray()
{
	if (!Z_Registration_Info_UClass_UTextureCubeArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureCubeArray.OuterSingleton, Z_Construct_UClass_UTextureCubeArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureCubeArray.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureCubeArray>()
{
	return UTextureCubeArray::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureCubeArray);
UTextureCubeArray::~UTextureCubeArray() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureCubeArray)
// End Class UTextureCubeArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureCubeArray, UTextureCubeArray::StaticClass, TEXT("UTextureCubeArray"), &Z_Registration_Info_UClass_UTextureCubeArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureCubeArray), 973595581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_311493891(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
