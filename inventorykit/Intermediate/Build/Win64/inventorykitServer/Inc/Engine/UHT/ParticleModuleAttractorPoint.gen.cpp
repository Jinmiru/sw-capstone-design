// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorPoint.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorPoint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPoint();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPoint_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleAttractorPoint
void UParticleModuleAttractorPoint::StaticRegisterNativesUParticleModuleAttractorPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAttractorPoint);
UClass* Z_Construct_UClass_UParticleModuleAttractorPoint_NoRegister()
{
	return UParticleModuleAttractorPoint::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleAttractorPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Point Attractor" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09The position of the point attractor from the source of the emitter.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "The position of the point attractor from the source of the emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09The radial range of the attractor.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "The radial range of the attractor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09The strength of the point attractor.\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "The strength of the point attractor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthByDistance_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09The strength curve is a function of distance or of time.\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "The strength curve is a function of distance or of time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectBaseVelocity_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09If true, the velocity adjustment will be applied to the base velocity.\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "If true, the velocity adjustment will be applied to the base velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideVelocity_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09If true, set the velocity.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "If true, set the velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpacePosition_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09If true, treat the position as world space.  So don't transform the the point to localspace. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "If true, treat the position as world space.  So don't transform the the point to localspace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positive_X_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the positive X axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the positive X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positive_Y_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the positive Y axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the positive Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positive_Z_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the positive Z axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the positive Z axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Negative_X_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the negative X axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the negative X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Negative_Y_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the negative Y axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the negative Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Negative_Z_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the negative Z axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the negative Z axis." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static void NewProp_StrengthByDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StrengthByDistance;
	static void NewProp_bAffectBaseVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectBaseVelocity;
	static void NewProp_bOverrideVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideVelocity;
	static void NewProp_bUseWorldSpacePosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpacePosition;
	static void NewProp_Positive_X_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_X;
	static void NewProp_Positive_Y_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_Y;
	static void NewProp_Positive_Z_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_Z;
	static void NewProp_Negative_X_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_X;
	static void NewProp_Negative_Y_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_Y;
	static void NewProp_Negative_Z_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_Z;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAttractorPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorPoint, Position), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorPoint, Range), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleAttractorPoint, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance_SetBit(void* Obj)
{
	((UParticleModuleAttractorPoint*)Obj)->StrengthByDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance = { "StrengthByDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthByDistance_MetaData), NewProp_StrengthByDistance_MetaData) };
void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity_SetBit(void* Obj)
{
	((UParticleModuleAttractorPoint*)Obj)->bAffectBaseVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity = { "bAffectBaseVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectBaseVelocity_MetaData), NewProp_bAffectBaseVelocity_MetaData) };
void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity_SetBit(void* Obj)
{
	((UParticleModuleAttractorPoint*)Obj)->bOverrideVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity = { "bOverrideVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideVelocity_MetaData), NewProp_bOverrideVelocity_MetaData) };
void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition_SetBit(void* Obj)
{
	((UParticleModuleAttractorPoint*)Obj)->bUseWorldSpacePosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition = { "bUseWorldSpacePosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorldSpacePosition_MetaData), NewProp_bUseWorldSpacePosition_MetaData) };
void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X_SetBit(void* Obj)
{
	((UParticleModuleAttractorPoint*)Obj)->Positive_X = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X = { "Positive_X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positive_X_MetaData), NewProp_Positive_X_MetaData) };
void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y_SetBit(void* Obj)
{
	((UParticleModuleAttractorPoint*)Obj)->Positive_Y = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y = { "Positive_Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positive_Y_MetaData), NewProp_Positive_Y_MetaData) };
void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z_SetBit(void* Obj)
{
	((UParticleModuleAttractorPoint*)Obj)->Positive_Z = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z = { "Positive_Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positive_Z_MetaData), NewProp_Positive_Z_MetaData) };
void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X_SetBit(void* Obj)
{
	((UParticleModuleAttractorPoint*)Obj)->Negative_X = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X = { "Negative_X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Negative_X_MetaData), NewProp_Negative_X_MetaData) };
void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y_SetBit(void* Obj)
{
	((UParticleModuleAttractorPoint*)Obj)->Negative_Y = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y = { "Negative_Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Negative_Y_MetaData), NewProp_Negative_Y_MetaData) };
void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z_SetBit(void* Obj)
{
	((UParticleModuleAttractorPoint*)Obj)->Negative_Z = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z = { "Negative_Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Negative_Z_MetaData), NewProp_Negative_Z_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::ClassParams = {
	&UParticleModuleAttractorPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleAttractorPoint()
{
	if (!Z_Registration_Info_UClass_UParticleModuleAttractorPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAttractorPoint.OuterSingleton, Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleAttractorPoint.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleAttractorPoint>()
{
	return UParticleModuleAttractorPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorPoint);
UParticleModuleAttractorPoint::~UParticleModuleAttractorPoint() {}
// End Class UParticleModuleAttractorPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAttractorPoint, UParticleModuleAttractorPoint::StaticClass, TEXT("UParticleModuleAttractorPoint"), &Z_Registration_Info_UClass_UParticleModuleAttractorPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAttractorPoint), 338054745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_3974034568(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
