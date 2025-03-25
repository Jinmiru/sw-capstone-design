// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CinematicCamera/Public/CameraRig_Rail.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRig_Rail() {}

// Begin Cross Module References
CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail();
CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CinematicCamera();
// End Cross Module References

// Begin Class ACameraRig_Rail Function GetRailSplineComponent
struct Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics
{
	struct CameraRig_Rail_eventGetRailSplineComponent_Parms
	{
		USplineComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rail Components" },
		{ "Comment", "/** Returns the spline component that defines the rail path */" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Returns the spline component that defines the rail path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRig_Rail_eventGetRailSplineComponent_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraRig_Rail, nullptr, "GetRailSplineComponent", nullptr, nullptr, Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::CameraRig_Rail_eventGetRailSplineComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::CameraRig_Rail_eventGetRailSplineComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraRig_Rail::execGetRailSplineComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USplineComponent**)Z_Param__Result=P_THIS->GetRailSplineComponent();
	P_NATIVE_END;
}
// End Class ACameraRig_Rail Function GetRailSplineComponent

// Begin Class ACameraRig_Rail
void ACameraRig_Rail::StaticRegisterNativesACameraRig_Rail()
{
	UClass* Class = ACameraRig_Rail::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRailSplineComponent", &ACameraRig_Rail::execGetRailSplineComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraRig_Rail);
UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister()
{
	return ACameraRig_Rail::StaticClass();
}
struct Z_Construct_UClass_ACameraRig_Rail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * \n */" },
		{ "IncludePath", "CameraRig_Rail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPositionOnRail_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines current position of the mount point along the rail, in terms of normalized distance from the beginning of the rail. */" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Defines current position of the mount point along the rail, in terms of normalized distance from the beginning of the rail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockOrientationToRail_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "Comment", "/** Determines whether the orientation of the mount should be in the direction of the rail. */" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Determines whether the orientation of the mount should be in the direction of the rail." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRailVisualization_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "Comment", "/** Determines whether or not to show the rail mesh preview. */" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Determines whether or not to show the rail mesh preview." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshScale_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "Comment", "/** Determines the scale of the rail mesh preview */" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Determines the scale of the rail mesh preview" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[] = {
		{ "Category", "Rail Components" },
		{ "Comment", "/** Root component to give the whole actor a transform. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Root component to give the whole actor a transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RailSplineComponent_MetaData[] = {
		{ "Category", "Rail Components" },
		{ "Comment", "/** Spline component to define the rail path. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Spline component to define the rail path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RailCameraMount_MetaData[] = {
		{ "Category", "Rail Components" },
		{ "Comment", "/** Component to define the attach point for cameras. Moves along the rail. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Component to define the attach point for cameras. Moves along the rail." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_Rail_MetaData[] = {
		{ "Comment", "/** Preview meshes for visualization */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Preview meshes for visualization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewRailMeshSegments_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewRailStaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_Mount_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentPositionOnRail;
	static void NewProp_bLockOrientationToRail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockOrientationToRail;
#if WITH_EDITORONLY_DATA
	static void NewProp_bShowRailVisualization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRailVisualization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewMeshScale;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RailSplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RailCameraMount;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_Rail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewRailMeshSegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewRailMeshSegments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewRailStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_Mount;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent, "GetRailSplineComponent" }, // 2004525894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraRig_Rail>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail = { "CurrentPositionOnRail", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Rail, CurrentPositionOnRail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPositionOnRail_MetaData), NewProp_CurrentPositionOnRail_MetaData) };
void Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_SetBit(void* Obj)
{
	((ACameraRig_Rail*)Obj)->bLockOrientationToRail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail = { "bLockOrientationToRail", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACameraRig_Rail), &Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockOrientationToRail_MetaData), NewProp_bLockOrientationToRail_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization_SetBit(void* Obj)
{
	((ACameraRig_Rail*)Obj)->bShowRailVisualization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization = { "bShowRailVisualization", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACameraRig_Rail), &Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRailVisualization_MetaData), NewProp_bShowRailVisualization_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMeshScale = { "PreviewMeshScale", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Rail, PreviewMeshScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMeshScale_MetaData), NewProp_PreviewMeshScale_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent = { "TransformComponent", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Rail, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformComponent_MetaData), NewProp_TransformComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent = { "RailSplineComponent", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Rail, RailSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RailSplineComponent_MetaData), NewProp_RailSplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount = { "RailCameraMount", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Rail, RailCameraMount), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RailCameraMount_MetaData), NewProp_RailCameraMount_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail = { "PreviewMesh_Rail", nullptr, (EPropertyFlags)0x0124080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Rail, PreviewMesh_Rail), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_Rail_MetaData), NewProp_PreviewMesh_Rail_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_Inner = { "PreviewRailMeshSegments", nullptr, (EPropertyFlags)0x0104000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments = { "PreviewRailMeshSegments", nullptr, (EPropertyFlags)0x0124088800002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Rail, PreviewRailMeshSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewRailMeshSegments_MetaData), NewProp_PreviewRailMeshSegments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh = { "PreviewRailStaticMesh", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Rail, PreviewRailStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewRailStaticMesh_MetaData), NewProp_PreviewRailStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount = { "PreviewMesh_Mount", nullptr, (EPropertyFlags)0x0124080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraRig_Rail, PreviewMesh_Mount), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_Mount_MetaData), NewProp_PreviewMesh_Mount_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraRig_Rail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMeshScale,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraRig_Rail_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraRig_Rail_Statics::ClassParams = {
	&ACameraRig_Rail::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACameraRig_Rail_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraRig_Rail_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraRig_Rail()
{
	if (!Z_Registration_Info_UClass_ACameraRig_Rail.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraRig_Rail.OuterSingleton, Z_Construct_UClass_ACameraRig_Rail_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraRig_Rail.OuterSingleton;
}
template<> CINEMATICCAMERA_API UClass* StaticClass<ACameraRig_Rail>()
{
	return ACameraRig_Rail::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraRig_Rail);
ACameraRig_Rail::~ACameraRig_Rail() {}
// End Class ACameraRig_Rail

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraRig_Rail, ACameraRig_Rail::StaticClass, TEXT("ACameraRig_Rail"), &Z_Registration_Info_UClass_ACameraRig_Rail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraRig_Rail), 3791165798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_1993448577(TEXT("/Script/CinematicCamera"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
