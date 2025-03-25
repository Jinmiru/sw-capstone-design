// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ACameraActor Function GetAutoActivatePlayerIndex
struct Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics
{
	struct CameraActor_eventGetAutoActivatePlayerIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoPlayerActivation" },
		{ "Comment", "/** Returns index of the player for whom we auto-activate, or INDEX_NONE (-1) if disabled. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
		{ "ToolTip", "Returns index of the player for whom we auto-activate, or INDEX_NONE (-1) if disabled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraActor_eventGetAutoActivatePlayerIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraActor, nullptr, "GetAutoActivatePlayerIndex", nullptr, nullptr, Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::CameraActor_eventGetAutoActivatePlayerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::CameraActor_eventGetAutoActivatePlayerIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraActor::execGetAutoActivatePlayerIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAutoActivatePlayerIndex();
	P_NATIVE_END;
}
// End Class ACameraActor Function GetAutoActivatePlayerIndex

// Begin Class ACameraActor
void ACameraActor::StaticRegisterNativesACameraActor()
{
	UClass* Class = ACameraActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAutoActivatePlayerIndex", &ACameraActor::execGetAutoActivatePlayerIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraActor);
UClass* Z_Construct_UClass_ACameraActor_NoRegister()
{
	return ACameraActor::StaticClass();
}
struct Z_Construct_UClass_ACameraActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "Comment", "/** \n * A CameraActor is a camera viewpoint that can be placed in a level.\n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "Camera/CameraActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A CameraActor is a camera viewpoint that can be placed in a level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoActivateForPlayer_MetaData[] = {
		{ "Category", "AutoPlayerActivation" },
		{ "Comment", "/** Specifies which player controller, if any, should automatically use this Camera when the controller is active. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
		{ "ToolTip", "Specifies which player controller, if any, should automatically use this Camera when the controller is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraActor" },
		{ "Comment", "/** The camera component for this camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
		{ "ToolTip", "The camera component for this camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoActivateForPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraActor_GetAutoActivatePlayerIndex, "GetAutoActivatePlayerIndex" }, // 2969468856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_AutoActivateForPlayer = { "AutoActivateForPlayer", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraActor, AutoActivateForPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoActivateForPlayer_MetaData), NewProp_AutoActivateForPlayer_MetaData) }; // 1625585255
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraActor, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
void Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
{
	((ACameraActor*)Obj)->bConstrainAspectRatio_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ACameraActor), &Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstrainAspectRatio_MetaData), NewProp_bConstrainAspectRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraActor, AspectRatio_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatio_MetaData), NewProp_AspectRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_FOVAngle = { "FOVAngle", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraActor, FOVAngle_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVAngle_MetaData), NewProp_FOVAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraActor, PostProcessBlendWeight_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData), NewProp_PostProcessBlendWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraActor, PostProcessSettings_DEPRECATED), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessSettings_MetaData), NewProp_PostProcessSettings_MetaData) }; // 1858651484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_AutoActivateForPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_bConstrainAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_AspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_FOVAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraActor_Statics::NewProp_PostProcessSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraActor_Statics::ClassParams = {
	&ACameraActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACameraActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraActor()
{
	if (!Z_Registration_Info_UClass_ACameraActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraActor.OuterSingleton, Z_Construct_UClass_ACameraActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ACameraActor>()
{
	return ACameraActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraActor);
ACameraActor::~ACameraActor() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ACameraActor)
// End Class ACameraActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraActor, ACameraActor::StaticClass, TEXT("ACameraActor"), &Z_Registration_Info_UClass_ACameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraActor), 773771690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_1361223680(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
