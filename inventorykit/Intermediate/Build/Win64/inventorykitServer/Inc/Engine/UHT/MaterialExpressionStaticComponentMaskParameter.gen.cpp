// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticComponentMaskParameter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionStaticComponentMaskParameter
void UMaterialExpressionStaticComponentMaskParameter::StaticRegisterNativesUMaterialExpressionStaticComponentMaskParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStaticComponentMaskParameter);
UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_NoRegister()
{
	return UMaterialExpressionStaticComponentMaskParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStaticComponentMaskParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultR_MetaData[] = {
		{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultG_MetaData[] = {
		{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultB_MetaData[] = {
		{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultA_MetaData[] = {
		{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_DefaultR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultR;
	static void NewProp_DefaultG_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultG;
	static void NewProp_DefaultB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultB;
	static void NewProp_DefaultA_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStaticComponentMaskParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionStaticComponentMaskParameter, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
void Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR_SetBit(void* Obj)
{
	((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR = { "DefaultR", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionStaticComponentMaskParameter), &Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultR_MetaData), NewProp_DefaultR_MetaData) };
void Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG_SetBit(void* Obj)
{
	((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultG = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG = { "DefaultG", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionStaticComponentMaskParameter), &Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultG_MetaData), NewProp_DefaultG_MetaData) };
void Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB_SetBit(void* Obj)
{
	((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB = { "DefaultB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionStaticComponentMaskParameter), &Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultB_MetaData), NewProp_DefaultB_MetaData) };
void Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA_SetBit(void* Obj)
{
	((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultA = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA = { "DefaultA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionStaticComponentMaskParameter), &Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultA_MetaData), NewProp_DefaultA_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::ClassParams = {
	&UMaterialExpressionStaticComponentMaskParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStaticComponentMaskParameter>()
{
	return UMaterialExpressionStaticComponentMaskParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticComponentMaskParameter);
UMaterialExpressionStaticComponentMaskParameter::~UMaterialExpressionStaticComponentMaskParameter() {}
// End Class UMaterialExpressionStaticComponentMaskParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter, UMaterialExpressionStaticComponentMaskParameter::StaticClass, TEXT("UMaterialExpressionStaticComponentMaskParameter"), &Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStaticComponentMaskParameter), 1715848269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_575162426(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
