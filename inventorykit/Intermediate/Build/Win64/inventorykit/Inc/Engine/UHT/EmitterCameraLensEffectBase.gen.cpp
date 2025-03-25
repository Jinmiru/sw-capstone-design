// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmitterCameraLensEffectBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AEmitter();
ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase();
ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AEmitterCameraLensEffectBase
void AEmitterCameraLensEffectBase::StaticRegisterNativesAEmitterCameraLensEffectBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEmitterCameraLensEffectBase);
UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister()
{
	return AEmitterCameraLensEffectBase::StaticClass();
}
struct Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Activation Components|Activation Input Collision Game|Damage" },
		{ "IncludePath", "Particles/EmitterCameraLensEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS_CameraEffect_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** Particle System to use */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "Particle System to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseCamera_MetaData[] = {
		{ "Comment", "/** Camera this emitter is attached to, will be notified when emitter is destroyed */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "Camera this emitter is attached to, will be notified when emitter is destroyed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** \n\x09 * Effect-to-camera transform to allow arbitrary placement of the particle system .\n\x09 * Note the X component of the location will be scaled with camera fov to keep the lens effect the same apparent size.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "Effect-to-camera transform to allow arbitrary placement of the particle system .\nNote the X component of the location will be scaled with camera fov to keep the lens effect the same apparent size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseFOV_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** This is the assumed FOV for which the effect was authored. The code will make automatic adjustments to make it look the same at different FOVs */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "This is the assumed FOV for which the effect was authored. The code will make automatic adjustments to make it look the same at different FOVs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleInstances_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** true if multiple instances of this emitter can exist simultaneously, false otherwise.  */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "true if multiple instances of this emitter can exist simultaneously, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetWhenRetriggered_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** If bAllowMultipleInstances is true and this effect is retriggered, the particle system will be reset if this is true */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "If bAllowMultipleInstances is true and this effect is retriggered, the particle system will be reset if this is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmittersToTreatAsSame_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** \n\x09 *  If an emitter class in this array is currently playing, do not play this effect.\n\x09 *  Useful for preventing multiple similar or expensive camera effects from playing simultaneously.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "MustImplement", "/Script/Engine.CameraLensEffectInterface" },
		{ "ToolTip", "If an emitter class in this array is currently playing, do not play this effect.\nUseful for preventing multiple similar or expensive camera effects from playing simultaneously." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistFromCamera_MetaData[] = {
		{ "Comment", "/** UE_DEPRECATED(4.11) */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "UE_DEPRECATED(4.11)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PS_CameraEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseFOV;
	static void NewProp_bAllowMultipleInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleInstances;
	static void NewProp_bResetWhenRetriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetWhenRetriggered;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EmittersToTreatAsSame_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EmittersToTreatAsSame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistFromCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmitterCameraLensEffectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect = { "PS_CameraEffect", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, PS_CameraEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS_CameraEffect_MetaData), NewProp_PS_CameraEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera = { "BaseCamera", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, BaseCamera), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseCamera_MetaData), NewProp_BaseCamera_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeTransform_MetaData), NewProp_RelativeTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV = { "BaseFOV", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, BaseFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseFOV_MetaData), NewProp_BaseFOV_MetaData) };
void Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit(void* Obj)
{
	((AEmitterCameraLensEffectBase*)Obj)->bAllowMultipleInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances = { "bAllowMultipleInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AEmitterCameraLensEffectBase), &Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMultipleInstances_MetaData), NewProp_bAllowMultipleInstances_MetaData) };
void Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit(void* Obj)
{
	((AEmitterCameraLensEffectBase*)Obj)->bResetWhenRetriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered = { "bResetWhenRetriggered", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AEmitterCameraLensEffectBase), &Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetWhenRetriggered_MetaData), NewProp_bResetWhenRetriggered_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_Inner = { "EmittersToTreatAsSame", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame = { "EmittersToTreatAsSame", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, EmittersToTreatAsSame), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmittersToTreatAsSame_MetaData), NewProp_EmittersToTreatAsSame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera = { "DistFromCamera", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, DistFromCamera_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistFromCamera_MetaData), NewProp_DistFromCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEmitter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCameraLensEffectInterface_NoRegister, (int32)VTABLE_OFFSET(AEmitterCameraLensEffectBase, ICameraLensEffectInterface), false },  // 1508334828
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::ClassParams = {
	&AEmitterCameraLensEffectBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase()
{
	if (!Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.OuterSingleton, Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AEmitterCameraLensEffectBase>()
{
	return AEmitterCameraLensEffectBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEmitterCameraLensEffectBase);
AEmitterCameraLensEffectBase::~AEmitterCameraLensEffectBase() {}
// End Class AEmitterCameraLensEffectBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEmitterCameraLensEffectBase, AEmitterCameraLensEffectBase::StaticClass, TEXT("AEmitterCameraLensEffectBase"), &Z_Registration_Info_UClass_AEmitterCameraLensEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEmitterCameraLensEffectBase), 3546226350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_4291988927(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
