// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDistanceFieldsRenderingSwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDistanceFieldsRenderingSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDistanceFieldsRenderingSwitch
void UMaterialExpressionDistanceFieldsRenderingSwitch::StaticRegisterNativesUMaterialExpressionDistanceFieldsRenderingSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDistanceFieldsRenderingSwitch);
UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_NoRegister()
{
	return UMaterialExpressionDistanceFieldsRenderingSwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression to switch logic according to whether distance fields renderering is supported on this project and feature level. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDistanceFieldsRenderingSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldsRenderingSwitch.h" },
		{ "ToolTip", "Material output expression to switch logic according to whether distance fields renderering is supported on this project and feature level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_No_MetaData[] = {
		{ "Comment", "/** Used if distance fields renderering is not supported. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldsRenderingSwitch.h" },
		{ "ToolTip", "Used if distance fields renderering is not supported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Yes_MetaData[] = {
		{ "Comment", "/** Used if distance fields renderering is supported. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldsRenderingSwitch.h" },
		{ "ToolTip", "Used if distance fields renderering is supported." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_No;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Yes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDistanceFieldsRenderingSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldsRenderingSwitch, No), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_No_MetaData), NewProp_No_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::NewProp_Yes = { "Yes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceFieldsRenderingSwitch, Yes), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Yes_MetaData), NewProp_Yes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::NewProp_No,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::NewProp_Yes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::ClassParams = {
	&UMaterialExpressionDistanceFieldsRenderingSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDistanceFieldsRenderingSwitch>()
{
	return UMaterialExpressionDistanceFieldsRenderingSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDistanceFieldsRenderingSwitch);
UMaterialExpressionDistanceFieldsRenderingSwitch::~UMaterialExpressionDistanceFieldsRenderingSwitch() {}
// End Class UMaterialExpressionDistanceFieldsRenderingSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldsRenderingSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch, UMaterialExpressionDistanceFieldsRenderingSwitch::StaticClass, TEXT("UMaterialExpressionDistanceFieldsRenderingSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldsRenderingSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDistanceFieldsRenderingSwitch), 4010699092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldsRenderingSwitch_h_386936521(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldsRenderingSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldsRenderingSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
