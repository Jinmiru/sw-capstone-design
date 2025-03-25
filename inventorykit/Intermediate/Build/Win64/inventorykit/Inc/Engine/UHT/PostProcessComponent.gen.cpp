// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent();
ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPostProcessComponent Function AddOrUpdateBlendable
struct Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics
{
	struct PostProcessComponent_eventAddOrUpdateBlendable_Parms
	{
		TScriptInterface<IBlendableInterface> InBlendableObject;
		float InWeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostProcessComponent_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PostProcessComponent_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostProcessComponent, nullptr, "AddOrUpdateBlendable", nullptr, nullptr, Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PostProcessComponent_eventAddOrUpdateBlendable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PostProcessComponent_eventAddOrUpdateBlendable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPostProcessComponent::execAddOrUpdateBlendable)
{
	P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight);
	P_NATIVE_END;
}
// End Class UPostProcessComponent Function AddOrUpdateBlendable

// Begin Class UPostProcessComponent
void UPostProcessComponent::StaticRegisterNativesUPostProcessComponent()
{
	UClass* Class = UPostProcessComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOrUpdateBlendable", &UPostProcessComponent::execAddOrUpdateBlendable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostProcessComponent);
UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister()
{
	return UPostProcessComponent::StaticClass();
}
struct Z_Construct_UClass_UPostProcessComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *  PostProcessComponent. Enables Post process controls for blueprints.\n *\x09Will use a parent UShapeComponent to provide volume data if available.\n */" },
		{ "HideCategories", "Object Trigger PhysicsVolume" },
		{ "IncludePath", "Components/PostProcessComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "PostProcessComponent. Enables Post process controls for blueprints.\n   Will use a parent UShapeComponent to provide volume data if available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** Post process settings to use for this volume. */" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Post process settings to use for this volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/**\n\x09 * Priority of this volume. In the case of overlapping volumes the one with the highest priority\n\x09 * overrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "Priority of this volume. In the case of overlapping volumes the one with the highest priority\noverrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendRadius_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** World space radius around the volume that is used for blending (only if not unbound).\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "World space radius around the volume that is used for blending (only if not unbound)." },
		{ "UIMax", "6000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** 0:no effect, 1:full effect */" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "0:no effect, 1:full effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** Whether this volume is enabled or not.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "Whether this volume is enabled or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnbound_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** set this to false to use the parent shape component as volume bounds. True affects the whole world regardless.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "set this to false to use the parent shape component as volume bounds. True affects the whole world regardless." },
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
		{ &Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 511247988
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostProcessComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostProcessComponent, Settings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1858651484
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostProcessComponent, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius = { "BlendRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostProcessComponent, BlendRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendRadius_MetaData), NewProp_BlendRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPostProcessComponent, BlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendWeight_MetaData), NewProp_BlendWeight_MetaData) };
void Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPostProcessComponent*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPostProcessComponent), &Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_SetBit(void* Obj)
{
	((UPostProcessComponent*)Obj)->bUnbound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound = { "bUnbound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPostProcessComponent), &Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnbound_MetaData), NewProp_bUnbound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostProcessComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPostProcessComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPostProcessComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister, (int32)VTABLE_OFFSET(UPostProcessComponent, IInterface_PostProcessVolume), false },  // 2991099773
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostProcessComponent_Statics::ClassParams = {
	&UPostProcessComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPostProcessComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPostProcessComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPostProcessComponent()
{
	if (!Z_Registration_Info_UClass_UPostProcessComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostProcessComponent.OuterSingleton, Z_Construct_UClass_UPostProcessComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPostProcessComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPostProcessComponent>()
{
	return UPostProcessComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPostProcessComponent);
UPostProcessComponent::~UPostProcessComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPostProcessComponent)
// End Class UPostProcessComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPostProcessComponent, UPostProcessComponent::StaticClass, TEXT("UPostProcessComponent"), &Z_Registration_Info_UClass_UPostProcessComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostProcessComponent), 3012990614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_1095263897(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
