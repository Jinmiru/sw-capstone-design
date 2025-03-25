// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponentCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponentCube() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USceneCaptureComponentCube Function CaptureScene
struct Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** \n\x09 * Render the scene to the texture target immediately.  \n\x09 * This should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly. \n\x09 * If r.SceneCapture.CullByDetailMode is set, nothing will happen if DetailMode is higher than r.DetailMode.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Render the scene to the texture target immediately.\nThis should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly.\nIf r.SceneCapture.CullByDetailMode is set, nothing will happen if DetailMode is higher than r.DetailMode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponentCube, nullptr, "CaptureScene", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponentCube::execCaptureScene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CaptureScene();
	P_NATIVE_END;
}
// End Class USceneCaptureComponentCube Function CaptureScene

// Begin Class USceneCaptureComponentCube
void USceneCaptureComponentCube::StaticRegisterNativesUSceneCaptureComponentCube()
{
	UClass* Class = USceneCaptureComponentCube::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CaptureScene", &USceneCaptureComponentCube::execCaptureScene },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneCaptureComponentCube);
UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister()
{
	return USceneCaptureComponentCube::StaticClass();
}
struct Z_Construct_UClass_USceneCaptureComponentCube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09Used to capture a 'snapshot' of the scene from a 6 planes and feed it to a render target.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SceneCaptureComponentCube.h" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Used to capture a 'snapshot' of the scene from a 6 planes and feed it to a render target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Temporary render target that can be used by the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Temporary render target that can be used by the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureRotation_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Preserve the rotation of the actor when updating the capture. The default behavior is to capture the cube aligned to the world axis system.  */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Preserve the rotation of the actor when updating the capture. The default behavior is to capture the cube aligned to the world axis system." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
	static void NewProp_bCaptureRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene, "CaptureScene" }, // 4223945352
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCaptureComponentCube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponentCube, TextureTarget), Z_Construct_UClass_UTextureRenderTargetCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureTarget_MetaData), NewProp_TextureTarget_MetaData) };
void Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_SetBit(void* Obj)
{
	((USceneCaptureComponentCube*)Obj)->bCaptureRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation = { "bCaptureRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponentCube), &Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureRotation_MetaData), NewProp_bCaptureRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneCaptureComponentCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USceneCaptureComponentCube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::ClassParams = {
	&USceneCaptureComponentCube::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USceneCaptureComponentCube_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::Class_MetaDataParams), Z_Construct_UClass_USceneCaptureComponentCube_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USceneCaptureComponentCube()
{
	if (!Z_Registration_Info_UClass_USceneCaptureComponentCube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneCaptureComponentCube.OuterSingleton, Z_Construct_UClass_USceneCaptureComponentCube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USceneCaptureComponentCube.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USceneCaptureComponentCube>()
{
	return USceneCaptureComponentCube::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponentCube);
USceneCaptureComponentCube::~USceneCaptureComponentCube() {}
// End Class USceneCaptureComponentCube

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USceneCaptureComponentCube, USceneCaptureComponentCube::StaticClass, TEXT("USceneCaptureComponentCube"), &Z_Registration_Info_UClass_USceneCaptureComponentCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneCaptureComponentCube), 445311994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_1617179912(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
