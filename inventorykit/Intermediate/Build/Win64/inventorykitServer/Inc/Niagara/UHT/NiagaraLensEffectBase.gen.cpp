// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraLensEffectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraLensEffectBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraActor();
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraLensEffectBase();
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraLensEffectBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class ANiagaraLensEffectBase
void ANiagaraLensEffectBase::StaticRegisterNativesANiagaraLensEffectBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANiagaraLensEffectBase);
UClass* Z_Construct_UClass_ANiagaraLensEffectBase_NoRegister()
{
	return ANiagaraLensEffectBase::StaticClass();
}
struct Z_Construct_UClass_ANiagaraLensEffectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Niagara equivalent of AEmitterCameraLensEffectBase.\n * This class is supported by APlayerCameraManager (via ICameraLensEffectInterface) as a camera lens effect.\n */" },
		{ "HideCategories", "NiagaraActorActivation Components|Activation Input Collision Game|Damage Activation Components|Activation Input Collision Game|Damage" },
		{ "IncludePath", "NiagaraLensEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Niagara equivalent of AEmitterCameraLensEffectBase.\nThis class is supported by APlayerCameraManager (via ICameraLensEffectInterface) as a camera lens effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRelativeTransform_MetaData[] = {
		{ "Category", "Positioning And Scale" },
		{ "Comment", "/**\n\x09 * Relative offset from the camera (where X is out from the camera)\n\x09 * Might be changed slightly when the FOV is different than expected.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "ToolTip", "Relative offset from the camera (where X is out from the camera)\nMight be changed slightly when the FOV is different than expected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAuthoredFOV_MetaData[] = {
		{ "Category", "Positioning And Scale" },
		{ "Comment", "/**\n\x09 * FOVs that differ from this may cause adjustments in positioning.\n\x09 * This is the FOV which the effect was tested with.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "ToolTip", "FOVs that differ from this may cause adjustments in positioning.\nThis is the FOV which the effect was tested with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleInstances_MetaData[] = {
		{ "Category", "Effect Activation" },
		{ "Comment", "/**\n\x09 * Are multiple instances of the effect allowed? \n\x09 * When disabled, a single instance of the effect may be retriggered!\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "ToolTip", "Are multiple instances of the effect allowed?\nWhen disabled, a single instance of the effect may be retriggered!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetWhenRetriggered_MetaData[] = {
		{ "Category", "Effect Activation" },
		{ "Comment", "/**\n\x09 * When an instance of this effect is retriggered (because more than one instance is not allowed)\n\x09 * should the particle system be explicitly reset? Activate(bReset = true);\n\x09 */" },
		{ "EditCondition", "!bAllowMultipleInstances" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "ToolTip", "When an instance of this effect is retriggered (because more than one instance is not allowed)\nshould the particle system be explicitly reset? Activate(bReset = true);" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmittersToTreatAsSame_MetaData[] = {
		{ "Category", "Effect Activation" },
		{ "Comment", "/** \n\x09 *  If an effect class in this array is currently playing, do not play this effect.\n\x09 *  Useful for preventing multiple similar or expensive camera effects from playing simultaneously.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "MustImplement", "/Script/Engine.CameraLensEffectInterface" },
		{ "ToolTip", "If an effect class in this array is currently playing, do not play this effect.\nUseful for preventing multiple similar or expensive camera effects from playing simultaneously." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningCameraManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredRelativeTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseAuthoredFOV;
	static void NewProp_bAllowMultipleInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleInstances;
	static void NewProp_bResetWhenRetriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetWhenRetriggered;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EmittersToTreatAsSame_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EmittersToTreatAsSame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCameraManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraLensEffectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_DesiredRelativeTransform = { "DesiredRelativeTransform", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraLensEffectBase, DesiredRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredRelativeTransform_MetaData), NewProp_DesiredRelativeTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_BaseAuthoredFOV = { "BaseAuthoredFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraLensEffectBase, BaseAuthoredFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAuthoredFOV_MetaData), NewProp_BaseAuthoredFOV_MetaData) };
void Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit(void* Obj)
{
	((ANiagaraLensEffectBase*)Obj)->bAllowMultipleInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances = { "bAllowMultipleInstances", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANiagaraLensEffectBase), &Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMultipleInstances_MetaData), NewProp_bAllowMultipleInstances_MetaData) };
void Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit(void* Obj)
{
	((ANiagaraLensEffectBase*)Obj)->bResetWhenRetriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered = { "bResetWhenRetriggered", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ANiagaraLensEffectBase), &Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetWhenRetriggered_MetaData), NewProp_bResetWhenRetriggered_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_Inner = { "EmittersToTreatAsSame", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame = { "EmittersToTreatAsSame", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraLensEffectBase, EmittersToTreatAsSame), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmittersToTreatAsSame_MetaData), NewProp_EmittersToTreatAsSame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_OwningCameraManager = { "OwningCameraManager", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraLensEffectBase, OwningCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningCameraManager_MetaData), NewProp_OwningCameraManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANiagaraLensEffectBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_DesiredRelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_BaseAuthoredFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_OwningCameraManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANiagaraLensEffectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANiagaraActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCameraLensEffectInterface_NoRegister, (int32)VTABLE_OFFSET(ANiagaraLensEffectBase, ICameraLensEffectInterface), false },  // 1508334828
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::ClassParams = {
	&ANiagaraLensEffectBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANiagaraLensEffectBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANiagaraLensEffectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANiagaraLensEffectBase()
{
	if (!Z_Registration_Info_UClass_ANiagaraLensEffectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANiagaraLensEffectBase.OuterSingleton, Z_Construct_UClass_ANiagaraLensEffectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANiagaraLensEffectBase.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<ANiagaraLensEffectBase>()
{
	return ANiagaraLensEffectBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraLensEffectBase);
ANiagaraLensEffectBase::~ANiagaraLensEffectBase() {}
// End Class ANiagaraLensEffectBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANiagaraLensEffectBase, ANiagaraLensEffectBase::StaticClass, TEXT("ANiagaraLensEffectBase"), &Z_Registration_Info_UClass_ANiagaraLensEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANiagaraLensEffectBase), 872336538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_1796163718(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
