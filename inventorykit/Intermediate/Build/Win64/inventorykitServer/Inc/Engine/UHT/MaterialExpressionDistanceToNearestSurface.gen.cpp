// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDistanceToNearestSurface.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDistanceToNearestSurface() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionOrigin();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDistanceToNearestSurface
void UMaterialExpressionDistanceToNearestSurface::StaticRegisterNativesUMaterialExpressionDistanceToNearestSurface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDistanceToNearestSurface);
UClass* Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_NoRegister()
{
	return UMaterialExpressionDistanceToNearestSurface::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionDistanceToNearestSurface.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceToNearestSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceToNearestSurface.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "MaterialExpressionDistanceToNearestSurface" },
		{ "Comment", "/** Defines the reference space for the Position input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceToNearestSurface.h" },
		{ "ToolTip", "Defines the reference space for the Position input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDistanceToNearestSurface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceToNearestSurface, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDistanceToNearestSurface, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_WorldPositionOriginType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::ClassParams = {
	&UMaterialExpressionDistanceToNearestSurface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDistanceToNearestSurface>()
{
	return UMaterialExpressionDistanceToNearestSurface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDistanceToNearestSurface);
UMaterialExpressionDistanceToNearestSurface::~UMaterialExpressionDistanceToNearestSurface() {}
// End Class UMaterialExpressionDistanceToNearestSurface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceToNearestSurface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface, UMaterialExpressionDistanceToNearestSurface::StaticClass, TEXT("UMaterialExpressionDistanceToNearestSurface"), &Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDistanceToNearestSurface), 3720406987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceToNearestSurface_h_3035786688(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceToNearestSurface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceToNearestSurface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
