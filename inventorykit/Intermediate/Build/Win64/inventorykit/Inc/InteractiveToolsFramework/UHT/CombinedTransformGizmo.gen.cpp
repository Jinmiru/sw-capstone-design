// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/CombinedTransformGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombinedTransformGizmo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ACombinedTransformGizmoActor();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ACombinedTransformGizmoActor_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AGizmoActor();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class ACombinedTransformGizmoActor
void ACombinedTransformGizmoActor::StaticRegisterNativesACombinedTransformGizmoActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombinedTransformGizmoActor);
UClass* Z_Construct_UClass_ACombinedTransformGizmoActor_NoRegister()
{
	return ACombinedTransformGizmoActor::StaticClass();
}
struct Z_Construct_UClass_ACombinedTransformGizmoActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ACombinedTransformGizmoActor is an Actor type intended to be used with UCombinedTransformGizmo,\n * as the in-scene visual representation of the Gizmo.\n * \n * FCombinedTransformGizmoActorFactory returns an instance of this Actor type (or a subclass), and based on\n * which Translate and Rotate UProperties are initialized, will associate those Components\n * with UInteractiveGizmo's that implement Axis Translation, Plane Translation, and Axis Rotation.\n * \n * If a particular sub-Gizmo is not required, simply set that FProperty to null.\n * \n * The static factory method ::ConstructDefault3AxisGizmo() creates and initializes an \n * Actor suitable for use in a standard 3-axis Transformation Gizmo.\n */" },
		{ "IncludePath", "BaseGizmos/CombinedTransformGizmo.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "ACombinedTransformGizmoActor is an Actor type intended to be used with UCombinedTransformGizmo,\nas the in-scene visual representation of the Gizmo.\n\nFCombinedTransformGizmoActorFactory returns an instance of this Actor type (or a subclass), and based on\nwhich Translate and Rotate UProperties are initialized, will associate those Components\nwith UInteractiveGizmo's that implement Axis Translation, Plane Translation, and Axis Rotation.\n\nIf a particular sub-Gizmo is not required, simply set that FProperty to null.\n\nThe static factory method ::ConstructDefault3AxisGizmo() creates and initializes an\nActor suitable for use in a standard 3-axis Transformation Gizmo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslateX_MetaData[] = {
		{ "Comment", "/** X Axis Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "X Axis Translation Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslateY_MetaData[] = {
		{ "Comment", "/** Y Axis Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Y Axis Translation Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslateZ_MetaData[] = {
		{ "Comment", "/** Z Axis Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z Axis Translation Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslateYZ_MetaData[] = {
		{ "Comment", "/** YZ Plane Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "YZ Plane Translation Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslateXZ_MetaData[] = {
		{ "Comment", "/** XZ Plane Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "XZ Plane Translation Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslateXY_MetaData[] = {
		{ "Comment", "/** XY Plane Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "XY Plane Translation Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateX_MetaData[] = {
		{ "Comment", "/** X Axis Rotation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "X Axis Rotation Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateY_MetaData[] = {
		{ "Comment", "/** Y Axis Rotation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Y Axis Rotation Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateZ_MetaData[] = {
		{ "Comment", "/** Z Axis Rotation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z Axis Rotation Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSphere_MetaData[] = {
		{ "Comment", "/** Z Axis Rotation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z Axis Rotation Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniformScale_MetaData[] = {
		{ "Comment", "/** Uniform Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Uniform Scale Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisScaleX_MetaData[] = {
		{ "Comment", "/** X Axis Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "X Axis Scale Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisScaleY_MetaData[] = {
		{ "Comment", "/** Y Axis Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Y Axis Scale Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisScaleZ_MetaData[] = {
		{ "Comment", "/** Z Axis Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z Axis Scale Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneScaleYZ_MetaData[] = {
		{ "Comment", "/** YZ Plane Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "YZ Plane Scale Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneScaleXZ_MetaData[] = {
		{ "Comment", "/** XZ Plane Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "XZ Plane Scale Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneScaleXY_MetaData[] = {
		{ "Comment", "/** XY Plane Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "XY Plane Scale Component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslateX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslateY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslateZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslateYZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslateXZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslateXY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UniformScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisScaleX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisScaleY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisScaleZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneScaleYZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneScaleXZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneScaleXY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombinedTransformGizmoActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateX = { "TranslateX", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateX), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslateX_MetaData), NewProp_TranslateX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateY = { "TranslateY", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateY), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslateY_MetaData), NewProp_TranslateY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateZ = { "TranslateZ", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslateZ_MetaData), NewProp_TranslateZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateYZ = { "TranslateYZ", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateYZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslateYZ_MetaData), NewProp_TranslateYZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXZ = { "TranslateXZ", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateXZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslateXZ_MetaData), NewProp_TranslateXZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXY = { "TranslateXY", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateXY), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslateXY_MetaData), NewProp_TranslateXY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateX = { "RotateX", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, RotateX), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateX_MetaData), NewProp_RotateX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateY = { "RotateY", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, RotateY), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateY_MetaData), NewProp_RotateY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateZ = { "RotateZ", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, RotateZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateZ_MetaData), NewProp_RotateZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotationSphere = { "RotationSphere", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, RotationSphere), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSphere_MetaData), NewProp_RotationSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_UniformScale = { "UniformScale", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, UniformScale), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniformScale_MetaData), NewProp_UniformScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleX = { "AxisScaleX", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, AxisScaleX), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisScaleX_MetaData), NewProp_AxisScaleX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleY = { "AxisScaleY", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, AxisScaleY), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisScaleY_MetaData), NewProp_AxisScaleY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleZ = { "AxisScaleZ", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, AxisScaleZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisScaleZ_MetaData), NewProp_AxisScaleZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleYZ = { "PlaneScaleYZ", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, PlaneScaleYZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneScaleYZ_MetaData), NewProp_PlaneScaleYZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXZ = { "PlaneScaleXZ", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, PlaneScaleXZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneScaleXZ_MetaData), NewProp_PlaneScaleXZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXY = { "PlaneScaleXY", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombinedTransformGizmoActor, PlaneScaleXY), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneScaleXY_MetaData), NewProp_PlaneScaleXY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateYZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotationSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_UniformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleYZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGizmoActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::ClassParams = {
	&ACombinedTransformGizmoActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::PropPointers),
	0,
	0x018802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACombinedTransformGizmoActor()
{
	if (!Z_Registration_Info_UClass_ACombinedTransformGizmoActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombinedTransformGizmoActor.OuterSingleton, Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACombinedTransformGizmoActor.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<ACombinedTransformGizmoActor>()
{
	return ACombinedTransformGizmoActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACombinedTransformGizmoActor);
ACombinedTransformGizmoActor::~ACombinedTransformGizmoActor() {}
// End Class ACombinedTransformGizmoActor

// Begin Class UCombinedTransformGizmoBuilder
void UCombinedTransformGizmoBuilder::StaticRegisterNativesUCombinedTransformGizmoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombinedTransformGizmoBuilder);
UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder_NoRegister()
{
	return UCombinedTransformGizmoBuilder::StaticClass();
}
struct Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/CombinedTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombinedTransformGizmoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::ClassParams = {
	&UCombinedTransformGizmoBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder()
{
	if (!Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.OuterSingleton, Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UCombinedTransformGizmoBuilder>()
{
	return UCombinedTransformGizmoBuilder::StaticClass();
}
UCombinedTransformGizmoBuilder::UCombinedTransformGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombinedTransformGizmoBuilder);
UCombinedTransformGizmoBuilder::~UCombinedTransformGizmoBuilder() {}
// End Class UCombinedTransformGizmoBuilder

// Begin Class UCombinedTransformGizmo
void UCombinedTransformGizmo::StaticRegisterNativesUCombinedTransformGizmo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombinedTransformGizmo);
UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister()
{
	return UCombinedTransformGizmo::StaticClass();
}
struct Z_Construct_UClass_UCombinedTransformGizmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCombinedTransformGizmo provides standard Transformation Gizmo interactions,\n * applied to a UTransformProxy target object. By default the Gizmo will be\n * a standard XYZ translate/rotate Gizmo (axis and plane translation).\n * \n * The in-scene representation of the Gizmo is a ACombinedTransformGizmoActor (or subclass).\n * This Actor has FProperty members for the various sub-widgets, each as a separate Component.\n * Any particular sub-widget of the Gizmo can be disabled by setting the respective\n * Actor Component to null. \n * \n * So, to create non-standard variants of the Transform Gizmo, set a new GizmoActorBuilder \n * in the UCombinedTransformGizmoBuilder registered with the GizmoManager. Return\n * a suitably-configured GizmoActor and everything else will be handled automatically.\n * \n */" },
		{ "IncludePath", "BaseGizmos/CombinedTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "UCombinedTransformGizmo provides standard Transformation Gizmo interactions,\napplied to a UTransformProxy target object. By default the Gizmo will be\na standard XYZ translate/rotate Gizmo (axis and plane translation).\n\nThe in-scene representation of the Gizmo is a ACombinedTransformGizmoActor (or subclass).\nThis Actor has FProperty members for the various sub-widgets, each as a separate Component.\nAny particular sub-widget of the Gizmo can be disabled by setting the respective\nActor Component to null.\n\nSo, to create non-standard variants of the Transform Gizmo, set a new GizmoActorBuilder\nin the UCombinedTransformGizmoBuilder registered with the GizmoManager. Return\na suitably-configured GizmoActor and everything else will be handled automatically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTarget_MetaData[] = {
		{ "Comment", "/** The active target object for the Gizmo */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "The active target object for the Gizmo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToWorldGrid_MetaData[] = {
		{ "Comment", "/**\n\x09 * bSnapToWorldGrid controls whether any position snapping is applied, if possible, for Axis and Plane translations, via the ContextQueriesAPI\n\x09 * Despite the name, this flag controls both world-space grid snapping and relative snapping\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "bSnapToWorldGrid controls whether any position snapping is applied, if possible, for Axis and Plane translations, via the ContextQueriesAPI\nDespite the name, this flag controls both world-space grid snapping and relative snapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGridSizeIsExplicit_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional grid size which overrides the Context Grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Optional grid size which overrides the Context Grid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotationGridSizeIsExplicit_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional grid size which overrides the Context Rotation Grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Optional grid size which overrides the Context Rotation Grid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitRotationGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToWorldRotGrid_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then when using world frame, Axis and Plane translation snap to the world grid via the ContextQueriesAPI (in RotationSnapFunction)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "If true, then when using world frame, Axis and Plane translation snap to the world grid via the ContextQueriesAPI (in RotationSnapFunction)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseContextCoordinateSystem_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether to use the World/Local coordinate system provided by the context via the ContextyQueriesAPI.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Whether to use the World/Local coordinate system provided by the context via the ContextyQueriesAPI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCoordinateSystem_MetaData[] = {
		{ "Comment", "/**\n\x09 * Current coordinate system in use. If bUseContextCoordinateSystem is true, this value will be updated internally every Tick()\n\x09 * by quering the ContextyQueriesAPI, otherwise the default is Local and the client can change it as necessary\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Current coordinate system in use. If bUseContextCoordinateSystem is true, this value will be updated internally every Tick()\nby quering the ContextyQueriesAPI, otherwise the default is Local and the client can change it as necessary" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseContextGizmoMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether to use the Gizmo Mode provided by the context via the ContextyQueriesAPI.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Whether to use the Gizmo Mode provided by the context via the ContextyQueriesAPI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmoMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Current dynamic sub-widget visibility mode to use (eg Translate-Only, Scale-Only, Combined, etc)\n\x09 * If bUseContextGizmoMode is true, this value will be updated internally every Tick()\n\x09 * by quering the ContextyQueriesAPI, otherwise the default is Combined and the client can change it as necessary\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Current dynamic sub-widget visibility mode to use (eg Translate-Only, Scale-Only, Combined, etc)\nIf bUseContextGizmoMode is true, this value will be updated internally every Tick()\nby quering the ContextyQueriesAPI, otherwise the default is Combined and the client can change it as necessary" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveComponents_MetaData[] = {
		{ "Comment", "/** List of current-active child components */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "List of current-active child components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmos_MetaData[] = {
		{ "Comment", "/** list of currently-active child gizmos */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "list of currently-active child gizmos" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraAxisSource_MetaData[] = {
		{ "Comment", "/** Axis that points towards camera, X/Y plane tangents aligned to right/up. Shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Axis that points towards camera, X/Y plane tangents aligned to right/up. Shared across Gizmos, and created internally during SetActiveTarget()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisXSource_MetaData[] = {
		{ "Comment", "/** X-axis source is shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "X-axis source is shared across Gizmos, and created internally during SetActiveTarget()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisYSource_MetaData[] = {
		{ "Comment", "/** Y-axis source is shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Y-axis source is shared across Gizmos, and created internally during SetActiveTarget()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisZSource_MetaData[] = {
		{ "Comment", "/** Z-axis source is shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z-axis source is shared across Gizmos, and created internally during SetActiveTarget()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitAxisXSource_MetaData[] = {
		{ "Comment", "/** Local X-axis source (ie 1,0,0) is shared across Scale Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Local X-axis source (ie 1,0,0) is shared across Scale Gizmos, and created internally during SetActiveTarget()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitAxisYSource_MetaData[] = {
		{ "Comment", "/** Y-axis source (ie 0,1,0) is shared across Scale Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Y-axis source (ie 0,1,0) is shared across Scale Gizmos, and created internally during SetActiveTarget()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitAxisZSource_MetaData[] = {
		{ "Comment", "/** Z-axis source (ie 0,0,1) is shared across Scale Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z-axis source (ie 0,0,1) is shared across Scale Gizmos, and created internally during SetActiveTarget()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[] = {
		{ "Comment", "/** \n\x09 * State target is shared across gizmos, and created internally during SetActiveTarget(). \n\x09 * Several FChange providers are registered with this StateTarget, including the UCombinedTransformGizmo\n\x09 * itself (IToolCommandChangeSource implementation above is called)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "State target is shared across gizmos, and created internally during SetActiveTarget().\nSeveral FChange providers are registered with this StateTarget, including the UCombinedTransformGizmo\nitself (IToolCommandChangeSource implementation above is called)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveTarget;
	static void NewProp_bSnapToWorldGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToWorldGrid;
	static void NewProp_bGridSizeIsExplicit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGridSizeIsExplicit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExplicitGridSize;
	static void NewProp_bRotationGridSizeIsExplicit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotationGridSizeIsExplicit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExplicitRotationGridSize;
	static void NewProp_bSnapToWorldRotGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToWorldRotGrid;
	static void NewProp_bUseContextCoordinateSystem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseContextCoordinateSystem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentCoordinateSystem_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentCoordinateSystem;
	static void NewProp_bUseContextGizmoMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseContextGizmoMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveGizmoMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveGizmoMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveGizmos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGizmos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraAxisSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisXSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisYSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AxisZSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitAxisXSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitAxisYSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitAxisZSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombinedTransformGizmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveTarget = { "ActiveTarget", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, ActiveTarget), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTarget_MetaData), NewProp_ActiveTarget_MetaData) };
void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid_SetBit(void* Obj)
{
	((UCombinedTransformGizmo*)Obj)->bSnapToWorldGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid = { "bSnapToWorldGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToWorldGrid_MetaData), NewProp_bSnapToWorldGrid_MetaData) };
void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_SetBit(void* Obj)
{
	((UCombinedTransformGizmo*)Obj)->bGridSizeIsExplicit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit = { "bGridSizeIsExplicit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGridSizeIsExplicit_MetaData), NewProp_bGridSizeIsExplicit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitGridSize = { "ExplicitGridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, ExplicitGridSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitGridSize_MetaData), NewProp_ExplicitGridSize_MetaData) };
void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_SetBit(void* Obj)
{
	((UCombinedTransformGizmo*)Obj)->bRotationGridSizeIsExplicit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit = { "bRotationGridSizeIsExplicit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotationGridSizeIsExplicit_MetaData), NewProp_bRotationGridSizeIsExplicit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitRotationGridSize = { "ExplicitRotationGridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, ExplicitRotationGridSize), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitRotationGridSize_MetaData), NewProp_ExplicitRotationGridSize_MetaData) };
void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_SetBit(void* Obj)
{
	((UCombinedTransformGizmo*)Obj)->bSnapToWorldRotGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid = { "bSnapToWorldRotGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToWorldRotGrid_MetaData), NewProp_bSnapToWorldRotGrid_MetaData) };
void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem_SetBit(void* Obj)
{
	((UCombinedTransformGizmo*)Obj)->bUseContextCoordinateSystem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem = { "bUseContextCoordinateSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseContextCoordinateSystem_MetaData), NewProp_bUseContextCoordinateSystem_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem = { "CurrentCoordinateSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, CurrentCoordinateSystem), Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCoordinateSystem_MetaData), NewProp_CurrentCoordinateSystem_MetaData) }; // 429883283
void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode_SetBit(void* Obj)
{
	((UCombinedTransformGizmo*)Obj)->bUseContextGizmoMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode = { "bUseContextGizmoMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseContextGizmoMode_MetaData), NewProp_bUseContextGizmoMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode = { "ActiveGizmoMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, ActiveGizmoMode), Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGizmoMode_MetaData), NewProp_ActiveGizmoMode_MetaData) }; // 24872150
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents_Inner = { "ActiveComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents = { "ActiveComponents", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, ActiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveComponents_MetaData), NewProp_ActiveComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos_Inner = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInteractiveGizmo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, ActiveGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGizmos_MetaData), NewProp_ActiveGizmos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CameraAxisSource = { "CameraAxisSource", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, CameraAxisSource), Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraAxisSource_MetaData), NewProp_CameraAxisSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisXSource = { "AxisXSource", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, AxisXSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisXSource_MetaData), NewProp_AxisXSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisYSource = { "AxisYSource", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, AxisYSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisYSource_MetaData), NewProp_AxisYSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisZSource = { "AxisZSource", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, AxisZSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisZSource_MetaData), NewProp_AxisZSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisXSource = { "UnitAxisXSource", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, UnitAxisXSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitAxisXSource_MetaData), NewProp_UnitAxisXSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisYSource = { "UnitAxisYSource", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, UnitAxisYSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitAxisYSource_MetaData), NewProp_UnitAxisYSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisZSource = { "UnitAxisZSource", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, UnitAxisZSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitAxisZSource_MetaData), NewProp_UnitAxisZSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombinedTransformGizmo, StateTarget), Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTarget_MetaData), NewProp_StateTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombinedTransformGizmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitRotationGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CameraAxisSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisXSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisYSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisZSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisXSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisYSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisZSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_StateTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombinedTransformGizmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::ClassParams = {
	&UCombinedTransformGizmo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombinedTransformGizmo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::PropPointers),
	0,
	0x008800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombinedTransformGizmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombinedTransformGizmo()
{
	if (!Z_Registration_Info_UClass_UCombinedTransformGizmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombinedTransformGizmo.OuterSingleton, Z_Construct_UClass_UCombinedTransformGizmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombinedTransformGizmo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UCombinedTransformGizmo>()
{
	return UCombinedTransformGizmo::StaticClass();
}
UCombinedTransformGizmo::UCombinedTransformGizmo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombinedTransformGizmo);
UCombinedTransformGizmo::~UCombinedTransformGizmo() {}
// End Class UCombinedTransformGizmo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACombinedTransformGizmoActor, ACombinedTransformGizmoActor::StaticClass, TEXT("ACombinedTransformGizmoActor"), &Z_Registration_Info_UClass_ACombinedTransformGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombinedTransformGizmoActor), 4103690250U) },
		{ Z_Construct_UClass_UCombinedTransformGizmoBuilder, UCombinedTransformGizmoBuilder::StaticClass, TEXT("UCombinedTransformGizmoBuilder"), &Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombinedTransformGizmoBuilder), 959520530U) },
		{ Z_Construct_UClass_UCombinedTransformGizmo, UCombinedTransformGizmo::StaticClass, TEXT("UCombinedTransformGizmo"), &Z_Registration_Info_UClass_UCombinedTransformGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombinedTransformGizmo), 3655809288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_3162752457(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
