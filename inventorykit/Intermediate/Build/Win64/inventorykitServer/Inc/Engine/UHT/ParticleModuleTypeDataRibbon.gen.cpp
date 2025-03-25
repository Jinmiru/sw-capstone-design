// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataRibbon() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrailsRenderAxisOption();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ETrailsRenderAxisOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrailsRenderAxisOption;
static UEnum* ETrailsRenderAxisOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrailsRenderAxisOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrailsRenderAxisOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrailsRenderAxisOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETrailsRenderAxisOption"));
	}
	return Z_Registration_Info_UEnum_ETrailsRenderAxisOption.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETrailsRenderAxisOption>()
{
	return ETrailsRenderAxisOption_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "Trails_CameraUp.DisplayName", "Camera Up" },
		{ "Trails_CameraUp.Name", "Trails_CameraUp" },
		{ "Trails_MAX.Name", "Trails_MAX" },
		{ "Trails_SourceUp.DisplayName", "Source Up" },
		{ "Trails_SourceUp.Name", "Trails_SourceUp" },
		{ "Trails_WorldUp.DisplayName", "World Up" },
		{ "Trails_WorldUp.Name", "Trails_WorldUp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Trails_CameraUp", (int64)Trails_CameraUp },
		{ "Trails_SourceUp", (int64)Trails_SourceUp },
		{ "Trails_WorldUp", (int64)Trails_WorldUp },
		{ "Trails_MAX", (int64)Trails_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETrailsRenderAxisOption",
	"ETrailsRenderAxisOption",
	Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETrailsRenderAxisOption()
{
	if (!Z_Registration_Info_UEnum_ETrailsRenderAxisOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrailsRenderAxisOption.InnerSingleton, Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrailsRenderAxisOption.InnerSingleton;
}
// End Enum ETrailsRenderAxisOption

// Begin Class UParticleModuleTypeDataRibbon
void UParticleModuleTypeDataRibbon::StaticRegisterNativesUParticleModuleTypeDataRibbon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTypeDataRibbon);
UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister()
{
	return UParticleModuleTypeDataRibbon::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Ribbon Data" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTessellationBetweenParticles_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The maximum amount to tessellate between two particles of the trail. \n\x09 *\x09""Depending on the distance between the particles and the tangent change, the \n\x09 *\x09system will select a number of tessellation points \n\x09 *\x09\x09[0..MaxTessellationBetweenParticles]\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The maximum amount to tessellate between two particles of the trail.\nDepending on the distance between the particles and the tangent change, the\nsystem will select a number of tessellation points\n        [0..MaxTessellationBetweenParticles]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SheetsPerTrail_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/**\n\x09 *\x09The number of sheets to render for the trail.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The number of sheets to render for the trail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTrailCount_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** The number of live trails\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The number of live trails" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxParticleInTrailCount_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** Max particles per trail\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "Max particles per trail" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeadTrailsOnDeactivate_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** \n\x09 *\x09If true, when the system is deactivated, mark trails as dead.\n\x09 *\x09This means they will still render, but will not have more particles\n\x09 *\x09""added to them, even if the system re-activates...\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, when the system is deactivated, mark trails as dead.\nThis means they will still render, but will not have more particles\nadded to them, even if the system re-activates..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeadTrailsOnSourceLoss_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/**\n\x09 *\x09If true, when the source of a trail is 'lost' (ie, the source particle\n\x09 *\x09""dies), mark the current trail as dead.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, when the source of a trail is 'lost' (ie, the source particle\ndies), mark the current trail as dead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClipSourceSegement_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** If true, do not join the trail to the source position \x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, do not join the trail to the source position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePreviousTangentRecalculation_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** If true, recalculate the previous tangent when a new particle is spawned */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, recalculate the previous tangent when a new particle is spawned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTangentRecalculationEveryFrame_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** If true, recalculate tangents every frame to allow velocity/acceleration to be applied */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, recalculate tangents every frame to allow velocity/acceleration to be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnInitialParticle_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** If true, ribbon will spawn a particle when it first starts moving */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, ribbon will spawn a particle when it first starts moving" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderAxis_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** \n\x09 *\x09The 'render' axis for the trail (what axis the trail is stretched out on)\n\x09 *\x09\x09Trails_CameraUp - Traditional camera-facing trail.\n\x09 *\x09\x09Trails_SourceUp - Use the up axis of the source for each spawned particle.\n\x09 *\x09\x09Trails_WorldUp  - Use the world up axis.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The 'render' axis for the trail (what axis the trail is stretched out on)\n        Trails_CameraUp - Traditional camera-facing trail.\n        Trails_SourceUp - Use the up axis of the source for each spawned particle.\n        Trails_WorldUp  - Use the world up axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentSpawningScalar_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/**\n\x09 *\x09The tangent scalar for spawning.\n\x09 *\x09""Angles between tangent A and B are mapped to [0.0f .. 1.0f]\n\x09 *\x09This is then multiplied by TangentTessellationScalar to give the number of particles to spawn\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The tangent scalar for spawning.\nAngles between tangent A and B are mapped to [0.0f .. 1.0f]\nThis is then multiplied by TangentTessellationScalar to give the number of particles to spawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderGeometry_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, render the trail geometry (this should typically be on) */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, render the trail geometry (this should typically be on)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderSpawnPoints_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, render stars at each spawned particle point along the trail */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, render stars at each spawned particle point along the trail" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderTangents_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, render a line showing the tangent at each spawned particle point along the trail */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, render a line showing the tangent at each spawned particle point along the trail" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderTessellation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, render the tessellated path between spawned particles */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, render the tessellated path between spawned particles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilingDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 *\x09The (estimated) covered distance to tile the 2nd UV set at.\n\x09 *\x09If 0.0, a second UV set will not be passed in.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The (estimated) covered distance to tile the 2nd UV set at.\nIf 0.0, a second UV set will not be passed in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceTessellationStepSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 *\x09The distance step size for tessellation.\n\x09 *\x09# Tessellation Points = TruncToInt((Distance Between Spawned Particles) / DistanceTessellationStepSize))\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The distance step size for tessellation.\n# Tessellation Points = TruncToInt((Distance Between Spawned Particles) / DistanceTessellationStepSize))" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTangentDiffInterpScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 *\x09If this flag is enabled, the system will scale the number of interpolated vertices\n\x09 *\x09""based on the difference in the tangents of neighboring particles.\n\x09 *\x09""Each pair of neighboring particles will compute the following CheckTangent value:\n\x09 *\x09\x09""CheckTangent = ((ParticleA Tangent DOT ParticleB Tangent) - 1.0f) * 0.5f\n\x09 *\x09If CheckTangent is LESS THAN 0.5, then the DistanceTessellationStepSize will be \n\x09 *\x09scaled based on the result. This will map so that from parallel to orthogonal \n\x09 *\x09(0..90 degrees) will scale from [0..1]. Anything greater than 90 degrees will clamp \n\x09 *\x09""at a scale of 1.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If this flag is enabled, the system will scale the number of interpolated vertices\nbased on the difference in the tangents of neighboring particles.\nEach pair of neighboring particles will compute the following CheckTangent value:\n        CheckTangent = ((ParticleA Tangent DOT ParticleB Tangent) - 1.0f) * 0.5f\nIf CheckTangent is LESS THAN 0.5, then the DistanceTessellationStepSize will be\nscaled based on the result. This will map so that from parallel to orthogonal\n(0..90 degrees) will scale from [0..1]. Anything greater than 90 degrees will clamp\nat a scale of 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentTessellationScalar_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 *\x09The tangent scalar for tessellation.\n\x09 *\x09""Angles between tangent A and B are mapped to [0.0f .. 1.0f]\n\x09 *\x09This is then multiplied by TangentTessellationScalar to give the number of points to tessellate\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The tangent scalar for tessellation.\nAngles between tangent A and B are mapped to [0.0f .. 1.0f]\nThis is then multiplied by TangentTessellationScalar to give the number of points to tessellate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTessellationBetweenParticles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SheetsPerTrail;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTrailCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxParticleInTrailCount;
	static void NewProp_bDeadTrailsOnDeactivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeadTrailsOnDeactivate;
	static void NewProp_bDeadTrailsOnSourceLoss_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeadTrailsOnSourceLoss;
	static void NewProp_bClipSourceSegement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClipSourceSegement;
	static void NewProp_bEnablePreviousTangentRecalculation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePreviousTangentRecalculation;
	static void NewProp_bTangentRecalculationEveryFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTangentRecalculationEveryFrame;
	static void NewProp_bSpawnInitialParticle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnInitialParticle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentSpawningScalar;
	static void NewProp_bRenderGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderGeometry;
	static void NewProp_bRenderSpawnPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderSpawnPoints;
	static void NewProp_bRenderTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderTangents;
	static void NewProp_bRenderTessellation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderTessellation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TilingDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceTessellationStepSize;
	static void NewProp_bEnableTangentDiffInterpScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTangentDiffInterpScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentTessellationScalar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataRibbon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTessellationBetweenParticles = { "MaxTessellationBetweenParticles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, MaxTessellationBetweenParticles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTessellationBetweenParticles_MetaData), NewProp_MaxTessellationBetweenParticles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_SheetsPerTrail = { "SheetsPerTrail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, SheetsPerTrail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SheetsPerTrail_MetaData), NewProp_SheetsPerTrail_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTrailCount = { "MaxTrailCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, MaxTrailCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTrailCount_MetaData), NewProp_MaxTrailCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxParticleInTrailCount = { "MaxParticleInTrailCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, MaxParticleInTrailCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxParticleInTrailCount_MetaData), NewProp_MaxParticleInTrailCount_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bDeadTrailsOnDeactivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate = { "bDeadTrailsOnDeactivate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeadTrailsOnDeactivate_MetaData), NewProp_bDeadTrailsOnDeactivate_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bDeadTrailsOnSourceLoss = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss = { "bDeadTrailsOnSourceLoss", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeadTrailsOnSourceLoss_MetaData), NewProp_bDeadTrailsOnSourceLoss_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bClipSourceSegement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement = { "bClipSourceSegement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClipSourceSegement_MetaData), NewProp_bClipSourceSegement_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bEnablePreviousTangentRecalculation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation = { "bEnablePreviousTangentRecalculation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePreviousTangentRecalculation_MetaData), NewProp_bEnablePreviousTangentRecalculation_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bTangentRecalculationEveryFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame = { "bTangentRecalculationEveryFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTangentRecalculationEveryFrame_MetaData), NewProp_bTangentRecalculationEveryFrame_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bSpawnInitialParticle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle = { "bSpawnInitialParticle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnInitialParticle_MetaData), NewProp_bSpawnInitialParticle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_RenderAxis = { "RenderAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, RenderAxis), Z_Construct_UEnum_Engine_ETrailsRenderAxisOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderAxis_MetaData), NewProp_RenderAxis_MetaData) }; // 1078385934
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentSpawningScalar = { "TangentSpawningScalar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, TangentSpawningScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentSpawningScalar_MetaData), NewProp_TangentSpawningScalar_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bRenderGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry = { "bRenderGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderGeometry_MetaData), NewProp_bRenderGeometry_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bRenderSpawnPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints = { "bRenderSpawnPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderSpawnPoints_MetaData), NewProp_bRenderSpawnPoints_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bRenderTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents = { "bRenderTangents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderTangents_MetaData), NewProp_bRenderTangents_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bRenderTessellation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation = { "bRenderTessellation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderTessellation_MetaData), NewProp_bRenderTessellation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TilingDistance = { "TilingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, TilingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilingDistance_MetaData), NewProp_TilingDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_DistanceTessellationStepSize = { "DistanceTessellationStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, DistanceTessellationStepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceTessellationStepSize_MetaData), NewProp_DistanceTessellationStepSize_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale_SetBit(void* Obj)
{
	((UParticleModuleTypeDataRibbon*)Obj)->bEnableTangentDiffInterpScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale = { "bEnableTangentDiffInterpScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTangentDiffInterpScale_MetaData), NewProp_bEnableTangentDiffInterpScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentTessellationScalar = { "TangentTessellationScalar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, TangentTessellationScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentTessellationScalar_MetaData), NewProp_TangentTessellationScalar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTessellationBetweenParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_SheetsPerTrail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTrailCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxParticleInTrailCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_RenderAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentSpawningScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TilingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_DistanceTessellationStepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentTessellationScalar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::ClassParams = {
	&UParticleModuleTypeDataRibbon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon()
{
	if (!Z_Registration_Info_UClass_UParticleModuleTypeDataRibbon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTypeDataRibbon.OuterSingleton, Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleTypeDataRibbon.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataRibbon>()
{
	return UParticleModuleTypeDataRibbon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataRibbon);
UParticleModuleTypeDataRibbon::~UParticleModuleTypeDataRibbon() {}
// End Class UParticleModuleTypeDataRibbon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETrailsRenderAxisOption_StaticEnum, TEXT("ETrailsRenderAxisOption"), &Z_Registration_Info_UEnum_ETrailsRenderAxisOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1078385934U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTypeDataRibbon, UParticleModuleTypeDataRibbon::StaticClass, TEXT("UParticleModuleTypeDataRibbon"), &Z_Registration_Info_UClass_UParticleModuleTypeDataRibbon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTypeDataRibbon), 3175109725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_2778885956(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
