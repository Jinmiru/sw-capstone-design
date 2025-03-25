// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionForLoop.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionForLoop() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionForLoop();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionForLoop_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionForLoop
void UMaterialExpressionForLoop::StaticRegisterNativesUMaterialExpressionForLoop()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionForLoop);
UClass* Z_Construct_UClass_UMaterialExpressionForLoop_NoRegister()
{
	return UMaterialExpressionForLoop::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionForLoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionForLoop.h" },
		{ "MaterialControlFlow", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopBody_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexStep_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionForLoop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopBody;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Completed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndexStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionForLoop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_LoopBody = { "LoopBody", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionForLoop, LoopBody), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopBody_MetaData), NewProp_LoopBody_MetaData) }; // 1760504373
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionForLoop, Completed), Z_Construct_UScriptStruct_FExpressionExecOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 1760504373
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionForLoop, StartIndex), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartIndex_MetaData), NewProp_StartIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionForLoop, EndIndex), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndIndex_MetaData), NewProp_EndIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_IndexStep = { "IndexStep", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionForLoop, IndexStep), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexStep_MetaData), NewProp_IndexStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionForLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_LoopBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_Completed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_EndIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionForLoop_Statics::NewProp_IndexStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionForLoop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionForLoop_Statics::ClassParams = {
	&UMaterialExpressionForLoop::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionForLoop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionForLoop_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionForLoop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionForLoop()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionForLoop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionForLoop.OuterSingleton, Z_Construct_UClass_UMaterialExpressionForLoop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionForLoop.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionForLoop>()
{
	return UMaterialExpressionForLoop::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionForLoop);
UMaterialExpressionForLoop::~UMaterialExpressionForLoop() {}
// End Class UMaterialExpressionForLoop

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionForLoop_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionForLoop, UMaterialExpressionForLoop::StaticClass, TEXT("UMaterialExpressionForLoop"), &Z_Registration_Info_UClass_UMaterialExpressionForLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionForLoop), 2148569957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionForLoop_h_193462587(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionForLoop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionForLoop_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
