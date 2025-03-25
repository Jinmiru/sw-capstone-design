// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionAtmosphericFogColor.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAtmosphericFogColor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionOrigin();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionAtmosphericFogColor
void UMaterialExpressionAtmosphericFogColor::StaticRegisterNativesUMaterialExpressionAtmosphericFogColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionAtmosphericFogColor);
UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_NoRegister()
{
	return UMaterialExpressionAtmosphericFogColor::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Atmospheric Fog Color (deprecated)" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionAtmosphericFogColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericFogColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericFogColor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "MaterialExpressionAtmosphericFogColor" },
		{ "Comment", "/** Defines the reference space for the WorldPosition input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericFogColor.h" },
		{ "ToolTip", "Defines the reference space for the WorldPosition input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAtmosphericFogColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionAtmosphericFogColor, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionAtmosphericFogColor, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPositionOriginType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::ClassParams = {
	&UMaterialExpressionAtmosphericFogColor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionAtmosphericFogColor>()
{
	return UMaterialExpressionAtmosphericFogColor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAtmosphericFogColor);
UMaterialExpressionAtmosphericFogColor::~UMaterialExpressionAtmosphericFogColor() {}
// End Class UMaterialExpressionAtmosphericFogColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericFogColor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor, UMaterialExpressionAtmosphericFogColor::StaticClass, TEXT("UMaterialExpressionAtmosphericFogColor"), &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionAtmosphericFogColor), 1688751645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericFogColor_h_3345468441(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericFogColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericFogColor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
