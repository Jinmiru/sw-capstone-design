// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionHairColor.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionHairColor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairColor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionHairColor
void UMaterialExpressionHairColor::StaticRegisterNativesUMaterialExpressionHairColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionHairColor);
UClass* Z_Construct_UClass_UMaterialExpressionHairColor_NoRegister()
{
	return UMaterialExpressionHairColor::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionHairColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionHairColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Melanin_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Control the concentration of melanin in hair. Value is normalize over the plausible range of human hair.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Control the concentration of melanin in hair. Value is normalize over the plausible range of human hair." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Redness_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Control the redness tint of the hair. Value is normalize over the plausible range of human hair.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Control the redness tint of the hair. Value is normalize over the plausible range of human hair." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DyeColor_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Control the dyeing color of the hair. By default there is no dyeing color.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Control the dyeing color of the hair. By default there is no dyeing color." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Melanin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Redness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DyeColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionHairColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin = { "Melanin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionHairColor, Melanin), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Melanin_MetaData), NewProp_Melanin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness = { "Redness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionHairColor, Redness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Redness_MetaData), NewProp_Redness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor = { "DyeColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionHairColor, DyeColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DyeColor_MetaData), NewProp_DyeColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionHairColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionHairColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::ClassParams = {
	&UMaterialExpressionHairColor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionHairColor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionHairColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionHairColor()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionHairColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionHairColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionHairColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionHairColor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionHairColor>()
{
	return UMaterialExpressionHairColor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionHairColor);
UMaterialExpressionHairColor::~UMaterialExpressionHairColor() {}
// End Class UMaterialExpressionHairColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionHairColor, UMaterialExpressionHairColor::StaticClass, TEXT("UMaterialExpressionHairColor"), &Z_Registration_Info_UClass_UMaterialExpressionHairColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionHairColor), 4268380107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_2990674576(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
