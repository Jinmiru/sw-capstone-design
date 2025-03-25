// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent();
ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSysParamType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPSCPoolMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrailWidthMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ParticleReplayState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ParticleSystemLODMethod();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFXSystemSpawnParameters();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSysParam();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EParticleSysParamType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSysParamType;
static UEnum* EParticleSysParamType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSysParamType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSysParamType"));
	}
	return Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EParticleSysParamType>()
{
	return EParticleSysParamType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EParticleSysParamType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum for specifying type of a name instance parameter. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "PSPT_Actor.DisplayName", "Actor" },
		{ "PSPT_Actor.Name", "PSPT_Actor" },
		{ "PSPT_Color.DisplayName", "Color" },
		{ "PSPT_Color.Name", "PSPT_Color" },
		{ "PSPT_Material.DisplayName", "Material" },
		{ "PSPT_Material.Name", "PSPT_Material" },
		{ "PSPT_MAX.Name", "PSPT_MAX" },
		{ "PSPT_None.DisplayName", "None" },
		{ "PSPT_None.Name", "PSPT_None" },
		{ "PSPT_Scalar.DisplayName", "Scalar" },
		{ "PSPT_Scalar.Name", "PSPT_Scalar" },
		{ "PSPT_ScalarRand.DisplayName", "Scalar Random" },
		{ "PSPT_ScalarRand.Name", "PSPT_ScalarRand" },
		{ "PSPT_Vector.DisplayName", "Vector" },
		{ "PSPT_Vector.Name", "PSPT_Vector" },
		{ "PSPT_VectorRand.DisplayName", "Vector Random" },
		{ "PSPT_VectorRand.Name", "PSPT_VectorRand" },
		{ "PSPT_VectorUnitRand.DisplayName", "Vector Unit Random" },
		{ "PSPT_VectorUnitRand.Name", "PSPT_VectorUnitRand" },
		{ "ToolTip", "Enum for specifying type of a name instance parameter." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PSPT_None", (int64)PSPT_None },
		{ "PSPT_Scalar", (int64)PSPT_Scalar },
		{ "PSPT_ScalarRand", (int64)PSPT_ScalarRand },
		{ "PSPT_Vector", (int64)PSPT_Vector },
		{ "PSPT_VectorRand", (int64)PSPT_VectorRand },
		{ "PSPT_Color", (int64)PSPT_Color },
		{ "PSPT_Actor", (int64)PSPT_Actor },
		{ "PSPT_Material", (int64)PSPT_Material },
		{ "PSPT_VectorUnitRand", (int64)PSPT_VectorUnitRand },
		{ "PSPT_MAX", (int64)PSPT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EParticleSysParamType",
	"EParticleSysParamType",
	Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EParticleSysParamType()
{
	if (!Z_Registration_Info_UEnum_EParticleSysParamType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSysParamType.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EParticleSysParamType.InnerSingleton;
}
// End Enum EParticleSysParamType

// Begin Enum ParticleReplayState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ParticleReplayState;
static UEnum* ParticleReplayState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ParticleReplayState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleReplayState"));
	}
	return Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ParticleReplayState>()
{
	return ParticleReplayState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ParticleReplayState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Particle system replay state */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "PRS_Capturing.Comment", "/** Capture all particle data to the clip specified by ReplayClipIDNumber.  The frame to capture\n\x09\x09must be specified using the ReplayFrameIndex */" },
		{ "PRS_Capturing.DisplayName", "Capturing" },
		{ "PRS_Capturing.Name", "PRS_Capturing" },
		{ "PRS_Capturing.ToolTip", "Capture all particle data to the clip specified by ReplayClipIDNumber.  The frame to capture\n              must be specified using the ReplayFrameIndex" },
		{ "PRS_Disabled.Comment", "/** Replay system is disabled.  Particles are simulated and rendered normally. */" },
		{ "PRS_Disabled.DisplayName", "Disabled" },
		{ "PRS_Disabled.Name", "PRS_Disabled" },
		{ "PRS_Disabled.ToolTip", "Replay system is disabled.  Particles are simulated and rendered normally." },
		{ "PRS_MAX.Name", "PRS_MAX" },
		{ "PRS_Replaying.Comment", "/** Replay captured particle state from the clip specified by ReplayClipIDNumber.  The frame to play\n\x09\x09must be specified using the ReplayFrameIndex */" },
		{ "PRS_Replaying.DisplayName", "Replaying" },
		{ "PRS_Replaying.Name", "PRS_Replaying" },
		{ "PRS_Replaying.ToolTip", "Replay captured particle state from the clip specified by ReplayClipIDNumber.  The frame to play\n              must be specified using the ReplayFrameIndex" },
		{ "ToolTip", "Particle system replay state" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PRS_Disabled", (int64)PRS_Disabled },
		{ "PRS_Capturing", (int64)PRS_Capturing },
		{ "PRS_Replaying", (int64)PRS_Replaying },
		{ "PRS_MAX", (int64)PRS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ParticleReplayState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ParticleReplayState",
	"ParticleReplayState",
	Z_Construct_UEnum_Engine_ParticleReplayState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ParticleReplayState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ParticleReplayState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ParticleReplayState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ParticleReplayState()
{
	if (!Z_Registration_Info_UEnum_ParticleReplayState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ParticleReplayState.InnerSingleton, Z_Construct_UEnum_Engine_ParticleReplayState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ParticleReplayState.InnerSingleton;
}
// End Enum ParticleReplayState

// Begin Enum EParticleEventType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleEventType;
static UEnum* EParticleEventType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleEventType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleEventType"));
	}
	return Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EParticleEventType>()
{
	return EParticleEventType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EParticleEventType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Event type\n */" },
		{ "EPET_Any.Comment", "/** Any - allow any event */" },
		{ "EPET_Any.DisplayName", "Any" },
		{ "EPET_Any.Name", "EPET_Any" },
		{ "EPET_Any.ToolTip", "Any - allow any event" },
		{ "EPET_Blueprint.Comment", "/** Blueprint - an event generated by level script */" },
		{ "EPET_Blueprint.DisplayName", "Blueprint" },
		{ "EPET_Blueprint.Name", "EPET_Blueprint" },
		{ "EPET_Blueprint.ToolTip", "Blueprint - an event generated by level script" },
		{ "EPET_Burst.Comment", "/** Burst - a particle burst event */" },
		{ "EPET_Burst.DisplayName", "Burst" },
		{ "EPET_Burst.Name", "EPET_Burst" },
		{ "EPET_Burst.ToolTip", "Burst - a particle burst event" },
		{ "EPET_Collision.Comment", "/** Collision - a particle collision event */" },
		{ "EPET_Collision.DisplayName", "Collision" },
		{ "EPET_Collision.Name", "EPET_Collision" },
		{ "EPET_Collision.ToolTip", "Collision - a particle collision event" },
		{ "EPET_Death.Comment", "/** Death - a particle death event */" },
		{ "EPET_Death.DisplayName", "Death" },
		{ "EPET_Death.Name", "EPET_Death" },
		{ "EPET_Death.ToolTip", "Death - a particle death event" },
		{ "EPET_MAX.Name", "EPET_MAX" },
		{ "EPET_Spawn.Comment", "/** Spawn - a particle spawn event */" },
		{ "EPET_Spawn.DisplayName", "Spawn" },
		{ "EPET_Spawn.Name", "EPET_Spawn" },
		{ "EPET_Spawn.ToolTip", "Spawn - a particle spawn event" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Event type" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPET_Any", (int64)EPET_Any },
		{ "EPET_Spawn", (int64)EPET_Spawn },
		{ "EPET_Death", (int64)EPET_Death },
		{ "EPET_Collision", (int64)EPET_Collision },
		{ "EPET_Burst", (int64)EPET_Burst },
		{ "EPET_Blueprint", (int64)EPET_Blueprint },
		{ "EPET_MAX", (int64)EPET_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleEventType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EParticleEventType",
	"EParticleEventType",
	Z_Construct_UEnum_Engine_EParticleEventType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleEventType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EParticleEventType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EParticleEventType()
{
	if (!Z_Registration_Info_UEnum_EParticleEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleEventType.InnerSingleton, Z_Construct_UEnum_Engine_EParticleEventType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EParticleEventType.InnerSingleton;
}
// End Enum EParticleEventType

// Begin Delegate FOnSystemFinished
struct Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnSystemFinished_Parms
	{
		UParticleSystemComponent* PSystem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called when the particle system is done\n" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Called when the particle system is done" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::NewProp_PSystem = { "PSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnSystemFinished_Parms, PSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PSystem_MetaData), NewProp_PSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::NewProp_PSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSystemFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::_Script_Engine_eventOnSystemFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::_Script_Engine_eventOnSystemFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSystemFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSystemFinished, UParticleSystemComponent* PSystem)
{
	struct _Script_Engine_eventOnSystemFinished_Parms
	{
		UParticleSystemComponent* PSystem;
	};
	_Script_Engine_eventOnSystemFinished_Parms Parms;
	Parms.PSystem=PSystem;
	OnSystemFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSystemFinished

// Begin ScriptStruct FParticleSysParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleSysParam;
class UScriptStruct* FParticleSysParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSysParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleSysParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSysParam, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSysParam"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleSysParam.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleSysParam>()
{
	return FParticleSysParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticleSysParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct used for a particular named instance parameter for this ParticleSystemComponent. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Struct used for a particular named instance parameter for this ParticleSystemComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "Comment", "/** The name of the parameter */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "The name of the parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "Comment", "/**\n\x09 *\x09The type of parameters\n\x09 *\x09PSPT_None       - There is no data type\n\x09 *\x09PSPT_Scalar     - Use the scalar value\n\x09 *\x09PSPT_ScalarRand - Select a scalar value in the range [Scalar_Low..Scalar)\n\x09 *\x09PSPT_Vector     - Use the vector value\n\x09 *\x09PSPT_VectorRand - Select a vector value in the range [Vector_Low..Vector)\n\x09 *\x09PSPT_Color      - Use the color value\n\x09 *\x09PSPT_Actor      - Use the actor value\n\x09 *\x09PSPT_Material   - Use the material value\n\x09 *\x09PSPT_VectorUnitRand - Select a random unit vector and scale along the range [Vector_Low..Vector)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "The type of parameters\nPSPT_None       - There is no data type\nPSPT_Scalar     - Use the scalar value\nPSPT_ScalarRand - Select a scalar value in the range [Scalar_Low..Scalar)\nPSPT_Vector     - Use the vector value\nPSPT_VectorRand - Select a vector value in the range [Vector_Low..Vector)\nPSPT_Color      - Use the color value\nPSPT_Actor      - Use the actor value\nPSPT_Material   - Use the material value\nPSPT_VectorUnitRand - Select a random unit vector and scale along the range [Vector_Low..Vector)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scalar_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scalar_Low_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_Low_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scalar_Low;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector_Low;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSysParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSysParam, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSysParam, ParamType), Z_Construct_UEnum_Engine_EParticleSysParamType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamType_MetaData), NewProp_ParamType_MetaData) }; // 1988956769
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar = { "Scalar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSysParam, Scalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scalar_MetaData), NewProp_Scalar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar_Low = { "Scalar_Low", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSysParam, Scalar_Low), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scalar_Low_MetaData), NewProp_Scalar_Low_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSysParam, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector_Low = { "Vector_Low", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSysParam, Vector_Low), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_Low_MetaData), NewProp_Vector_Low_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSysParam, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSysParam, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleSysParam, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleSysParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_ParamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar_Low,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector_Low,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ParticleSysParam",
	Z_Construct_UScriptStruct_FParticleSysParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::PropPointers),
	sizeof(FParticleSysParam),
	alignof(FParticleSysParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticleSysParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticleSysParam()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSysParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleSysParam.InnerSingleton, Z_Construct_UScriptStruct_FParticleSysParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticleSysParam.InnerSingleton;
}
// End ScriptStruct FParticleSysParam

// Begin ScriptStruct FFXSystemSpawnParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters;
class UScriptStruct* FFXSystemSpawnParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFXSystemSpawnParameters, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FXSystemSpawnParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFXSystemSpawnParameters>()
{
	return FFXSystemSpawnParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters controlling the spawning behavior of FX systems via the SpawnSystemAtLocation and SpawnSystemAttached. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Parameters controlling the spawning behavior of FX systems via the SpawnSystemAtLocation and SpawnSystemAttached." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemTemplate_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachPointName_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationType_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoActivate_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolingMethod_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreCullCheck_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerEffect_MetaData[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SystemTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
	static void NewProp_bAutoDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
	static void NewProp_bAutoActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PoolingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PoolingMethod;
	static void NewProp_bPreCullCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreCullCheck;
	static void NewProp_bIsPlayerEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFXSystemSpawnParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFXSystemSpawnParameters, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_SystemTemplate = { "SystemTemplate", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFXSystemSpawnParameters, SystemTemplate), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemTemplate_MetaData), NewProp_SystemTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFXSystemSpawnParameters, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFXSystemSpawnParameters, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFXSystemSpawnParameters, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x011404000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFXSystemSpawnParameters, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToComponent_MetaData), NewProp_AttachToComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFXSystemSpawnParameters, AttachPointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachPointName_MetaData), NewProp_AttachPointName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFXSystemSpawnParameters, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationType_MetaData), NewProp_LocationType_MetaData) }; // 2784615398
void Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
{
	((FFXSystemSpawnParameters*)Obj)->bAutoDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFXSystemSpawnParameters), &Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDestroy_MetaData), NewProp_bAutoDestroy_MetaData) };
void Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
{
	((FFXSystemSpawnParameters*)Obj)->bAutoActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFXSystemSpawnParameters), &Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoActivate_MetaData), NewProp_bAutoActivate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_PoolingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_PoolingMethod = { "PoolingMethod", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFXSystemSpawnParameters, PoolingMethod), Z_Construct_UEnum_Engine_EPSCPoolMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolingMethod_MetaData), NewProp_PoolingMethod_MetaData) }; // 2476528059
void Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bPreCullCheck_SetBit(void* Obj)
{
	((FFXSystemSpawnParameters*)Obj)->bPreCullCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bPreCullCheck = { "bPreCullCheck", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFXSystemSpawnParameters), &Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bPreCullCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreCullCheck_MetaData), NewProp_bPreCullCheck_MetaData) };
void Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bIsPlayerEffect_SetBit(void* Obj)
{
	((FFXSystemSpawnParameters*)Obj)->bIsPlayerEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bIsPlayerEffect = { "bIsPlayerEffect", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFXSystemSpawnParameters), &Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bIsPlayerEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerEffect_MetaData), NewProp_bIsPlayerEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_SystemTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_AttachToComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_AttachPointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_LocationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bAutoDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bAutoActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_PoolingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_PoolingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bPreCullCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewProp_bIsPlayerEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"FXSystemSpawnParameters",
	Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::PropPointers),
	sizeof(FFXSystemSpawnParameters),
	alignof(FFXSystemSpawnParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFXSystemSpawnParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.InnerSingleton, Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.InnerSingleton;
}
// End ScriptStruct FFXSystemSpawnParameters

// Begin Class UFXSystemComponent Function GetFXSystemAsset
struct Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics
{
	struct FXSystemComponent_eventGetFXSystemAsset_Parms
	{
		UFXSystemAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** \n\x09 * Get the referenced FXSystem asset.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the referenced FXSystem asset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventGetFXSystemAsset_Parms, ReturnValue), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "GetFXSystemAsset", nullptr, nullptr, Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::FXSystemComponent_eventGetFXSystemAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::FXSystemComponent_eventGetFXSystemAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execGetFXSystemAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFXSystemAsset**)Z_Param__Result=P_THIS->GetFXSystemAsset();
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function GetFXSystemAsset

// Begin Class UFXSystemComponent Function ReleaseToPool
struct Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 * Deactivates this system and releases it to the pool on completion.\n\x09 * Usage of this PSC reference after this call is unsafe.\n\x09 * You should clear out your references to it.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Deactivates this system and releases it to the pool on completion.\nUsage of this PSC reference after this call is unsafe.\nYou should clear out your references to it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "ReleaseToPool", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execReleaseToPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseToPool();
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function ReleaseToPool

// Begin Class UFXSystemComponent Function SetActorParameter
struct Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics
{
	struct FXSystemComponent_eventSetActorParameter_Parms
	{
		FName ParameterName;
		AActor* Param;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** \n\x09 *\x09Set a named actor instance parameter on this ParticleSystemComponent. \n\x09 *\x09Updates the parameter if it already exists, or creates a new entry if not. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set a named actor instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Param;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetActorParameter_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetActorParameter_Parms, Param), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::NewProp_Param,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetActorParameter", nullptr, nullptr, Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::FXSystemComponent_eventSetActorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::FXSystemComponent_eventSetActorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFXSystemComponent_SetActorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execSetActorParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_OBJECT(AActor,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorParameter(Z_Param_ParameterName,Z_Param_Param);
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function SetActorParameter

// Begin Class UFXSystemComponent Function SetAutoAttachmentParameters
struct Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics
{
	struct FXSystemComponent_eventSetAutoAttachmentParameters_Parms
	{
		USceneComponent* Parent;
		FName SocketName;
		EAttachmentRule LocationRule;
		EAttachmentRule RotationRule;
		EAttachmentRule ScaleRule;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 * Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.\n\x09 * @param  Parent\x09\x09\x09""Component to attach to.\n\x09 * @param  SocketName\x09\x09Socket on Parent to attach to.\n\x09 * @param  LocationRule\x09\x09Option for how we handle our location when we attach to Parent.\n\x09 * @param  RotationRule\x09\x09Option for how we handle our rotation when we attach to Parent.\n\x09 * @param  ScaleRule\x09\x09Option for how we handle our scale when we attach to Parent.\n\x09 * @see bAutoManageAttachment, AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.\n@param  Parent                       Component to attach to.\n@param  SocketName           Socket on Parent to attach to.\n@param  LocationRule         Option for how we handle our location when we attach to Parent.\n@param  RotationRule         Option for how we handle our rotation when we attach to Parent.\n@param  ScaleRule            Option for how we handle our scale when we attach to Parent.\n@see bAutoManageAttachment, AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetAutoAttachmentParameters_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetAutoAttachmentParameters_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetAutoAttachmentParameters_Parms, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetAutoAttachmentParameters_Parms, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetAutoAttachmentParameters_Parms, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(0, nullptr) }; // 366982490
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_LocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_LocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_RotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_RotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_ScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_ScaleRule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetAutoAttachmentParameters", nullptr, nullptr, Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::FXSystemComponent_eventSetAutoAttachmentParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::FXSystemComponent_eventSetAutoAttachmentParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execSetAutoAttachmentParameters)
{
	P_GET_OBJECT(USceneComponent,Z_Param_Parent);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule);
	P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule);
	P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoAttachmentParameters(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule));
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function SetAutoAttachmentParameters

// Begin Class UFXSystemComponent Function SetBoolParameter
struct Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics
{
	struct FXSystemComponent_eventSetBoolParameter_Parms
	{
		FName ParameterName;
		bool Param;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**Change a named boolean parameter, ParticleSystemComponent converts to float.*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Change a named boolean parameter, ParticleSystemComponent converts to float." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_Param_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Param;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetBoolParameter_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_Param_SetBit(void* Obj)
{
	((FXSystemComponent_eventSetBoolParameter_Parms*)Obj)->Param = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FXSystemComponent_eventSetBoolParameter_Parms), &Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_Param_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_Param,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetBoolParameter", nullptr, nullptr, Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::FXSystemComponent_eventSetBoolParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::FXSystemComponent_eventSetBoolParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execSetBoolParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_UBOOL(Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolParameter(Z_Param_ParameterName,Z_Param_Param);
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function SetBoolParameter

// Begin Class UFXSystemComponent Function SetColorParameter
struct Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics
{
	struct FXSystemComponent_eventSetColorParameter_Parms
	{
		FName ParameterName;
		FLinearColor Param;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** \n\x09 *\x09Set a named color instance parameter on this ParticleSystemComponent. \n\x09 *\x09Updates the parameter if it already exists, or creates a new entry if not. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set a named color instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Param;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetColorParameter_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetColorParameter_Parms, Param), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::NewProp_Param,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetColorParameter", nullptr, nullptr, Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::FXSystemComponent_eventSetColorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::FXSystemComponent_eventSetColorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFXSystemComponent_SetColorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execSetColorParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FLinearColor,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorParameter(Z_Param_ParameterName,Z_Param_Param);
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function SetColorParameter

// Begin Class UFXSystemComponent Function SetEmitterEnable
struct Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics
{
	struct FXSystemComponent_eventSetEmitterEnable_Parms
	{
		FName EmitterName;
		bool bNewEnableState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09""Enables / disables an emitter by halting spawning of new particles.\n\x09 *  You will still pay the cost of the emitter update.\n\x09 *\n\x09 *\x09@param\x09""EmitterName\x09\x09\x09The name of the emitter\n\x09 *\x09@param\x09""bNewEnableState\x09\x09The value to set it to\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Enables / disables an emitter by halting spawning of new particles.\nYou will still pay the cost of the emitter update.\n\n@param  EmitterName                     The name of the emitter\n@param  bNewEnableState         The value to set it to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
	static void NewProp_bNewEnableState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnableState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetEmitterEnable_Parms, EmitterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_bNewEnableState_SetBit(void* Obj)
{
	((FXSystemComponent_eventSetEmitterEnable_Parms*)Obj)->bNewEnableState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_bNewEnableState = { "bNewEnableState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FXSystemComponent_eventSetEmitterEnable_Parms), &Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_bNewEnableState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_EmitterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_bNewEnableState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetEmitterEnable", nullptr, nullptr, Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::FXSystemComponent_eventSetEmitterEnable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::FXSystemComponent_eventSetEmitterEnable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execSetEmitterEnable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
	P_GET_UBOOL(Z_Param_bNewEnableState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEmitterEnable(Z_Param_EmitterName,Z_Param_bNewEnableState);
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function SetEmitterEnable

// Begin Class UFXSystemComponent Function SetFloatParameter
struct Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics
{
	struct FXSystemComponent_eventSetFloatParameter_Parms
	{
		FName ParameterName;
		float Param;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** Change a named float parameter */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Change a named float parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetFloatParameter_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetFloatParameter_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::NewProp_Param,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetFloatParameter", nullptr, nullptr, Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::FXSystemComponent_eventSetFloatParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::FXSystemComponent_eventSetFloatParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execSetFloatParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFloatParameter(Z_Param_ParameterName,Z_Param_Param);
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function SetFloatParameter

// Begin Class UFXSystemComponent Function SetIntParameter
struct Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics
{
	struct FXSystemComponent_eventSetIntParameter_Parms
	{
		FName ParameterName;
		int32 Param;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** Change a named int parameter */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Change a named int parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Param;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetIntParameter_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetIntParameter_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::NewProp_Param,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetIntParameter", nullptr, nullptr, Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::FXSystemComponent_eventSetIntParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::FXSystemComponent_eventSetIntParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFXSystemComponent_SetIntParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execSetIntParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIntParameter(Z_Param_ParameterName,Z_Param_Param);
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function SetIntParameter

// Begin Class UFXSystemComponent Function SetUseAutoManageAttachment
struct Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics
{
	struct FXSystemComponent_eventSetUseAutoManageAttachment_Parms
	{
		bool bAutoManage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 * Sets whether we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\n\x09 * This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\n\x09 * When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\n\x09 * This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n\x09 * @see SetAutoAttachmentParameters()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Sets whether we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see SetAutoAttachmentParameters()" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoManage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoManage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::NewProp_bAutoManage_SetBit(void* Obj)
{
	((FXSystemComponent_eventSetUseAutoManageAttachment_Parms*)Obj)->bAutoManage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::NewProp_bAutoManage = { "bAutoManage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FXSystemComponent_eventSetUseAutoManageAttachment_Parms), &Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::NewProp_bAutoManage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::NewProp_bAutoManage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetUseAutoManageAttachment", nullptr, nullptr, Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::FXSystemComponent_eventSetUseAutoManageAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::FXSystemComponent_eventSetUseAutoManageAttachment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execSetUseAutoManageAttachment)
{
	P_GET_UBOOL(Z_Param_bAutoManage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseAutoManageAttachment(Z_Param_bAutoManage);
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function SetUseAutoManageAttachment

// Begin Class UFXSystemComponent Function SetVectorParameter
struct Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics
{
	struct FXSystemComponent_eventSetVectorParameter_Parms
	{
		FName ParameterName;
		FVector Param;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** \n\x09 *\x09Set a named vector instance parameter on this ParticleSystemComponent.\n\x09 *\x09Updates the parameter if it already exists, or creates a new entry if not. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set a named vector instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Param;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetVectorParameter_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXSystemComponent_eventSetVectorParameter_Parms, Param), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::NewProp_Param,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetVectorParameter", nullptr, nullptr, Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::FXSystemComponent_eventSetVectorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::FXSystemComponent_eventSetVectorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFXSystemComponent::execSetVectorParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FVector,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVectorParameter(Z_Param_ParameterName,Z_Param_Param);
	P_NATIVE_END;
}
// End Class UFXSystemComponent Function SetVectorParameter

// Begin Class UFXSystemComponent
void UFXSystemComponent::StaticRegisterNativesUFXSystemComponent()
{
	UClass* Class = UFXSystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFXSystemAsset", &UFXSystemComponent::execGetFXSystemAsset },
		{ "ReleaseToPool", &UFXSystemComponent::execReleaseToPool },
		{ "SetActorParameter", &UFXSystemComponent::execSetActorParameter },
		{ "SetAutoAttachmentParameters", &UFXSystemComponent::execSetAutoAttachmentParameters },
		{ "SetBoolParameter", &UFXSystemComponent::execSetBoolParameter },
		{ "SetColorParameter", &UFXSystemComponent::execSetColorParameter },
		{ "SetEmitterEnable", &UFXSystemComponent::execSetEmitterEnable },
		{ "SetFloatParameter", &UFXSystemComponent::execSetFloatParameter },
		{ "SetIntParameter", &UFXSystemComponent::execSetIntParameter },
		{ "SetUseAutoManageAttachment", &UFXSystemComponent::execSetUseAutoManageAttachment },
		{ "SetVectorParameter", &UFXSystemComponent::execSetVectorParameter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFXSystemComponent);
UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister()
{
	return UFXSystemComponent::StaticClass();
}
struct Z_Construct_UClass_UFXSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Particles/ParticleSystemComponent.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset, "GetFXSystemAsset" }, // 408887750
		{ &Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool, "ReleaseToPool" }, // 1212952917
		{ &Z_Construct_UFunction_UFXSystemComponent_SetActorParameter, "SetActorParameter" }, // 2610253684
		{ &Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters, "SetAutoAttachmentParameters" }, // 991486522
		{ &Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter, "SetBoolParameter" }, // 3849121085
		{ &Z_Construct_UFunction_UFXSystemComponent_SetColorParameter, "SetColorParameter" }, // 441384949
		{ &Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable, "SetEmitterEnable" }, // 3620680027
		{ &Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter, "SetFloatParameter" }, // 1462673440
		{ &Z_Construct_UFunction_UFXSystemComponent_SetIntParameter, "SetIntParameter" }, // 1802225244
		{ &Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment, "SetUseAutoManageAttachment" }, // 3648543800
		{ &Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter, "SetVectorParameter" }, // 3140258089
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFXSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFXSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFXSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFXSystemComponent_Statics::ClassParams = {
	&UFXSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFXSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFXSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFXSystemComponent()
{
	if (!Z_Registration_Info_UClass_UFXSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFXSystemComponent.OuterSingleton, Z_Construct_UClass_UFXSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFXSystemComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UFXSystemComponent>()
{
	return UFXSystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFXSystemComponent);
UFXSystemComponent::~UFXSystemComponent() {}
// End Class UFXSystemComponent

// Begin Class UParticleSystemComponent Function BeginTrails
struct Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics
{
	struct ParticleSystemComponent_eventBeginTrails_Parms
	{
		FName InFirstSocketName;
		FName InSecondSocketName;
		TEnumAsByte<ETrailWidthMode> InWidthMode;
		float InWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Particles|Trails" },
		{ "Comment", "/**\n\x09* Begins all trail emitters in this component.\n\x09*\n\x09* @param\x09InFirstSocketName\x09The name of the first socket for the trail.\n\x09* @param\x09InSecondSocketName\x09The name of the second socket for the trail.\n\x09* @param\x09InWidthMode\x09\x09\x09How the width value is applied to the trail.\n\x09* @param\x09InWidth\x09\x09\x09\x09The width of the trail.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Begins all trail emitters in this component.\n\n@param        InFirstSocketName       The name of the first socket for the trail.\n@param        InSecondSocketName      The name of the second socket for the trail.\n@param        InWidthMode                     How the width value is applied to the trail.\n@param        InWidth                         The width of the trail." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InFirstSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSecondSocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InWidthMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InFirstSocketName = { "InFirstSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InFirstSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InSecondSocketName = { "InSecondSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InSecondSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InWidthMode = { "InWidthMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InWidthMode), Z_Construct_UEnum_Engine_ETrailWidthMode, METADATA_PARAMS(0, nullptr) }; // 963308681
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InFirstSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InSecondSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InWidthMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "BeginTrails", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::ParticleSystemComponent_eventBeginTrails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::ParticleSystemComponent_eventBeginTrails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_BeginTrails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execBeginTrails)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InFirstSocketName);
	P_GET_PROPERTY(FNameProperty,Z_Param_InSecondSocketName);
	P_GET_PROPERTY(FByteProperty,Z_Param_InWidthMode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginTrails(Z_Param_InFirstSocketName,Z_Param_InSecondSocketName,ETrailWidthMode(Z_Param_InWidthMode),Z_Param_InWidth);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function BeginTrails

// Begin Class UParticleSystemComponent Function CreateNamedDynamicMaterialInstance
struct Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics
{
	struct ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms
	{
		FName InName;
		UMaterialInterface* SourceMaterial;
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09* Creates a Dynamic Material Instance for the specified named material override, optionally from the supplied material.\n\x09* @param Name - The slot name of the material to replace.  If invalid, the material is unchanged and NULL is returned.\n\x09*/" },
		{ "CPP_Default_SourceMaterial", "None" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Creates a Dynamic Material Instance for the specified named material override, optionally from the supplied material.\n@param Name - The slot name of the material to replace.  If invalid, the material is unchanged and NULL is returned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_SourceMaterial = { "SourceMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms, SourceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_SourceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "CreateNamedDynamicMaterialInstance", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execCreateNamedDynamicMaterialInstance)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_GET_OBJECT(UMaterialInterface,Z_Param_SourceMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateNamedDynamicMaterialInstance(Z_Param_InName,Z_Param_SourceMaterial);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function CreateNamedDynamicMaterialInstance

// Begin Class UParticleSystemComponent Function EndTrails
struct Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Particles|Trails" },
		{ "Comment", "/**\n\x09* Ends all trail emitters in this component.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Ends all trail emitters in this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "EndTrails", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UParticleSystemComponent_EndTrails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execEndTrails)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTrails();
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function EndTrails

// Begin Class UParticleSystemComponent Function GenerateParticleEvent
struct Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics
{
	struct ParticleSystemComponent_eventGenerateParticleEvent_Parms
	{
		FName InEventName;
		float InEmitterTime;
		FVector InLocation;
		FVector InDirection;
		FVector InVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Record a kismet event.\n\x09 *\n\x09 *\x09@param\x09InEventName\x09\x09\x09\x09The name of the event that fired.\n\x09 *\x09@param\x09InEmitterTime\x09\x09\x09The emitter time when the event fired.\n\x09 *\x09@param\x09InLocation\x09\x09\x09\x09The location of the particle when the event fired.\n\x09 *\x09@param\x09InVelocity\x09\x09\x09\x09The velocity of the particle when the event fired.\n\x09 *\x09@param\x09InNormal\x09\x09\x09\x09Normal vector of the collision in coordinate system of the returner. Zero=none.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Record a kismet event.\n\n@param  InEventName                             The name of the event that fired.\n@param  InEmitterTime                   The emitter time when the event fired.\n@param  InLocation                              The location of the particle when the event fired.\n@param  InVelocity                              The velocity of the particle when the event fired.\n@param  InNormal                                Normal vector of the collision in coordinate system of the returner. Zero=none." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEmitterTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InEmitterTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEventName_MetaData), NewProp_InEventName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEmitterTime = { "InEmitterTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InEmitterTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEmitterTime_MetaData), NewProp_InEmitterTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLocation_MetaData), NewProp_InLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDirection_MetaData), NewProp_InDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVelocity_MetaData), NewProp_InVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEmitterTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GenerateParticleEvent", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::ParticleSystemComponent_eventGenerateParticleEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::ParticleSystemComponent_eventGenerateParticleEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execGenerateParticleEvent)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InEventName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InEmitterTime);
	P_GET_STRUCT(FVector,Z_Param_InLocation);
	P_GET_STRUCT(FVector,Z_Param_InDirection);
	P_GET_STRUCT(FVector,Z_Param_InVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateParticleEvent(Z_Param_InEventName,Z_Param_InEmitterTime,Z_Param_InLocation,Z_Param_InDirection,Z_Param_InVelocity);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function GenerateParticleEvent

// Begin Class UParticleSystemComponent Function GetBeamEndPoint
struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics
{
	struct ParticleSystemComponent_eventGetBeamEndPoint_Parms
	{
		int32 EmitterIndex;
		FVector OutEndPoint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam end point\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get the value of\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex is valid and End point is set - OutEndPoint is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex invalid or End point is not set - OutEndPoint is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam end point\n\n@param  EmitterIndex            The index of the emitter to get the value of\n\n@return true            EmitterIndex is valid and End point is set - OutEndPoint is valid\n                false           EmitterIndex invalid or End point is not set - OutEndPoint is invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEndPoint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamEndPoint_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_OutEndPoint = { "OutEndPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamEndPoint_Parms, OutEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParticleSystemComponent_eventGetBeamEndPoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamEndPoint_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_OutEndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamEndPoint", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::ParticleSystemComponent_eventGetBeamEndPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::ParticleSystemComponent_eventGetBeamEndPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamEndPoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutEndPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBeamEndPoint(Z_Param_EmitterIndex,Z_Param_Out_OutEndPoint);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function GetBeamEndPoint

// Begin Class UParticleSystemComponent Function GetBeamSourcePoint
struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics
{
	struct ParticleSystemComponent_eventGetBeamSourcePoint_Parms
	{
		int32 EmitterIndex;
		int32 SourceIndex;
		FVector OutSourcePoint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam source point\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutSourcePoint\x09\x09Value of source point\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and SourceIndex are valid - OutSourcePoint is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or SourceIndex is invalid - OutSourcePoint is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam source point\n\n@param  EmitterIndex            The index of the emitter to get\n@param  SourceIndex                     Which beam within the emitter to get\n@param  OutSourcePoint          Value of source point\n\n@return true            EmitterIndex and SourceIndex are valid - OutSourcePoint is valid\n                false           EmitterIndex or SourceIndex is invalid - OutSourcePoint is invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSourcePoint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourcePoint_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourcePoint_Parms, SourceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_OutSourcePoint = { "OutSourcePoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourcePoint_Parms, OutSourcePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParticleSystemComponent_eventGetBeamSourcePoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamSourcePoint_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_SourceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_OutSourcePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamSourcePoint", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::ParticleSystemComponent_eventGetBeamSourcePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::ParticleSystemComponent_eventGetBeamSourcePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamSourcePoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSourcePoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBeamSourcePoint(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutSourcePoint);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function GetBeamSourcePoint

// Begin Class UParticleSystemComponent Function GetBeamSourceStrength
struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics
{
	struct ParticleSystemComponent_eventGetBeamSourceStrength_Parms
	{
		int32 EmitterIndex;
		int32 SourceIndex;
		float OutSourceStrength;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam source strength\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutSourceStrength\x09\x09Value of source tangent\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and SourceIndex are valid - OutSourceStrength is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or SourceIndex is invalid - OutSourceStrength is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam source strength\n\n@param  EmitterIndex            The index of the emitter to get\n@param  SourceIndex                     Which beam within the emitter to get\n@param  OutSourceStrength               Value of source tangent\n\n@return true            EmitterIndex and SourceIndex are valid - OutSourceStrength is valid\n                false           EmitterIndex or SourceIndex is invalid - OutSourceStrength is invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSourceStrength;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceStrength_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceStrength_Parms, SourceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_OutSourceStrength = { "OutSourceStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceStrength_Parms, OutSourceStrength), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParticleSystemComponent_eventGetBeamSourceStrength_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamSourceStrength_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_SourceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_OutSourceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamSourceStrength", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::ParticleSystemComponent_eventGetBeamSourceStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::ParticleSystemComponent_eventGetBeamSourceStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamSourceStrength)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSourceStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBeamSourceStrength(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutSourceStrength);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function GetBeamSourceStrength

// Begin Class UParticleSystemComponent Function GetBeamSourceTangent
struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics
{
	struct ParticleSystemComponent_eventGetBeamSourceTangent_Parms
	{
		int32 EmitterIndex;
		int32 SourceIndex;
		FVector OutTangentPoint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam source tangent\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutTangentPoint\x09\x09Value of source tangent\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and SourceIndex are valid - OutTangentPoint is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or SourceIndex is invalid - OutTangentPoint is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam source tangent\n\n@param  EmitterIndex            The index of the emitter to get\n@param  SourceIndex                     Which beam within the emitter to get\n@param  OutTangentPoint         Value of source tangent\n\n@return true            EmitterIndex and SourceIndex are valid - OutTangentPoint is valid\n                false           EmitterIndex or SourceIndex is invalid - OutTangentPoint is invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTangentPoint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceTangent_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceTangent_Parms, SourceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_OutTangentPoint = { "OutTangentPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceTangent_Parms, OutTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParticleSystemComponent_eventGetBeamSourceTangent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamSourceTangent_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_SourceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_OutTangentPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamSourceTangent", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::ParticleSystemComponent_eventGetBeamSourceTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::ParticleSystemComponent_eventGetBeamSourceTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamSourceTangent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBeamSourceTangent(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutTangentPoint);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function GetBeamSourceTangent

// Begin Class UParticleSystemComponent Function GetBeamTargetPoint
struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics
{
	struct ParticleSystemComponent_eventGetBeamTargetPoint_Parms
	{
		int32 EmitterIndex;
		int32 TargetIndex;
		FVector OutTargetPoint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam target point\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutTargetPoint\x09\x09Value of target point\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and TargetIndex are valid - OutTargetPoint is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or TargetIndex is invalid - OutTargetPoint is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam target point\n\n@param  EmitterIndex            The index of the emitter to get\n@param  TargetIndex                     Which beam within the emitter to get\n@param  OutTargetPoint          Value of target point\n\n@return true            EmitterIndex and TargetIndex are valid - OutTargetPoint is valid\n                false           EmitterIndex or TargetIndex is invalid - OutTargetPoint is invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTargetPoint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetPoint_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetPoint_Parms, TargetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_OutTargetPoint = { "OutTargetPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetPoint_Parms, OutTargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParticleSystemComponent_eventGetBeamTargetPoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamTargetPoint_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_OutTargetPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamTargetPoint", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::ParticleSystemComponent_eventGetBeamTargetPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::ParticleSystemComponent_eventGetBeamTargetPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamTargetPoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTargetPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBeamTargetPoint(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTargetPoint);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function GetBeamTargetPoint

// Begin Class UParticleSystemComponent Function GetBeamTargetStrength
struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics
{
	struct ParticleSystemComponent_eventGetBeamTargetStrength_Parms
	{
		int32 EmitterIndex;
		int32 TargetIndex;
		float OutTargetStrength;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam target strength\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutTargetStrength\x09Value of target tangent\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and TargetIndex are valid - OutTargetStrength is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or TargetIndex is invalid - OutTargetStrength is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam target strength\n\n@param  EmitterIndex            The index of the emitter to get\n@param  TargetIndex                     Which beam within the emitter to get\n@param  OutTargetStrength       Value of target tangent\n\n@return true            EmitterIndex and TargetIndex are valid - OutTargetStrength is valid\n                false           EmitterIndex or TargetIndex is invalid - OutTargetStrength is invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTargetStrength;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetStrength_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetStrength_Parms, TargetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_OutTargetStrength = { "OutTargetStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetStrength_Parms, OutTargetStrength), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParticleSystemComponent_eventGetBeamTargetStrength_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamTargetStrength_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_OutTargetStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamTargetStrength", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::ParticleSystemComponent_eventGetBeamTargetStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::ParticleSystemComponent_eventGetBeamTargetStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamTargetStrength)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTargetStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBeamTargetStrength(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTargetStrength);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function GetBeamTargetStrength

// Begin Class UParticleSystemComponent Function GetBeamTargetTangent
struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics
{
	struct ParticleSystemComponent_eventGetBeamTargetTangent_Parms
	{
		int32 EmitterIndex;
		int32 TargetIndex;
		FVector OutTangentPoint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam target tangent\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutTangentPoint\x09\x09Value of target tangent\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and TargetIndex are valid - OutTangentPoint is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or TargetIndex is invalid - OutTangentPoint is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam target tangent\n\n@param  EmitterIndex            The index of the emitter to get\n@param  TargetIndex                     Which beam within the emitter to get\n@param  OutTangentPoint         Value of target tangent\n\n@return true            EmitterIndex and TargetIndex are valid - OutTangentPoint is valid\n                false           EmitterIndex or TargetIndex is invalid - OutTangentPoint is invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTangentPoint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetTangent_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetTangent_Parms, TargetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_OutTangentPoint = { "OutTangentPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetTangent_Parms, OutTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParticleSystemComponent_eventGetBeamTargetTangent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamTargetTangent_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_OutTangentPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamTargetTangent", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::ParticleSystemComponent_eventGetBeamTargetTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::ParticleSystemComponent_eventGetBeamTargetTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamTargetTangent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBeamTargetTangent(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTangentPoint);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function GetBeamTargetTangent

// Begin Class UParticleSystemComponent Function GetNamedMaterial
struct Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics
{
	struct ParticleSystemComponent_eventGetNamedMaterial_Parms
	{
		FName InName;
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Returns a named material. If this named material is not found, returns NULL. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Returns a named material. If this named material is not found, returns NULL." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetNamedMaterial_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetNamedMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetNamedMaterial", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::ParticleSystemComponent_eventGetNamedMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::ParticleSystemComponent_eventGetNamedMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execGetNamedMaterial)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetNamedMaterial(Z_Param_InName);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function GetNamedMaterial

// Begin Class UParticleSystemComponent Function GetNumActiveParticles
struct Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics
{
	struct ParticleSystemComponent_eventGetNumActiveParticles_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** Get the current number of active particles in this system */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the current number of active particles in this system" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventGetNumActiveParticles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetNumActiveParticles", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::ParticleSystemComponent_eventGetNumActiveParticles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::ParticleSystemComponent_eventGetNumActiveParticles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execGetNumActiveParticles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumActiveParticles();
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function GetNumActiveParticles

// Begin Class UParticleSystemComponent Function SetAutoAttachParams
struct Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics
{
	struct ParticleSystemComponent_eventSetAutoAttachParams_Parms
	{
		USceneComponent* Parent;
		FName SocketName;
		TEnumAsByte<EAttachLocation::Type> LocationType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 * DEPRECATED: Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.\n\x09 * @param  Parent\x09\x09\x09""Component to attach to. \n\x09 * @param  SocketName\x09\x09Socket on Parent to attach to.\n\x09 * @param  LocationType\x09\x09Option for how we handle our location when we attach to Parent.\n\x09 * @see bAutoManageAttachment, AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType\n\x09 */" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "CPP_Default_SocketName", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Set Auto Attachment Parameters" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "DEPRECATED: Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.\n@param  Parent                       Component to attach to.\n@param  SocketName           Socket on Parent to attach to.\n@param  LocationType         Option for how we handle our location when we attach to Parent.\n@see bAutoManageAttachment, AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachParams_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachParams_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachParams_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(0, nullptr) }; // 2784615398
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_LocationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetAutoAttachParams", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::ParticleSystemComponent_eventSetAutoAttachParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::ParticleSystemComponent_eventSetAutoAttachParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetAutoAttachParams)
{
	P_GET_OBJECT(USceneComponent,Z_Param_Parent);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoAttachParams(Z_Param_Parent,Z_Param_SocketName,EAttachLocation::Type(Z_Param_LocationType));
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetAutoAttachParams

// Begin Class UParticleSystemComponent Function SetBeamEndPoint
struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics
{
	struct ParticleSystemComponent_eventSetBeamEndPoint_Parms
	{
		int32 EmitterIndex;
		FVector NewEndPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam end point\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewEndPoint\x09\x09\x09The value to set it to\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam end point\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewEndPoint                     The value to set it to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewEndPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamEndPoint_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::NewProp_NewEndPoint = { "NewEndPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamEndPoint_Parms, NewEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::NewProp_NewEndPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamEndPoint", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::ParticleSystemComponent_eventSetBeamEndPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::ParticleSystemComponent_eventSetBeamEndPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamEndPoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_STRUCT(FVector,Z_Param_NewEndPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBeamEndPoint(Z_Param_EmitterIndex,Z_Param_NewEndPoint);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetBeamEndPoint

// Begin Class UParticleSystemComponent Function SetBeamSourcePoint
struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics
{
	struct ParticleSystemComponent_eventSetBeamSourcePoint_Parms
	{
		int32 EmitterIndex;
		FVector NewSourcePoint;
		int32 SourceIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam source point\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewSourcePoint\x09\x09The value to set it to\n\x09 *\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam source point\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewSourcePoint          The value to set it to\n@param  SourceIndex                     Which beam within the emitter to set it on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSourcePoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourcePoint_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_NewSourcePoint = { "NewSourcePoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourcePoint_Parms, NewSourcePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourcePoint_Parms, SourceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_NewSourcePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_SourceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamSourcePoint", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::ParticleSystemComponent_eventSetBeamSourcePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::ParticleSystemComponent_eventSetBeamSourcePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamSourcePoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_STRUCT(FVector,Z_Param_NewSourcePoint);
	P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBeamSourcePoint(Z_Param_EmitterIndex,Z_Param_NewSourcePoint,Z_Param_SourceIndex);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetBeamSourcePoint

// Begin Class UParticleSystemComponent Function SetBeamSourceStrength
struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics
{
	struct ParticleSystemComponent_eventSetBeamSourceStrength_Parms
	{
		int32 EmitterIndex;
		float NewSourceStrength;
		int32 SourceIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam source strength\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewSourceStrength\x09The value to set it to\n\x09 *\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam source strength\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewSourceStrength       The value to set it to\n@param  SourceIndex                     Which beam within the emitter to set it on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSourceStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceStrength_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_NewSourceStrength = { "NewSourceStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceStrength_Parms, NewSourceStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceStrength_Parms, SourceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_NewSourceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_SourceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamSourceStrength", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::ParticleSystemComponent_eventSetBeamSourceStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::ParticleSystemComponent_eventSetBeamSourceStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamSourceStrength)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSourceStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBeamSourceStrength(Z_Param_EmitterIndex,Z_Param_NewSourceStrength,Z_Param_SourceIndex);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetBeamSourceStrength

// Begin Class UParticleSystemComponent Function SetBeamSourceTangent
struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics
{
	struct ParticleSystemComponent_eventSetBeamSourceTangent_Parms
	{
		int32 EmitterIndex;
		FVector NewTangentPoint;
		int32 SourceIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam source tangent\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewTangentPoint\x09\x09The value to set it to\n\x09 *\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam source tangent\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTangentPoint         The value to set it to\n@param  SourceIndex                     Which beam within the emitter to set it on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTangentPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceTangent_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_NewTangentPoint = { "NewTangentPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceTangent_Parms, NewTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceTangent_Parms, SourceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_NewTangentPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_SourceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamSourceTangent", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::ParticleSystemComponent_eventSetBeamSourceTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::ParticleSystemComponent_eventSetBeamSourceTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamSourceTangent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_STRUCT(FVector,Z_Param_NewTangentPoint);
	P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBeamSourceTangent(Z_Param_EmitterIndex,Z_Param_NewTangentPoint,Z_Param_SourceIndex);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetBeamSourceTangent

// Begin Class UParticleSystemComponent Function SetBeamTargetPoint
struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics
{
	struct ParticleSystemComponent_eventSetBeamTargetPoint_Parms
	{
		int32 EmitterIndex;
		FVector NewTargetPoint;
		int32 TargetIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam target point\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewTargetPoint\x09\x09The value to set it to\n\x09 *\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam target point\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTargetPoint          The value to set it to\n@param  TargetIndex                     Which beam within the emitter to set it on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTargetPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetPoint_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_NewTargetPoint = { "NewTargetPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetPoint_Parms, NewTargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetPoint_Parms, TargetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_NewTargetPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_TargetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamTargetPoint", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::ParticleSystemComponent_eventSetBeamTargetPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::ParticleSystemComponent_eventSetBeamTargetPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamTargetPoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_STRUCT(FVector,Z_Param_NewTargetPoint);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBeamTargetPoint(Z_Param_EmitterIndex,Z_Param_NewTargetPoint,Z_Param_TargetIndex);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetBeamTargetPoint

// Begin Class UParticleSystemComponent Function SetBeamTargetStrength
struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics
{
	struct ParticleSystemComponent_eventSetBeamTargetStrength_Parms
	{
		int32 EmitterIndex;
		float NewTargetStrength;
		int32 TargetIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam target strength\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewTargetStrength\x09The value to set it to\n\x09 *\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam target strength\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTargetStrength       The value to set it to\n@param  TargetIndex                     Which beam within the emitter to set it on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTargetStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetStrength_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_NewTargetStrength = { "NewTargetStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetStrength_Parms, NewTargetStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetStrength_Parms, TargetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_NewTargetStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_TargetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamTargetStrength", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::ParticleSystemComponent_eventSetBeamTargetStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::ParticleSystemComponent_eventSetBeamTargetStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamTargetStrength)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTargetStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBeamTargetStrength(Z_Param_EmitterIndex,Z_Param_NewTargetStrength,Z_Param_TargetIndex);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetBeamTargetStrength

// Begin Class UParticleSystemComponent Function SetBeamTargetTangent
struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics
{
	struct ParticleSystemComponent_eventSetBeamTargetTangent_Parms
	{
		int32 EmitterIndex;
		FVector NewTangentPoint;
		int32 TargetIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam target tangent\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewTangentPoint\x09\x09The value to set it to\n\x09 *\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam target tangent\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTangentPoint         The value to set it to\n@param  TargetIndex                     Which beam within the emitter to set it on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTangentPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetTangent_Parms, EmitterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_NewTangentPoint = { "NewTangentPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetTangent_Parms, NewTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetTangent_Parms, TargetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_EmitterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_NewTangentPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_TargetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamTargetTangent", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::ParticleSystemComponent_eventSetBeamTargetTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::ParticleSystemComponent_eventSetBeamTargetTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamTargetTangent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
	P_GET_STRUCT(FVector,Z_Param_NewTangentPoint);
	P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBeamTargetTangent(Z_Param_EmitterIndex,Z_Param_NewTangentPoint,Z_Param_TargetIndex);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetBeamTargetTangent

// Begin Class UParticleSystemComponent Function SetMaterialParameter
struct Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics
{
	struct ParticleSystemComponent_eventSetMaterialParameter_Parms
	{
		FName ParameterName;
		UMaterialInterface* Param;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** \n\x09 *\x09Set a named material instance parameter on this ParticleSystemComponent. \n\x09 *\x09Updates the parameter if it already exists, or creates a new entry if not. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set a named material instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Param;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetMaterialParameter_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetMaterialParameter_Parms, Param), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::NewProp_Param,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetMaterialParameter", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::ParticleSystemComponent_eventSetMaterialParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::ParticleSystemComponent_eventSetMaterialParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetMaterialParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaterialParameter(Z_Param_ParameterName,Z_Param_Param);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetMaterialParameter

// Begin Class UParticleSystemComponent Function SetTemplate
struct Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics
{
	struct ParticleSystemComponent_eventSetTemplate_Parms
	{
		UParticleSystem* NewTemplate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** Change the ParticleSystem used by this ParticleSystemComponent */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Change the ParticleSystem used by this ParticleSystemComponent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::NewProp_NewTemplate = { "NewTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetTemplate_Parms, NewTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::NewProp_NewTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetTemplate", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::ParticleSystemComponent_eventSetTemplate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::ParticleSystemComponent_eventSetTemplate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetTemplate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetTemplate)
{
	P_GET_OBJECT(UParticleSystem,Z_Param_NewTemplate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTemplate(Z_Param_NewTemplate);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetTemplate

// Begin Class UParticleSystemComponent Function SetTrailSourceData
struct Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics
{
	struct ParticleSystemComponent_eventSetTrailSourceData_Parms
	{
		FName InFirstSocketName;
		FName InSecondSocketName;
		TEnumAsByte<ETrailWidthMode> InWidthMode;
		float InWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Particles|Trails" },
		{ "Comment", "/**\n\x09* Sets the defining data for all trails in this component.\n\x09*\n\x09* @param\x09InFirstSocketName\x09The name of the first socket for the trail.\n\x09* @param\x09InSecondSocketName\x09The name of the second socket for the trail.\n\x09* @param\x09InWidthMode\x09\x09\x09How the width value is applied to the trail.\n\x09* @param\x09InWidth\x09\x09\x09\x09The width of the trail.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Sets the defining data for all trails in this component.\n\n@param        InFirstSocketName       The name of the first socket for the trail.\n@param        InSecondSocketName      The name of the second socket for the trail.\n@param        InWidthMode                     How the width value is applied to the trail.\n@param        InWidth                         The width of the trail." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InFirstSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSecondSocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InWidthMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InFirstSocketName = { "InFirstSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InFirstSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InSecondSocketName = { "InSecondSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InSecondSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InWidthMode = { "InWidthMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InWidthMode), Z_Construct_UEnum_Engine_ETrailWidthMode, METADATA_PARAMS(0, nullptr) }; // 963308681
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InFirstSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InSecondSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InWidthMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetTrailSourceData", nullptr, nullptr, Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::ParticleSystemComponent_eventSetTrailSourceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::ParticleSystemComponent_eventSetTrailSourceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParticleSystemComponent::execSetTrailSourceData)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InFirstSocketName);
	P_GET_PROPERTY(FNameProperty,Z_Param_InSecondSocketName);
	P_GET_PROPERTY(FByteProperty,Z_Param_InWidthMode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTrailSourceData(Z_Param_InFirstSocketName,Z_Param_InSecondSocketName,ETrailWidthMode(Z_Param_InWidthMode),Z_Param_InWidth);
	P_NATIVE_END;
}
// End Class UParticleSystemComponent Function SetTrailSourceData

// Begin Class UParticleSystemComponent
void UParticleSystemComponent::StaticRegisterNativesUParticleSystemComponent()
{
	UClass* Class = UParticleSystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginTrails", &UParticleSystemComponent::execBeginTrails },
		{ "CreateNamedDynamicMaterialInstance", &UParticleSystemComponent::execCreateNamedDynamicMaterialInstance },
		{ "EndTrails", &UParticleSystemComponent::execEndTrails },
		{ "GenerateParticleEvent", &UParticleSystemComponent::execGenerateParticleEvent },
		{ "GetBeamEndPoint", &UParticleSystemComponent::execGetBeamEndPoint },
		{ "GetBeamSourcePoint", &UParticleSystemComponent::execGetBeamSourcePoint },
		{ "GetBeamSourceStrength", &UParticleSystemComponent::execGetBeamSourceStrength },
		{ "GetBeamSourceTangent", &UParticleSystemComponent::execGetBeamSourceTangent },
		{ "GetBeamTargetPoint", &UParticleSystemComponent::execGetBeamTargetPoint },
		{ "GetBeamTargetStrength", &UParticleSystemComponent::execGetBeamTargetStrength },
		{ "GetBeamTargetTangent", &UParticleSystemComponent::execGetBeamTargetTangent },
		{ "GetNamedMaterial", &UParticleSystemComponent::execGetNamedMaterial },
		{ "GetNumActiveParticles", &UParticleSystemComponent::execGetNumActiveParticles },
		{ "SetAutoAttachParams", &UParticleSystemComponent::execSetAutoAttachParams },
		{ "SetBeamEndPoint", &UParticleSystemComponent::execSetBeamEndPoint },
		{ "SetBeamSourcePoint", &UParticleSystemComponent::execSetBeamSourcePoint },
		{ "SetBeamSourceStrength", &UParticleSystemComponent::execSetBeamSourceStrength },
		{ "SetBeamSourceTangent", &UParticleSystemComponent::execSetBeamSourceTangent },
		{ "SetBeamTargetPoint", &UParticleSystemComponent::execSetBeamTargetPoint },
		{ "SetBeamTargetStrength", &UParticleSystemComponent::execSetBeamTargetStrength },
		{ "SetBeamTargetTangent", &UParticleSystemComponent::execSetBeamTargetTangent },
		{ "SetMaterialParameter", &UParticleSystemComponent::execSetMaterialParameter },
		{ "SetTemplate", &UParticleSystemComponent::execSetTemplate },
		{ "SetTrailSourceData", &UParticleSystemComponent::execSetTrailSourceData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleSystemComponent);
UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister()
{
	return UParticleSystemComponent::StaticClass();
}
struct Z_Construct_UClass_UParticleSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * A particle emitter.\n */" },
		{ "DisplayName", "Cascade Particle System Component" },
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "Particles/ParticleSystemComponent.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "A particle emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[] = {
		{ "Category", "Particles" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelMeshComponents_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The skeletal mesh components used with the socket location module.\n\x09 *\x09This is to prevent them from being garbage collected.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "The skeletal mesh components used with the socket location module.\nThis is to prevent them from being garbage collected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnDetach_MetaData[] = {
		{ "Category", "Particles" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateOnDedicatedServer_MetaData[] = {
		{ "Comment", "/** whether to update the particle system on dedicated servers */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "whether to update the particle system on dedicated servers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRecycling_MetaData[] = {
		{ "Category", "Particles" },
		{ "Comment", "/**\n\x09 * If true, this Particle System will be available for recycling after it has completed. Auto-destroyed systems cannot be recycled.\n\x09 * Some systems (currently particle trail effects) can recycle components to avoid respawning them to play new effects.\n\x09 * This is only an optimization and does not change particle system behavior, aside from not triggering normal component initialization events more than once.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "If true, this Particle System will be available for recycling after it has completed. Auto-destroyed systems cannot be recycled.\nSome systems (currently particle trail effects) can recycle components to avoid respawning them to play new effects.\nThis is only an optimization and does not change particle system behavior, aside from not triggering normal component initialization events more than once." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoManageAttachment_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * True if we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\n\x09 * This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\n\x09 * When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\n\x09 * This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n\x09 * @see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "True if we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAttachWeldSimulatedBodies_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Option for how we handle bWeldSimulatedBodies when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Option for how we handle bWeldSimulatedBodies when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarmingUp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLODMethod_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** indicates that the component's LODMethod overrides the Template's */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "indicates that the component's LODMethod overrides the Template's" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipUpdateDynamicDataDuringTick_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09""Flag indicating that dynamic updating of render data should NOT occur during Tick.\n\x09 *\x09This is used primarily to allow for warming up and simulated effects to a certain state.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Flag indicating that dynamic updating of render data should NOT occur during Tick.\nThis is used primarily to allow for warming up and simulated effects to a certain state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODMethod_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** The method of LOD level determination to utilize for this particle system */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "The method of LOD level determination to utilize for this particle system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredSignificance_MetaData[] = {
		{ "Comment", "/** The significance this component requires of it's emitters for them to be enabled. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "The significance this component requires of it's emitters for them to be enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceParameters_MetaData[] = {
		{ "Category", "Particles" },
		{ "Comment", "/**\n\x09 *\x09""Array holding name instance parameters for this ParticleSystemComponent.\n\x09 *\x09Parameters can be used in Cascade using DistributionFloat/VectorParticleParameters.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Array holding name instance parameters for this ParticleSystemComponent.\nParameters can be used in Cascade using DistributionFloat/VectorParticleParameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnParticleSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnParticleBurst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnParticleDeath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnParticleCollide_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOldPositionValid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartSysVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTickRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsBeforeInactive_MetaData[] = {
		{ "Category", "Particles" },
		{ "Comment", "/**\n\x09 * Number of seconds of emitter not being rendered that need to pass before it\n\x09 * no longer gets ticked/ becomes inactive.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Number of seconds of emitter not being rendered that need to pass before it\nno longer gets ticked/ becomes inactive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeBeforeForceUpdateTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * Time between forced UpdateTransforms for systems that use dynamically calculated bounds,\n\x09 * Which is effectively how often the bounds are shrunk.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Time between forced UpdateTransforms for systems that use dynamically calculated bounds,\nWhich is effectively how often the bounds are shrunk." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorLODLevel_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09INTERNAL. Used by the editor to set the LODLevel\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "INTERNAL. Used by the editor to set the LODLevel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorDetailMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Used for applying Cascade's detail mode setting to in-level particle systems\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Used for applying Cascade's detail mode setting to in-level particle systems" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayClips_MetaData[] = {
		{ "Comment", "/** Array of replay clips for this particle system component.  These are serialized to disk.  You really should never add anything to this in the editor.  It's exposed so that you can delete clips if you need to, but be careful when doing so! */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Array of replay clips for this particle system component.  These are serialized to disk.  You really should never add anything to this in the editor.  It's exposed so that you can delete clips if you need to, but be careful when doing so!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTimeDilation_MetaData[] = {
		{ "Category", "Particles" },
		{ "Comment", "/** Scales DeltaTime in UParticleSystemComponent::Tick(...) */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Scales DeltaTime in UParticleSystemComponent::Tick(...)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachParent_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Component we automatically attach to when activated, if bAutoManageAttachment is true.\n\x09 * If null during registration, we assign the existing AttachParent and defer attachment until we activate.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Component we automatically attach to when activated, if bAutoManageAttachment is true.\nIf null during registration, we assign the existing AttachParent and defer attachment until we activate.\n@see bAutoManageAttachment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachSocketName_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * If no auto attach socket name is set during registration, the current attach socket will be\n\x09 * assigned to AutoAttachSocketName and used when activated.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\nIf no auto attach socket name is set during registration, the current attach socket will be\nassigned to AutoAttachSocketName and used when activated.\n@see bAutoManageAttachment" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationType_MetaData[] = {
		{ "Comment", "/**\n\x09 * DEPRECATED: Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachLocation::Type\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "DEPRECATED: Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachLocation::Type" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachRotationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachScaleRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSystemFinished_MetaData[] = {
		{ "Comment", "// Called when the particle system is done\n" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Called when the particle system is done" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Template;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmitterMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EmitterMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkelMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkelMeshComponents;
	static void NewProp_bResetOnDetach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnDetach;
	static void NewProp_bUpdateOnDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOnDedicatedServer;
	static void NewProp_bAllowRecycling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRecycling;
	static void NewProp_bAutoManageAttachment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoManageAttachment;
	static void NewProp_bAutoAttachWeldSimulatedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAttachWeldSimulatedBodies;
	static void NewProp_bWarmingUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarmingUp;
	static void NewProp_bOverrideLODMethod_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLODMethod;
	static void NewProp_bSkipUpdateDynamicDataDuringTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipUpdateDynamicDataDuringTick;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LODMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequiredSignificance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequiredSignificance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceParameters;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleSpawn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleBurst;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleDeath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleCollide;
	static void NewProp_bOldPositionValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOldPositionValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartSysVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTickRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsBeforeInactive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeBeforeForceUpdateTransform;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EditorLODLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EditorDetailMode;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplayClips_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplayClips;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomTimeDilation;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AutoAttachParent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AutoAttachSocketName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationType;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachLocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachRotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachRotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachScaleRule;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSystemFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParticleSystemComponent_BeginTrails, "BeginTrails" }, // 2845550854
		{ &Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance, "CreateNamedDynamicMaterialInstance" }, // 3492787385
		{ &Z_Construct_UFunction_UParticleSystemComponent_EndTrails, "EndTrails" }, // 1914467499
		{ &Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent, "GenerateParticleEvent" }, // 4179824969
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint, "GetBeamEndPoint" }, // 1053053991
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint, "GetBeamSourcePoint" }, // 1054374189
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength, "GetBeamSourceStrength" }, // 1065027353
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent, "GetBeamSourceTangent" }, // 2087056195
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint, "GetBeamTargetPoint" }, // 215465594
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength, "GetBeamTargetStrength" }, // 276287371
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent, "GetBeamTargetTangent" }, // 97504725
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial, "GetNamedMaterial" }, // 749078547
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles, "GetNumActiveParticles" }, // 1912129640
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams, "SetAutoAttachParams" }, // 3218670268
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint, "SetBeamEndPoint" }, // 1138414173
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint, "SetBeamSourcePoint" }, // 448739170
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength, "SetBeamSourceStrength" }, // 1105135818
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent, "SetBeamSourceTangent" }, // 2590248500
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint, "SetBeamTargetPoint" }, // 2577123863
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength, "SetBeamTargetStrength" }, // 3391310151
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent, "SetBeamTargetTangent" }, // 2773760267
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter, "SetMaterialParameter" }, // 2607094385
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetTemplate, "SetTemplate" }, // 1469152949
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData, "SetTrailSourceData" }, // 1918506782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, Template), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Template_MetaData), NewProp_Template_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials_Inner = { "EmitterMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials = { "EmitterMaterials", nullptr, (EPropertyFlags)0x0114000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, EmitterMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterMaterials_MetaData), NewProp_EmitterMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents_Inner = { "SkelMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents = { "SkelMeshComponents", nullptr, (EPropertyFlags)0x0114008000202008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, SkelMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelMeshComponents_MetaData), NewProp_SkelMeshComponents_MetaData) };
void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach_SetBit(void* Obj)
{
	((UParticleSystemComponent*)Obj)->bResetOnDetach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach = { "bResetOnDetach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetOnDetach_MetaData), NewProp_bResetOnDetach_MetaData) };
void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer_SetBit(void* Obj)
{
	((UParticleSystemComponent*)Obj)->bUpdateOnDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer = { "bUpdateOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateOnDedicatedServer_MetaData), NewProp_bUpdateOnDedicatedServer_MetaData) };
void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling_SetBit(void* Obj)
{
	((UParticleSystemComponent*)Obj)->bAllowRecycling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling = { "bAllowRecycling", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRecycling_MetaData), NewProp_bAllowRecycling_MetaData) };
void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment_SetBit(void* Obj)
{
	((UParticleSystemComponent*)Obj)->bAutoManageAttachment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment = { "bAutoManageAttachment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoManageAttachment_MetaData), NewProp_bAutoManageAttachment_MetaData) };
void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_SetBit(void* Obj)
{
	((UParticleSystemComponent*)Obj)->bAutoAttachWeldSimulatedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies = { "bAutoAttachWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoAttachWeldSimulatedBodies_MetaData), NewProp_bAutoAttachWeldSimulatedBodies_MetaData) };
void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp_SetBit(void* Obj)
{
	((UParticleSystemComponent*)Obj)->bWarmingUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp = { "bWarmingUp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarmingUp_MetaData), NewProp_bWarmingUp_MetaData) };
void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod_SetBit(void* Obj)
{
	((UParticleSystemComponent*)Obj)->bOverrideLODMethod = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod = { "bOverrideLODMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLODMethod_MetaData), NewProp_bOverrideLODMethod_MetaData) };
void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick_SetBit(void* Obj)
{
	((UParticleSystemComponent*)Obj)->bSkipUpdateDynamicDataDuringTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick = { "bSkipUpdateDynamicDataDuringTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipUpdateDynamicDataDuringTick_MetaData), NewProp_bSkipUpdateDynamicDataDuringTick_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_LODMethod = { "LODMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, LODMethod), Z_Construct_UEnum_Engine_ParticleSystemLODMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODMethod_MetaData), NewProp_LODMethod_MetaData) }; // 901355395
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance = { "RequiredSignificance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, RequiredSignificance), Z_Construct_UEnum_Engine_EParticleSignificanceLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredSignificance_MetaData), NewProp_RequiredSignificance_MetaData) }; // 3456169590
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters_Inner = { "InstanceParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParticleSysParam, METADATA_PARAMS(0, nullptr) }; // 3318481151
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters = { "InstanceParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, InstanceParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceParameters_MetaData), NewProp_InstanceParameters_MetaData) }; // 3318481151
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleSpawn = { "OnParticleSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, OnParticleSpawn), Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnParticleSpawn_MetaData), NewProp_OnParticleSpawn_MetaData) }; // 1541492871
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleBurst = { "OnParticleBurst", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, OnParticleBurst), Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnParticleBurst_MetaData), NewProp_OnParticleBurst_MetaData) }; // 3507584425
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleDeath = { "OnParticleDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, OnParticleDeath), Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnParticleDeath_MetaData), NewProp_OnParticleDeath_MetaData) }; // 3348657838
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleCollide = { "OnParticleCollide", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, OnParticleCollide), Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnParticleCollide_MetaData), NewProp_OnParticleCollide_MetaData) }; // 2123345514
void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid_SetBit(void* Obj)
{
	((UParticleSystemComponent*)Obj)->bOldPositionValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid = { "bOldPositionValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOldPositionValid_MetaData), NewProp_bOldPositionValid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OldPosition = { "OldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, OldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPosition_MetaData), NewProp_OldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_PartSysVelocity = { "PartSysVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, PartSysVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartSysVelocity_MetaData), NewProp_PartSysVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, WarmupTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmupTime_MetaData), NewProp_WarmupTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTickRate = { "WarmupTickRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, WarmupTickRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarmupTickRate_MetaData), NewProp_WarmupTickRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SecondsBeforeInactive = { "SecondsBeforeInactive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, SecondsBeforeInactive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsBeforeInactive_MetaData), NewProp_SecondsBeforeInactive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform = { "MaxTimeBeforeForceUpdateTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, MaxTimeBeforeForceUpdateTransform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimeBeforeForceUpdateTransform_MetaData), NewProp_MaxTimeBeforeForceUpdateTransform_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorLODLevel = { "EditorLODLevel", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, EditorLODLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorLODLevel_MetaData), NewProp_EditorLODLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorDetailMode = { "EditorDetailMode", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, EditorDetailMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorDetailMode_MetaData), NewProp_EditorDetailMode_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips_Inner = { "ReplayClips", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UParticleSystemReplay_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips = { "ReplayClips", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, ReplayClips), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayClips_MetaData), NewProp_ReplayClips_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_CustomTimeDilation = { "CustomTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, CustomTimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTimeDilation_MetaData), NewProp_CustomTimeDilation_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachParent = { "AutoAttachParent", nullptr, (EPropertyFlags)0x00140000000a080d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoAttachParent_MetaData), NewProp_AutoAttachParent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachSocketName = { "AutoAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoAttachSocketName_MetaData), NewProp_AutoAttachSocketName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationType = { "AutoAttachLocationType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachLocationType_DEPRECATED), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoAttachLocationType_MetaData), NewProp_AutoAttachLocationType_MetaData) }; // 2784615398
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule = { "AutoAttachLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoAttachLocationRule_MetaData), NewProp_AutoAttachLocationRule_MetaData) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule = { "AutoAttachRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoAttachRotationRule_MetaData), NewProp_AutoAttachRotationRule_MetaData) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule = { "AutoAttachScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoAttachScaleRule_MetaData), NewProp_AutoAttachScaleRule_MetaData) }; // 366982490
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnSystemFinished = { "OnSystemFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemComponent, OnSystemFinished), Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSystemFinished_MetaData), NewProp_OnSystemFinished_MetaData) }; // 210447309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_Template,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_LODMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleBurst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleCollide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_PartSysVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTickRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SecondsBeforeInactive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorLODLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorDetailMode,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_CustomTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachSocketName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationType,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnSystemFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFXSystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystemComponent_Statics::ClassParams = {
	&UParticleSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UParticleSystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleSystemComponent()
{
	if (!Z_Registration_Info_UClass_UParticleSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleSystemComponent.OuterSingleton, Z_Construct_UClass_UParticleSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleSystemComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleSystemComponent>()
{
	return UParticleSystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemComponent);
UParticleSystemComponent::~UParticleSystemComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemComponent)
// End Class UParticleSystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EParticleSysParamType_StaticEnum, TEXT("EParticleSysParamType"), &Z_Registration_Info_UEnum_EParticleSysParamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1988956769U) },
		{ ParticleReplayState_StaticEnum, TEXT("ParticleReplayState"), &Z_Registration_Info_UEnum_ParticleReplayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3309132450U) },
		{ EParticleEventType_StaticEnum, TEXT("EParticleEventType"), &Z_Registration_Info_UEnum_EParticleEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 329606486U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParticleSysParam::StaticStruct, Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewStructOps, TEXT("ParticleSysParam"), &Z_Registration_Info_UScriptStruct_ParticleSysParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleSysParam), 3318481151U) },
		{ FFXSystemSpawnParameters::StaticStruct, Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewStructOps, TEXT("FXSystemSpawnParameters"), &Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFXSystemSpawnParameters), 2188821427U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFXSystemComponent, UFXSystemComponent::StaticClass, TEXT("UFXSystemComponent"), &Z_Registration_Info_UClass_UFXSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFXSystemComponent), 2075957313U) },
		{ Z_Construct_UClass_UParticleSystemComponent, UParticleSystemComponent::StaticClass, TEXT("UParticleSystemComponent"), &Z_Registration_Info_UClass_UParticleSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleSystemComponent), 572742127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_3231122739(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
