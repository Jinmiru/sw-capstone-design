// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterial() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PHYSICSCORE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
PHYSICSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier();
PHYSICSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialStrength();
UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References

// Begin ScriptStruct FPhysicalMaterialStrength
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicalMaterialStrength;
class UScriptStruct* FPhysicalMaterialStrength::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialStrength.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicalMaterialStrength.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalMaterialStrength, (UObject*)Z_Construct_UPackage__Script_PhysicsCore(), TEXT("PhysicalMaterialStrength"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicalMaterialStrength.OuterSingleton;
}
template<> PHYSICSCORE_API UScriptStruct* StaticStruct<FPhysicalMaterialStrength>()
{
	return FPhysicalMaterialStrength::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines the directional strengths of a physical material in term of force per surface area\n */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Defines the directional strengths of a physical material in term of force per surface area" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensileStrength_MetaData[] = {
		{ "Category", "PhysicalMaterial|Strength" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Tensile strength of the material in MegaPascal ( 10^6 N/m2 )\n\x09* This amount of tension force per area the material can withstand before it fractures\n\x09*/" },
		{ "ForceUnits", "MPa" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Tensile strength of the material in MegaPascal ( 10^6 N/m2 )\nThis amount of tension force per area the material can withstand before it fractures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionStrength_MetaData[] = {
		{ "Category", "PhysicalMaterial|Strength" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Compression strength of the material in MegaPascal ( 10^6 N/m2 )\n\x09* This amount of compression force per area the material can withstand before it fractures, crumbles or buckles\n\x09*/" },
		{ "ForceUnits", "MPa" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Compression strength of the material in MegaPascal ( 10^6 N/m2 )\nThis amount of compression force per area the material can withstand before it fractures, crumbles or buckles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShearStrength_MetaData[] = {
		{ "Category", "PhysicalMaterial|Strength" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Shear strength of the material in MegaPascal ( 10^6 N/m2 )\n\x09* This amount of shear force per area the material can withstand before it fractures\n\x09*/" },
		{ "ForceUnits", "MPa" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Shear strength of the material in MegaPascal ( 10^6 N/m2 )\nThis amount of shear force per area the material can withstand before it fractures" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TensileStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressionStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShearStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalMaterialStrength>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::NewProp_TensileStrength = { "TensileStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalMaterialStrength, TensileStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensileStrength_MetaData), NewProp_TensileStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::NewProp_CompressionStrength = { "CompressionStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalMaterialStrength, CompressionStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionStrength_MetaData), NewProp_CompressionStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::NewProp_ShearStrength = { "ShearStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalMaterialStrength, ShearStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShearStrength_MetaData), NewProp_ShearStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::NewProp_TensileStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::NewProp_CompressionStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::NewProp_ShearStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
	nullptr,
	&NewStructOps,
	"PhysicalMaterialStrength",
	Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::PropPointers),
	sizeof(FPhysicalMaterialStrength),
	alignof(FPhysicalMaterialStrength),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialStrength()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialStrength.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicalMaterialStrength.InnerSingleton, Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicalMaterialStrength.InnerSingleton;
}
// End ScriptStruct FPhysicalMaterialStrength

// Begin ScriptStruct FPhysicalMaterialDamageModifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicalMaterialDamageModifier;
class UScriptStruct* FPhysicalMaterialDamageModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialDamageModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicalMaterialDamageModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier, (UObject*)Z_Construct_UPackage__Script_PhysicsCore(), TEXT("PhysicalMaterialDamageModifier"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicalMaterialDamageModifier.OuterSingleton;
}
template<> PHYSICSCORE_API UScriptStruct* StaticStruct<FPhysicalMaterialDamageModifier>()
{
	return FPhysicalMaterialDamageModifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Damage threshold modifiers, used by the Chaos destruction system\n */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Damage threshold modifiers, used by the Chaos destruction system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageThresholdMultiplier_MetaData[] = {
		{ "Category", "PhysicalMaterial|DamageModifier" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Multiplier for the geometry collection damage thresholds/ internal strain\n\x09* this allows for setting up unit damage threshold and use the material to scale them to the desired range of values\n\x09* Note that the geometry collection asset needs to opt-in for the material modifer to be able to use it \n\x09*/" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Multiplier for the geometry collection damage thresholds/ internal strain\nthis allows for setting up unit damage threshold and use the material to scale them to the desired range of values\nNote that the geometry collection asset needs to opt-in for the material modifer to be able to use it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageThresholdMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalMaterialDamageModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::NewProp_DamageThresholdMultiplier = { "DamageThresholdMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalMaterialDamageModifier, DamageThresholdMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageThresholdMultiplier_MetaData), NewProp_DamageThresholdMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::NewProp_DamageThresholdMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
	nullptr,
	&NewStructOps,
	"PhysicalMaterialDamageModifier",
	Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::PropPointers),
	sizeof(FPhysicalMaterialDamageModifier),
	alignof(FPhysicalMaterialDamageModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialDamageModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicalMaterialDamageModifier.InnerSingleton, Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicalMaterialDamageModifier.InnerSingleton;
}
// End ScriptStruct FPhysicalMaterialDamageModifier

// Begin Enum EPhysicalMaterialSoftCollisionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode;
static UEnum* EPhysicalMaterialSoftCollisionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode, (UObject*)Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EPhysicalMaterialSoftCollisionMode"));
	}
	return Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.OuterSingleton;
}
template<> PHYSICSCORE_API UEnum* StaticEnum<EPhysicalMaterialSoftCollisionMode>()
{
	return EPhysicalMaterialSoftCollisionMode_StaticEnum();
}
struct Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbsoluteThickess.Comment", "// SoftCollisionThickess is an absolute value in cm\n" },
		{ "AbsoluteThickess.Name", "EPhysicalMaterialSoftCollisionMode::AbsoluteThickess" },
		{ "AbsoluteThickess.ToolTip", "SoftCollisionThickess is an absolute value in cm" },
		{ "Comment", "/**\n* Soft collision mode for a physical material.\n* \n* NOTE: Must match EChaosPhysicsMaterialSoftCollisionMode\n*/" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "None.Comment", "// No soft collisionss\n" },
		{ "None.Name", "EPhysicalMaterialSoftCollisionMode::None" },
		{ "None.ToolTip", "No soft collisionss" },
		{ "RelativeThickness.Comment", "// SoftCollisionThickess is a fraction of the bounds (minimum axis). Should be less than 0.5\n" },
		{ "RelativeThickness.Name", "EPhysicalMaterialSoftCollisionMode::RelativeThickness" },
		{ "RelativeThickness.ToolTip", "SoftCollisionThickess is a fraction of the bounds (minimum axis). Should be less than 0.5" },
		{ "ToolTip", "Soft collision mode for a physical material.\n\nNOTE: Must match EChaosPhysicsMaterialSoftCollisionMode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPhysicalMaterialSoftCollisionMode::None", (int64)EPhysicalMaterialSoftCollisionMode::None },
		{ "EPhysicalMaterialSoftCollisionMode::RelativeThickness", (int64)EPhysicalMaterialSoftCollisionMode::RelativeThickness },
		{ "EPhysicalMaterialSoftCollisionMode::AbsoluteThickess", (int64)EPhysicalMaterialSoftCollisionMode::AbsoluteThickess },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
	nullptr,
	"EPhysicalMaterialSoftCollisionMode",
	"EPhysicalMaterialSoftCollisionMode",
	Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode()
{
	if (!Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.InnerSingleton, Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode.InnerSingleton;
}
// End Enum EPhysicalMaterialSoftCollisionMode

// Begin Class UPhysicalMaterial
void UPhysicalMaterial::StaticRegisterNativesUPhysicalMaterial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicalMaterial);
UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister()
{
	return UPhysicalMaterial::StaticClass();
}
struct Z_Construct_UClass_UPhysicalMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Physical materials are used to define the response of a physical object when interacting dynamically with the world.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/PhysicalMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Physical materials are used to define the response of a physical object when interacting dynamically with the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Friction value of surface, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction) */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Friction value of surface, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticFriction_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Static Friction value of surface, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction) */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Static Friction value of surface, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrictionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Friction combine mode, controls how friction is computed for multiple materials. */" },
		{ "editcondition", "bOverrideFrictionCombineMode" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Friction combine mode, controls how friction is computed for multiple materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFrictionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** If set we will use the FrictionCombineMode of this material, instead of the FrictionCombineMode found in the project settings. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "If set we will use the FrictionCombineMode of this material, instead of the FrictionCombineMode found in the project settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Restitution_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming). */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestitutionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Restitution combine mode, controls how restitution is computed for multiple materials. */" },
		{ "editcondition", "bOverrideRestitutionCombineMode" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Restitution combine mode, controls how restitution is computed for multiple materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRestitutionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** If set we will use the RestitutionCombineMode of this material, instead of the RestitutionCombineMode found in the project settings. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "If set we will use the RestitutionCombineMode of this material, instead of the RestitutionCombineMode found in the project settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Used with the shape of the object to calculate its mass properties. The higher the number, the heavier the object. g per cubic cm. */" },
		{ "ForceUnits", "g/cm3" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Used with the shape of the object to calculate its mass properties. The higher the number, the heavier the object. g per cubic cm." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SleepLinearVelocityThreshold_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/**  How low the linear velocity can be before solver puts body to sleep. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "How low the linear velocity can be before solver puts body to sleep." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SleepAngularVelocityThreshold_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How low the angular velocity can be before solver puts body to sleep. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "How low the angular velocity can be before solver puts body to sleep." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SleepCounterThreshold_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How many ticks we can be under thresholds for before solver puts body to sleep. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "How many ticks we can be under thresholds for before solver puts body to sleep." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RaiseMassToPower_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** \n\x09 *\x09Used to adjust the way that mass increases as objects get larger. This is applied to the mass as calculated based on a 'solid' object. \n\x09 *\x09In actuality, larger objects do not tend to be solid, and become more like 'shells' (e.g. a car is not a solid piece of metal).\n\x09 *\x09Values are clamped to 1 or less.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Used to adjust the way that mass increases as objects get larger. This is applied to the mass as calculated based on a 'solid' object.\nIn actuality, larger objects do not tend to be solid, and become more like 'shells' (e.g. a car is not a solid piece of metal).\nValues are clamped to 1 or less." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamageThresholdScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[] = {
		{ "Category", "PhysicalProperties" },
		{ "Comment", "/**\n\x09 * To edit surface type for your project, use ProjectSettings/Physics/PhysicalSurface section\n\x09*/" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "To edit surface type for your project, use ProjectSettings/Physics/PhysicalSurface section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "PhysicalProperties" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageModifier_MetaData[] = {
		{ "Category", "PhysicalProperties" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowExperimentalProperties_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Experimental material properties are enabled via the p.PhysicalMaterial.ShowExperimentalProperties console variable.\n\x09\x09NOTE: These are _experimental_ properties which may change. Use at your own risk! */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Experimental material properties are enabled via the p.PhysicalMaterial.ShowExperimentalProperties console variable.\n              NOTE: These are _experimental_ properties which may change. Use at your own risk!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftCollisionMode_MetaData[] = {
		{ "Category", "Experimental|Softness" },
		{ "Comment", "/** For enable soft collision shell thickness mode */" },
		{ "EditCondition", "bShowExperimentalProperties" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "For enable soft collision shell thickness mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftCollisionThickness_MetaData[] = {
		{ "Category", "Experimental|Softness" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Thickness of the layer just inside the collision shape in which contact is considered \"soft\".\n\x09\x09The units depend on SoftCollisionMode */" },
		{ "EditCondition", "bShowExperimentalProperties" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Thickness of the layer just inside the collision shape in which contact is considered \"soft\".\n              The units depend on SoftCollisionMode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseFrictionImpulse_MetaData[] = {
		{ "Category", "Experimental|Stickiness" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A friction (positional) impulse of at least this magnitude may be applied,\n\x09\x09regardless the normal force. This is analogous to adding only the lateral part of a\n\x09\x09\"stickiness\" to a material */" },
		{ "EditCondition", "bShowExperimentalProperties" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "A friction (positional) impulse of at least this magnitude may be applied,\n              regardless the normal force. This is analogous to adding only the lateral part of a\n              \"stickiness\" to a material" },
		{ "Units", "kgcm" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticFriction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FrictionCombineMode;
	static void NewProp_bOverrideFrictionCombineMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFrictionCombineMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Restitution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RestitutionCombineMode;
	static void NewProp_bOverrideRestitutionCombineMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRestitutionCombineMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepLinearVelocityThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepAngularVelocityThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SleepCounterThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RaiseMassToPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamageThresholdScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterialProperty;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageModifier;
	static void NewProp_bShowExperimentalProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowExperimentalProperties;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SoftCollisionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SoftCollisionMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftCollisionThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseFrictionImpulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_StaticFriction = { "StaticFriction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, StaticFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticFriction_MetaData), NewProp_StaticFriction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode = { "FrictionCombineMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, FrictionCombineMode), Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrictionCombineMode_MetaData), NewProp_FrictionCombineMode_MetaData) }; // 3087377135
void Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_SetBit(void* Obj)
{
	((UPhysicalMaterial*)Obj)->bOverrideFrictionCombineMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode = { "bOverrideFrictionCombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicalMaterial), &Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideFrictionCombineMode_MetaData), NewProp_bOverrideFrictionCombineMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution = { "Restitution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, Restitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Restitution_MetaData), NewProp_Restitution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode = { "RestitutionCombineMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, RestitutionCombineMode), Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestitutionCombineMode_MetaData), NewProp_RestitutionCombineMode_MetaData) }; // 3087377135
void Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_SetBit(void* Obj)
{
	((UPhysicalMaterial*)Obj)->bOverrideRestitutionCombineMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode = { "bOverrideRestitutionCombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicalMaterial), &Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRestitutionCombineMode_MetaData), NewProp_bOverrideRestitutionCombineMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, Density), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepLinearVelocityThreshold = { "SleepLinearVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, SleepLinearVelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SleepLinearVelocityThreshold_MetaData), NewProp_SleepLinearVelocityThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepAngularVelocityThreshold = { "SleepAngularVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, SleepAngularVelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SleepAngularVelocityThreshold_MetaData), NewProp_SleepAngularVelocityThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepCounterThreshold = { "SleepCounterThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, SleepCounterThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SleepCounterThreshold_MetaData), NewProp_SleepCounterThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower = { "RaiseMassToPower", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, RaiseMassToPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RaiseMassToPower_MetaData), NewProp_RaiseMassToPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale = { "DestructibleDamageThresholdScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, DestructibleDamageThresholdScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructibleDamageThresholdScale_MetaData), NewProp_DestructibleDamageThresholdScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty = { "PhysicalMaterialProperty", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, PhysicalMaterialProperty_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterialProperty_MetaData), NewProp_PhysicalMaterialProperty_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceType_MetaData), NewProp_SurfaceType_MetaData) }; // 161619406
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, Strength), Z_Construct_UScriptStruct_FPhysicalMaterialStrength, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 757124463
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DamageModifier = { "DamageModifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, DamageModifier), Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageModifier_MetaData), NewProp_DamageModifier_MetaData) }; // 2151307855
void Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bShowExperimentalProperties_SetBit(void* Obj)
{
	((UPhysicalMaterial*)Obj)->bShowExperimentalProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bShowExperimentalProperties = { "bShowExperimentalProperties", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicalMaterial), &Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bShowExperimentalProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowExperimentalProperties_MetaData), NewProp_bShowExperimentalProperties_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SoftCollisionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SoftCollisionMode = { "SoftCollisionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, SoftCollisionMode), Z_Construct_UEnum_PhysicsCore_EPhysicalMaterialSoftCollisionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftCollisionMode_MetaData), NewProp_SoftCollisionMode_MetaData) }; // 2173302474
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SoftCollisionThickness = { "SoftCollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, SoftCollisionThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftCollisionThickness_MetaData), NewProp_SoftCollisionThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_BaseFrictionImpulse = { "BaseFrictionImpulse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicalMaterial, BaseFrictionImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseFrictionImpulse_MetaData), NewProp_BaseFrictionImpulse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_StaticFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepLinearVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepAngularVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepCounterThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DamageModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bShowExperimentalProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SoftCollisionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SoftCollisionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SoftCollisionThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_BaseFrictionImpulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicalMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterial_Statics::ClassParams = {
	&UPhysicalMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicalMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::PropPointers),
	0,
	0x000820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicalMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicalMaterial()
{
	if (!Z_Registration_Info_UClass_UPhysicalMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicalMaterial.OuterSingleton, Z_Construct_UClass_UPhysicalMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicalMaterial.OuterSingleton;
}
template<> PHYSICSCORE_API UClass* StaticClass<UPhysicalMaterial>()
{
	return UPhysicalMaterial::StaticClass();
}
// End Class UPhysicalMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPhysicalMaterialSoftCollisionMode_StaticEnum, TEXT("EPhysicalMaterialSoftCollisionMode"), &Z_Registration_Info_UEnum_EPhysicalMaterialSoftCollisionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2173302474U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhysicalMaterialStrength::StaticStruct, Z_Construct_UScriptStruct_FPhysicalMaterialStrength_Statics::NewStructOps, TEXT("PhysicalMaterialStrength"), &Z_Registration_Info_UScriptStruct_PhysicalMaterialStrength, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicalMaterialStrength), 757124463U) },
		{ FPhysicalMaterialDamageModifier::StaticStruct, Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier_Statics::NewStructOps, TEXT("PhysicalMaterialDamageModifier"), &Z_Registration_Info_UScriptStruct_PhysicalMaterialDamageModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicalMaterialDamageModifier), 2151307855U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicalMaterial, UPhysicalMaterial::StaticClass, TEXT("UPhysicalMaterial"), &Z_Registration_Info_UClass_UPhysicalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicalMaterial), 1156030367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_3261775683(TEXT("/Script/PhysicsCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
