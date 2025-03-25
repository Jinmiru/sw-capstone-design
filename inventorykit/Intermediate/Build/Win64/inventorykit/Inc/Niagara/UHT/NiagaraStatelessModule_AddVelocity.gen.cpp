// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_AddVelocity() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENSM_VelocityType();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENSM_VelocityType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENSM_VelocityType;
static UEnum* ENSM_VelocityType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENSM_VelocityType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENSM_VelocityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENSM_VelocityType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENSM_VelocityType"));
	}
	return Z_Registration_Info_UEnum_ENSM_VelocityType.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENSM_VelocityType>()
{
	return ENSM_VelocityType_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENSM_VelocityType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FromPoint.Comment", "// Velocity Min / Max -> Velocity Speed Scale\n" },
		{ "FromPoint.Name", "ENSM_VelocityType::FromPoint" },
		{ "FromPoint.ToolTip", "Velocity Min / Max -> Velocity Speed Scale" },
		{ "InCone.Comment", "// Min / Max / Origin\n" },
		{ "InCone.Name", "ENSM_VelocityType::InCone" },
		{ "InCone.ToolTip", "Min / Max / Origin" },
		{ "Linear.Name", "ENSM_VelocityType::Linear" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENSM_VelocityType::Linear", (int64)ENSM_VelocityType::Linear },
		{ "ENSM_VelocityType::FromPoint", (int64)ENSM_VelocityType::FromPoint },
		{ "ENSM_VelocityType::InCone", (int64)ENSM_VelocityType::InCone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENSM_VelocityType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENSM_VelocityType",
	"ENSM_VelocityType",
	Z_Construct_UEnum_Niagara_ENSM_VelocityType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENSM_VelocityType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENSM_VelocityType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENSM_VelocityType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENSM_VelocityType()
{
	if (!Z_Registration_Info_UEnum_ENSM_VelocityType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENSM_VelocityType.InnerSingleton, Z_Construct_UEnum_Niagara_ENSM_VelocityType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENSM_VelocityType.InnerSingleton;
}
// End Enum ENSM_VelocityType

// Begin Class UNiagaraStatelessModule_AddVelocity
void UNiagaraStatelessModule_AddVelocity::StaticRegisterNativesUNiagaraStatelessModule_AddVelocity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_AddVelocity);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_NoRegister()
{
	return UNiagaraStatelessModule_AddVelocity::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Add Velocity" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityType_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableBindingDistribution", "" },
		{ "DisableUniformDistribution", "" },
		{ "DisplayName", "Velocity" },
		{ "EditCondition", "VelocityType == ENSM_VelocityType::Linear" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityScale_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Velocity Scale" },
		{ "EditCondition", "VelocityType == ENSM_VelocityType::Linear" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeVelocityDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableBindingDistribution", "" },
		{ "DisplayName", "Cone Velocity" },
		{ "EditCondition", "VelocityType == ENSM_VelocityType::InCone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeRotation_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "VelocityType == ENSM_VelocityType::InCone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeAngle_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "VelocityType == ENSM_VelocityType::InCone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerCone_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "VelocityType == ENSM_VelocityType::InCone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointVelocityDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisableBindingDistribution", "" },
		{ "DisplayName", "Point Velocity" },
		{ "EditCondition", "VelocityType == ENSM_VelocityType::FromPoint" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointOrigin_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "VelocityType == ENSM_VelocityType::FromPoint" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpeedFalloffFromConeAxisEnabled_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "VelocityType == ENSM_VelocityType::InCone" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedFalloffFromConeAxis_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bSpeedFalloffFromConeAxisEnabled && VelocityType == ENSM_VelocityType::InCone" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_AddVelocity.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VelocityType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocityDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearVelocityScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConeVelocityDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConeRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerCone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointVelocityDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointOrigin;
	static void NewProp_bSpeedFalloffFromConeAxisEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpeedFalloffFromConeAxisEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedFalloffFromConeAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_AddVelocity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_VelocityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_VelocityType = { "VelocityType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AddVelocity, VelocityType), Z_Construct_UEnum_Niagara_ENSM_VelocityType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityType_MetaData), NewProp_VelocityType_MetaData) }; // 1555639613
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_LinearVelocityDistribution = { "LinearVelocityDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AddVelocity, LinearVelocityDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocityDistribution_MetaData), NewProp_LinearVelocityDistribution_MetaData) }; // 196473061
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_LinearVelocityScale = { "LinearVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AddVelocity, LinearVelocityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocityScale_MetaData), NewProp_LinearVelocityScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_ConeVelocityDistribution = { "ConeVelocityDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AddVelocity, ConeVelocityDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeVelocityDistribution_MetaData), NewProp_ConeVelocityDistribution_MetaData) }; // 1814083401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_ConeRotation = { "ConeRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AddVelocity, ConeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeRotation_MetaData), NewProp_ConeRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_ConeAngle = { "ConeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AddVelocity, ConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeAngle_MetaData), NewProp_ConeAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_InnerCone = { "InnerCone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AddVelocity, InnerCone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerCone_MetaData), NewProp_InnerCone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_PointVelocityDistribution = { "PointVelocityDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AddVelocity, PointVelocityDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointVelocityDistribution_MetaData), NewProp_PointVelocityDistribution_MetaData) }; // 1814083401
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_PointOrigin = { "PointOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AddVelocity, PointOrigin), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointOrigin_MetaData), NewProp_PointOrigin_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_bSpeedFalloffFromConeAxisEnabled_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_AddVelocity*)Obj)->bSpeedFalloffFromConeAxisEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_bSpeedFalloffFromConeAxisEnabled = { "bSpeedFalloffFromConeAxisEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStatelessModule_AddVelocity), &Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_bSpeedFalloffFromConeAxisEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpeedFalloffFromConeAxisEnabled_MetaData), NewProp_bSpeedFalloffFromConeAxisEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_SpeedFalloffFromConeAxis = { "SpeedFalloffFromConeAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_AddVelocity, SpeedFalloffFromConeAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedFalloffFromConeAxis_MetaData), NewProp_SpeedFalloffFromConeAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_VelocityType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_VelocityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_LinearVelocityDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_LinearVelocityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_ConeVelocityDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_ConeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_ConeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_InnerCone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_PointVelocityDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_PointOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_bSpeedFalloffFromConeAxisEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::NewProp_SpeedFalloffFromConeAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::ClassParams = {
	&UNiagaraStatelessModule_AddVelocity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_AddVelocity>()
{
	return UNiagaraStatelessModule_AddVelocity::StaticClass();
}
UNiagaraStatelessModule_AddVelocity::UNiagaraStatelessModule_AddVelocity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_AddVelocity);
UNiagaraStatelessModule_AddVelocity::~UNiagaraStatelessModule_AddVelocity() {}
// End Class UNiagaraStatelessModule_AddVelocity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENSM_VelocityType_StaticEnum, TEXT("ENSM_VelocityType"), &Z_Registration_Info_UEnum_ENSM_VelocityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1555639613U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity, UNiagaraStatelessModule_AddVelocity::StaticClass, TEXT("UNiagaraStatelessModule_AddVelocity"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_AddVelocity), 1660362358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_865503597(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
