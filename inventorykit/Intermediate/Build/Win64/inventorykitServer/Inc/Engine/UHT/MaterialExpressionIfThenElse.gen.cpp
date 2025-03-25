// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionIfThenElse.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionIfThenElse() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIfThenElse();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIfThenElse_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionIfThenElse
void UMaterialExpressionIfThenElse::StaticRegisterNativesUMaterialExpressionIfThenElse()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionIfThenElse);
UClass* Z_Construct_UClass_UMaterialExpressionIfThenElse_NoRegister()
{
	return UMaterialExpressionIfThenElse::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionIfThenElse.h" },
		{ "MaterialControlFlow", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIfThenElse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Then_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIfThenElse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Else_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIfThenElse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIfThenElse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Then;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Else;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionIfThenElse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Then = { "Then", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionIfThenElse, Then), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Then_MetaData), NewProp_Then_MetaData) }; // 1760504373
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Else = { "Else", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionIfThenElse, Else), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Else_MetaData), NewProp_Else_MetaData) }; // 1760504373
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionIfThenElse, Condition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Then,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Else,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::NewProp_Condition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::ClassParams = {
	&UMaterialExpressionIfThenElse::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionIfThenElse()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.OuterSingleton, Z_Construct_UClass_UMaterialExpressionIfThenElse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionIfThenElse.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionIfThenElse>()
{
	return UMaterialExpressionIfThenElse::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionIfThenElse);
UMaterialExpressionIfThenElse::~UMaterialExpressionIfThenElse() {}
// End Class UMaterialExpressionIfThenElse

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIfThenElse_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionIfThenElse, UMaterialExpressionIfThenElse::StaticClass, TEXT("UMaterialExpressionIfThenElse"), &Z_Registration_Info_UClass_UMaterialExpressionIfThenElse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionIfThenElse), 773161085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIfThenElse_h_1120072298(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIfThenElse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIfThenElse_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
