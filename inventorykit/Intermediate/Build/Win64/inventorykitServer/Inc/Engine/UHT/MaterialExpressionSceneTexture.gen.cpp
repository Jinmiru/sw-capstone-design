// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSceneTexture.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneTexture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneTextureId();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSceneTexture
void UMaterialExpressionSceneTexture::StaticRegisterNativesUMaterialExpressionSceneTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSceneTexture);
UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture_NoRegister()
{
	return UMaterialExpressionSceneTexture::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSceneTexture.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneTextureId_MetaData[] = {
		{ "Category", "UMaterialExpressionSceneTexture" },
		{ "Comment", "/** Which scene texture (screen aligned texture) we want to make a lookup into */" },
		{ "DisplayName", "Scene Texture Id" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Which scene texture (screen aligned texture) we want to make a lookup into" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFiltered_MetaData[] = {
		{ "Category", "UMaterialExpressionSceneTexture" },
		{ "Comment", "/** Whether to use point sampled texture lookup (default) or using [bi-linear] filtered (can be slower, avoid faceted lock with distortions), some SceneTextures cannot be filtered */" },
		{ "DisplayName", "Filtered" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Whether to use point sampled texture lookup (default) or using [bi-linear] filtered (can be slower, avoid faceted lock with distortions), some SceneTextures cannot be filtered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneTextureId;
	static void NewProp_bFiltered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiltered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSceneTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSceneTexture, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId = { "SceneTextureId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSceneTexture, SceneTextureId), Z_Construct_UEnum_Engine_ESceneTextureId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneTextureId_MetaData), NewProp_SceneTextureId_MetaData) }; // 304089232
void Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_SetBit(void* Obj)
{
	((UMaterialExpressionSceneTexture*)Obj)->bFiltered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered = { "bFiltered", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionSceneTexture), &Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFiltered_MetaData), NewProp_bFiltered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::ClassParams = {
	&UMaterialExpressionSceneTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSceneTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSceneTexture.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSceneTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSceneTexture>()
{
	return UMaterialExpressionSceneTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneTexture);
UMaterialExpressionSceneTexture::~UMaterialExpressionSceneTexture() {}
// End Class UMaterialExpressionSceneTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSceneTexture, UMaterialExpressionSceneTexture::StaticClass, TEXT("UMaterialExpressionSceneTexture"), &Z_Registration_Info_UClass_UMaterialExpressionSceneTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSceneTexture), 2592164340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_2089173790(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
