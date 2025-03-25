// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SceneCaptureCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureCube() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
ENGINE_API UClass* Z_Construct_UClass_ASceneCaptureCube();
ENGINE_API UClass* Z_Construct_UClass_ASceneCaptureCube_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ASceneCaptureCube Function OnInterpToggle
struct Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics
{
	struct SceneCaptureCube_eventOnInterpToggle_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((SceneCaptureCube_eventOnInterpToggle_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SceneCaptureCube_eventOnInterpToggle_Parms), &Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneCaptureCube, nullptr, "OnInterpToggle", nullptr, nullptr, Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::SceneCaptureCube_eventOnInterpToggle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::SceneCaptureCube_eventOnInterpToggle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneCaptureCube::execOnInterpToggle)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInterpToggle(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class ASceneCaptureCube Function OnInterpToggle

// Begin Class ASceneCaptureCube
void ASceneCaptureCube::StaticRegisterNativesASceneCaptureCube()
{
	UClass* Class = ASceneCaptureCube::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInterpToggle", &ASceneCaptureCube::execOnInterpToggle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASceneCaptureCube);
UClass* Z_Construct_UClass_ASceneCaptureCube_NoRegister()
{
	return ASceneCaptureCube::StaticClass();
}
struct Z_Construct_UClass_ASceneCaptureCube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/SceneCaptureCube.h" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponentCube_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DecalActor" },
		{ "Comment", "/** Scene capture component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
		{ "ToolTip", "Scene capture component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponentCube;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle, "OnInterpToggle" }, // 3482723275
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneCaptureCube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube = { "CaptureComponentCube", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASceneCaptureCube, CaptureComponentCube), Z_Construct_UClass_USceneCaptureComponentCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponentCube_MetaData), NewProp_CaptureComponentCube_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneCaptureCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASceneCaptureCube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASceneCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASceneCaptureCube_Statics::ClassParams = {
	&ASceneCaptureCube::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASceneCaptureCube_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::Class_MetaDataParams), Z_Construct_UClass_ASceneCaptureCube_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASceneCaptureCube()
{
	if (!Z_Registration_Info_UClass_ASceneCaptureCube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASceneCaptureCube.OuterSingleton, Z_Construct_UClass_ASceneCaptureCube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASceneCaptureCube.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ASceneCaptureCube>()
{
	return ASceneCaptureCube::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneCaptureCube);
ASceneCaptureCube::~ASceneCaptureCube() {}
// End Class ASceneCaptureCube

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASceneCaptureCube, ASceneCaptureCube::StaticClass, TEXT("ASceneCaptureCube"), &Z_Registration_Info_UClass_ASceneCaptureCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASceneCaptureCube), 2683161125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_3273978782(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
