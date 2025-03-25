// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SceneCapture2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCapture2D() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D();
ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ASceneCapture2D Function OnInterpToggle
struct Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics
{
	struct SceneCapture2D_eventOnInterpToggle_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((SceneCapture2D_eventOnInterpToggle_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SceneCapture2D_eventOnInterpToggle_Parms), &Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneCapture2D, nullptr, "OnInterpToggle", nullptr, nullptr, Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::SceneCapture2D_eventOnInterpToggle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::SceneCapture2D_eventOnInterpToggle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneCapture2D::execOnInterpToggle)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInterpToggle(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class ASceneCapture2D Function OnInterpToggle

// Begin Class ASceneCapture2D
void ASceneCapture2D::StaticRegisterNativesASceneCapture2D()
{
	UClass* Class = ASceneCapture2D::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInterpToggle", &ASceneCapture2D::execOnInterpToggle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASceneCapture2D);
UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister()
{
	return ASceneCapture2D::StaticClass();
}
struct Z_Construct_UClass_ASceneCapture2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/SceneCapture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent2D_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DecalActor" },
		{ "Comment", "/** Scene capture component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
		{ "ToolTip", "Scene capture component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent2D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle, "OnInterpToggle" }, // 819011365
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneCapture2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D = { "CaptureComponent2D", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASceneCapture2D, CaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent2D_MetaData), NewProp_CaptureComponent2D_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneCapture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASceneCapture2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASceneCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASceneCapture2D_Statics::ClassParams = {
	&ASceneCapture2D::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASceneCapture2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture2D_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_ASceneCapture2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASceneCapture2D()
{
	if (!Z_Registration_Info_UClass_ASceneCapture2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASceneCapture2D.OuterSingleton, Z_Construct_UClass_ASceneCapture2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASceneCapture2D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ASceneCapture2D>()
{
	return ASceneCapture2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneCapture2D);
ASceneCapture2D::~ASceneCapture2D() {}
// End Class ASceneCapture2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASceneCapture2D, ASceneCapture2D::StaticClass, TEXT("ASceneCapture2D"), &Z_Registration_Info_UClass_ASceneCapture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASceneCapture2D), 1397086389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_2115940692(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
