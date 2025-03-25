// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDecalMipmapLevel.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDecalMipmapLevel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDecalMipmapLevel
void UMaterialExpressionDecalMipmapLevel::StaticRegisterNativesUMaterialExpressionDecalMipmapLevel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDecalMipmapLevel);
UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister()
{
	return UMaterialExpressionDecalMipmapLevel::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to '(Const Width, Const Height)' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstWidth_MetaData[] = {
		{ "Category", "MaterialExpressionDecalMipmapLevel" },
		{ "Comment", "/** only used if TextureSize is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "OverridingInputProperty", "TextureSize" },
		{ "ToolTip", "only used if TextureSize is not hooked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstHeight_MetaData[] = {
		{ "Category", "MaterialExpressionDecalMipmapLevel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "OverridingInputProperty", "TextureSize" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDecalMipmapLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, TextureSize), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth = { "ConstWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, ConstWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstWidth_MetaData), NewProp_ConstWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight = { "ConstHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, ConstHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstHeight_MetaData), NewProp_ConstHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::ClassParams = {
	&UMaterialExpressionDecalMipmapLevel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDecalMipmapLevel>()
{
	return UMaterialExpressionDecalMipmapLevel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDecalMipmapLevel);
UMaterialExpressionDecalMipmapLevel::~UMaterialExpressionDecalMipmapLevel() {}
// End Class UMaterialExpressionDecalMipmapLevel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalMipmapLevel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel, UMaterialExpressionDecalMipmapLevel::StaticClass, TEXT("UMaterialExpressionDecalMipmapLevel"), &Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDecalMipmapLevel), 1966205409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalMipmapLevel_h_393529655(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalMipmapLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalMipmapLevel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
