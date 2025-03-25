// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CinematicCamera/Public/CameraRig_Crane.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRig_Crane() {}

// Begin Cross Module References
CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Crane();
CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Crane_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CinematicCamera();
// End Cross Module References

// Begin Class ACameraRig_Crane
void ACameraRig_Crane::StaticRegisterNativesACameraRig_Crane()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraRig_Crane);
UClass* Z_Construct_UClass_ACameraRig_Crane_NoRegister()
{
	return ACameraRig_Crane::StaticClass();
}
struct Z_Construct_UClass_ACameraRig_Crane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * A simple rig for simulating crane-like camera movements.\n */" },
		{ "IncludePath", "CameraRig_Crane.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A simple rig for simulating crane-like camera movements." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CranePitch_MetaData[] = {
		{ "Category", "Crane Controls" },
		{ "Comment", "/** Controls the pitch of the crane arm. */" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Controls the pitch of the crane arm." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CraneYaw_MetaData[] = {
		{ "Category", "Crane Controls" },
		{ "Comment", "/** Controls the yaw of the crane arm. */" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Controls the yaw of the crane arm." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CraneArmLength_MetaData[] = {
		{ "Category", "Crane Controls" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Controls the length of the crane arm. */" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Controls the length of the crane arm." },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockMountPitch_MetaData[] = {
		{ "Category", "Crane Controls" },
		{ "Comment", "/** Lock the mount pitch so that an attached camera is locked and pitched in the direction of the crane arm */" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Lock the mount pitch so that an attached camera is locked and pitched in the direction of the crane arm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockMountYaw_MetaData[] = {
		{ "Category", "Crane Controls" },
		{ "Comment", "/** Lock the mount yaw so that an attached camera is locked and oriented in the direction of the crane arm */" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Lock the mount yaw so that an attached camera is locked and oriented in the direction of the crane arm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[] = {
		{ "Category", "Crane Components" },
		{ "Comment", "/** Root component to give the whole actor a transform. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Root component to give the whole actor a transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CraneYawControl_MetaData[] = {
		{ "Category", "Crane Components" },
		{ "Comment", "/** Component to control Yaw. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Component to control Yaw." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CranePitchControl_MetaData[] = {
		{ "Category", "Crane Components" },
		{ "Comment", "/** Component to control Pitch. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Component to control Pitch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CraneCameraMount_MetaData[] = {
		{ "Category", "Crane Components" },
		{ "Comment", "/** Component to define the attach point for cameras. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Component to define the attach point for cameras." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_CraneArm_MetaData[] = {
		{ "Comment", "/** Preview meshes for visualization */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Preview meshes for visualization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_CraneBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_CraneMount_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_CraneCounterWeight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CranePitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CraneYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CraneArmLength;
	static void NewProp_bLockMountPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockMountPitch;
	static void NewProp_bLockMountYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockMountYaw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CraneYawControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CranePitchControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CraneCameraMount;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_CraneArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_CraneBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_CraneMount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_CraneCounterWeight;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraRig_Crane>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitch = { "CranePitch", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, CranePitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CranePitch_MetaData), NewProp_CranePitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYaw = { "CraneYaw", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, CraneYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CraneYaw_MetaData), NewProp_CraneYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneArmLength = { "CraneArmLength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, CraneArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CraneArmLength_MetaData), NewProp_CraneArmLength_MetaData) };
void Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch_SetBit(void* Obj)
{
	((ACameraRig_Crane*)Obj)->bLockMountPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch = { "bLockMountPitch", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACameraRig_Crane), &Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockMountPitch_MetaData), NewProp_bLockMountPitch_MetaData) };
void Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw_SetBit(void* Obj)
{
	((ACameraRig_Crane*)Obj)->bLockMountYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw = { "bLockMountYaw", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACameraRig_Crane), &Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockMountYaw_MetaData), NewProp_bLockMountYaw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_TransformComponent = { "TransformComponent", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformComponent_MetaData), NewProp_TransformComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYawControl = { "CraneYawControl", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, CraneYawControl), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CraneYawControl_MetaData), NewProp_CraneYawControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitchControl = { "CranePitchControl", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, CranePitchControl), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CranePitchControl_MetaData), NewProp_CranePitchControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneCameraMount = { "CraneCameraMount", nullptr, (EPropertyFlags)0x0144000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, CraneCameraMount), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CraneCameraMount_MetaData), NewProp_CraneCameraMount_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneArm = { "PreviewMesh_CraneArm", nullptr, (EPropertyFlags)0x0144000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, PreviewMesh_CraneArm), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_CraneArm_MetaData), NewProp_PreviewMesh_CraneArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneBase = { "PreviewMesh_CraneBase", nullptr, (EPropertyFlags)0x0144000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, PreviewMesh_CraneBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_CraneBase_MetaData), NewProp_PreviewMesh_CraneBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneMount = { "PreviewMesh_CraneMount", nullptr, (EPropertyFlags)0x0144000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, PreviewMesh_CraneMount), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_CraneMount_MetaData), NewProp_PreviewMesh_CraneMount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneCounterWeight = { "PreviewMesh_CraneCounterWeight", nullptr, (EPropertyFlags)0x0144000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Crane, PreviewMesh_CraneCounterWeight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_CraneCounterWeight_MetaData), NewProp_PreviewMesh_CraneCounterWeight_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraRig_Crane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_TransformComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYawControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitchControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneCameraMount,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneMount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneCounterWeight,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraRig_Crane_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraRig_Crane_Statics::ClassParams = {
	&ACameraRig_Crane::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACameraRig_Crane_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraRig_Crane_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraRig_Crane()
{
	if (!Z_Registration_Info_UClass_ACameraRig_Crane.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraRig_Crane.OuterSingleton, Z_Construct_UClass_ACameraRig_Crane_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraRig_Crane.OuterSingleton;
}
template<> CINEMATICCAMERA_API UClass* StaticClass<ACameraRig_Crane>()
{
	return ACameraRig_Crane::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraRig_Crane);
ACameraRig_Crane::~ACameraRig_Crane() {}
// End Class ACameraRig_Crane

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraRig_Crane, ACameraRig_Crane::StaticClass, TEXT("ACameraRig_Crane"), &Z_Registration_Info_UClass_ACameraRig_Crane, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraRig_Crane), 1397385597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_3301758588(TEXT("/Script/CinematicCamera"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Crane_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
