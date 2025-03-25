// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/BlendSpace1D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpace1D() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlendSpace();
ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D();
ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UBlendSpace1D
void UBlendSpace1D::StaticRegisterNativesUBlendSpace1D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendSpace1D);
UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister()
{
	return UBlendSpace1D::StaticClass();
}
struct Z_Construct_UClass_UBlendSpace1D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * Allows multiple animations to be blended between based on input parameters\n  */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/BlendSpace1D.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
		{ "ToolTip", "Allows multiple animations to be blended between based on input parameters" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayEditorVertically_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleAnimation_MetaData[] = {
		{ "Category", "InputInterpolation" },
		{ "Comment", "/**\n\x09 * If you have input smoothing, whether to scale the animation speed. E.g. for locomotion animation, \n\x09 * the speed axis will scale the animation speed in order to make up the difference between the target \n\x09 * and the result of blending the samples.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
		{ "ToolTip", "If you have input smoothing, whether to scale the animation speed. E.g. for locomotion animation,\nthe speed axis will scale the animation speed in order to make up the difference between the target\nand the result of blending the samples." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bDisplayEditorVertically_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayEditorVertically;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bScaleAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpace1D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_SetBit(void* Obj)
{
	((UBlendSpace1D*)Obj)->bDisplayEditorVertically_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically = { "bDisplayEditorVertically", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlendSpace1D), &Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayEditorVertically_MetaData), NewProp_bDisplayEditorVertically_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_SetBit(void* Obj)
{
	((UBlendSpace1D*)Obj)->bScaleAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation = { "bScaleAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlendSpace1D), &Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleAnimation_MetaData), NewProp_bScaleAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendSpace1D_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlendSpace1D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlendSpace,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpace1D_Statics::ClassParams = {
	&UBlendSpace1D::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlendSpace1D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlendSpace1D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlendSpace1D()
{
	if (!Z_Registration_Info_UClass_UBlendSpace1D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendSpace1D.OuterSingleton, Z_Construct_UClass_UBlendSpace1D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlendSpace1D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBlendSpace1D>()
{
	return UBlendSpace1D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpace1D);
UBlendSpace1D::~UBlendSpace1D() {}
// End Class UBlendSpace1D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlendSpace1D, UBlendSpace1D::StaticClass, TEXT("UBlendSpace1D"), &Z_Registration_Info_UClass_UBlendSpace1D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendSpace1D), 3533474700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_3019259412(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
