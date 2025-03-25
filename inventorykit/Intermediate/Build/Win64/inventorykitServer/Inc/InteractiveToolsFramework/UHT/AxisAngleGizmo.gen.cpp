// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/AxisAngleGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisAngleGizmo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisAngleGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisAngleGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisAngleGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisAngleGizmoBuilder_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UAxisAngleGizmoBuilder
void UAxisAngleGizmoBuilder::StaticRegisterNativesUAxisAngleGizmoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxisAngleGizmoBuilder);
UClass* Z_Construct_UClass_UAxisAngleGizmoBuilder_NoRegister()
{
	return UAxisAngleGizmoBuilder::StaticClass();
}
struct Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/AxisAngleGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisAngleGizmoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::ClassParams = {
	&UAxisAngleGizmoBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAxisAngleGizmoBuilder()
{
	if (!Z_Registration_Info_UClass_UAxisAngleGizmoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxisAngleGizmoBuilder.OuterSingleton, Z_Construct_UClass_UAxisAngleGizmoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAxisAngleGizmoBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAxisAngleGizmoBuilder>()
{
	return UAxisAngleGizmoBuilder::StaticClass();
}
UAxisAngleGizmoBuilder::UAxisAngleGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisAngleGizmoBuilder);
UAxisAngleGizmoBuilder::~UAxisAngleGizmoBuilder() {}
// End Class UAxisAngleGizmoBuilder

// Begin Class UAxisAngleGizmo
void UAxisAngleGizmo::StaticRegisterNativesUAxisAngleGizmo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxisAngleGizmo);
UClass* Z_Construct_UClass_UAxisAngleGizmo_NoRegister()
{
	return UAxisAngleGizmo::StaticClass();
}
struct Z_Construct_UClass_UAxisAngleGizmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BaseGizmos/AxisAngleGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseBehavior_MetaData[] = {
		{ "Comment", "/** The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
		{ "ToolTip", "The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationPlaneX_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationPlaneY_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCurPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCurAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisAngleGizmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AngleSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HitTarget;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_StateTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseBehavior;
	static void NewProp_bInInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInInteraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationPlaneX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationPlaneY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionStartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionCurPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionStartAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCurAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisAngleGizmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisSource_MetaData), NewProp_AxisSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AngleSource = { "AngleSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, AngleSource), Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleSource_MetaData), NewProp_AngleSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, HitTarget), Z_Construct_UClass_UGizmoClickTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitTarget_MetaData), NewProp_HitTarget_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, StateTarget), Z_Construct_UClass_UGizmoStateTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTarget_MetaData), NewProp_StateTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_MouseBehavior = { "MouseBehavior", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, MouseBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseBehavior_MetaData), NewProp_MouseBehavior_MetaData) };
void Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction_SetBit(void* Obj)
{
	((UAxisAngleGizmo*)Obj)->bInInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction = { "bInInteraction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAxisAngleGizmo), &Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInInteraction_MetaData), NewProp_bInInteraction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationOrigin = { "RotationOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, RotationOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrigin_MetaData), NewProp_RotationOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAxis_MetaData), NewProp_RotationAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneX = { "RotationPlaneX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, RotationPlaneX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationPlaneX_MetaData), NewProp_RotationPlaneX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneY = { "RotationPlaneY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, RotationPlaneY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationPlaneY_MetaData), NewProp_RotationPlaneY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartPoint = { "InteractionStartPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, InteractionStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionStartPoint_MetaData), NewProp_InteractionStartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurPoint = { "InteractionCurPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, InteractionCurPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCurPoint_MetaData), NewProp_InteractionCurPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartAngle = { "InteractionStartAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, InteractionStartAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionStartAngle_MetaData), NewProp_InteractionStartAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurAngle = { "InteractionCurAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisAngleGizmo, InteractionCurAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCurAngle_MetaData), NewProp_InteractionCurAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxisAngleGizmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AxisSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_AngleSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_HitTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_StateTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_MouseBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_bInInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_RotationPlaneY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionStartAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisAngleGizmo_Statics::NewProp_InteractionCurAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAxisAngleGizmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxisAngleGizmo_Statics::ClassParams = {
	&UAxisAngleGizmo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAxisAngleGizmo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisAngleGizmo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxisAngleGizmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAxisAngleGizmo()
{
	if (!Z_Registration_Info_UClass_UAxisAngleGizmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxisAngleGizmo.OuterSingleton, Z_Construct_UClass_UAxisAngleGizmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAxisAngleGizmo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAxisAngleGizmo>()
{
	return UAxisAngleGizmo::StaticClass();
}
UAxisAngleGizmo::UAxisAngleGizmo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisAngleGizmo);
UAxisAngleGizmo::~UAxisAngleGizmo() {}
// End Class UAxisAngleGizmo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisAngleGizmo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAxisAngleGizmoBuilder, UAxisAngleGizmoBuilder::StaticClass, TEXT("UAxisAngleGizmoBuilder"), &Z_Registration_Info_UClass_UAxisAngleGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxisAngleGizmoBuilder), 3073620296U) },
		{ Z_Construct_UClass_UAxisAngleGizmo, UAxisAngleGizmo::StaticClass, TEXT("UAxisAngleGizmo"), &Z_Registration_Info_UClass_UAxisAngleGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxisAngleGizmo), 898684490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisAngleGizmo_h_1227013659(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisAngleGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisAngleGizmo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
