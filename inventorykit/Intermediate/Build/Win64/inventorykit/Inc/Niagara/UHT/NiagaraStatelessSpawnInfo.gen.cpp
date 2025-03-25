// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessSpawnInfo.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessSpawnInfo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraStatelessSpawnInfoType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType;
static UEnum* ENiagaraStatelessSpawnInfoType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraStatelessSpawnInfoType"));
	}
	return Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStatelessSpawnInfoType>()
{
	return ENiagaraStatelessSpawnInfoType_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Burst.Name", "ENiagaraStatelessSpawnInfoType::Burst" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessSpawnInfo.h" },
		{ "Rate.Name", "ENiagaraStatelessSpawnInfoType::Rate" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraStatelessSpawnInfoType::Burst", (int64)ENiagaraStatelessSpawnInfoType::Burst },
		{ "ENiagaraStatelessSpawnInfoType::Rate", (int64)ENiagaraStatelessSpawnInfoType::Rate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraStatelessSpawnInfoType",
	"ENiagaraStatelessSpawnInfoType",
	Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType()
{
	if (!Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType.InnerSingleton;
}
// End Enum ENiagaraStatelessSpawnInfoType

// Begin ScriptStruct FNiagaraStatelessSpawnInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraStatelessSpawnInfo;
class UScriptStruct* FNiagaraStatelessSpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStatelessSpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraStatelessSpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraStatelessSpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStatelessSpawnInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraStatelessSpawnInfo>()
{
	return FNiagaraStatelessSpawnInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessSpawnInfo.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceId_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessSpawnInfo.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessSpawnInfo.h" },
		{ "ShowInStackItemHeader", "" },
		{ "StackItemHeaderAlignment", "Left" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTime_MetaData[] = {
		{ "Category", "Spawn" },
		{ "EditCondition", "Type == ENiagaraStatelessSpawnInfoType::Burst" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessSpawnInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "0" },
		{ "DisableBindingDistribution", "" },
		{ "EditCondition", "Type == ENiagaraStatelessSpawnInfoType::Burst" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessSpawnInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "0.0" },
		{ "DisableBindingDistribution", "" },
		{ "EditCondition", "Type == ENiagaraStatelessSpawnInfoType::Rate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessSpawnInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnProbabilityEnabled_MetaData[] = {
		{ "Category", "Spawn" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessSpawnInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnProbability_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bSpawnProbabilityEnabled" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessSpawnInfo.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceId;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rate;
	static void NewProp_bSpawnProbabilityEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnProbabilityEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnProbability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStatelessSpawnInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStatelessSpawnInfo, SourceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceId_MetaData), NewProp_SourceId_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStatelessSpawnInfo, Type), Z_Construct_UEnum_Niagara_ENiagaraStatelessSpawnInfoType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3916506442
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_SpawnTime = { "SpawnTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStatelessSpawnInfo, SpawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTime_MetaData), NewProp_SpawnTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStatelessSpawnInfo, Amount), Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) }; // 2392440345
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStatelessSpawnInfo, Rate), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rate_MetaData), NewProp_Rate_MetaData) }; // 1814083401
void Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_bSpawnProbabilityEnabled_SetBit(void* Obj)
{
	((FNiagaraStatelessSpawnInfo*)Obj)->bSpawnProbabilityEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_bSpawnProbabilityEnabled = { "bSpawnProbabilityEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraStatelessSpawnInfo), &Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_bSpawnProbabilityEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnProbabilityEnabled_MetaData), NewProp_bSpawnProbabilityEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_SpawnProbability = { "SpawnProbability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStatelessSpawnInfo, SpawnProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnProbability_MetaData), NewProp_SpawnProbability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_SourceId,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_SpawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_bSpawnProbabilityEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewProp_SpawnProbability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraStatelessSpawnInfo",
	Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::PropPointers),
	sizeof(FNiagaraStatelessSpawnInfo),
	alignof(FNiagaraStatelessSpawnInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStatelessSpawnInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraStatelessSpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStatelessSpawnInfo.InnerSingleton;
}
// End ScriptStruct FNiagaraStatelessSpawnInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraStatelessSpawnInfoType_StaticEnum, TEXT("ENiagaraStatelessSpawnInfoType"), &Z_Registration_Info_UEnum_ENiagaraStatelessSpawnInfoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3916506442U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraStatelessSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics::NewStructOps, TEXT("NiagaraStatelessSpawnInfo"), &Z_Registration_Info_UScriptStruct_NiagaraStatelessSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraStatelessSpawnInfo), 95420259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h_4075935222(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
