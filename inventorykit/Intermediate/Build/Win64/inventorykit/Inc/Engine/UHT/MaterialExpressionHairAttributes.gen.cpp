// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionHairAttributes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionHairAttributes() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairAttributes();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionHairAttributes
void UMaterialExpressionHairAttributes::StaticRegisterNativesUMaterialExpressionHairAttributes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionHairAttributes);
UClass* Z_Construct_UClass_UMaterialExpressionHairAttributes_NoRegister()
{
	return UMaterialExpressionHairAttributes::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionHairAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTangentSpace_MetaData[] = {
		{ "Category", "MaterialExpressionHairAttributes" },
		{ "Comment", "/** If enabled, this nodes outputs a tangent space tangent, otherwise it outputs a world space tangent. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairAttributes.h" },
		{ "ToolTip", "If enabled, this nodes outputs a tangent space tangent, otherwise it outputs a world space tangent." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseTangentSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTangentSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionHairAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace_SetBit(void* Obj)
{
	((UMaterialExpressionHairAttributes*)Obj)->bUseTangentSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace = { "bUseTangentSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionHairAttributes), &Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTangentSpace_MetaData), NewProp_bUseTangentSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::NewProp_bUseTangentSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::ClassParams = {
	&UMaterialExpressionHairAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionHairAttributes()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionHairAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionHairAttributes.OuterSingleton, Z_Construct_UClass_UMaterialExpressionHairAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionHairAttributes.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionHairAttributes>()
{
	return UMaterialExpressionHairAttributes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionHairAttributes);
UMaterialExpressionHairAttributes::~UMaterialExpressionHairAttributes() {}
// End Class UMaterialExpressionHairAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionHairAttributes, UMaterialExpressionHairAttributes::StaticClass, TEXT("UMaterialExpressionHairAttributes"), &Z_Registration_Info_UClass_UMaterialExpressionHairAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionHairAttributes), 1862040993U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h_2550744210(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairAttributes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
