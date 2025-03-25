// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionReflectionVectorWS.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionReflectionVectorWS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionReflectionVectorWS
void UMaterialExpressionReflectionVectorWS::StaticRegisterNativesUMaterialExpressionReflectionVectorWS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionReflectionVectorWS);
UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_NoRegister()
{
	return UMaterialExpressionReflectionVectorWS::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionReflectionVectorWS.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomWorldNormal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Reflection Vector if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeCustomWorldNormal_MetaData[] = {
		{ "Category", "UMaterialExpressionReflectionVectorWS" },
		{ "Comment", "/** (true): The specified world normal will be normalized. (false): WorldNormal will just be used as is, faster but possible artifacts if normal length isn't 1 */" },
		{ "DisplayName", "Normalize custom world normal" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "(true): The specified world normal will be normalized. (false): WorldNormal will just be used as is, faster but possible artifacts if normal length isn't 1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomWorldNormal;
	static void NewProp_bNormalizeCustomWorldNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeCustomWorldNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionReflectionVectorWS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal = { "CustomWorldNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionReflectionVectorWS, CustomWorldNormal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomWorldNormal_MetaData), NewProp_CustomWorldNormal_MetaData) };
void Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_SetBit(void* Obj)
{
	((UMaterialExpressionReflectionVectorWS*)Obj)->bNormalizeCustomWorldNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal = { "bNormalizeCustomWorldNormal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionReflectionVectorWS), &Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeCustomWorldNormal_MetaData), NewProp_bNormalizeCustomWorldNormal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::ClassParams = {
	&UMaterialExpressionReflectionVectorWS::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.OuterSingleton, Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionReflectionVectorWS>()
{
	return UMaterialExpressionReflectionVectorWS::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionReflectionVectorWS);
UMaterialExpressionReflectionVectorWS::~UMaterialExpressionReflectionVectorWS() {}
// End Class UMaterialExpressionReflectionVectorWS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionVectorWS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionReflectionVectorWS, UMaterialExpressionReflectionVectorWS::StaticClass, TEXT("UMaterialExpressionReflectionVectorWS"), &Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionReflectionVectorWS), 2066455589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionVectorWS_h_967082959(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionVectorWS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionVectorWS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
