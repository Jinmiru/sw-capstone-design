// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/BoundsCopyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoundsCopyComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UBoundsCopyComponent();
ENGINE_API UClass* Z_Construct_UClass_UBoundsCopyComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UBoundsCopyComponent Function SetRotation
#if WITH_EDITOR
struct Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Copy the rotation from BoundsSourceActor to this component */" },
		{ "DisplayName", "Copy Rotation" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "Copy the rotation from BoundsSourceActor to this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoundsCopyComponent, nullptr, "SetRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBoundsCopyComponent_SetRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoundsCopyComponent_SetRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UBoundsCopyComponent::execSetRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRotation();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UBoundsCopyComponent Function SetRotation

// Begin Class UBoundsCopyComponent Function SetTransformToBounds
#if WITH_EDITOR
struct Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Set this component transform to include the BoundsSourceActor bounds */" },
		{ "DisplayName", "Copy Bounds" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "Set this component transform to include the BoundsSourceActor bounds" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoundsCopyComponent, nullptr, "SetTransformToBounds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UBoundsCopyComponent::execSetTransformToBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTransformToBounds();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UBoundsCopyComponent Function SetTransformToBounds

// Begin Class UBoundsCopyComponent
void UBoundsCopyComponent::StaticRegisterNativesUBoundsCopyComponent()
{
#if WITH_EDITOR
	UClass* Class = UBoundsCopyComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetRotation", &UBoundsCopyComponent::execSetRotation },
		{ "SetTransformToBounds", &UBoundsCopyComponent::execSetTransformToBounds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoundsCopyComponent);
UClass* Z_Construct_UClass_UBoundsCopyComponent_NoRegister()
{
	return UBoundsCopyComponent::StaticClass();
}
struct Z_Construct_UClass_UBoundsCopyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component used to copy the bounds of another Actor. */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking Tags" },
		{ "IncludePath", "Components/BoundsCopyComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "Component used to copy the bounds of another Actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSourceActor_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Actor to copy the bounds from to set up the transform. */" },
		{ "DisplayName", "Source Actor" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "Actor to copy the bounds from to set up the transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCollidingComponentsForSourceBounds_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** If true, the source actor's bounds will include its colliding components bounds. */" },
		{ "EditCondition", "BoundsSourceActor != nullptr" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "If true, the source actor's bounds will include its colliding components bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepOwnBoundsScale_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** If true, the actor's scale will be changed so that after adjustment, its own bounds match the source bounds.*/" },
		{ "EditCondition", "BoundsSourceActor != nullptr" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "If true, the actor's scale will be changed so that after adjustment, its own bounds match the source bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCollidingComponentsForOwnBounds_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** If true, the actor's own bounds will include its colliding components bounds. */" },
		{ "EditCondition", "bKeepOwnBoundsScale && BoundsSourceActor != nullptr" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "If true, the actor's own bounds will include its colliding components bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostTransform_MetaData[] = {
		{ "Comment", "/** Transform to apply to final result.*/" },
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
		{ "ToolTip", "Transform to apply to final result." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyXBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyYBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyZBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BoundsCopyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundsSourceActor;
	static void NewProp_bUseCollidingComponentsForSourceBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCollidingComponentsForSourceBounds;
	static void NewProp_bKeepOwnBoundsScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepOwnBoundsScale;
	static void NewProp_bUseCollidingComponentsForOwnBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCollidingComponentsForOwnBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostTransform;
	static void NewProp_bCopyXBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyXBounds;
	static void NewProp_bCopyYBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyYBounds;
	static void NewProp_bCopyZBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyZBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoundsCopyComponent_SetRotation, "SetRotation" }, // 3386997034
		{ &Z_Construct_UFunction_UBoundsCopyComponent_SetTransformToBounds, "SetTransformToBounds" }, // 4110168057
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoundsCopyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_BoundsSourceActor = { "BoundsSourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoundsCopyComponent, BoundsSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsSourceActor_MetaData), NewProp_BoundsSourceActor_MetaData) };
void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds_SetBit(void* Obj)
{
	((UBoundsCopyComponent*)Obj)->bUseCollidingComponentsForSourceBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds = { "bUseCollidingComponentsForSourceBounds", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCollidingComponentsForSourceBounds_MetaData), NewProp_bUseCollidingComponentsForSourceBounds_MetaData) };
void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale_SetBit(void* Obj)
{
	((UBoundsCopyComponent*)Obj)->bKeepOwnBoundsScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale = { "bKeepOwnBoundsScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepOwnBoundsScale_MetaData), NewProp_bKeepOwnBoundsScale_MetaData) };
void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds_SetBit(void* Obj)
{
	((UBoundsCopyComponent*)Obj)->bUseCollidingComponentsForOwnBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds = { "bUseCollidingComponentsForOwnBounds", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCollidingComponentsForOwnBounds_MetaData), NewProp_bUseCollidingComponentsForOwnBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_PostTransform = { "PostTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoundsCopyComponent, PostTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostTransform_MetaData), NewProp_PostTransform_MetaData) };
void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds_SetBit(void* Obj)
{
	((UBoundsCopyComponent*)Obj)->bCopyXBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds = { "bCopyXBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyXBounds_MetaData), NewProp_bCopyXBounds_MetaData) };
void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds_SetBit(void* Obj)
{
	((UBoundsCopyComponent*)Obj)->bCopyYBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds = { "bCopyYBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyYBounds_MetaData), NewProp_bCopyYBounds_MetaData) };
void Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds_SetBit(void* Obj)
{
	((UBoundsCopyComponent*)Obj)->bCopyZBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds = { "bCopyZBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoundsCopyComponent), &Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyZBounds_MetaData), NewProp_bCopyZBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoundsCopyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_BoundsSourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForSourceBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bKeepOwnBoundsScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bUseCollidingComponentsForOwnBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_PostTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyXBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyYBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundsCopyComponent_Statics::NewProp_bCopyZBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBoundsCopyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoundsCopyComponent_Statics::ClassParams = {
	&UBoundsCopyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UBoundsCopyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundsCopyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoundsCopyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoundsCopyComponent()
{
	if (!Z_Registration_Info_UClass_UBoundsCopyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoundsCopyComponent.OuterSingleton, Z_Construct_UClass_UBoundsCopyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoundsCopyComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBoundsCopyComponent>()
{
	return UBoundsCopyComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoundsCopyComponent);
UBoundsCopyComponent::~UBoundsCopyComponent() {}
// End Class UBoundsCopyComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoundsCopyComponent, UBoundsCopyComponent::StaticClass, TEXT("UBoundsCopyComponent"), &Z_Registration_Info_UClass_UBoundsCopyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoundsCopyComponent), 628244905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_95568350(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
