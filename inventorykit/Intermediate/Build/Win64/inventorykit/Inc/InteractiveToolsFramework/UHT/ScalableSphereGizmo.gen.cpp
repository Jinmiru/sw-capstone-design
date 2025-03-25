// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/ScalableSphereGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScalableSphereGizmo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmoBuilder_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmoInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScalableSphereGizmoInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UScalableSphereGizmoBuilder
void UScalableSphereGizmoBuilder::StaticRegisterNativesUScalableSphereGizmoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalableSphereGizmoBuilder);
UClass* Z_Construct_UClass_UScalableSphereGizmoBuilder_NoRegister()
{
	return UScalableSphereGizmoBuilder::StaticClass();
}
struct Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/ScalableSphereGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalableSphereGizmoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::ClassParams = {
	&UScalableSphereGizmoBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScalableSphereGizmoBuilder()
{
	if (!Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.OuterSingleton, Z_Construct_UClass_UScalableSphereGizmoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScalableSphereGizmoBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UScalableSphereGizmoBuilder>()
{
	return UScalableSphereGizmoBuilder::StaticClass();
}
UScalableSphereGizmoBuilder::UScalableSphereGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScalableSphereGizmoBuilder);
UScalableSphereGizmoBuilder::~UScalableSphereGizmoBuilder() {}
// End Class UScalableSphereGizmoBuilder

// Begin Class UScalableSphereGizmo
void UScalableSphereGizmo::StaticRegisterNativesUScalableSphereGizmo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalableSphereGizmo);
UClass* Z_Construct_UClass_UScalableSphereGizmo_NoRegister()
{
	return UScalableSphereGizmo::StaticClass();
}
struct Z_Construct_UClass_UScalableSphereGizmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UScalableSphereGizmo provides a sphere that can be scaled in all directions by dragging\n * anywhere on the three axial circles that represent it\n */" },
		{ "IncludePath", "BaseGizmos/ScalableSphereGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "UScalableSphereGizmo provides a sphere that can be scaled in all directions by dragging\nanywhere on the three axial circles that represent it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitErrorThreshold_MetaData[] = {
		{ "Comment", "// The error threshold for hit detection with the sphere\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The error threshold for hit detection with the sphere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransactionDescription_MetaData[] = {
		{ "Comment", "// The text that will be used as the transaction description for undo/redo\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The text that will be used as the transaction description for undo/redo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Comment", "// The radius of the sphere\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The radius of the sphere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHovering_MetaData[] = {
		{ "Comment", "// Whether the sphere is currently being hovered over\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "Whether the sphere is currently being hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDragging_MetaData[] = {
		{ "Comment", "// Whether the sphere is currently being dragged\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "Whether the sphere is currently being dragged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAxis_MetaData[] = {
		{ "Comment", "// The current axis that is being dragged along\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The current axis that is being dragged along" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragStartWorldPosition_MetaData[] = {
		{ "Comment", "// The position the drag was started on\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The position the drag was started on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCurrentPositionProjected_MetaData[] = {
		{ "Comment", "// The position the drag is on currently (projected onto the line it is being dragged along)\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The position the drag is on currently (projected onto the line it is being dragged along)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartParameter_MetaData[] = {
		{ "Comment", "// The initial parameter along the drag axist\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "The initial parameter along the drag axist" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitErrorThreshold;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TransactionDescription;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bIsHovering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovering;
	static void NewProp_bIsDragging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDragging;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragStartWorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragCurrentPositionProjected;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionStartParameter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalableSphereGizmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_HitErrorThreshold = { "HitErrorThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalableSphereGizmo, HitErrorThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitErrorThreshold_MetaData), NewProp_HitErrorThreshold_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_TransactionDescription = { "TransactionDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalableSphereGizmo, TransactionDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransactionDescription_MetaData), NewProp_TransactionDescription_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalableSphereGizmo, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering_SetBit(void* Obj)
{
	((UScalableSphereGizmo*)Obj)->bIsHovering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScalableSphereGizmo), &Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHovering_MetaData), NewProp_bIsHovering_MetaData) };
void Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging_SetBit(void* Obj)
{
	((UScalableSphereGizmo*)Obj)->bIsDragging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging = { "bIsDragging", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScalableSphereGizmo), &Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDragging_MetaData), NewProp_bIsDragging_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveTarget = { "ActiveTarget", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalableSphereGizmo, ActiveTarget), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTarget_MetaData), NewProp_ActiveTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveAxis = { "ActiveAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalableSphereGizmo, ActiveAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAxis_MetaData), NewProp_ActiveAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragStartWorldPosition = { "DragStartWorldPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalableSphereGizmo, DragStartWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragStartWorldPosition_MetaData), NewProp_DragStartWorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragCurrentPositionProjected = { "DragCurrentPositionProjected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalableSphereGizmo, DragCurrentPositionProjected), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCurrentPositionProjected_MetaData), NewProp_DragCurrentPositionProjected_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_InteractionStartParameter = { "InteractionStartParameter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScalableSphereGizmo, InteractionStartParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionStartParameter_MetaData), NewProp_InteractionStartParameter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScalableSphereGizmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_HitErrorThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_TransactionDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsHovering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_bIsDragging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_ActiveAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragStartWorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_DragCurrentPositionProjected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableSphereGizmo_Statics::NewProp_InteractionStartParameter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScalableSphereGizmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalableSphereGizmo_Statics::ClassParams = {
	&UScalableSphereGizmo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScalableSphereGizmo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmo_Statics::Class_MetaDataParams), Z_Construct_UClass_UScalableSphereGizmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScalableSphereGizmo()
{
	if (!Z_Registration_Info_UClass_UScalableSphereGizmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalableSphereGizmo.OuterSingleton, Z_Construct_UClass_UScalableSphereGizmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScalableSphereGizmo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UScalableSphereGizmo>()
{
	return UScalableSphereGizmo::StaticClass();
}
UScalableSphereGizmo::UScalableSphereGizmo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScalableSphereGizmo);
UScalableSphereGizmo::~UScalableSphereGizmo() {}
// End Class UScalableSphereGizmo

// Begin Class UScalableSphereGizmoInputBehavior
void UScalableSphereGizmoInputBehavior::StaticRegisterNativesUScalableSphereGizmoInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalableSphereGizmoInputBehavior);
UClass* Z_Construct_UClass_UScalableSphereGizmoInputBehavior_NoRegister()
{
	return UScalableSphereGizmoInputBehavior::StaticClass();
}
struct Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A behavior that forwards clicking and dragging to the gizmo.\n */" },
		{ "IncludePath", "BaseGizmos/ScalableSphereGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ScalableSphereGizmo.h" },
		{ "ToolTip", "A behavior that forwards clicking and dragging to the gizmo." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalableSphereGizmoInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::ClassParams = {
	&UScalableSphereGizmoInputBehavior::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScalableSphereGizmoInputBehavior()
{
	if (!Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.OuterSingleton, Z_Construct_UClass_UScalableSphereGizmoInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UScalableSphereGizmoInputBehavior>()
{
	return UScalableSphereGizmoInputBehavior::StaticClass();
}
UScalableSphereGizmoInputBehavior::UScalableSphereGizmoInputBehavior() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScalableSphereGizmoInputBehavior);
UScalableSphereGizmoInputBehavior::~UScalableSphereGizmoInputBehavior() {}
// End Class UScalableSphereGizmoInputBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScalableSphereGizmoBuilder, UScalableSphereGizmoBuilder::StaticClass, TEXT("UScalableSphereGizmoBuilder"), &Z_Registration_Info_UClass_UScalableSphereGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalableSphereGizmoBuilder), 1086868167U) },
		{ Z_Construct_UClass_UScalableSphereGizmo, UScalableSphereGizmo::StaticClass, TEXT("UScalableSphereGizmo"), &Z_Registration_Info_UClass_UScalableSphereGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalableSphereGizmo), 3016536663U) },
		{ Z_Construct_UClass_UScalableSphereGizmoInputBehavior, UScalableSphereGizmoInputBehavior::StaticClass, TEXT("UScalableSphereGizmoInputBehavior"), &Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalableSphereGizmoInputBehavior), 3064224635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h_2399037061(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ScalableSphereGizmo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
