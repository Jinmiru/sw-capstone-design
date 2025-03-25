// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRequired() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterNormalsMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOpacitySourceMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSortMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleUVFlipMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EParticleUVFlipMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleUVFlipMode;
static UEnum* EParticleUVFlipMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EParticleUVFlipMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EParticleUVFlipMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleUVFlipMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleUVFlipMode"));
	}
	return Z_Registration_Info_UEnum_EParticleUVFlipMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EParticleUVFlipMode>()
{
	return EParticleUVFlipMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FlipUOnly.Comment", "/** Flips U only on all particles. */" },
		{ "FlipUOnly.Name", "EParticleUVFlipMode::FlipUOnly" },
		{ "FlipUOnly.ToolTip", "Flips U only on all particles." },
		{ "FlipUV.Comment", "/** Flips UV on all particles. */" },
		{ "FlipUV.Name", "EParticleUVFlipMode::FlipUV" },
		{ "FlipUV.ToolTip", "Flips UV on all particles." },
		{ "FlipVOnly.Comment", "/** Flips V only on all particles. */" },
		{ "FlipVOnly.Name", "EParticleUVFlipMode::FlipVOnly" },
		{ "FlipVOnly.ToolTip", "Flips V only on all particles." },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "None.Comment", "/** Flips UV on all particles. */" },
		{ "None.Name", "EParticleUVFlipMode::None" },
		{ "None.ToolTip", "Flips UV on all particles." },
		{ "RandomFlipUOnly.Comment", "/** Flips U only randomly for each particle on spawn. */" },
		{ "RandomFlipUOnly.Name", "EParticleUVFlipMode::RandomFlipUOnly" },
		{ "RandomFlipUOnly.ToolTip", "Flips U only randomly for each particle on spawn." },
		{ "RandomFlipUV.Comment", "/** Flips UV randomly for each particle on spawn. */" },
		{ "RandomFlipUV.Name", "EParticleUVFlipMode::RandomFlipUV" },
		{ "RandomFlipUV.ToolTip", "Flips UV randomly for each particle on spawn." },
		{ "RandomFlipUVIndependent.Comment", "/** Flips U and V independently at random for each particle on spawn. */" },
		{ "RandomFlipUVIndependent.Name", "EParticleUVFlipMode::RandomFlipUVIndependent" },
		{ "RandomFlipUVIndependent.ToolTip", "Flips U and V independently at random for each particle on spawn." },
		{ "RandomFlipVOnly.Comment", "/** Flips V only randomly for each particle on spawn. */" },
		{ "RandomFlipVOnly.Name", "EParticleUVFlipMode::RandomFlipVOnly" },
		{ "RandomFlipVOnly.ToolTip", "Flips V only randomly for each particle on spawn." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EParticleUVFlipMode::None", (int64)EParticleUVFlipMode::None },
		{ "EParticleUVFlipMode::FlipUV", (int64)EParticleUVFlipMode::FlipUV },
		{ "EParticleUVFlipMode::FlipUOnly", (int64)EParticleUVFlipMode::FlipUOnly },
		{ "EParticleUVFlipMode::FlipVOnly", (int64)EParticleUVFlipMode::FlipVOnly },
		{ "EParticleUVFlipMode::RandomFlipUV", (int64)EParticleUVFlipMode::RandomFlipUV },
		{ "EParticleUVFlipMode::RandomFlipUOnly", (int64)EParticleUVFlipMode::RandomFlipUOnly },
		{ "EParticleUVFlipMode::RandomFlipVOnly", (int64)EParticleUVFlipMode::RandomFlipVOnly },
		{ "EParticleUVFlipMode::RandomFlipUVIndependent", (int64)EParticleUVFlipMode::RandomFlipUVIndependent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EParticleUVFlipMode",
	"EParticleUVFlipMode",
	Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EParticleUVFlipMode()
{
	if (!Z_Registration_Info_UEnum_EParticleUVFlipMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleUVFlipMode.InnerSingleton, Z_Construct_UEnum_Engine_EParticleUVFlipMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EParticleUVFlipMode.InnerSingleton;
}
// End Enum EParticleUVFlipMode

// Begin Enum EParticleSortMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSortMode;
static UEnum* EParticleSortMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EParticleSortMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EParticleSortMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSortMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSortMode"));
	}
	return Z_Registration_Info_UEnum_EParticleSortMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EParticleSortMode>()
{
	return EParticleSortMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EParticleSortMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "PSORTMODE_Age_NewestFirst.Name", "PSORTMODE_Age_NewestFirst" },
		{ "PSORTMODE_Age_OldestFirst.Name", "PSORTMODE_Age_OldestFirst" },
		{ "PSORTMODE_DistanceToView.Name", "PSORTMODE_DistanceToView" },
		{ "PSORTMODE_MAX.Name", "PSORTMODE_MAX" },
		{ "PSORTMODE_None.Name", "PSORTMODE_None" },
		{ "PSORTMODE_ViewProjDepth.Name", "PSORTMODE_ViewProjDepth" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PSORTMODE_None", (int64)PSORTMODE_None },
		{ "PSORTMODE_ViewProjDepth", (int64)PSORTMODE_ViewProjDepth },
		{ "PSORTMODE_DistanceToView", (int64)PSORTMODE_DistanceToView },
		{ "PSORTMODE_Age_OldestFirst", (int64)PSORTMODE_Age_OldestFirst },
		{ "PSORTMODE_Age_NewestFirst", (int64)PSORTMODE_Age_NewestFirst },
		{ "PSORTMODE_MAX", (int64)PSORTMODE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSortMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EParticleSortMode",
	"EParticleSortMode",
	Z_Construct_UEnum_Engine_EParticleSortMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSortMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSortMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EParticleSortMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EParticleSortMode()
{
	if (!Z_Registration_Info_UEnum_EParticleSortMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSortMode.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSortMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EParticleSortMode.InnerSingleton;
}
// End Enum EParticleSortMode

// Begin Enum EEmitterNormalsMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEmitterNormalsMode;
static UEnum* EEmitterNormalsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEmitterNormalsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEmitterNormalsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterNormalsMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterNormalsMode"));
	}
	return Z_Registration_Info_UEnum_EEmitterNormalsMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EEmitterNormalsMode>()
{
	return EEmitterNormalsMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ENM_CameraFacing.Comment", "/** Default mode, normals are based on the camera facing geometry. */" },
		{ "ENM_CameraFacing.Name", "ENM_CameraFacing" },
		{ "ENM_CameraFacing.ToolTip", "Default mode, normals are based on the camera facing geometry." },
		{ "ENM_Cylindrical.Comment", "/** Normals are generated from a cylinder going through NormalsSphereCenter, in the direction NormalsCylinderDirection. */" },
		{ "ENM_Cylindrical.Name", "ENM_Cylindrical" },
		{ "ENM_Cylindrical.ToolTip", "Normals are generated from a cylinder going through NormalsSphereCenter, in the direction NormalsCylinderDirection." },
		{ "ENM_MAX.Name", "ENM_MAX" },
		{ "ENM_Spherical.Comment", "/** Normals are generated from a sphere centered at NormalsSphereCenter. */" },
		{ "ENM_Spherical.Name", "ENM_Spherical" },
		{ "ENM_Spherical.ToolTip", "Normals are generated from a sphere centered at NormalsSphereCenter." },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENM_CameraFacing", (int64)ENM_CameraFacing },
		{ "ENM_Spherical", (int64)ENM_Spherical },
		{ "ENM_Cylindrical", (int64)ENM_Cylindrical },
		{ "ENM_MAX", (int64)ENM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EEmitterNormalsMode",
	"EEmitterNormalsMode",
	Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EEmitterNormalsMode()
{
	if (!Z_Registration_Info_UEnum_EEmitterNormalsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEmitterNormalsMode.InnerSingleton, Z_Construct_UEnum_Engine_EEmitterNormalsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEmitterNormalsMode.InnerSingleton;
}
// End Enum EEmitterNormalsMode

// Begin Class UParticleModuleRequired
void UParticleModuleRequired::StaticRegisterNativesUParticleModuleRequired()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRequired);
UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister()
{
	return UParticleModuleRequired::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleRequired_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Required" },
		{ "HideCategories", "Object Cascade Object" },
		{ "IncludePath", "Particles/ParticleModuleRequired.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** The material to utilize for the emitter at this LOD level.\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The material to utilize for the emitter at this LOD level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_Square */" },
		{ "DisplayAfter", "ScreenAlignment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_FacingCameraPosition */" },
		{ "DisplayAfter", "MinFacingCameraBlendDistance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterOrigin_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterRotation_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** \n\x09 *\x09The screen alignment to utilize for the emitter at this LOD level.\n\x09 *\x09One of the following:\n\x09 *\x09PSA_FacingCameraPosition - Faces the camera position, but is not dependent on the camera rotation.  \n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09This method produces more stable particles under camera rotation.\n\x09 *\x09PSA_Square\x09\x09\x09- Uniform scale (via SizeX) facing the camera\n\x09 *\x09PSA_Rectangle\x09\x09- Non-uniform scale (via SizeX and SizeY) facing the camera\n\x09 *\x09PSA_Velocity\x09\x09- Orient the particle towards both the camera and the direction \n\x09 *\x09\x09\x09\x09\x09\x09  the particle is moving. Non-uniform scaling is allowed.\n\x09 *\x09PSA_TypeSpecific\x09- Use the alignment method indicated in the type data module.\n\x09 *\x09PSA_FacingCameraDistanceBlend - Blends between PSA_FacingCameraPosition and PSA_Square over specified distance.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The screen alignment to utilize for the emitter at this LOD level.\nOne of the following:\nPSA_FacingCameraPosition - Faces the camera position, but is not dependent on the camera rotation.\n                                                        This method produces more stable particles under camera rotation.\nPSA_Square                      - Uniform scale (via SizeX) facing the camera\nPSA_Rectangle           - Non-uniform scale (via SizeX and SizeY) facing the camera\nPSA_Velocity            - Orient the particle towards both the camera and the direction\n                                          the particle is moving. Non-uniform scaling is allowed.\nPSA_TypeSpecific        - Use the alignment method indicated in the type data module.\nPSA_FacingCameraDistanceBlend - Blends between PSA_FacingCameraPosition and PSA_Square over specified distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalSpace_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** If true, update the emitter in local space\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "DisplayAfter", "MaxFacingCameraBlendDistance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, update the emitter in local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKillOnDeactivate_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** If true, kill the emitter when the particle system is deactivated\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, kill the emitter when the particle system is deactivated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKillOnCompleted_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** If true, kill the emitter when it completes\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, kill the emitter when it completes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09 *\x09The sorting mode to use for this emitter.\n\x09 *\x09PSORTMODE_None\x09\x09\x09\x09- No sorting required.\n\x09 *\x09PSORTMODE_ViewProjDepth\x09\x09- Sort by view projected depth of the particle.\n\x09 *\x09PSORTMODE_DistanceToView\x09- Sort by distance of particle to view in world space.\n\x09 *\x09PSORTMODE_Age_OldestFirst\x09- Sort by age, oldest drawn first.\n\x09 *\x09PSORTMODE_Age_NewestFirst\x09- Sort by age, newest drawn first.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The sorting mode to use for this emitter.\nPSORTMODE_None                          - No sorting required.\nPSORTMODE_ViewProjDepth         - Sort by view projected depth of the particle.\nPSORTMODE_DistanceToView        - Sort by distance of particle to view in world space.\nPSORTMODE_Age_OldestFirst       - Sort by age, oldest drawn first.\nPSORTMODE_Age_NewestFirst       - Sort by age, newest drawn first." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyEmitterTime_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09 *\x09If true, the EmitterTime for the emitter will be calculated by\n\x09 *\x09modulating the SecondsSinceCreation by the EmitterDuration. As\n\x09 *\x09this can lead to issues w/ looping and variable duration, a new\n\x09 *\x09""approach has been implemented. \n\x09 *\x09If false, this new approach is utilized, and the EmitterTime is\n\x09 *\x09simply incremented by DeltaTime each tick. When the emitter \n\x09 *\x09loops, it adjusts the EmitterTime by the current EmitterDuration\n\x09 *\x09resulting in proper looping/delay behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, the EmitterTime for the emitter will be calculated by\nmodulating the SecondsSinceCreation by the EmitterDuration. As\nthis can lead to issues w/ looping and variable duration, a new\napproach has been implemented.\nIf false, this new approach is utilized, and the EmitterTime is\nsimply incremented by DeltaTime each tick. When the emitter\nloops, it adjusts the EmitterTime by the current EmitterDuration\nresulting in proper looping/delay behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** If true, removes the HMD view roll (e.g. in VR) */" },
		{ "DisplayName", "Remove HMD Roll" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLargeWorldCoordinates_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** If true, gpu simulation positions are offset to support double precision vectors. Cpu sims always support large world coordinates. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, gpu simulation positions are offset to support double precision vectors. Cpu sims always support large world coordinates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmitterDurationUseRange_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/**\n\x09 *\x09If true, select the emitter duration from the range\n\x09 *\x09\x09[EmitterDurationLow..EmitterDuration]\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, select the emitter duration from the range\n        [EmitterDurationLow..EmitterDuration]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideUseVelocityForMotionBlur_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityForMotionBlur_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * When supported by the vertex factory will use particle velocity for motion blur approximation.\n\x09 * This will be inaccurate in some cases, i.e. sprite rotation, but may provide a reasonable result vs having this disabled\n\x09 */" },
		{ "EditCondition", "bOverrideUseVelocityForMotionBlur" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "When supported by the vertex factory will use particle velocity for motion blur approximation.\nThis will be inaccurate in some cases, i.e. sprite rotation, but may provide a reasonable result vs having this disabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterDuration_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/** \n\x09 *\x09How long, in seconds, the emitter will run before looping.\n\x09 */" },
		{ "DisplayAfter", "bRemoveHMDRoll" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "How long, in seconds, the emitter will run before looping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRate_MetaData[] = {
		{ "Comment", "/** The rate at which to spawn particles\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The rate at which to spawn particles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstList_MetaData[] = {
		{ "Comment", "/** The array of burst entries.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The array of burst entries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterDelay_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/**\n\x09 *\x09Indicates the time (in seconds) that this emitter should be delayed in the particle system.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Indicates the time (in seconds) that this emitter should be delayed in the particle system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterDelayLow_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/** \n\x09 *\x09The low end of the emitter delay if using a range.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The low end of the emitter delay if using a range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayFirstLoopOnly_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/**\n\x09 *\x09If true, the emitter will be delayed only on the first loop.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, the emitter will be delayed only on the first loop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationMethod_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** \n\x09 *\x09The interpolation method to used for the SubUV image selection.\n\x09 *\x09One of the following:\n\x09 *\x09PSUVIM_None\x09\x09\x09- Do not apply SubUV modules to this emitter. \n\x09 *\x09PSUVIM_Linear\x09\x09- Smoothly transition between sub-images in the given order, \n\x09 *\x09\x09\x09\x09\x09\x09  with no blending between the current and the next\n\x09 *\x09PSUVIM_Linear_Blend\x09- Smoothly transition between sub-images in the given order, \n\x09 *\x09\x09\x09\x09\x09\x09  blending between the current and the next \n\x09 *\x09PSUVIM_Random\x09\x09- Pick the next image at random, with no blending between \n\x09 *\x09\x09\x09\x09\x09\x09  the current and the next \n\x09 *\x09PSUVIM_Random_Blend\x09- Pick the next image at random, blending between the current \n\x09 *\x09\x09\x09\x09\x09\x09  and the next \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The interpolation method to used for the SubUV image selection.\nOne of the following:\nPSUVIM_None                     - Do not apply SubUV modules to this emitter.\nPSUVIM_Linear           - Smoothly transition between sub-images in the given order,\n                                          with no blending between the current and the next\nPSUVIM_Linear_Blend     - Smoothly transition between sub-images in the given order,\n                                          blending between the current and the next\nPSUVIM_Random           - Pick the next image at random, with no blending between\n                                          the current and the next\nPSUVIM_Random_Blend     - Pick the next image at random, blending between the current\n                                          and the next" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleUV_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** Whether to scale the UV or not - ie, the model wasn't setup with sub uvs\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Whether to scale the UV or not - ie, the model wasn't setup with sub uvs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmitterDelayUseRange_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "/**\n\x09 *\x09If true, select the emitter delay from the range \n\x09 *\x09\x09[EmitterDelayLow..EmitterDelay]\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, select the emitter delay from the range\n        [EmitterDelayLow..EmitterDelay]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleBurstMethod_MetaData[] = {
		{ "Comment", "/** The method to utilize when burst-emitting particles\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The method to utilize when burst-emitting particles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSystemMacroUV_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "Comment", "/** Override the system MacroUV settings                                            */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Override the system MacroUV settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxDrawCount_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 *\x09If true, use the MaxDrawCount to limit the number of particles rendered.\n\x09 *\x09NOTE: This does not limit the number spawned/updated, only what is drawn.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, use the MaxDrawCount to limit the number of particles rendered.\nNOTE: This does not limit the number spawned/updated, only what is drawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacitySourceMode_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterNormalsMode_MetaData[] = {
		{ "Category", "Normals" },
		{ "Comment", "/** Normal generation mode for this emitter LOD. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Normal generation mode for this emitter LOD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09* Ensures that movement generated from the orbit module is applied to velocity-aligned particles\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Ensures that movement generated from the orbit module is applied to velocity-aligned particles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubImages_Horizontal_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** The number of sub-images horizontally in the texture\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of sub-images horizontally in the texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubImages_Vertical_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** The number of sub-images vertically in the texture\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of sub-images vertically in the texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomImageTime_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The amount of time (particle-relative, 0.0 to 1.0) to 'lock' on a random sub image\n\x09 *\x09    0.0 = change every frame\n\x09 *      1.0 = select a random image at spawn and hold for the life of the particle\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The amount of time (particle-relative, 0.0 to 1.0) to 'lock' on a random sub image\n    0.0 = change every frame\n1.0 = select a random image at spawn and hold for the life of the particle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomImageChanges_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** The number of times to change a random image over the life of the particle.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of times to change a random image over the life of the particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MacroUVPosition_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "Comment", "/** Local space position that UVs generated with the ParticleMacroUV material node will be centered on. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Local space position that UVs generated with the ParticleMacroUV material node will be centered on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MacroUVRadius_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "Comment", "/** World space radius that UVs generated with the ParticleMacroUV material node will tile based on. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "World space radius that UVs generated with the ParticleMacroUV material node will tile based on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVFlippingMode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Controls UV Flipping for this emitter.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Controls UV Flipping for this emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingMode_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "Comment", "/**\n\x09* More bounding vertices results in reduced overdraw, but adds more triangle overhead.\n\x09* The eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\n\x09* and when the particles using the texture will be few and large.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "More bounding vertices results in reduced overdraw, but adds more triangle overhead.\nThe eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\nand when the particles using the texture will be few and large." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDurationRecalcEachLoop_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/**\n\x09 *\x09If true, recalculate the emitter duration on each loop.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, recalculate the emitter duration on each loop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalsSphereCenter_MetaData[] = {
		{ "Category", "Normals" },
		{ "Comment", "/** \n\x09 * When EmitterNormalsMode is ENM_Spherical, particle normals are created to face away from NormalsSphereCenter. \n\x09 * NormalsSphereCenter is in local space.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "When EmitterNormalsMode is ENM_Spherical, particle normals are created to face away from NormalsSphereCenter.\nNormalsSphereCenter is in local space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaThreshold_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "Comment", "/**\n\x09* Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\n\x09* Raising this threshold slightly can reduce overdraw in particles using this animation asset.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\nRaising this threshold slightly can reduce overdraw in particles using this animation asset." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterLoops_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/** The number of times to loop the emitter.\n\x09 *\x09""0 indicates loop continuously\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of times to loop the emitter.\n    0 indicates loop continuously" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutoutTexture_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "Comment", "/**\n\x09* Texture to generate bounding geometry from.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Texture to generate bounding geometry from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDrawCount_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 *\x09The maximum number of particles to DRAW for this emitter.\n\x09 *\x09If set to 0, it will use whatever number are present.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The maximum number of particles to DRAW for this emitter.\nIf set to 0, it will use whatever number are present." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterDurationLow_MetaData[] = {
		{ "Category", "Duration" },
		{ "Comment", "/**\n\x09 *\x09The low end of the emitter duration if using a range.\n\x09 */" },
		{ "DisplayAfter", "EmitterDuration" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The low end of the emitter duration if using a range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalsCylinderDirection_MetaData[] = {
		{ "Category", "Normals" },
		{ "Comment", "/** \n\x09 * When EmitterNormalsMode is ENM_Cylindrical, \n\x09 * particle normals are created to face away from the cylinder going through NormalsSphereCenter in the direction NormalsCylinderDirection. \n\x09 * NormalsCylinderDirection is in local space.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "When EmitterNormalsMode is ENM_Cylindrical,\nparticle normals are created to face away from the cylinder going through NormalsSphereCenter in the direction NormalsCylinderDirection.\nNormalsCylinderDirection is in local space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamedMaterialOverrides_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** \n\x09*\x09Named material overrides for this emitter. \n\x09*\x09Overrides this emitter's material(s) with those in the correspondingly named slot(s) of the owning system.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Named material overrides for this emitter.\nOverrides this emitter's material(s) with those in the correspondingly named slot(s) of the owning system." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment;
	static void NewProp_bUseLocalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalSpace;
	static void NewProp_bKillOnDeactivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKillOnDeactivate;
	static void NewProp_bKillOnCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKillOnCompleted;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMode;
	static void NewProp_bUseLegacyEmitterTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyEmitterTime;
	static void NewProp_bRemoveHMDRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll;
	static void NewProp_bSupportLargeWorldCoordinates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportLargeWorldCoordinates;
	static void NewProp_bEmitterDurationUseRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitterDurationUseRange;
	static void NewProp_bOverrideUseVelocityForMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideUseVelocityForMotionBlur;
	static void NewProp_bUseVelocityForMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityForMotionBlur;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurstList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BurstList;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterDelayLow;
	static void NewProp_bDelayFirstLoopOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayFirstLoopOnly;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationMethod;
	static void NewProp_bScaleUV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleUV;
	static void NewProp_bEmitterDelayUseRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitterDelayUseRange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParticleBurstMethod;
	static void NewProp_bOverrideSystemMacroUV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSystemMacroUV;
	static void NewProp_bUseMaxDrawCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxDrawCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OpacitySourceMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EmitterNormalsMode;
	static void NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrbitModuleAffectsVelocityAlignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubImages_Horizontal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubImages_Vertical;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomImageTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomImageChanges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MacroUVPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MacroUVRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UVFlippingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UVFlippingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundingMode;
	static void NewProp_bDurationRecalcEachLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDurationRecalcEachLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalsSphereCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterLoops;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CutoutTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDrawCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterDurationLow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalsCylinderDirection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NamedMaterialOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedMaterialOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRequired>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, MinFacingCameraBlendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFacingCameraBlendDistance_MetaData), NewProp_MinFacingCameraBlendDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, MaxFacingCameraBlendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFacingCameraBlendDistance_MetaData), NewProp_MaxFacingCameraBlendDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin = { "EmitterOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterOrigin_MetaData), NewProp_EmitterOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation = { "EmitterRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterRotation_MetaData), NewProp_EmitterRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment = { "ScreenAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenAlignment_MetaData), NewProp_ScreenAlignment_MetaData) }; // 2256829574
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bUseLocalSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace = { "bUseLocalSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalSpace_MetaData), NewProp_bUseLocalSpace_MetaData) };
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bKillOnDeactivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate = { "bKillOnDeactivate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKillOnDeactivate_MetaData), NewProp_bKillOnDeactivate_MetaData) };
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bKillOnCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted = { "bKillOnCompleted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKillOnCompleted_MetaData), NewProp_bKillOnCompleted_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode = { "SortMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, SortMode), Z_Construct_UEnum_Engine_EParticleSortMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortMode_MetaData), NewProp_SortMode_MetaData) }; // 1447199867
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bUseLegacyEmitterTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime = { "bUseLegacyEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyEmitterTime_MetaData), NewProp_bUseLegacyEmitterTime_MetaData) };
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bRemoveHMDRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll = { "bRemoveHMDRoll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveHMDRoll_MetaData), NewProp_bRemoveHMDRoll_MetaData) };
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bSupportLargeWorldCoordinates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates = { "bSupportLargeWorldCoordinates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportLargeWorldCoordinates_MetaData), NewProp_bSupportLargeWorldCoordinates_MetaData) };
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bEmitterDurationUseRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange = { "bEmitterDurationUseRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmitterDurationUseRange_MetaData), NewProp_bEmitterDurationUseRange_MetaData) };
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideUseVelocityForMotionBlur_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bOverrideUseVelocityForMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideUseVelocityForMotionBlur = { "bOverrideUseVelocityForMotionBlur", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideUseVelocityForMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideUseVelocityForMotionBlur_MetaData), NewProp_bOverrideUseVelocityForMotionBlur_MetaData) };
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseVelocityForMotionBlur_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bUseVelocityForMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseVelocityForMotionBlur = { "bUseVelocityForMotionBlur", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseVelocityForMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVelocityForMotionBlur_MetaData), NewProp_bUseVelocityForMotionBlur_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration = { "EmitterDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterDuration_MetaData), NewProp_EmitterDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate = { "SpawnRate", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, SpawnRate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRate_MetaData), NewProp_SpawnRate_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_Inner = { "BurstList", nullptr, (EPropertyFlags)0x0000000000000008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParticleBurst, METADATA_PARAMS(0, nullptr) }; // 3170484274
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList = { "BurstList", nullptr, (EPropertyFlags)0x0010000002000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, BurstList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstList_MetaData), NewProp_BurstList_MetaData) }; // 3170484274
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay = { "EmitterDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterDelay_MetaData), NewProp_EmitterDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow = { "EmitterDelayLow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterDelayLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterDelayLow_MetaData), NewProp_EmitterDelayLow_MetaData) };
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bDelayFirstLoopOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly = { "bDelayFirstLoopOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelayFirstLoopOnly_MetaData), NewProp_bDelayFirstLoopOnly_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod = { "InterpolationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, InterpolationMethod), Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationMethod_MetaData), NewProp_InterpolationMethod_MetaData) }; // 3419858911
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bScaleUV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV = { "bScaleUV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleUV_MetaData), NewProp_bScaleUV_MetaData) };
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bEmitterDelayUseRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange = { "bEmitterDelayUseRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmitterDelayUseRange_MetaData), NewProp_bEmitterDelayUseRange_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod = { "ParticleBurstMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, ParticleBurstMethod), Z_Construct_UEnum_Engine_EParticleBurstMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleBurstMethod_MetaData), NewProp_ParticleBurstMethod_MetaData) }; // 2458200404
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bOverrideSystemMacroUV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV = { "bOverrideSystemMacroUV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSystemMacroUV_MetaData), NewProp_bOverrideSystemMacroUV_MetaData) };
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bUseMaxDrawCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount = { "bUseMaxDrawCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxDrawCount_MetaData), NewProp_bUseMaxDrawCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode = { "OpacitySourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, OpacitySourceMode), Z_Construct_UEnum_Engine_EOpacitySourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacitySourceMode_MetaData), NewProp_OpacitySourceMode_MetaData) }; // 4104105342
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode = { "EmitterNormalsMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterNormalsMode), Z_Construct_UEnum_Engine_EEmitterNormalsMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterNormalsMode_MetaData), NewProp_EmitterNormalsMode_MetaData) }; // 745518929
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bOrbitModuleAffectsVelocityAlignment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment = { "bOrbitModuleAffectsVelocityAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData), NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal = { "SubImages_Horizontal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, SubImages_Horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubImages_Horizontal_MetaData), NewProp_SubImages_Horizontal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical = { "SubImages_Vertical", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, SubImages_Vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubImages_Vertical_MetaData), NewProp_SubImages_Vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime = { "RandomImageTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, RandomImageTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomImageTime_MetaData), NewProp_RandomImageTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges = { "RandomImageChanges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, RandomImageChanges), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomImageChanges_MetaData), NewProp_RandomImageChanges_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition = { "MacroUVPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, MacroUVPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MacroUVPosition_MetaData), NewProp_MacroUVPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius = { "MacroUVRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, MacroUVRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MacroUVRadius_MetaData), NewProp_MacroUVRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode = { "UVFlippingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, UVFlippingMode), Z_Construct_UEnum_Engine_EParticleUVFlipMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVFlippingMode_MetaData), NewProp_UVFlippingMode_MetaData) }; // 1972569997
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode = { "BoundingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, BoundingMode), Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingMode_MetaData), NewProp_BoundingMode_MetaData) }; // 2005718847
void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_SetBit(void* Obj)
{
	((UParticleModuleRequired*)Obj)->bDurationRecalcEachLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop = { "bDurationRecalcEachLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDurationRecalcEachLoop_MetaData), NewProp_bDurationRecalcEachLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter = { "NormalsSphereCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, NormalsSphereCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalsSphereCenter_MetaData), NewProp_NormalsSphereCenter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold = { "AlphaThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, AlphaThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaThreshold_MetaData), NewProp_AlphaThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops = { "EmitterLoops", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterLoops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterLoops_MetaData), NewProp_EmitterLoops_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture = { "CutoutTexture", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, CutoutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutoutTexture_MetaData), NewProp_CutoutTexture_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount = { "MaxDrawCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, MaxDrawCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDrawCount_MetaData), NewProp_MaxDrawCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow = { "EmitterDurationLow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterDurationLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterDurationLow_MetaData), NewProp_EmitterDurationLow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection = { "NormalsCylinderDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, NormalsCylinderDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalsCylinderDirection_MetaData), NewProp_NormalsCylinderDirection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_Inner = { "NamedMaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides = { "NamedMaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleRequired, NamedMaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamedMaterialOverrides_MetaData), NewProp_NamedMaterialOverrides_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleRequired_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bSupportLargeWorldCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideUseVelocityForMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseVelocityForMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleRequired_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRequired_Statics::ClassParams = {
	&UParticleModuleRequired::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleRequired_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleRequired_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleRequired()
{
	if (!Z_Registration_Info_UClass_UParticleModuleRequired.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRequired.OuterSingleton, Z_Construct_UClass_UParticleModuleRequired_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleRequired.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleRequired>()
{
	return UParticleModuleRequired::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRequired);
UParticleModuleRequired::~UParticleModuleRequired() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UParticleModuleRequired)
// End Class UParticleModuleRequired

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EParticleUVFlipMode_StaticEnum, TEXT("EParticleUVFlipMode"), &Z_Registration_Info_UEnum_EParticleUVFlipMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1972569997U) },
		{ EParticleSortMode_StaticEnum, TEXT("EParticleSortMode"), &Z_Registration_Info_UEnum_EParticleSortMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1447199867U) },
		{ EEmitterNormalsMode_StaticEnum, TEXT("EEmitterNormalsMode"), &Z_Registration_Info_UEnum_EEmitterNormalsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 745518929U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRequired, UParticleModuleRequired::StaticClass, TEXT("UParticleModuleRequired"), &Z_Registration_Info_UClass_UParticleModuleRequired, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRequired), 707537818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_933193858(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
