// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoBaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoBaseComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoBaseComponent Function UpdateHoverState
struct Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics
{
	struct GizmoBaseComponent_eventUpdateHoverState_Parms
	{
		bool bHoveringIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHoveringIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoveringIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::NewProp_bHoveringIn_SetBit(void* Obj)
{
	((GizmoBaseComponent_eventUpdateHoverState_Parms*)Obj)->bHoveringIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::NewProp_bHoveringIn = { "bHoveringIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GizmoBaseComponent_eventUpdateHoverState_Parms), &Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::NewProp_bHoveringIn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::NewProp_bHoveringIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoBaseComponent, nullptr, "UpdateHoverState", nullptr, nullptr, Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::GizmoBaseComponent_eventUpdateHoverState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::GizmoBaseComponent_eventUpdateHoverState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGizmoBaseComponent::execUpdateHoverState)
{
	P_GET_UBOOL(Z_Param_bHoveringIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHoverState(Z_Param_bHoveringIn);
	P_NATIVE_END;
}
// End Class UGizmoBaseComponent Function UpdateHoverState

// Begin Class UGizmoBaseComponent Function UpdateWorldLocalState
struct Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics
{
	struct GizmoBaseComponent_eventUpdateWorldLocalState_Parms
	{
		bool bWorldIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWorldIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::NewProp_bWorldIn_SetBit(void* Obj)
{
	((GizmoBaseComponent_eventUpdateWorldLocalState_Parms*)Obj)->bWorldIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::NewProp_bWorldIn = { "bWorldIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GizmoBaseComponent_eventUpdateWorldLocalState_Parms), &Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::NewProp_bWorldIn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::NewProp_bWorldIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGizmoBaseComponent, nullptr, "UpdateWorldLocalState", nullptr, nullptr, Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::GizmoBaseComponent_eventUpdateWorldLocalState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::GizmoBaseComponent_eventUpdateWorldLocalState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGizmoBaseComponent::execUpdateWorldLocalState)
{
	P_GET_UBOOL(Z_Param_bWorldIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateWorldLocalState(Z_Param_bWorldIn);
	P_NATIVE_END;
}
// End Class UGizmoBaseComponent Function UpdateWorldLocalState

// Begin Class UGizmoBaseComponent
void UGizmoBaseComponent::StaticRegisterNativesUGizmoBaseComponent()
{
	UClass* Class = UGizmoBaseComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateHoverState", &UGizmoBaseComponent::execUpdateHoverState },
		{ "UpdateWorldLocalState", &UGizmoBaseComponent::execUpdateWorldLocalState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoBaseComponent);
UClass* Z_Construct_UClass_UGizmoBaseComponent_NoRegister()
{
	return UGizmoBaseComponent::StaticClass();
}
struct Z_Construct_UClass_UGizmoBaseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Base class for simple Components intended to be used as part of 3D Gizmos.\n * Contains common properties and utility functions.\n * This class does nothing by itself, use subclasses like UGizmoCircleComponent\n */" },
		{ "HideCategories", "Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoBaseComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
		{ "ToolTip", "Base class for simple Components intended to be used as part of 3D Gizmos.\nContains common properties and utility functions.\nThis class does nothing by itself, use subclasses like UGizmoCircleComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverSizeMultiplier_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelHitDistanceThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverSizeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelHitDistanceThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoViewContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGizmoBaseComponent_UpdateHoverState, "UpdateHoverState" }, // 2469936758
		{ &Z_Construct_UFunction_UGizmoBaseComponent_UpdateWorldLocalState, "UpdateWorldLocalState" }, // 3212508893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBaseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoBaseComponent, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_HoverSizeMultiplier = { "HoverSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoBaseComponent, HoverSizeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverSizeMultiplier_MetaData), NewProp_HoverSizeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_PixelHitDistanceThreshold = { "PixelHitDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoBaseComponent, PixelHitDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelHitDistanceThreshold_MetaData), NewProp_PixelHitDistanceThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoBaseComponent, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoViewContext_MetaData), NewProp_GizmoViewContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoBaseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_HoverSizeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_PixelHitDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoBaseComponent_Statics::NewProp_GizmoViewContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoBaseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBaseComponent_Statics::ClassParams = {
	&UGizmoBaseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGizmoBaseComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoBaseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoBaseComponent()
{
	if (!Z_Registration_Info_UClass_UGizmoBaseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoBaseComponent.OuterSingleton, Z_Construct_UClass_UGizmoBaseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoBaseComponent.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBaseComponent>()
{
	return UGizmoBaseComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBaseComponent);
UGizmoBaseComponent::~UGizmoBaseComponent() {}
// End Class UGizmoBaseComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoBaseComponent, UGizmoBaseComponent::StaticClass, TEXT("UGizmoBaseComponent"), &Z_Registration_Info_UClass_UGizmoBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoBaseComponent), 2092678465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_1618552549(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
