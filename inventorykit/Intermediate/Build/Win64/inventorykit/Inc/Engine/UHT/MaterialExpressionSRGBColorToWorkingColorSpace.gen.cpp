// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSRGBColorToWorkingColorSpace.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSRGBColorToWorkingColorSpace() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSRGBColorToWorkingColorSpace
void UMaterialExpressionSRGBColorToWorkingColorSpace::StaticRegisterNativesUMaterialExpressionSRGBColorToWorkingColorSpace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSRGBColorToWorkingColorSpace);
UClass* Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_NoRegister()
{
	return UMaterialExpressionSRGBColorToWorkingColorSpace::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSRGBColorToWorkingColorSpace.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSRGBColorToWorkingColorSpace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSRGBColorToWorkingColorSpace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSRGBColorToWorkingColorSpace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSRGBColorToWorkingColorSpace, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::ClassParams = {
	&UMaterialExpressionSRGBColorToWorkingColorSpace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSRGBColorToWorkingColorSpace>()
{
	return UMaterialExpressionSRGBColorToWorkingColorSpace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSRGBColorToWorkingColorSpace);
UMaterialExpressionSRGBColorToWorkingColorSpace::~UMaterialExpressionSRGBColorToWorkingColorSpace() {}
// End Class UMaterialExpressionSRGBColorToWorkingColorSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSRGBColorToWorkingColorSpace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace, UMaterialExpressionSRGBColorToWorkingColorSpace::StaticClass, TEXT("UMaterialExpressionSRGBColorToWorkingColorSpace"), &Z_Registration_Info_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSRGBColorToWorkingColorSpace), 3516563775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSRGBColorToWorkingColorSpace_h_3467776773(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSRGBColorToWorkingColorSpace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSRGBColorToWorkingColorSpace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
