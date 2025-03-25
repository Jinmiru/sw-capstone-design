// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionBlackBody.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBlackBody() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlackBody();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlackBody_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionBlackBody
void UMaterialExpressionBlackBody::StaticRegisterNativesUMaterialExpressionBlackBody()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBlackBody);
UClass* Z_Construct_UClass_UMaterialExpressionBlackBody_NoRegister()
{
	return UMaterialExpressionBlackBody::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionBlackBody_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionBlackBody.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlackBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temp_MetaData[] = {
		{ "Comment", "/** Temperature */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlackBody.h" },
		{ "ToolTip", "Temperature" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Temp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBlackBody>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::NewProp_Temp = { "Temp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlackBody, Temp), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temp_MetaData), NewProp_Temp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::NewProp_Temp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::ClassParams = {
	&UMaterialExpressionBlackBody::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionBlackBody()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionBlackBody.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBlackBody.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionBlackBody.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBlackBody>()
{
	return UMaterialExpressionBlackBody::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBlackBody);
UMaterialExpressionBlackBody::~UMaterialExpressionBlackBody() {}
// End Class UMaterialExpressionBlackBody

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlackBody_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBlackBody, UMaterialExpressionBlackBody::StaticClass, TEXT("UMaterialExpressionBlackBody"), &Z_Registration_Info_UClass_UMaterialExpressionBlackBody, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBlackBody), 3821866638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlackBody_h_3321262817(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlackBody_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlackBody_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
