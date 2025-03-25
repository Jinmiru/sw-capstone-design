// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/PlanarReflection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanarReflection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlanarReflection();
ENGINE_API UClass* Z_Construct_UClass_APlanarReflection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlanarReflectionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class APlanarReflection Function OnInterpToggle
struct Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics
{
	struct PlanarReflection_eventOnInterpToggle_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//~ End AActor Interface.\n" },
		{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((PlanarReflection_eventOnInterpToggle_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlanarReflection_eventOnInterpToggle_Parms), &Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanarReflection, nullptr, "OnInterpToggle", nullptr, nullptr, Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::PlanarReflection_eventOnInterpToggle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::PlanarReflection_eventOnInterpToggle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlanarReflection_OnInterpToggle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlanarReflection::execOnInterpToggle)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInterpToggle(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class APlanarReflection Function OnInterpToggle

// Begin Class APlanarReflection
void APlanarReflection::StaticRegisterNativesAPlanarReflection()
{
	UClass* Class = APlanarReflection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInterpToggle", &APlanarReflection::execOnInterpToggle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlanarReflection);
UClass* Z_Construct_UClass_APlanarReflection_NoRegister()
{
	return APlanarReflection::StaticClass();
}
struct Z_Construct_UClass_APlanarReflection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/PlanarReflection.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarReflectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Planar reflection component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
		{ "ToolTip", "Planar reflection component." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreviewPlane_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanarReflectionComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bShowPreviewPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreviewPlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlanarReflection_OnInterpToggle, "OnInterpToggle" }, // 1245279527
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanarReflection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanarReflection_Statics::NewProp_PlanarReflectionComponent = { "PlanarReflectionComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanarReflection, PlanarReflectionComponent), Z_Construct_UClass_UPlanarReflectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarReflectionComponent_MetaData), NewProp_PlanarReflectionComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanarReflection_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanarReflection, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane_SetBit(void* Obj)
{
	((APlanarReflection*)Obj)->bShowPreviewPlane_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane = { "bShowPreviewPlane", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlanarReflection), &Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPreviewPlane_MetaData), NewProp_bShowPreviewPlane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanarReflection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanarReflection_Statics::NewProp_PlanarReflectionComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanarReflection_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlanarReflection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlanarReflection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASceneCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlanarReflection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlanarReflection_Statics::ClassParams = {
	&APlanarReflection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlanarReflection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlanarReflection_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanarReflection_Statics::Class_MetaDataParams), Z_Construct_UClass_APlanarReflection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlanarReflection()
{
	if (!Z_Registration_Info_UClass_APlanarReflection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlanarReflection.OuterSingleton, Z_Construct_UClass_APlanarReflection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlanarReflection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APlanarReflection>()
{
	return APlanarReflection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlanarReflection);
APlanarReflection::~APlanarReflection() {}
// End Class APlanarReflection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlanarReflection, APlanarReflection::StaticClass, TEXT("APlanarReflection"), &Z_Registration_Info_UClass_APlanarReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlanarReflection), 4270481604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_3611963886(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
