// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/FontFace.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontFace() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UFontFace();
ENGINE_API UClass* Z_Construct_UClass_UFontFace_NoRegister();
SLATECORE_API UClass* Z_Construct_UClass_UFontFaceInterface_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontHinting();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLayoutMethod();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLoadingPolicy();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UFontFace
void UFontFace::StaticRegisterNativesUFontFace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFontFace);
UClass* Z_Construct_UClass_UFontFace_NoRegister()
{
	return UFontFace::StaticClass();
}
struct Z_Construct_UClass_UFontFace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FontFace" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A font face asset contains the raw payload data for a source TTF/OTF file as used by FreeType.\n * During cook this asset type generates a \".ufont\" file containing the raw payload data (unless loaded \"Inline\").\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/FontFace.h" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "A font face asset contains the raw payload data for a source TTF/OTF file as used by FreeType.\nDuring cook this asset type generates a \".ufont\" file containing the raw payload data (unless loaded \"Inline\")." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilename_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** The filename of the font face we were created from. This may not always exist on disk, as we may have previously loaded and cached the font data inside this asset. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The filename of the font face we were created from. This may not always exist on disk, as we may have previously loaded and cached the font data inside this asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hinting_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** The hinting algorithm to use with the font face. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The hinting algorithm to use with the font face." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** Enum controlling how this font face should be loaded at runtime. See the enum for more explanations of the options. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Enum controlling how this font face should be loaded at runtime. See the enum for more explanations of the options." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutMethod_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** Which method should we use when laying out the font? Try changing this if you notice clipping or height issues with your font. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Which method should we use when laying out the font? Try changing this if you notice clipping or height issues with your font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AscendOverriddenValue_MetaData[] = {
		{ "Category", "FontFace" },
		{ "ClampMax", "100" },
		{ "ClampMin", "-100" },
		{ "Comment", "/** The typographic ascender of the face, expressed in font units. */" },
		{ "EditCondition", "bIsAscendOverridden" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The typographic ascender of the face, expressed in font units." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAscendOverridden_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** Activate this option to use the specified ascend value instead of the value from the font. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Activate this option to use the specified ascend value instead of the value from the font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescendOverriddenValue_MetaData[] = {
		{ "Category", "FontFace" },
		{ "ClampMax", "100" },
		{ "ClampMin", "-100" },
		{ "Comment", "/** The typographic ascender of the face, expressed in font units. */" },
		{ "EditCondition", "bIsDescendOverridden" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The typographic ascender of the face, expressed in font units." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDescendOverridden_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** Activate this option to use the specified descend value instead of the value from the font. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Activate this option to use the specified descend value instead of the value from the font." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontFaceData_MetaData[] = {
		{ "Comment", "/** The data associated with the font face. This should always be filled in providing the source filename is valid. */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The data associated with the font face. This should always be filled in providing the source filename is valid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubFaces_MetaData[] = {
		{ "Category", "FontFace" },
		{ "Comment", "/** Transient cache of the sub-faces available within this face */" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Transient cache of the sub-faces available within this face" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilename;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hinting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hinting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AscendOverriddenValue;
	static void NewProp_bIsAscendOverridden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAscendOverridden;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DescendOverriddenValue;
	static void NewProp_bIsDescendOverridden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDescendOverridden;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FontFaceData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FontFaceData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SubFaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubFaces;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFontFace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_SourceFilename = { "SourceFilename", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, SourceFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilename_MetaData), NewProp_SourceFilename_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting = { "Hinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, Hinting), Z_Construct_UEnum_SlateCore_EFontHinting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hinting_MetaData), NewProp_Hinting_MetaData) }; // 209010877
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, LoadingPolicy), Z_Construct_UEnum_SlateCore_EFontLoadingPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingPolicy_MetaData), NewProp_LoadingPolicy_MetaData) }; // 2167930431
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod = { "LayoutMethod", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, LayoutMethod), Z_Construct_UEnum_SlateCore_EFontLayoutMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutMethod_MetaData), NewProp_LayoutMethod_MetaData) }; // 1950032659
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_AscendOverriddenValue = { "AscendOverriddenValue", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, AscendOverriddenValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AscendOverriddenValue_MetaData), NewProp_AscendOverriddenValue_MetaData) };
void Z_Construct_UClass_UFontFace_Statics::NewProp_bIsAscendOverridden_SetBit(void* Obj)
{
	((UFontFace*)Obj)->bIsAscendOverridden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_bIsAscendOverridden = { "bIsAscendOverridden", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFontFace), &Z_Construct_UClass_UFontFace_Statics::NewProp_bIsAscendOverridden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAscendOverridden_MetaData), NewProp_bIsAscendOverridden_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_DescendOverriddenValue = { "DescendOverriddenValue", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, DescendOverriddenValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescendOverriddenValue_MetaData), NewProp_DescendOverriddenValue_MetaData) };
void Z_Construct_UClass_UFontFace_Statics::NewProp_bIsDescendOverridden_SetBit(void* Obj)
{
	((UFontFace*)Obj)->bIsDescendOverridden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_bIsDescendOverridden = { "bIsDescendOverridden", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFontFace), &Z_Construct_UClass_UFontFace_Statics::NewProp_bIsDescendOverridden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDescendOverridden_MetaData), NewProp_bIsDescendOverridden_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData_Inner = { "FontFaceData", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData = { "FontFaceData", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, FontFaceData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontFaceData_MetaData), NewProp_FontFaceData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces_Inner = { "SubFaces", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces = { "SubFaces", nullptr, (EPropertyFlags)0x0010040800022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFontFace, SubFaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubFaces_MetaData), NewProp_SubFaces_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFontFace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_SourceFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_AscendOverriddenValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_bIsAscendOverridden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_DescendOverriddenValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_bIsDescendOverridden,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFontFace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFontFace_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFontFaceInterface_NoRegister, (int32)VTABLE_OFFSET(UFontFace, IFontFaceInterface), false },  // 3232847445
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFontFace_Statics::ClassParams = {
	&UFontFace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFontFace_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::Class_MetaDataParams), Z_Construct_UClass_UFontFace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFontFace()
{
	if (!Z_Registration_Info_UClass_UFontFace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFontFace.OuterSingleton, Z_Construct_UClass_UFontFace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFontFace.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UFontFace>()
{
	return UFontFace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFontFace);
UFontFace::~UFontFace() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFontFace)
// End Class UFontFace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFontFace, UFontFace::StaticClass, TEXT("UFontFace"), &Z_Registration_Info_UClass_UFontFace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFontFace), 507618406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_2719572663(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
