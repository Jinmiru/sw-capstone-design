// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBounds() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBounds();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBounds_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMaterialExpressionBoundsType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialExpressionBoundsType;
static UEnum* EMaterialExpressionBoundsType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialExpressionBoundsType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialExpressionBoundsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialExpressionBoundsType"));
	}
	return Z_Registration_Info_UEnum_EMaterialExpressionBoundsType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialExpressionBoundsType>()
{
	return EMaterialExpressionBoundsType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MEILB_InstanceLocal.Comment", "/** Instance local */" },
		{ "MEILB_InstanceLocal.DisplayName", "Instance Local" },
		{ "MEILB_InstanceLocal.Name", "MEILB_InstanceLocal" },
		{ "MEILB_InstanceLocal.ToolTip", "Instance local" },
		{ "MEILB_ObjectLocal.Comment", "/** Object local */" },
		{ "MEILB_ObjectLocal.DisplayName", "Object Local" },
		{ "MEILB_ObjectLocal.Name", "MEILB_ObjectLocal" },
		{ "MEILB_ObjectLocal.ToolTip", "Object local" },
		{ "MEILB_PreSkinnedLocal.Comment", "/** Skinned local */" },
		{ "MEILB_PreSkinnedLocal.DisplayName", "Pre-Skinned Local" },
		{ "MEILB_PreSkinnedLocal.Name", "MEILB_PreSkinnedLocal" },
		{ "MEILB_PreSkinnedLocal.ToolTip", "Skinned local" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBounds.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MEILB_InstanceLocal", (int64)MEILB_InstanceLocal },
		{ "MEILB_ObjectLocal", (int64)MEILB_ObjectLocal },
		{ "MEILB_PreSkinnedLocal", (int64)MEILB_PreSkinnedLocal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialExpressionBoundsType",
	"EMaterialExpressionBoundsType",
	Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType()
{
	if (!Z_Registration_Info_UEnum_EMaterialExpressionBoundsType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialExpressionBoundsType.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialExpressionBoundsType.InnerSingleton;
}
// End Enum EMaterialExpressionBoundsType

// Begin Class UMaterialExpressionBounds
void UMaterialExpressionBounds::StaticRegisterNativesUMaterialExpressionBounds()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBounds);
UClass* Z_Construct_UClass_UMaterialExpressionBounds_NoRegister()
{
	return UMaterialExpressionBounds::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionBounds.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "MaterialExpressionBounds" },
		{ "Comment", "/** The type of bounds to output */" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBounds.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "The type of bounds to output" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBounds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionBounds_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBounds, Type), Z_Construct_UEnum_Engine_EMaterialExpressionBoundsType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1584090374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBounds_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBounds_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionBounds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBounds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBounds_Statics::ClassParams = {
	&UMaterialExpressionBounds::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionBounds_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBounds_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBounds_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionBounds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionBounds()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionBounds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBounds.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBounds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionBounds.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBounds>()
{
	return UMaterialExpressionBounds::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBounds);
UMaterialExpressionBounds::~UMaterialExpressionBounds() {}
// End Class UMaterialExpressionBounds

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBounds_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialExpressionBoundsType_StaticEnum, TEXT("EMaterialExpressionBoundsType"), &Z_Registration_Info_UEnum_EMaterialExpressionBoundsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1584090374U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBounds, UMaterialExpressionBounds::StaticClass, TEXT("UMaterialExpressionBounds"), &Z_Registration_Info_UClass_UMaterialExpressionBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBounds), 1631503381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBounds_h_3555452670(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBounds_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBounds_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBounds_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
