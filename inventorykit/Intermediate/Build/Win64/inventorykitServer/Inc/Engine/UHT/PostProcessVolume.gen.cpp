// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/PostProcessVolume.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume();
ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class APostProcessVolume Function AddOrUpdateBlendable
struct Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics
{
	struct PostProcessVolume_eventAddOrUpdateBlendable_Parms
	{
		TScriptInterface<IBlendableInterface> InBlendableObject;
		float InWeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostProcessVolume_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostProcessVolume_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::NewProp_InWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APostProcessVolume, nullptr, "AddOrUpdateBlendable", nullptr, nullptr, Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::PropPointers), sizeof(Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::PostProcessVolume_eventAddOrUpdateBlendable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::Function_MetaDataParams), Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::PostProcessVolume_eventAddOrUpdateBlendable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APostProcessVolume::execAddOrUpdateBlendable)
{
	P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight);
	P_NATIVE_END;
}
// End Class APostProcessVolume Function AddOrUpdateBlendable

// Begin Class APostProcessVolume
void APostProcessVolume::StaticRegisterNativesAPostProcessVolume()
{
	UClass* Class = APostProcessVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOrUpdateBlendable", &APostProcessVolume::execAddOrUpdateBlendable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APostProcessVolume);
UClass* Z_Construct_UClass_APostProcessVolume_NoRegister()
{
	return APostProcessVolume::StaticClass();
}
struct Z_Construct_UClass_APostProcessVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "PostProcessVolume" },
		{ "Comment", "// for FPostprocessSettings\n" },
		{ "HideCategories", "Advanced Collision Volume Brush Attachment Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Engine/PostProcessVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "for FPostprocessSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "Comment", "/** Post process settings to use for this volume. */" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ShowPostProcessCategories", "" },
		{ "ToolTip", "Post process settings to use for this volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "Comment", "/**\n\x09 * Priority of this volume. In the case of overlapping volumes the one with the highest priority\n\x09 * overrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "Priority of this volume. In the case of overlapping volumes the one with the highest priority\noverrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendRadius_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** World space radius around the volume that is used for blending (only if not unbound).\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "World space radius around the volume that is used for blending (only if not unbound)." },
		{ "UIMax", "6000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "Comment", "/** 0:no effect, 1:full effect */" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "0:no effect, 1:full effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "Comment", "/** Whether this volume is enabled or not.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "Whether this volume is enabled or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnbound_MetaData[] = {
		{ "Category", "PostProcessVolumeSettings" },
		{ "Comment", "/** Whether this volume covers the whole world, or just the area inside its bounds.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "DisplayName", "Infinite Extent (Unbound)" },
		{ "ModuleRelativePath", "Classes/Engine/PostProcessVolume.h" },
		{ "ToolTip", "Whether this volume covers the whole world, or just the area inside its bounds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bUnbound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnbound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APostProcessVolume_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 4270562755
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostProcessVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APostProcessVolume, Settings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1858651484
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APostProcessVolume, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendRadius = { "BlendRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APostProcessVolume, BlendRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendRadius_MetaData), NewProp_BlendRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APostProcessVolume, BlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendWeight_MetaData), NewProp_BlendWeight_MetaData) };
void Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((APostProcessVolume*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APostProcessVolume), &Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound_SetBit(void* Obj)
{
	((APostProcessVolume*)Obj)->bUnbound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound = { "bUnbound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APostProcessVolume), &Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnbound_MetaData), NewProp_bUnbound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APostProcessVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_BlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostProcessVolume_Statics::NewProp_bUnbound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APostProcessVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APostProcessVolume_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister, (int32)VTABLE_OFFSET(APostProcessVolume, IInterface_PostProcessVolume), false },  // 2991099773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APostProcessVolume_Statics::ClassParams = {
	&APostProcessVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APostProcessVolume_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_APostProcessVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APostProcessVolume()
{
	if (!Z_Registration_Info_UClass_APostProcessVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APostProcessVolume.OuterSingleton, Z_Construct_UClass_APostProcessVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APostProcessVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APostProcessVolume>()
{
	return APostProcessVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APostProcessVolume);
APostProcessVolume::~APostProcessVolume() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(APostProcessVolume)
// End Class APostProcessVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APostProcessVolume, APostProcessVolume::StaticClass, TEXT("APostProcessVolume"), &Z_Registration_Info_UClass_APostProcessVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APostProcessVolume), 851423906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_3382159017(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
