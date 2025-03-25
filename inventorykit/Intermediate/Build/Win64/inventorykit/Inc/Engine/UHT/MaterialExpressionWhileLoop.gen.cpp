// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionWhileLoop.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionWhileLoop() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionWhileLoop();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionWhileLoop_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionWhileLoop
void UMaterialExpressionWhileLoop::StaticRegisterNativesUMaterialExpressionWhileLoop()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionWhileLoop);
UClass* Z_Construct_UClass_UMaterialExpressionWhileLoop_NoRegister()
{
	return UMaterialExpressionWhileLoop::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionWhileLoop.h" },
		{ "MaterialControlFlow", "" },
		{ "MaterialNewHLSLGenerator", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWhileLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopBody_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWhileLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWhileLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWhileLoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopBody;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Completed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionWhileLoop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_LoopBody = { "LoopBody", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionWhileLoop, LoopBody), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopBody_MetaData), NewProp_LoopBody_MetaData) }; // 1760504373
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionWhileLoop, Completed), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 1760504373
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionWhileLoop, Condition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_LoopBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Completed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::NewProp_Condition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::ClassParams = {
	&UMaterialExpressionWhileLoop::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionWhileLoop()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionWhileLoop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionWhileLoop.OuterSingleton, Z_Construct_UClass_UMaterialExpressionWhileLoop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionWhileLoop.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionWhileLoop>()
{
	return UMaterialExpressionWhileLoop::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionWhileLoop);
UMaterialExpressionWhileLoop::~UMaterialExpressionWhileLoop() {}
// End Class UMaterialExpressionWhileLoop

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWhileLoop_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionWhileLoop, UMaterialExpressionWhileLoop::StaticClass, TEXT("UMaterialExpressionWhileLoop"), &Z_Registration_Info_UClass_UMaterialExpressionWhileLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionWhileLoop), 2031226363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWhileLoop_h_3833727607(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWhileLoop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWhileLoop_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
