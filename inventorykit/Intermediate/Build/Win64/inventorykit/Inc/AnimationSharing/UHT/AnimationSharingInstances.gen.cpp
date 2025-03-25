// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharing/Public/AnimationSharingInstances.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingInstances() {}

// Begin Cross Module References
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingInstance_NoRegister();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingStateInstance();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingStateInstance_NoRegister();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingTransitionInstance();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnimationSharing();
// End Cross Module References

// Begin Class UAnimSharingStateInstance Function GetInstancedActors
struct Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics
{
	struct AnimSharingStateInstance_eventGetInstancedActors_Parms
	{
		TArray<AActor*> Actors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSharingStateInstance_eventGetInstancedActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSharingStateInstance, nullptr, "GetInstancedActors", nullptr, nullptr, Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::AnimSharingStateInstance_eventGetInstancedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::AnimSharingStateInstance_eventGetInstancedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimSharingStateInstance::execGetInstancedActors)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInstancedActors(Z_Param_Out_Actors);
	P_NATIVE_END;
}
// End Class UAnimSharingStateInstance Function GetInstancedActors

// Begin Class UAnimSharingStateInstance
void UAnimSharingStateInstance::StaticRegisterNativesUAnimSharingStateInstance()
{
	UClass* Class = UAnimSharingStateInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInstancedActors", &UAnimSharingStateInstance::execGetInstancedActors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSharingStateInstance);
UClass* Z_Construct_UClass_UAnimSharingStateInstance_NoRegister()
{
	return UAnimSharingStateInstance::StaticClass();
}
struct Z_Construct_UClass_UAnimSharingStateInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationSharingInstances.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermutationTimeOffset_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStateBool_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationToPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PermutationTimeOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_bStateBool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStateBool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors, "GetInstancedActors" }, // 3073017971
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingStateInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0124080000012015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSharingStateInstance, AnimationToPlay), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationToPlay_MetaData), NewProp_AnimationToPlay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset = { "PermutationTimeOffset", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSharingStateInstance, PermutationTimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermutationTimeOffset_MetaData), NewProp_PermutationTimeOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSharingStateInstance, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
void Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_SetBit(void* Obj)
{
	((UAnimSharingStateInstance*)Obj)->bStateBool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool = { "bStateBool", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimSharingStateInstance), &Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStateBool_MetaData), NewProp_bStateBool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSharingStateInstance, Instance), Z_Construct_UClass_UAnimSharingInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingStateInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimSharingStateInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::ClassParams = {
	&UAnimSharingStateInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimSharingStateInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimSharingStateInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimSharingStateInstance()
{
	if (!Z_Registration_Info_UClass_UAnimSharingStateInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSharingStateInstance.OuterSingleton, Z_Construct_UClass_UAnimSharingStateInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimSharingStateInstance.OuterSingleton;
}
template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingStateInstance>()
{
	return UAnimSharingStateInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingStateInstance);
UAnimSharingStateInstance::~UAnimSharingStateInstance() {}
// End Class UAnimSharingStateInstance

// Begin Class UAnimSharingTransitionInstance
void UAnimSharingTransitionInstance::StaticRegisterNativesUAnimSharingTransitionInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSharingTransitionInstance);
UClass* Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister()
{
	return UAnimSharingTransitionInstance::StaticClass();
}
struct Z_Construct_UClass_UAnimSharingTransitionInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationSharingInstances.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromComponent_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToComponent_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendBool_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FromComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ToComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static void NewProp_bBlendBool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendBool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingTransitionInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent = { "FromComponent", nullptr, (EPropertyFlags)0x002408000009201d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSharingTransitionInstance, FromComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromComponent_MetaData), NewProp_FromComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent = { "ToComponent", nullptr, (EPropertyFlags)0x002408000009201d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSharingTransitionInstance, ToComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToComponent_MetaData), NewProp_ToComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSharingTransitionInstance, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
void Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_SetBit(void* Obj)
{
	((UAnimSharingTransitionInstance*)Obj)->bBlendBool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool = { "bBlendBool", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimSharingTransitionInstance), &Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendBool_MetaData), NewProp_bBlendBool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::ClassParams = {
	&UAnimSharingTransitionInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimSharingTransitionInstance()
{
	if (!Z_Registration_Info_UClass_UAnimSharingTransitionInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSharingTransitionInstance.OuterSingleton, Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimSharingTransitionInstance.OuterSingleton;
}
template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingTransitionInstance>()
{
	return UAnimSharingTransitionInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingTransitionInstance);
UAnimSharingTransitionInstance::~UAnimSharingTransitionInstance() {}
// End Class UAnimSharingTransitionInstance

// Begin Class UAnimSharingAdditiveInstance
void UAnimSharingAdditiveInstance::StaticRegisterNativesUAnimSharingAdditiveInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSharingAdditiveInstance);
UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister()
{
	return UAnimSharingAdditiveInstance::StaticClass();
}
struct Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationSharingInstances.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseComponent_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveAnimation_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStateBool_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BaseComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AdditiveAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static void NewProp_bStateBool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStateBool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingAdditiveInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent = { "BaseComponent", nullptr, (EPropertyFlags)0x002408000009201d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSharingAdditiveInstance, BaseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseComponent_MetaData), NewProp_BaseComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation = { "AdditiveAnimation", nullptr, (EPropertyFlags)0x0024080000012015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSharingAdditiveInstance, AdditiveAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditiveAnimation_MetaData), NewProp_AdditiveAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSharingAdditiveInstance, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
void Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_SetBit(void* Obj)
{
	((UAnimSharingAdditiveInstance*)Obj)->bStateBool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool = { "bStateBool", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimSharingAdditiveInstance), &Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStateBool_MetaData), NewProp_bStateBool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::ClassParams = {
	&UAnimSharingAdditiveInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance()
{
	if (!Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.OuterSingleton, Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.OuterSingleton;
}
template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingAdditiveInstance>()
{
	return UAnimSharingAdditiveInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingAdditiveInstance);
UAnimSharingAdditiveInstance::~UAnimSharingAdditiveInstance() {}
// End Class UAnimSharingAdditiveInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSharingStateInstance, UAnimSharingStateInstance::StaticClass, TEXT("UAnimSharingStateInstance"), &Z_Registration_Info_UClass_UAnimSharingStateInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSharingStateInstance), 2666138671U) },
		{ Z_Construct_UClass_UAnimSharingTransitionInstance, UAnimSharingTransitionInstance::StaticClass, TEXT("UAnimSharingTransitionInstance"), &Z_Registration_Info_UClass_UAnimSharingTransitionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSharingTransitionInstance), 203292284U) },
		{ Z_Construct_UClass_UAnimSharingAdditiveInstance, UAnimSharingAdditiveInstance::StaticClass, TEXT("UAnimSharingAdditiveInstance"), &Z_Registration_Info_UClass_UAnimSharingAdditiveInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSharingAdditiveInstance), 268608277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_2118578370(TEXT("/Script/AnimationSharing"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
