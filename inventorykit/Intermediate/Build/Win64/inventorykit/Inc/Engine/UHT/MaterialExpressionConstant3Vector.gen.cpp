// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionConstant3Vector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionConstant3Vector() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionConstant3Vector
void UMaterialExpressionConstant3Vector::StaticRegisterNativesUMaterialExpressionConstant3Vector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionConstant3Vector);
UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister()
{
	return UMaterialExpressionConstant3Vector::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionConstant3Vector.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant3Vector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
		{ "Category", "MaterialExpressionConstant3Vector" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant3Vector.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionConstant3Vector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionConstant3Vector, Constant), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constant_MetaData), NewProp_Constant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::NewProp_Constant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::ClassParams = {
	&UMaterialExpressionConstant3Vector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionConstant3Vector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionConstant3Vector.OuterSingleton, Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionConstant3Vector.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionConstant3Vector>()
{
	return UMaterialExpressionConstant3Vector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstant3Vector);
UMaterialExpressionConstant3Vector::~UMaterialExpressionConstant3Vector() {}
// End Class UMaterialExpressionConstant3Vector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant3Vector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionConstant3Vector, UMaterialExpressionConstant3Vector::StaticClass, TEXT("UMaterialExpressionConstant3Vector"), &Z_Registration_Info_UClass_UMaterialExpressionConstant3Vector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionConstant3Vector), 1967952337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant3Vector_h_2928003487(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant3Vector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant3Vector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
