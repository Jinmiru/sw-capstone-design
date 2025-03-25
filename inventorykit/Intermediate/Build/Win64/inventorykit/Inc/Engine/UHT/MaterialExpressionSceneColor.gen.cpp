// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSceneColor.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneColor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneColor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMaterialSceneAttributeInputMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode;
static UEnum* EMaterialSceneAttributeInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialSceneAttributeInputMode"));
	}
	return Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialSceneAttributeInputMode::Type>()
{
	return EMaterialSceneAttributeInputMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Coordinates.Name", "EMaterialSceneAttributeInputMode::Coordinates" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
		{ "OffsetFraction.Name", "EMaterialSceneAttributeInputMode::OffsetFraction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMaterialSceneAttributeInputMode::Coordinates", (int64)EMaterialSceneAttributeInputMode::Coordinates },
		{ "EMaterialSceneAttributeInputMode::OffsetFraction", (int64)EMaterialSceneAttributeInputMode::OffsetFraction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialSceneAttributeInputMode",
	"EMaterialSceneAttributeInputMode::Type",
	Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode()
{
	if (!Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.InnerSingleton;
}
// End Enum EMaterialSceneAttributeInputMode

// Begin Class UMaterialExpressionSceneColor
void UMaterialExpressionSceneColor::StaticRegisterNativesUMaterialExpressionSceneColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSceneColor);
UClass* Z_Construct_UClass_UMaterialExpressionSceneColor_NoRegister()
{
	return UMaterialExpressionSceneColor::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSceneColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSceneColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[] = {
		{ "Category", "MaterialExpressionSceneColor" },
		{ "Comment", "/**\n\x09* Coordinates - UV coordinates to apply to the scene color lookup.\n\x09* OffsetFraction - \x09""An offset to apply to the scene color lookup in a 2d fraction of the screen.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Coordinates - UV coordinates to apply to the scene color lookup.\nOffsetFraction -      An offset to apply to the scene color lookup in a 2d fraction of the screen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstInput' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetFraction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstInput_MetaData[] = {
		{ "Category", "MaterialExpressionSceneColor" },
		{ "Comment", "/** only used if Input is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
		{ "OverridingInputProperty", "Input" },
		{ "ToolTip", "only used if Input is not hooked up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetFraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSceneColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSceneColor, InputMode), Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMode_MetaData), NewProp_InputMode_MetaData) }; // 273297878
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSceneColor, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_OffsetFraction = { "OffsetFraction", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSceneColor, OffsetFraction_DEPRECATED), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetFraction_MetaData), NewProp_OffsetFraction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_ConstInput = { "ConstInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSceneColor, ConstInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstInput_MetaData), NewProp_ConstInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_OffsetFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_ConstInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::ClassParams = {
	&UMaterialExpressionSceneColor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSceneColor()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSceneColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSceneColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSceneColor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSceneColor>()
{
	return UMaterialExpressionSceneColor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneColor);
UMaterialExpressionSceneColor::~UMaterialExpressionSceneColor() {}
// End Class UMaterialExpressionSceneColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialSceneAttributeInputMode_StaticEnum, TEXT("EMaterialSceneAttributeInputMode"), &Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 273297878U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSceneColor, UMaterialExpressionSceneColor::StaticClass, TEXT("UMaterialExpressionSceneColor"), &Z_Registration_Info_UClass_UMaterialExpressionSceneColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSceneColor), 1206782305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_4194335703(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
