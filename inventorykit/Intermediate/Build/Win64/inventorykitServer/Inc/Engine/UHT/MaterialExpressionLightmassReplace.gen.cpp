// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionLightmassReplace.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLightmassReplace() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionLightmassReplace
void UMaterialExpressionLightmassReplace::StaticRegisterNativesUMaterialExpressionLightmassReplace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLightmassReplace);
UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace_NoRegister()
{
	return UMaterialExpressionLightmassReplace::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionLightmassReplace.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLightmassReplace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Realtime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLightmassReplace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lightmass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLightmassReplace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Realtime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Lightmass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLightmassReplace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Realtime = { "Realtime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLightmassReplace, Realtime), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Realtime_MetaData), NewProp_Realtime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Lightmass = { "Lightmass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLightmassReplace, Lightmass), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lightmass_MetaData), NewProp_Lightmass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Realtime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Lightmass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::ClassParams = {
	&UMaterialExpressionLightmassReplace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLightmassReplace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLightmassReplace.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLightmassReplace.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionLightmassReplace>()
{
	return UMaterialExpressionLightmassReplace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLightmassReplace);
UMaterialExpressionLightmassReplace::~UMaterialExpressionLightmassReplace() {}
// End Class UMaterialExpressionLightmassReplace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLightmassReplace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLightmassReplace, UMaterialExpressionLightmassReplace::StaticClass, TEXT("UMaterialExpressionLightmassReplace"), &Z_Registration_Info_UClass_UMaterialExpressionLightmassReplace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLightmassReplace), 3280363685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLightmassReplace_h_1898952257(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLightmassReplace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLightmassReplace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
