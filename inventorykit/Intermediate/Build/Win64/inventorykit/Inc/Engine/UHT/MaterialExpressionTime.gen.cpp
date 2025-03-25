// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTime() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTime();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTime_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTime
void UMaterialExpressionTime::StaticRegisterNativesUMaterialExpressionTime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTime);
UClass* Z_Construct_UClass_UMaterialExpressionTime_NoRegister()
{
	return UMaterialExpressionTime::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTime.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePause_MetaData[] = {
		{ "Category", "MaterialExpressionTime" },
		{ "Comment", "/** This time continues advancing regardless of whether the game is paused. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
		{ "ToolTip", "This time continues advancing regardless of whether the game is paused." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Period_MetaData[] = {
		{ "Category", "MaterialExpressionTime" },
		{ "Comment", "/** Enables or disables the Period value. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
		{ "ToolTip", "Enables or disables the Period value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "Category", "MaterialExpressionTime" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_Period" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
		{ "ToolTip", "Period at which to wrap around time" },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnorePause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePause;
	static void NewProp_bOverride_Period_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Period;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_SetBit(void* Obj)
{
	((UMaterialExpressionTime*)Obj)->bIgnorePause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause = { "bIgnorePause", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionTime), &Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnorePause_MetaData), NewProp_bIgnorePause_MetaData) };
void Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_SetBit(void* Obj)
{
	((UMaterialExpressionTime*)Obj)->bOverride_Period = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period = { "bOverride_Period", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionTime), &Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Period_MetaData), NewProp_bOverride_Period_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTime, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionTime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTime_Statics::ClassParams = {
	&UMaterialExpressionTime::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionTime_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTime()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTime.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTime.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTime>()
{
	return UMaterialExpressionTime::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTime);
UMaterialExpressionTime::~UMaterialExpressionTime() {}
// End Class UMaterialExpressionTime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTime, UMaterialExpressionTime::StaticClass, TEXT("UMaterialExpressionTime"), &Z_Registration_Info_UClass_UMaterialExpressionTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTime), 1915151530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_592773390(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
