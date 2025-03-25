// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataAnimTrail() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleTypeDataAnimTrail
void UParticleModuleTypeDataAnimTrail::StaticRegisterNativesUParticleModuleTypeDataAnimTrail()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTypeDataAnimTrail);
UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_NoRegister()
{
	return UParticleModuleTypeDataAnimTrail::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "AnimTrail Data" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeadTrailsOnDeactivate_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** \n\x09 *\x09If true, when the system is deactivated, mark trails as dead.\n\x09 *\x09This means they will still render, but will not have more particles\n\x09 *\x09""added to them, even if the system re-activates...\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "If true, when the system is deactivated, mark trails as dead.\nThis means they will still render, but will not have more particles\nadded to them, even if the system re-activates..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePreviousTangentRecalculation_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** If true, recalculate the previous tangent when a new particle is spawned */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "If true, recalculate the previous tangent when a new particle is spawned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTangentRecalculationEveryFrame_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** If true, recalculate tangents every frame to allow velocity/acceleration to be applied */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "If true, recalculate tangents every frame to allow velocity/acceleration to be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilingDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 *\x09The (estimated) covered distance to tile the 2nd UV set at.\n\x09 *\x09If 0.0, a second UV set will not be passed in.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "The (estimated) covered distance to tile the 2nd UV set at.\nIf 0.0, a second UV set will not be passed in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceTessellationStepSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 *\x09The distance step size for tessellation.\n\x09 *\x09# Tessellation Points = TruncToInt((Distance Between Spawned Particles) / DistanceTessellationStepSize)). If 0 then there is no distance tessellation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "The distance step size for tessellation.\n# Tessellation Points = TruncToInt((Distance Between Spawned Particles) / DistanceTessellationStepSize)). If 0 then there is no distance tessellation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentTessellationStepSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 *\x09The tangent scalar for tessellation.\n\x09 *\x09This is the degree change in the tangent direction [0...180] required to warrant an additional tessellation point. If 0 then there is no tangent tessellation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "The tangent scalar for tessellation.\nThis is the degree change in the tangent direction [0...180] required to warrant an additional tessellation point. If 0 then there is no tangent tessellation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidthTessellationStepSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 *\x09The width step size for tessellation.\n\x09 *\x09This is the number of world units change in the width required to warrant an additional tessellation point. If 0 then there is no width tessellation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "The width step size for tessellation.\nThis is the number of world units change in the width required to warrant an additional tessellation point. If 0 then there is no width tessellation." },
	};
#endif // WITH_METADATA
	static void NewProp_bDeadTrailsOnDeactivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeadTrailsOnDeactivate;
	static void NewProp_bEnablePreviousTangentRecalculation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePreviousTangentRecalculation;
	static void NewProp_bTangentRecalculationEveryFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTangentRecalculationEveryFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TilingDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceTessellationStepSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentTessellationStepSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WidthTessellationStepSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataAnimTrail>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate_SetBit(void* Obj)
{
	((UParticleModuleTypeDataAnimTrail*)Obj)->bDeadTrailsOnDeactivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate = { "bDeadTrailsOnDeactivate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataAnimTrail), &Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeadTrailsOnDeactivate_MetaData), NewProp_bDeadTrailsOnDeactivate_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation_SetBit(void* Obj)
{
	((UParticleModuleTypeDataAnimTrail*)Obj)->bEnablePreviousTangentRecalculation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation = { "bEnablePreviousTangentRecalculation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataAnimTrail), &Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePreviousTangentRecalculation_MetaData), NewProp_bEnablePreviousTangentRecalculation_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame_SetBit(void* Obj)
{
	((UParticleModuleTypeDataAnimTrail*)Obj)->bTangentRecalculationEveryFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame = { "bTangentRecalculationEveryFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataAnimTrail), &Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTangentRecalculationEveryFrame_MetaData), NewProp_bTangentRecalculationEveryFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TilingDistance = { "TilingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, TilingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilingDistance_MetaData), NewProp_TilingDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_DistanceTessellationStepSize = { "DistanceTessellationStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, DistanceTessellationStepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceTessellationStepSize_MetaData), NewProp_DistanceTessellationStepSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TangentTessellationStepSize = { "TangentTessellationStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, TangentTessellationStepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentTessellationStepSize_MetaData), NewProp_TangentTessellationStepSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_WidthTessellationStepSize = { "WidthTessellationStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, WidthTessellationStepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidthTessellationStepSize_MetaData), NewProp_WidthTessellationStepSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TilingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_DistanceTessellationStepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TangentTessellationStepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_WidthTessellationStepSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::ClassParams = {
	&UParticleModuleTypeDataAnimTrail::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail()
{
	if (!Z_Registration_Info_UClass_UParticleModuleTypeDataAnimTrail.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTypeDataAnimTrail.OuterSingleton, Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleTypeDataAnimTrail.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataAnimTrail>()
{
	return UParticleModuleTypeDataAnimTrail::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataAnimTrail);
UParticleModuleTypeDataAnimTrail::~UParticleModuleTypeDataAnimTrail() {}
// End Class UParticleModuleTypeDataAnimTrail

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataAnimTrail_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTypeDataAnimTrail, UParticleModuleTypeDataAnimTrail::StaticClass, TEXT("UParticleModuleTypeDataAnimTrail"), &Z_Registration_Info_UClass_UParticleModuleTypeDataAnimTrail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTypeDataAnimTrail), 1609149233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataAnimTrail_h_3816197567(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataAnimTrail_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataAnimTrail_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
