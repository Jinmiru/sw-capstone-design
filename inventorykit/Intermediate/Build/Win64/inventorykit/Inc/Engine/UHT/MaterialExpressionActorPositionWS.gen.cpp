// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionActorPositionWS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionActorPositionWS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionActorPositionWS();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionActorPositionWS_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionOrigin();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionActorPositionWS
void UMaterialExpressionActorPositionWS::StaticRegisterNativesUMaterialExpressionActorPositionWS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionActorPositionWS);
UClass* Z_Construct_UClass_UMaterialExpressionActorPositionWS_NoRegister()
{
	return UMaterialExpressionActorPositionWS::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionActorPositionWS.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionActorPositionWS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginType_MetaData[] = {
		{ "Category", "UMaterialExpressionActorPositionWS" },
		{ "DisplayName", "Origin" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionActorPositionWS.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OriginType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionActorPositionWS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::NewProp_OriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::NewProp_OriginType = { "OriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionActorPositionWS, OriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginType_MetaData), NewProp_OriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::NewProp_OriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::NewProp_OriginType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::ClassParams = {
	&UMaterialExpressionActorPositionWS::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionActorPositionWS()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionActorPositionWS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionActorPositionWS.OuterSingleton, Z_Construct_UClass_UMaterialExpressionActorPositionWS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionActorPositionWS.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionActorPositionWS>()
{
	return UMaterialExpressionActorPositionWS::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionActorPositionWS);
UMaterialExpressionActorPositionWS::~UMaterialExpressionActorPositionWS() {}
// End Class UMaterialExpressionActorPositionWS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionActorPositionWS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionActorPositionWS, UMaterialExpressionActorPositionWS::StaticClass, TEXT("UMaterialExpressionActorPositionWS"), &Z_Registration_Info_UClass_UMaterialExpressionActorPositionWS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionActorPositionWS), 1071963892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionActorPositionWS_h_907846291(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionActorPositionWS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionActorPositionWS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
