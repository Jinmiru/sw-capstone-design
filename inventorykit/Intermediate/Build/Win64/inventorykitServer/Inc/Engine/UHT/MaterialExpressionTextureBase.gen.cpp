// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTextureBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSamplerType();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTextureBase
void UMaterialExpressionTextureBase::StaticRegisterNativesUMaterialExpressionTextureBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureBase);
UClass* Z_Construct_UClass_UMaterialExpressionTextureBase_NoRegister()
{
	return UMaterialExpressionTextureBase::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureBase.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "MaterialExpressionTextureBase" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplerType_MetaData[] = {
		{ "Category", "MaterialExpressionTextureBase" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDefaultMeshpaintTexture_MetaData[] = {
		{ "Category", "MaterialExpressionTextureBase" },
		{ "Comment", "/** Is default selected texture when using mesh paint mode texture painting */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
		{ "ToolTip", "Is default selected texture when using mesh paint mode texture painting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SamplerType;
	static void NewProp_IsDefaultMeshpaintTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDefaultMeshpaintTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureBase, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_SamplerType = { "SamplerType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureBase, SamplerType), Z_Construct_UEnum_Engine_EMaterialSamplerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplerType_MetaData), NewProp_SamplerType_MetaData) }; // 2937471243
void Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture_SetBit(void* Obj)
{
	((UMaterialExpressionTextureBase*)Obj)->IsDefaultMeshpaintTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture = { "IsDefaultMeshpaintTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionTextureBase), &Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDefaultMeshpaintTexture_MetaData), NewProp_IsDefaultMeshpaintTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_SamplerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::ClassParams = {
	&UMaterialExpressionTextureBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::PropPointers),
	0,
	0x000800B1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureBase()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureBase.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureBase>()
{
	return UMaterialExpressionTextureBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureBase);
UMaterialExpressionTextureBase::~UMaterialExpressionTextureBase() {}
// End Class UMaterialExpressionTextureBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureBase, UMaterialExpressionTextureBase::StaticClass, TEXT("UMaterialExpressionTextureBase"), &Z_Registration_Info_UClass_UMaterialExpressionTextureBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureBase), 1211784536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h_1344860408(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
