// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamModifier.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamModifier() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamModifier();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_BeamModifierType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBeamModifierOptions();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum BeamModifierType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_BeamModifierType;
static UEnum* BeamModifierType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_BeamModifierType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_BeamModifierType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_BeamModifierType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BeamModifierType"));
	}
	return Z_Registration_Info_UEnum_BeamModifierType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<BeamModifierType>()
{
	return BeamModifierType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_BeamModifierType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\x09What to modify. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "PEB2MT_MAX.Name", "PEB2MT_MAX" },
		{ "PEB2MT_Source.Comment", "/** Modify the source of the beam.\x09\x09\x09\x09*/" },
		{ "PEB2MT_Source.DisplayName", "Source" },
		{ "PEB2MT_Source.Name", "PEB2MT_Source" },
		{ "PEB2MT_Source.ToolTip", "Modify the source of the beam." },
		{ "PEB2MT_Target.Comment", "/** Modify the target of the beam.\x09\x09\x09\x09*/" },
		{ "PEB2MT_Target.DisplayName", "Target" },
		{ "PEB2MT_Target.Name", "PEB2MT_Target" },
		{ "PEB2MT_Target.ToolTip", "Modify the target of the beam." },
		{ "ToolTip", "What to modify." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PEB2MT_Source", (int64)PEB2MT_Source },
		{ "PEB2MT_Target", (int64)PEB2MT_Target },
		{ "PEB2MT_MAX", (int64)PEB2MT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_BeamModifierType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"BeamModifierType",
	"BeamModifierType",
	Z_Construct_UEnum_Engine_BeamModifierType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_BeamModifierType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_BeamModifierType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_BeamModifierType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_BeamModifierType()
{
	if (!Z_Registration_Info_UEnum_BeamModifierType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_BeamModifierType.InnerSingleton, Z_Construct_UEnum_Engine_BeamModifierType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_BeamModifierType.InnerSingleton;
}
// End Enum BeamModifierType

// Begin ScriptStruct FBeamModifierOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BeamModifierOptions;
class UScriptStruct* FBeamModifierOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BeamModifierOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BeamModifierOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeamModifierOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BeamModifierOptions"));
	}
	return Z_Registration_Info_UScriptStruct_BeamModifierOptions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBeamModifierOptions>()
{
	return FBeamModifierOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBeamModifierOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModify_MetaData[] = {
		{ "Category", "BeamModifierOptions" },
		{ "Comment", "/** If true, modify the value associated with this grouping.\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, modify the value associated with this grouping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScale_MetaData[] = {
		{ "Category", "BeamModifierOptions" },
		{ "Comment", "/** If true, scale the associated value by the given value.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, scale the associated value by the given value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLock_MetaData[] = {
		{ "Category", "BeamModifierOptions" },
		{ "Comment", "/** If true, lock the modifier to the life of the particle.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, lock the modifier to the life of the particle." },
	};
#endif // WITH_METADATA
	static void NewProp_bModify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModify;
	static void NewProp_bScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScale;
	static void NewProp_bLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeamModifierOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_SetBit(void* Obj)
{
	((FBeamModifierOptions*)Obj)->bModify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify = { "bModify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBeamModifierOptions), &Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModify_MetaData), NewProp_bModify_MetaData) };
void Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_SetBit(void* Obj)
{
	((FBeamModifierOptions*)Obj)->bScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale = { "bScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBeamModifierOptions), &Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScale_MetaData), NewProp_bScale_MetaData) };
void Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_SetBit(void* Obj)
{
	((FBeamModifierOptions*)Obj)->bLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock = { "bLock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBeamModifierOptions), &Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLock_MetaData), NewProp_bLock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BeamModifierOptions",
	Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::PropPointers),
	sizeof(FBeamModifierOptions),
	alignof(FBeamModifierOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBeamModifierOptions()
{
	if (!Z_Registration_Info_UScriptStruct_BeamModifierOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BeamModifierOptions.InnerSingleton, Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BeamModifierOptions.InnerSingleton;
}
// End ScriptStruct FBeamModifierOptions

// Begin Class UParticleModuleBeamModifier
void UParticleModuleBeamModifier::StaticRegisterNativesUParticleModuleBeamModifier()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleBeamModifier);
UClass* Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister()
{
	return UParticleModuleBeamModifier::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleBeamModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Beam Modifier" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierType_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/**\x09Whether this module modifies the Source or the Target. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "Whether this module modifies the Source or the Target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionOptions_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "/** The options associated with the position.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The options associated with the position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "/** The value to use when modifying the position.\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The value to use when modifying the position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentOptions_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** The options associated with the Tangent.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The options associated with the Tangent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** The value to use when modifying the Tangent.\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The value to use when modifying the Tangent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteTangent_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** If true, don't transform the tangent modifier into the tangent basis.\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, don't transform the tangent modifier into the tangent basis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthOptions_MetaData[] = {
		{ "Category", "Strength" },
		{ "Comment", "/** The options associated with the Strength.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The options associated with the Strength." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Strength" },
		{ "Comment", "/** The value to use when modifying the Strength.\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The value to use when modifying the Strength." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static void NewProp_bAbsoluteTangent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteTangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StrengthOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleBeamModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType = { "ModifierType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, ModifierType), Z_Construct_UEnum_Engine_BeamModifierType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierType_MetaData), NewProp_ModifierType_MetaData) }; // 879047134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions = { "PositionOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, PositionOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionOptions_MetaData), NewProp_PositionOptions_MetaData) }; // 1577940942
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, Position), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions = { "TangentOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, TangentOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentOptions_MetaData), NewProp_TangentOptions_MetaData) }; // 1577940942
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, Tangent), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangent_MetaData), NewProp_Tangent_MetaData) }; // 1238237137
void Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_SetBit(void* Obj)
{
	((UParticleModuleBeamModifier*)Obj)->bAbsoluteTangent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent = { "bAbsoluteTangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleBeamModifier), &Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteTangent_MetaData), NewProp_bAbsoluteTangent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions = { "StrengthOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, StrengthOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthOptions_MetaData), NewProp_StrengthOptions_MetaData) }; // 1577940942
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleBeamModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleBeamModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::ClassParams = {
	&UParticleModuleBeamModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleBeamModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleBeamModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleBeamModifier()
{
	if (!Z_Registration_Info_UClass_UParticleModuleBeamModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleBeamModifier.OuterSingleton, Z_Construct_UClass_UParticleModuleBeamModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleBeamModifier.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleBeamModifier>()
{
	return UParticleModuleBeamModifier::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamModifier);
UParticleModuleBeamModifier::~UParticleModuleBeamModifier() {}
// End Class UParticleModuleBeamModifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ BeamModifierType_StaticEnum, TEXT("BeamModifierType"), &Z_Registration_Info_UEnum_BeamModifierType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 879047134U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBeamModifierOptions::StaticStruct, Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewStructOps, TEXT("BeamModifierOptions"), &Z_Registration_Info_UScriptStruct_BeamModifierOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBeamModifierOptions), 1577940942U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleBeamModifier, UParticleModuleBeamModifier::StaticClass, TEXT("UParticleModuleBeamModifier"), &Z_Registration_Info_UClass_UParticleModuleBeamModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleBeamModifier), 515219921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_2328605840(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
