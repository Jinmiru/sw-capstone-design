// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionPreviousFrameSwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPreviousFrameSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionPreviousFrameSwitch
void UMaterialExpressionPreviousFrameSwitch::StaticRegisterNativesUMaterialExpressionPreviousFrameSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPreviousFrameSwitch);
UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister()
{
	return UMaterialExpressionPreviousFrameSwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPreviousFrameSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPreviousFrameSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame = { "CurrentFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPreviousFrameSwitch, CurrentFrame), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFrame_MetaData), NewProp_CurrentFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame = { "PreviousFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPreviousFrameSwitch, PreviousFrame), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousFrame_MetaData), NewProp_PreviousFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::ClassParams = {
	&UMaterialExpressionPreviousFrameSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPreviousFrameSwitch>()
{
	return UMaterialExpressionPreviousFrameSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPreviousFrameSwitch);
UMaterialExpressionPreviousFrameSwitch::~UMaterialExpressionPreviousFrameSwitch() {}
// End Class UMaterialExpressionPreviousFrameSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreviousFrameSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch, UMaterialExpressionPreviousFrameSwitch::StaticClass, TEXT("UMaterialExpressionPreviousFrameSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPreviousFrameSwitch), 19786758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreviousFrameSwitch_h_3597894452(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreviousFrameSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreviousFrameSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
